/* 
 * File:   TwoDLinearityChecker.h
 * Author: nadjieh
 *
 * Created on June 11, 2013, 7:55 PM
 */

#ifndef TWODLINEARITYCHECKER_H
#define	TWODLINEARITYCHECKER_H
#include "BaseLinearityCheker.h"
#include "TH2.h"
#include <string>
#include <sstream>
using namespace std;

class TwoDLinearityChecker : public BaseLinearityCheker {
public:

    TwoDLinearityChecker(string name, string pfix, string sfix, string hist, string dir, string chan,
            int bins = 10) : BaseLinearityCheker(name, pfix, sfix, hist, dir, chan, bins) {
    }

    virtual ~TwoDLinearityChecker() {
    }

    virtual void addSamples(double Lumi = 1) {
        BaseLinearityCheker::addFlatBkgs(Lumi);
        //filling the vectors
        ElectronSignalSampleInfo myESampleInfo;
        MuonSignalSampleInfo myMuSampleInfo;
        std::map<string, double>::iterator eSampleItr = myESampleInfo.Xsections.begin();
        std::map<string, double>::iterator mSampleItr = myMuSampleInfo.Xsections.begin();
        for (; eSampleItr != myESampleInfo.Xsections.end(); eSampleItr++, mSampleItr++) {
            if (eSampleItr->first == string("dy") || eSampleItr->first == string("w"))
                continue;
            TH2* histIID = 0;
            if (channel == "electron") {
                histIID = (TH2*) GetCosThetaPlot(eSampleItr->first, BaseLinearityCheker::prefix,
                        BaseLinearityCheker::suffix, BaseLinearityCheker::histName,
                        BaseLinearityCheker::dirName, 10, /*is2D*/true);
                histIID->Sumw2();
                DistributionProducerFromSelected* myDist2D = new DistributionProducerFromSelected(histIID
                        , string(eSampleItr->first), Lumi, true);
                myDist2D->SetBasicValues(myESampleInfo.Xsections[eSampleItr->first],
                        myESampleInfo.N0[eSampleItr->first], histIID->GetEntries());
                histIID->Scale(float(Lumi * eSampleItr->second) / float(myESampleInfo.N0[eSampleItr->first]));
                BaseLinearityCheker::signal_samples[eSampleItr->first] = myDist2D;
            }
            if (channel == "muon") {
                histIID = (TH2*) GetCosThetaPlot(mSampleItr->first, BaseLinearityCheker::prefix,
                        BaseLinearityCheker::suffix, BaseLinearityCheker::histName,
                        BaseLinearityCheker::dirName, 10, /*is2D*/true);
                histIID->Sumw2();
                DistributionProducerFromSelected* myDist2D = new DistributionProducerFromSelected(histIID
                        , string(mSampleItr->first), Lumi, true);
                myDist2D->SetBasicValues(myMuSampleInfo.Xsections[mSampleItr->first],
                        myMuSampleInfo.N0[mSampleItr->first], histIID->GetEntries());
                histIID->Scale(float(Lumi * mSampleItr->second) / float(myMuSampleInfo.N0[mSampleItr->first]));
                BaseLinearityCheker::signal_samples[mSampleItr->first] = myDist2D;
            }
            BaseLinearityCheker::signalIID.push_back((TH2*) histIID->Clone(std::string("MyTwoD_" + eSampleItr->first + "_" +
                    std::string(histIID->GetName())).c_str()));

        }
    }

    virtual void SetSigPartialCollection(int nPEX) {
        stringstream name2D__;
        stringstream title__;
        name2D__.str("");
        name2D__ << "CosTheta_signal_2D_" << nPEX;
        title__.str("");
        title__ << "Wtb cos(#theta) : PEX=" << nPEX;
        std::map<string, DistributionProducerFromSelected*> ::iterator sigItr = signal_samples.begin();
        BaseLinearityCheker::signalIIDPartial.clear();
        for (; sigItr != BaseLinearityCheker::signal_samples.end(); sigItr++) {
            TH2* tmp = ((TH2*) sigItr->second->GeneratePartialSample(1.0 / 3.0, nPEX));
            BaseLinearityCheker::signalIIDPartial.push_back((TH2*) tmp->Clone(std::string(sigItr->first + "_" + name2D__.str()).c_str()));
            delete tmp;
        }
    }

    virtual TH1* GetPullSignalPartial(int nPEXPull) {
        stringstream name__;
        stringstream title__;
        name__.str("");
        name__ << "CosTheta_signal_32D_" << nPEXPull;
        title__.str("");
        title__ << "Wtb cos(#theta) : PEXPull =" << nPEXPull;
        TH1* hData = new TH1D(name__.str().c_str(), title__.str().c_str(), BaseLinearityCheker::bkg->GetYaxis()->GetNbins()
                , BaseLinearityCheker::bkg->GetYaxis()->GetXmin(), BaseLinearityCheker::bkg->GetYaxis()->GetXmax());
        hData->Sumw2();
        std::map<string, DistributionProducerFromSelected*> ::iterator sigItr = BaseLinearityCheker::signal_samples.begin();

        for (; sigItr != BaseLinearityCheker::signal_samples.end(); sigItr++) {
            TH2* tmp1 = (TH2*) sigItr->second->GeneratePartialSampleLumiEQ(nPEXPull);
            TH1* tmp = tmp1->ProjectionY("tmp");
            hData->Add(tmp);
            delete tmp1;
            delete tmp;
        }
        return hData;
    }

    virtual TH1* GetPsuedoData(int nPEX, double iFNeg, double iF0, TH1* myBkg) {
        BaseLinearityCheker::WtbWeightor.first.SetParameters(iF0, iFNeg);
        stringstream name__;
        name__ << "PDforPEX_" << nPEX << "_" << iF0 << "_" << iFNeg;
        stringstream title__;
        title__ << "Psuedo Data for PEX_" << nPEX << "_" << iF0 << "_" << iFNeg;
        stringstream name2D__;
        TH1* SIGinPEX = new TH1D(name__.str().c_str(), title__.str().c_str(), BaseLinearityCheker::signalIID.at(0)->GetYaxis()->GetNbins()
                , BaseLinearityCheker::signalIID.at(0)->GetYaxis()->GetXmin(), BaseLinearityCheker::signalIID.at(0)->GetYaxis()->GetXmax());
        SIGinPEX->Sumw2();
        SIGinPEX->SetTitle(title__.str().c_str());
        for (int iBin = 0; iBin < SIGinPEX->GetXaxis()->GetNbins(); iBin++) {
            double iContent = 0;
            for (unsigned int iSample = 0; iSample < BaseLinearityCheker::signalIIDPartial.size(); iSample++) {
                name2D__.str("");
                name2D__ << BaseLinearityCheker::signalIIDPartial.at(iSample)->GetName() << "_" << iFNeg << "_" << iBin;
                TH1* sigProjectionX = BaseLinearityCheker::signalIIDPartial.at(iSample)->ProjectionX(name2D__.str().c_str(), iBin + 1, iBin + 1);
                sigProjectionX->SetTitle(title__.str().c_str());
                sigProjectionX->Multiply(&BaseLinearityCheker::WtbWeightor.first, 1);
                iContent += sigProjectionX->Integral();
                delete sigProjectionX;
            }
            SIGinPEX->SetBinContent(iBin + 1, iContent);
        }
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
            this->SetSigPartialCollection(nPEX);

            stringstream name__;
            for (int i = 0; i < nSteps; i++) {
                if (FNegValueSteps[i] > (1.0 - BaseLinearityCheker::FposFixed))
                    continue;
                double F0Value = 1.0 - BaseLinearityCheker::FposFixed - FNegValueSteps[i];
                name__.str("");
                name__ << "myLL_" << nPEX << "_" << FNegValueSteps[i] << "_" << F0Value;
                TH1* PD = this->GetPsuedoData(nPEX, FNegValueSteps[i], F0Value, myBkg);
                std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray = LikelihoodFunction::getLLFunctionGeneralized(
                        string("F_" + name__.str()), BaseLinearityCheker::bkg, PD, BaseLinearityCheker::signalIID);
                TF3 LLinPEXforFNegValue = LLinPEXforFNegValueArray.first;
                double x[3] = {-1., -1., -1.};
                double xerr[3] = {-1., -1., -1.};
                double correlation12 = -1000;
                GetMinimum(LLinPEXforFNegValue, x, xerr, correlation12, false);
                BaseLinearityCheker::hFinalF0->Fill(F0Value, x[0]);
                BaseLinearityCheker::hFinalFNeg->Fill(FNegValueSteps[i], x[1]);
                BaseLinearityCheker::hFinalFPos->Fill(nPEX, 1.0 - x[0] - x[1]);
                delete PD;
                delete LLinPEXforFNegValueArray.second;
            }
            delete myBkg;
            for (unsigned int iP2D = 0; iP2D < BaseLinearityCheker::signalIIDPartial.size(); iP2D++)
                delete BaseLinearityCheker::signalIIDPartial[iP2D];
            BaseLinearityCheker::signalIIDPartial.clear();
        }
    }

    virtual void doBiasCheck(int StartPEX, int LPEX, int nSteps = 300) {
        ElectronSignalSampleInfo myESampleInfo;
        double FNegValueSteps[nSteps];
        for (int i = 0; i < nSteps; i++) {
            FNegValueSteps[i] = float(i) / (float) nSteps;
        }
        std::vector<TH2*> tmp2DSignal;
        TH1* newBkg = (TH1*) BaseLinearityCheker::bkg->Clone("newBKG");
        for (unsigned int iTwoDSignal = 0; iTwoDSignal < BaseLinearityCheker::signalIID.size(); iTwoDSignal++) {
            if (!this->isDiLeptonTt(string(BaseLinearityCheker::signalIID[iTwoDSignal]->GetName())))
                tmp2DSignal.push_back(new TH2D(*((TH2D*) signalIID.at(iTwoDSignal))));
            else {
                stringstream esm;
                esm << "myNewBkgToAdd_" << iTwoDSignal;
                newBkg->Add((TH1*) (BaseLinearityCheker::signalIID[iTwoDSignal]->ProjectionY(esm.str().c_str())));
            }
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
            this->SetSigPartialCollection(nPEX);

            stringstream name__;
            for (int i = 0; i < nSteps; i++) {
                if (FNegValueSteps[i] > (1.0 - BaseLinearityCheker::FposFixed))
                    continue;
                double F0Value = 1.0 - BaseLinearityCheker::FposFixed - FNegValueSteps[i];
                name__.str("");
                name__ << "myLL_" << nPEX << "_" << FNegValueSteps[i] << "_" << F0Value;
                TH1* PD = this->GetPsuedoData(nPEX, FNegValueSteps[i], F0Value, myBkg);
                std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray = LikelihoodFunction::getLLFunctionGeneralized(
                        string("F_" + name__.str()), newBkg, PD, tmp2DSignal);
                TF3 LLinPEXforFNegValue = LLinPEXforFNegValueArray.first;
                double x[3] = {-1., -1., -1.};
                double xerr[3] = {-1., -1., -1.};
                double correlation12 = -1000;
                GetMinimum(LLinPEXforFNegValue, x, xerr, correlation12, false);
                BaseLinearityCheker::hFinalF0->Fill(F0Value, x[0]);
                BaseLinearityCheker::hFinalFNeg->Fill(FNegValueSteps[i], x[1]);
                BaseLinearityCheker::hFinalFPos->Fill(nPEX, 1.0 - x[0] - x[1]);
                delete PD;
                delete LLinPEXforFNegValueArray.second;
            }
            delete myBkg;
            for (unsigned int iP2D = 0; iP2D < BaseLinearityCheker::signalIIDPartial.size(); iP2D++)
                delete BaseLinearityCheker::signalIIDPartial[iP2D];
            BaseLinearityCheker::signalIIDPartial.clear();
        }
        delete newBkg;
        for (unsigned int iTmp2D = 0; iTmp2D < tmp2DSignal.size(); iTmp2D++)
            delete tmp2DSignal[iTmp2D];
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
            name__ << "CosTheta_Pull_" << nPEXPull;
            stringstream title__;
            title__ << "cos(#theta) : PEXPull=" << nPEXPull;
            TH1* hData = this->GetPullBkgPartial(nPEXPull);
            hData->Add(this->GetPullSignalPartial(nPEXPull));
            std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray = LikelihoodFunction::getLLFunctionGeneralized(
                    string("F_" + name__.str()), BaseLinearityCheker::bkg, hData, BaseLinearityCheker::signalIID);
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

            hPullFResp->Fill((double) resfresp0 / (double) errfrespo);
            hResFResp->Fill(resfresp0);

            double errfneg = xerr[1];
            double errf0 = xerr[0];
            double errfpos = sqrt(errf0 * errf0 + errfneg * errfneg + (2 * correlation12));

            double resneg = fneg - (FL);
            double respos = fpos - FposFixed;
            double resf0 = f0 - (F0);

            hPullFNeg->Fill((double) resneg / (double) errfneg);
            hPullF0->Fill((double) resf0 / (double) errf0);
            hPullFPos->Fill((double) respos / (double) errfpos);

            hResFPos->Fill(respos);
            hResFNeg->Fill(resneg);
            hResF0->Fill(resf0);

            delete hData;
            delete LLinPEXforFNegValueArray.second;
        }
    }

    bool isDiLeptonTt(string name) {
        if (name.find("ttdiL") < name.size() && name.find("ttdiL") >= 0)
            return true;
        if (name.find("ttLpL") < name.size() && name.find("ttLpL") >= 0)
            return true;
        if (name.find("ttLtau") < name.size() && name.find("ttLtau") >= 0)
            return true;
        return false;

    }
};


#endif	/* TWODLINEARITYCHECKER_H */

