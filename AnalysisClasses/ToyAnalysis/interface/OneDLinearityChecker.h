/* 
 * File:   OneDLinearityChecker.h
 * Author: nadjieh
 *
 * Created on June 12, 2013, 11:56 AM
 */

#ifndef ONEDLINEARITYCHECKER_H
#define	ONEDLINEARITYCHECKER_H
#include "BaseLinearityCheker.h"

class OneDLinearityChecker : public BaseLinearityCheker {
public:

    OneDLinearityChecker(string Name, string pfix, string sfix, string hist, string dir, string chan,
            int bins = 10) : BaseLinearityCheker(Name, pfix, sfix, hist, dir, chan, bins) {
        signalMC = 0;
    }

    virtual ~OneDLinearityChecker() {
    }

    virtual void addFlatBkgs(double Lumi = 1) {
        ElectronSignalSampleInfo myESampleInfo;
        std::map<string, double>::iterator eSampleItr = myESampleInfo.Xsections.begin();
        for (; eSampleItr != myESampleInfo.Xsections.end(); eSampleItr++) {
            if (eSampleItr->first == "w" || eSampleItr->first == "dy") {
                TH1* hist = GetCosThetaPlot(eSampleItr->first, BaseLinearityCheker::prefix,
                        BaseLinearityCheker::suffix, BaseLinearityCheker::histName, BaseLinearityCheker::dirName, 10);
                hist->Sumw2();
                DistributionProducerFromSelected* myDist =
                        new DistributionProducerFromSelected(hist, string(eSampleItr->first), Lumi);
                myDist->SetBasicValues(myESampleInfo.Xsections[eSampleItr->first],
                        myESampleInfo.N0[eSampleItr->first], hist->GetEntries());
                BaseLinearityCheker::bkg_samples[eSampleItr->first] = myDist;
                hist->Scale(float(Lumi * eSampleItr->second) / float(myESampleInfo.N0[eSampleItr->first]));
                if (BaseLinearityCheker::bkg == 0)
                    BaseLinearityCheker::bkg = ((TH1*) hist->Clone(string(Name + "_bkg_" + string(hist->GetName())).c_str()));
                else {
                    BaseLinearityCheker::bkg->Add(hist);
                }
                cout << "bkg is added " << eSampleItr->first << endl;
            }
        }
    }

    virtual void addSamples(double Lumi = 1) {
        this->addFlatBkgs(Lumi);
        ElectronSignalSampleInfo myESampleInfo;
        MuonSignalSampleInfo myMuSampleInfo;
        std::map<string, double>::iterator eSampleItr = myESampleInfo.Xsections.begin();
        std::map<string, double>::iterator mSampleItr = myMuSampleInfo.Xsections.begin();
        for (; eSampleItr != myESampleInfo.Xsections.end(); eSampleItr++, mSampleItr++) {
            if (eSampleItr->first == string("dy") || eSampleItr->first == string("w"))
                continue;
            TH1* hist1D = 0;
            if (channel == "electron") {
                hist1D = GetCosThetaPlot(eSampleItr->first, BaseLinearityCheker::prefix, BaseLinearityCheker::suffix,
                        BaseLinearityCheker::histName, BaseLinearityCheker::dirName, 10);
                hist1D->Sumw2();
                TH2* hist2D = (TH2*) GetCosThetaPlot(eSampleItr->first, BaseLinearityCheker::prefix,
                        BaseLinearityCheker::suffix, BaseLinearityCheker::histName, BaseLinearityCheker::dirName, 10, true);
                hist1D->Sumw2();
                hist2D->Sumw2();
                TH1* tmph2 = hist2D->ProjectionY();
                hist1D->Add(tmph2);
                delete tmph2;
                delete hist2D;
                DistributionProducerFromSelected* myDist = new DistributionProducerFromSelected(hist1D, string(eSampleItr->first), Lumi);
                myDist->SetBasicValues(myESampleInfo.Xsections[eSampleItr->first],
                        myESampleInfo.N0[eSampleItr->first], hist1D->GetEntries());
                BaseLinearityCheker::signal_samples[eSampleItr->first] = myDist;
                hist1D->Scale(float(Lumi * eSampleItr->second) / float(myESampleInfo.N0[eSampleItr->first]));
            }
            if (channel == "muon") {
                hist1D = GetCosThetaPlot(mSampleItr->first, BaseLinearityCheker::prefix, BaseLinearityCheker::suffix,
                        BaseLinearityCheker::histName, BaseLinearityCheker::dirName, 10);
                hist1D->Sumw2();
                TH2* hist2D = (TH2*) GetCosThetaPlot(mSampleItr->first, BaseLinearityCheker::prefix,
                        BaseLinearityCheker::suffix, BaseLinearityCheker::histName, BaseLinearityCheker::dirName, 10, true);
                hist1D->Sumw2();
                hist2D->Sumw2();
                TH1* tmph2 = hist2D->ProjectionY();
                hist1D->Add(tmph2);
                delete tmph2;
                delete hist2D;
                DistributionProducerFromSelected* myDist = new DistributionProducerFromSelected(hist1D, string(mSampleItr->first), Lumi);
                myDist->SetBasicValues(myMuSampleInfo.Xsections[mSampleItr->first],
                        myMuSampleInfo.N0[mSampleItr->first], hist1D->GetEntries());
                BaseLinearityCheker::signal_samples[mSampleItr->first] = myDist;
                hist1D->Scale(float(Lumi * mSampleItr->second) / float(myMuSampleInfo.N0[mSampleItr->first]));
            }
            if (signalMC == 0)
                signalMC = ((TH1*) hist1D->Clone(string(Name + "_signal_" + string(hist1D->GetName())).c_str()));
            else {
                signalMC->Add(hist1D);
            }
        }
    }

    virtual void SetSignalPartial(int nPEX) {
        stringstream name__;
        name__ << Name << "_CosTheta_signal_" << nPEX;
        stringstream title__;
        title__ << "Wtb cos(#theta) : PEX=" << nPEX;
        signalPartial = new TH1D(name__.str().c_str(), title__.str().c_str(), signalMC->GetXaxis()->GetNbins()
                , signalMC->GetXaxis()->GetXmin(), signalMC->GetXaxis()->GetXmax());
        signalPartial->Sumw2();
        std::map<string, DistributionProducerFromSelected*> ::iterator sigItr = BaseLinearityCheker::signal_samples.begin();
        for (; sigItr != BaseLinearityCheker::signal_samples.end(); sigItr++) {
            TH1* tmp = sigItr->second->GeneratePartialSample(1.0 / 3.0, nPEX);
            signalPartial->Add(tmp);
            delete tmp;
        }
    }

    virtual TH1* GetPullSignalPartial(int nPEXPull) {
        stringstream name__;
        stringstream title__;
        name__.str("");
        name__ << Name << "_CosTheta_signal_32D_" << nPEXPull;
        title__.str("");
        title__ << "Wtb cos(#theta) : PEXPull =" << nPEXPull;
        TH1* hData = new TH1D(name__.str().c_str(), title__.str().c_str(), BaseLinearityCheker::bkg->GetYaxis()->GetNbins()
                , BaseLinearityCheker::bkg->GetYaxis()->GetXmin(), BaseLinearityCheker::bkg->GetYaxis()->GetXmax());
        hData->Sumw2();
        std::map<string, DistributionProducerFromSelected*> ::iterator sigItr = BaseLinearityCheker::signal_samples.begin();
        for (; sigItr != BaseLinearityCheker::signal_samples.end(); sigItr++) {
            TH1* tmp1 = sigItr->second->GeneratePartialSampleLumiEQ(nPEXPull);
            hData->Add(tmp1);
            delete tmp1;
        }
        return hData;
    }

    virtual TH1* GetPsuedoData(int nPEX, double iFNeg, double iF0, TH1* myBkg) {
        WtbWeightor.first.SetParameters(iF0, iFNeg);
        stringstream name__;
        name__ << Name << "_PDforPEX_" << nPEX << "_" << iF0 << "_" << iFNeg;
        stringstream title__;
        title__ << "Psuedo Data for PEX_" << nPEX << "_" << iF0 << "_" << iFNeg;

        TH1* SIGinPEX = ((TH1*) signalPartial->Clone(name__.str().c_str()));
        SIGinPEX->SetTitle(title__.str().c_str());
        SIGinPEX->Multiply(&WtbWeightor.first, 1);
        SIGinPEX->Add(myBkg);
        return SIGinPEX;
    }

    virtual void doLinearityCheck(int StartPEX, int LPEX, int nSteps = 300) {
        ElectronSignalSampleInfo myESampleInfo;
        double FNegValueSteps[nSteps];
        for (int i = 0; i < nSteps; i++) {
            FNegValueSteps[i] = float(i) / (float) nSteps;
        }
        for (int nPEX = 0; nPEX < 300; nPEX++) {
            cout << "PEX: " << nPEX << endl;
            if (nPEX >= (StartPEX + LPEX)) {
                cout << " ... Skipped" << endl;
                continue;
            }

            if (nPEX < StartPEX) {
                for (unsigned int i = 0; i < myESampleInfo.Xsections.size(); i++)
                    SeedGenerator.Integer(10000);
                cout << " ... Skipped" << endl;
                continue;
            }
            TH1* myBkg = BaseLinearityCheker::GetBkgPartial(nPEX);
            this->SetSignalPartial(nPEX);

            stringstream name__;
            for (int i = 0; i < nSteps; i++) {
                if (FNegValueSteps[i] > (1.0 - FposFixed))
                    continue;
                double F0Value = 1.0 - FposFixed - FNegValueSteps[i];
                name__.str("");
                name__ << Name << "_myLL_" << nPEX << "_" << FNegValueSteps[i] << "_" << F0Value;
                TH1* PD = this->GetPsuedoData(nPEX, FNegValueSteps[i], F0Value, myBkg);

                std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray = LikelihoodFunction::getLLFunction(
                        string("F_" + name__.str()), BaseLinearityCheker::bkg, PD, signalMC);
                TF3 LLinPEXforFNegValue = LLinPEXforFNegValueArray.first;

                double x[3] = {-1., -1., -1.};
                double xerr[3] = {-1., -1., -1.};
                double correlation12 = -1000;
                GetMinimum(LLinPEXforFNegValue, x, xerr, correlation12, false);
                BaseLinearityCheker::hFinalFNeg->Fill(FNegValueSteps[i], x[1]);
                BaseLinearityCheker::hFinalF0->Fill(F0Value, x[0]);
                BaseLinearityCheker::hFinalFPos->Fill(nPEX, 1.0 - x[0] - x[1]);
                delete PD;
                delete LLinPEXforFNegValueArray.second;
            }
            delete myBkg;
            delete signalPartial;
        }
    }

    virtual void doPullAndResidual(int StartPEXPull, int LPEXPull) {
        ElectronSignalSampleInfo mySampleInfo;
        for (int nPEXPull = 0; nPEXPull < 1000; nPEXPull++) {
            if (nPEXPull >= (StartPEXPull + LPEXPull)) {
                cout << " ... Skipped pull" << endl;
                continue;
            }

            if (nPEXPull < StartPEXPull) {
                for (unsigned int i = 0; i < mySampleInfo.Xsections.size(); i++)
                    SeedGeneratorLumiEQ.Integer(10000);
                cout << " ... Skipped pull" << endl;
                continue;
            }

            cout << "PEXPull:" << nPEXPull << endl;

            stringstream name__;
            name__ << Name << "_CosTheta_Pull_" << nPEXPull;
            stringstream title__;
            title__ << "cos(#theta) : PEXPull=" << nPEXPull;
            TH1* hData = BaseLinearityCheker::GetPullBkgPartial(nPEXPull);
            hData->Add(this->GetPullSignalPartial(nPEXPull));
            std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray = LikelihoodFunction::getLLFunction(
                    string("F_" + name__.str()), BaseLinearityCheker::bkg, hData, signalMC);
            TF3 LLinPEXforFNegValue = LLinPEXforFNegValueArray.first;
            double x[3] = {-1., -1., -1.};
            double xerr[3] = {-1., -1., -1.};
            double correlation12 = -1000;
            GetMinimum(LLinPEXforFNegValue, x, xerr, correlation12, false);
            double fneg = x[1];
            double f0 = x[0];
            double fpos = 1.0 - x[1] - x[0];

            double fresponse = x[2];
            double errfrespo = xerr[2];
            double resfresp0 = fresponse - 1.0;

            BaseLinearityCheker::hPullFResp->Fill((double) resfresp0 / (double) errfrespo);
            BaseLinearityCheker::hResFResp->Fill(resfresp0);

            double errfneg = xerr[1];
            double errf0 = xerr[0];
            double errfpos = sqrt(errf0 * errf0 + errfneg * errfneg + (2 * correlation12));

            double resneg = fneg - (FL);
            double respos = fpos - FposFixed;
            double resf0 = f0 - (F0);

            BaseLinearityCheker::hPullFNeg->Fill((double) resneg / (double) errfneg);
            BaseLinearityCheker::hPullF0->Fill((double) resf0 / (double) errf0);
            BaseLinearityCheker::hPullFPos->Fill((double) respos / (double) errfpos);

            BaseLinearityCheker::hResFPos->Fill(respos);
            BaseLinearityCheker::hResFNeg->Fill(resneg);
            BaseLinearityCheker::hResF0->Fill(resf0);

            delete hData;
            delete LLinPEXforFNegValueArray.second;
        }
    }

    TH1* GetSignalMC()const {
        return signalMC;
    }

    TH1* GetSignalPartial()const {
        return signalPartial;
    }
protected:
    TH1* signalMC;
    TH1* signalPartial;
};

#endif	/* ONEDLINEARITYCHECKER_H */

