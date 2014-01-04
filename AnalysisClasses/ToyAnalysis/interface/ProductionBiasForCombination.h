/* 
 * File:   ProductionBiasForCombination.h
 * Author: nadjieh
 *
 * Created on July 11, 2013, 2:37 PM
 */

#ifndef PRODUCTIONBIASFORCOMBINATION_H
#define	PRODUCTIONBIASFORCOMBINATION_H

#include "ProductionACBiasChecker.h"
#include "../../Combination/interface/OneDCombinedSyst.h"
#include "../../Combination/interface/UsefullStructsForCombination.h"

class ProductionBiasForCombination : public ProductionACBiasChecker {
public:

    ProductionBiasForCombination(string nameMu, string nameE, string pfix, string pfixE, string sfix, string hist, string dir, string chan,
            int nSteps = 300, int bins = 10) :
    ProductionACBiasChecker(nameMu, pfix, sfix, hist, dir, chan, 300, bins), NameE(nameE),
    prefixE(pfixE) {
        signalMCE = 0;
        bkgE = 0;
    }

    virtual ~ProductionBiasForCombination() {

    }

    virtual void addFlatBkgs(double Lumi = 1) {
#ifdef EIGHTTEV
        ACVLVRSamplesInfo myESampleInfo;
#endif /* EIGHTTEV */
#ifdef SCALEDSEVENTEV
        ACVLVRSamplesInfoElectron myESampleInfo;
#endif /* SCALEDSEVENTEV */
        std::map<string, double>::iterator eSampleItr = myESampleInfo.Xsections.begin();
        for (; eSampleItr != myESampleInfo.Xsections.end(); eSampleItr++) {
            if (eSampleItr->first == "w" || eSampleItr->first == "dy") {
                TH1* hist = GetCosThetaPlot(eSampleItr->first, ProductionACBiasChecker::prefix,
                        ProductionACBiasChecker::suffix, ProductionACBiasChecker::histName,
                        ProductionACBiasChecker::dirName, 10);
                hist->Sumw2();
                DistributionProducerFromSelected* myDist =
                        new DistributionProducerFromSelected(hist, string(eSampleItr->first), Lumi);
                myDist->SetBasicValues(myESampleInfo.Xsections[eSampleItr->first],
                        myESampleInfo.N0[eSampleItr->first], hist->GetEntries());
                ProductionACBiasChecker::bkg_samples[eSampleItr->first] = myDist;
                hist->Scale(float(Lumi * eSampleItr->second) / float(myESampleInfo.N0[eSampleItr->first]));
                if (ProductionACBiasChecker::bkg == 0)
                    ProductionACBiasChecker::bkg =
                        ((TH1*) hist->Clone(string(ProductionACBiasChecker::Name + "_bkg_"
                        + string(hist->GetName())).c_str()));
                else {
                    ProductionACBiasChecker::bkg->Add(hist);
                }
                cout << "muon bkg is added " << eSampleItr->first << endl;

                TH1* histE = GetCosThetaPlot(eSampleItr->first, prefixE,
                        ProductionACBiasChecker::suffix, ProductionACBiasChecker::histName,
                        ProductionACBiasChecker::dirName, 10);
                histE->Sumw2();
                DistributionProducerFromSelected* myDistE =
                        new DistributionProducerFromSelected(histE, string(eSampleItr->first), Lumi);
                myDistE->SetBasicValues(myESampleInfo.Xsections[eSampleItr->first],
                        myESampleInfo.N0[eSampleItr->first], histE->GetEntries());
                bkg_samplesE[eSampleItr->first] = myDistE;
                histE->Scale(float(Lumi * eSampleItr->second) / float(myESampleInfo.N0[eSampleItr->first]));
                if (bkgE == 0)
                    bkgE = ((TH1*) histE->Clone(string(NameE + "_bkg_" + string(histE->GetName())).c_str()));
                else {
                    bkgE->Add(histE);
                }
                cout << "electron bkg is added " << eSampleItr->first << endl;
            }
        }
    }

    virtual void addSamples(double Lumi = 1) {
        this->addFlatBkgs(Lumi);
#ifdef EIGHTTEV
        ACVLVRSamplesInfo myESampleInfo;
        std::map<string, double>::iterator sampleItr = myESampleInfo.Xsections.begin();
        for (; sampleItr != myESampleInfo.Xsections.end(); sampleItr++) //{
#endif /* EIGHTTEV */
#ifdef SCALEDSEVENTEV
            ACVLVRSamplesInfoElectron myESampleInfo;
        ACVLVRSamplesInfoMuon myMuonSampleInfo;
        std::map<string, double>::iterator sampleItr = myESampleInfo.Xsections.begin();
        std::map<string, double>::iterator sampleItrM = myMuonSampleInfo.Xsections.begin();
        for (; sampleItr != myESampleInfo.Xsections.end(); sampleItr++, sampleItrM++) {
#endif /* SCALEDSEVENTEV */
            if (sampleItr->first == "dy" || sampleItr->first == "w")
                continue;
            if (isAC(sampleItr->first)) {
                TH1* hist = GetCosThetaPlot(sampleItr->first, ProductionACBiasChecker::prefix,
                        ProductionACBiasChecker::suffix, ProductionACBiasChecker::histName,
                        ProductionACBiasChecker::dirName, 10);
                hist->Sumw2();
                DistributionProducerFromSelected *myDist = new DistributionProducerFromSelected(hist, string(sampleItr->first), Lumi);

                TH1* histE = GetCosThetaPlot(sampleItr->first, prefixE,
                        ProductionACBiasChecker::suffix, ProductionACBiasChecker::histName,
                        ProductionACBiasChecker::dirName, 10);
                histE->Sumw2();
                DistributionProducerFromSelected *myDistE = new DistributionProducerFromSelected(histE, string(sampleItr->first), Lumi);
#ifdef EIGHTTEV
                myDist->SetBasicValues(myESampleInfo.Xsections[sampleItr->first],
                        myESampleInfo.N0[sampleItr->first], hist->GetEntries());
                ACsignal_samples[sampleItr->first] = myDist;
                hist->Scale(float(Lumi * sampleItr->second) / float(myESampleInfo.N0[sampleItr->first]));
#endif /* EIGHTTEV */
#ifdef SCALEDSEVENTEV
                myDistE->SetBasicValues(myESampleInfo.Xsections[sampleItr->first],
                        myESampleInfo.N0[sampleItr->first], histE->GetEntries());

                myDist->SetBasicValues(myMuonSampleInfo.Xsections[sampleItr->first],
                        myMuonSampleInfo.N0[sampleItr->first], hist->GetEntries());

                ProductionACBiasChecker::ACsignal_samples[sampleItr->first] = myDist;
                ACsignal_samplesE[sampleItr->first] = myDistE;

                histE->Scale(float(Lumi * sampleItr->second) / float(myESampleInfo.N0[sampleItr->first]));
                hist->Scale(float(Lumi * sampleItrM->second) / float(myMuonSampleInfo.N0[sampleItrM->first]));
#endif /* SCALEDSEVENTEV */
                inputAC[sampleItr->first] = (TH1*) hist->Clone((ProductionACBiasChecker::Name + string("_cosTheta_") + sampleItr->first).c_str());
                cout << "AC is added " << sampleItr->first << " " << inputAC.size() << endl;
                inputACE[sampleItr->first] = (TH1*) histE->Clone((NameE +
                        string("_cosTheta_") + sampleItr->first).c_str());
                cout << "ACE is added " << sampleItr->first << " " << inputACE.size() << endl;
            } else {//this is for non t-channel signal or standard t-channel signal for MC
                TH1* hist1D = GetCosThetaPlot(sampleItr->first, ProductionACBiasChecker::prefix,
                        ProductionACBiasChecker::suffix, ProductionACBiasChecker::histName,
                        ProductionACBiasChecker::dirName, 10);
                hist1D->Sumw2();
                TH2* hist2D = (TH2*) GetCosThetaPlot(sampleItr->first, ProductionACBiasChecker::prefix,
                        ProductionACBiasChecker::suffix, ProductionACBiasChecker::histName,
                        ProductionACBiasChecker::dirName, 10, true);
                hist1D->Sumw2();
                hist2D->Sumw2();
                TH1* tmph2 = hist2D->ProjectionY();
                hist1D->Add(tmph2);
                delete tmph2;
                delete hist2D;

                TH1* histE1D = GetCosThetaPlot(sampleItr->first, prefixE,
                        ProductionACBiasChecker::suffix, ProductionACBiasChecker::histName,
                        ProductionACBiasChecker::dirName, 10);
                histE1D->Sumw2();
                TH2* histE2D = (TH2*) GetCosThetaPlot(sampleItr->first, prefixE,
                        ProductionACBiasChecker::suffix, ProductionACBiasChecker::histName,
                        ProductionACBiasChecker::dirName, 10, true);
                histE1D->Sumw2();
                histE2D->Sumw2();
                TH1* tmphE2 = histE2D->ProjectionY();
                histE1D->Add(tmphE2);
                delete tmphE2;
                delete histE2D;

                DistributionProducerFromSelected* myDist = new DistributionProducerFromSelected(hist1D, string(sampleItr->first), Lumi);
                myDist->SetBasicValues(myESampleInfo.Xsections[sampleItr->first],
                        myESampleInfo.N0[sampleItr->first], hist1D->GetEntries());
                DistributionProducerFromSelected* myDistE = new DistributionProducerFromSelected(histE1D, string(sampleItr->first), Lumi);
                myDistE->SetBasicValues(myESampleInfo.Xsections[sampleItr->first],
                        myESampleInfo.N0[sampleItr->first], histE1D->GetEntries());
                ProductionACBiasChecker::signal_samples[sampleItr->first] = myDist;
                signal_samplesE[sampleItr->first] = myDistE;
                hist1D->Scale(float(Lumi * sampleItr->second) / float(myESampleInfo.N0[sampleItr->first]));
                histE1D->Scale(float(Lumi * sampleItr->second) / float(myESampleInfo.N0[sampleItr->first]));
                if (ProductionACBiasChecker::signalMC == 0)
                    ProductionACBiasChecker::signalMC = ((TH1*) hist1D->Clone(
                        string(ProductionACBiasChecker::Name +
                        "_signal_" + string(hist1D->GetName())).c_str()));
                else {
                    ProductionACBiasChecker::signalMC->Add(hist1D);
                }
                if (signalMCE == 0)
                    signalMCE = ((TH1*) histE1D->Clone(string(NameE + "_signal_" + string(histE1D->GetName())).c_str()));
                else {
                    signalMCE->Add(histE1D);
                }
            }
        }
    }

    virtual void doSanityCheckForMCs() {
        ProductionACBiasChecker::doSanityCheckForMCs();
        if (signalMCE == NULL) {
            if (inputACE.size() != 0 && inputACE["sm"] != NULL)
                signalMCE = new TH1D("tmpSignal", "tmpSignal", inputACE["sm"]->GetXaxis()->GetNbins()
                    , inputACE["sm"]->GetXaxis()->GetXmin(), inputACE["sm"]->GetXaxis()->GetXmax());
            else
                cout << "What a hell in signalMCE -------------------" << endl;
        }
        if (bkgE == NULL) {
            if (signalMCE != NULL)
                bkgE = new TH1D("myBKG", "myBKG", signalMCE->GetXaxis()->GetNbins()
                    , signalMCE->GetXaxis()->GetXmin(), signalMCE->GetXaxis()->GetXmax());
            else
                cout << "What a hell in bkg -------------------" << endl;
        }
    }

    virtual TH1 * GetAnomalousSignalPartialE(bool frac, double VL, double VR, int nPEX,
            double gL = 0, double gR = 0, double mt = mtop, double mW = MW) {
        std::map<string, DistributionProducerFromSelected*>::iterator sampleItr = ACsignal_samplesE.begin();
        TH1* ret = 0;
        //        Coefficients coeffs = VLVRCoeffs(VL, VR, 1, mt, mW);
        Coefficients coeffs = AnomWtbCoeffs(VL, VR, gL, gR, 1, mt, mW);
        TH1* tmp = 0;
        for (; sampleItr != ACsignal_samplesE.end(); sampleItr++) {
            if (frac)
                tmp = sampleItr->second->GeneratePartialSample(1.0 / 3.0, nPEX);
            else
                tmp = sampleItr->second->GeneratePartialSampleLumiEQ(nPEX);
            cout << "confirmation: " << tmp->GetEntries() << endl;
            if (sampleItr->first == string("sm"))
                tmp->Scale(coeffs.m);
            if (sampleItr->first == string("unphys"))
                tmp->Scale(coeffs.n);
            if (sampleItr->first == string("r"))
                tmp->Scale(coeffs.k);
            if (ret == 0)
                ret = (TH1*) tmp->Clone("TheFirst");
            else
                ret->Add(tmp);
            cout << "confirmation II: " << ret->GetEntries() << endl;
            delete tmp;
        }
        return ret;
    }

    virtual TH1 * GetBkgPartialE(int nPEX) {
        stringstream name__;
        name__ << NameE << "_CosTheta_bkg_" << nPEX;
        stringstream title__;
        title__ << NameE << "_noWtb cos(#theta) : PEX=" << nPEX;
        TH1* hSumBGPartial = 0;
        if (signalMCE != NULL)
            hSumBGPartial = new TH1D(name__.str().c_str(), title__.str().c_str(), signalMCE->GetXaxis()->GetNbins()
                , signalMCE->GetXaxis()->GetXmin(), signalMCE->GetXaxis()->GetXmax());
        else if (inputACE.size() != 0 && inputACE["sm"] != NULL)
            hSumBGPartial = new TH1D(name__.str().c_str(), title__.str().c_str(), inputACE["sm"]->GetXaxis()->GetNbins()
                , inputACE["sm"]->GetXaxis()->GetXmin(), inputACE["sm"]->GetXaxis()->GetXmax());
        else {
            cout << "What a hell in partial bkg -------------------" << endl;
            return hSumBGPartial;
        }
        hSumBGPartial->Sumw2();
        if (bkg_samplesE.size() == 0)
            return hSumBGPartial;
        else {
            std::map<string, DistributionProducerFromSelected*>::iterator bkgItr = bkg_samplesE.begin();
            cout << "-------------------- bkg_samplesE.size(): " << bkg_samplesE.size() << endl;
            for (; bkgItr != bkg_samplesE.end(); bkgItr++) {
                cout << "background " << bkgItr->first << endl;
                TH1* tmp = 0;
                if (string(bkgItr->first) == "w") {
                    tmp = bkgItr->second->GeneratePartialSample(1.0, nPEX);
                    // tmp->Scale(3.0);
                } else
                    tmp = bkgItr->second->GeneratePartialSample(1.0 / 3.0, nPEX);
                hSumBGPartial->Add(tmp);
                delete tmp;
            }
        }
        return hSumBGPartial;
    }

    virtual TH1 * GetOtherSignalPartialE(int nPEX) {
        stringstream name__;
        name__ << NameE << "_CosTheta_OtherSignal_" << nPEX;
        stringstream title__;
        title__ << NameE << "_OtherWtb cos(#theta) : PEX=" << nPEX;
        TH1* hSumSIGPartial = 0;
        if (signalMCE != NULL)
            hSumSIGPartial = new TH1D(name__.str().c_str(), title__.str().c_str(), signalMCE->GetXaxis()->GetNbins()
                , signalMCE->GetXaxis()->GetXmin(), signalMCE->GetXaxis()->GetXmax());
        else if (inputACE.size() != 0 && inputACE["sm"] != NULL)
            hSumSIGPartial = new TH1D(name__.str().c_str(), title__.str().c_str(), inputACE["sm"]->GetXaxis()->GetNbins()
                , inputACE["sm"]->GetXaxis()->GetXmin(), inputACE["sm"]->GetXaxis()->GetXmax());
        else {
            cout << "What a hell for Other signal E -------------------" << endl;
            return hSumSIGPartial;
        }

        hSumSIGPartial->Sumw2();
        std::map<string, DistributionProducerFromSelected*> ::iterator sigItr = signal_samplesE.begin();
        for (; sigItr != signal_samplesE.end(); sigItr++) {
            if (sigItr->first == string("t") || sigItr->first == string("tbar"))
                continue;
            cout << "signal to add!!!" << endl;
            TH1* tmp = sigItr->second->GeneratePartialSample(1.0 / 3.0, nPEX);
            hSumSIGPartial->Add(tmp);
            delete tmp;
        }
        return hSumSIGPartial;
    }

    virtual void doProdBiasCheck(int StartPEX, int LPEX) {
#ifdef EIGHTTEV
        ACVLVRSamplesInfo mySampleInfo;
#endif /* EIGHTTEV */
#ifdef SCALEDSEVENTEV
        ACVLVRSamplesInfoElectron mySampleInfo;
#endif /* SCALEDSEVENTEV */
        double VRValuesStep[nFSteps];
        double VLFixed = 1;
        double FLValuesData[nFSteps];
        double F0ValuesData[nFSteps];
        double FRValuesData[nFSteps];
        double ScaleCoeff = 1;
#ifdef LVRV
        ScaleCoeff = 0.548;
#endif /* LVRV */
#ifdef LVLT
        ScaleCoeff = 0.223;
#endif /* LVLT */

        for (int i = 0; i < nFSteps; i++) {
            VRValuesStep[i] = ScaleCoeff * (float(i) / (float) nFSteps);
            //            cout << "in first loop: " << VRValuesStep[i] << endl;
            Coefficients Fs;
#ifdef LVRV
            Fs = GetFs(VLFixed, VRValuesStep[i], 0, 0);
#endif /* LVRV */
#ifdef LVLT                
            Fs = GetFs(VLFixed, 0, VRValuesStep[i], 0);
#endif /* LVLT */
            FLValuesData[i] = Fs.m;
            FRValuesData[i] = Fs.k;
            F0ValuesData[i] = Fs.n;
        }
        for (int nPEX = 0; nPEX < nFSteps; nPEX++) {
            cout << "PEX: " << nPEX << endl;

            if (nPEX >= (StartPEX + LPEX)) {
                cout << " ... Skipped" << endl;
                continue;
            }

            if (nPEX < StartPEX) {
                for (unsigned int i = 0; i < mySampleInfo.Xsections.size(); i++)
                    SeedGenerator.Integer(10000);
                cout << " ... Skipped" << endl;
                continue;
            }
            cout << "nPEX: " << nPEX << "\tVAC: " << VRValuesStep[nPEX] << endl;
            double FposFixed = 1 - F0ValuesData[nPEX] - FLValuesData[nPEX];
            WtbWeightor.first.SetParameters(F0ValuesData[nPEX], FLValuesData[nPEX]);

            TH1* OtherSignal = ProductionACBiasChecker::GetOtherSignalPartial(nPEX);
            OtherSignal->Multiply(&WtbWeightor.first, 1);
            TH1* OtherSignalE = this->GetOtherSignalPartialE(nPEX);
            OtherSignalE->Multiply(&WtbWeightor.first, 1);
#ifdef LVRV
            OtherSignal->Add(ProductionACBiasChecker::GetAnomalousSignalPartial(true, VLFixed, VRValuesStep[nPEX], nPEX));
            OtherSignalE->Add(GetAnomalousSignalPartialE(true, VLFixed, VRValuesStep[nPEX], nPEX));
#endif /* LVRV */
#ifdef LVLT
            OtherSignal->Add(ProductionACBiasChecker::GetAnomalousSignalPartial(true, VLFixed, 0, nPEX, VRValuesStep[nPEX]));
            OtherSignalE->Add(GetAnomalousSignalPartialE(true, VLFixed, VRValuesStep[nPEX], nPEX));
#endif /* LVLT */
            TH1* Bkg = ProductionACBiasChecker::GetBkgPartial(nPEX);
            if (Bkg != NULL)
                OtherSignal->Add(Bkg);
            TH1* BkgE = this->GetBkgPartialE(nPEX);
            if (BkgE != NULL)
                OtherSignalE->Add(BkgE);

            InputForCombination1D inputMu;
            inputMu.data = OtherSignal;
            inputMu.signalID = ProductionACBiasChecker::signalMC;
            inputMu.nonRWs = ProductionACBiasChecker::bkg;
            inputMu.name = ProductionACBiasChecker::Name;
            InputForCombination1D inputE;
            inputE.data = OtherSignalE;
            inputE.signalID = signalMCE;
            inputE.nonRWs = bkgE;
            inputE.name = NameE;
            cout << "before likelihood: \n\tMuon:\n\tSignal: " << inputMu.signalID->Integral() <<
                    "\n\tBkg: " << inputMu.nonRWs->Integral() << "\n\tPD: " << inputMu.data->Integral() << endl;
            cout << "before likelihood: \n\tElectron:\n\tSignal: " << inputE.signalID->Integral() <<
                    "\n\tBkg: " << inputE.nonRWs->Integral() << "\n\tPD: " << inputE.data->Integral() << endl;
            stringstream name__;
            name__ << ProductionACBiasChecker::Name << "_" << NameE << "_PD_" << nPEX;
            std::pair<ROOT::Math::Functor, OneDCombinedSyst*> LLinPEXforFNegValueArray =
                    OneDCombinedSyst::getOneDCombinedSystForSyst(string("F_" + name__.str()), inputMu, inputE);
            cout << "after likelihood" << endl;
            double x[4] = {F0ValuesData[nPEX], FLValuesData[nPEX], 1., 1};
            double xerr[4] = {-1., -1., -1., -1};
            double correlation12 = -1000;
            GetMinimumOneDSystCombined(LLinPEXforFNegValueArray.first, x, xerr, correlation12, "", false);
            cout << x[0] << "\t" << x[1] << endl;
            hFinalFNeg->Fill(FLValuesData[nPEX], x[1]);
            hFinalF0->Fill(F0ValuesData[nPEX], x[0]);
            hFinalFPos->Fill(FposFixed, 1.0 - x[0] - x[1]);
            hFinalFNegVR->Fill(VRValuesStep[nPEX], x[1]);
            hFinalF0VR->Fill(VRValuesStep[nPEX], x[0]);
            hFinalFPosVR->Fill(VRValuesStep[nPEX], 1.0 - x[0] - x[1]);
            cout << "before deleting" << endl;
            delete OtherSignal;
            delete OtherSignalE;
            cout << "after deleting" << endl;
            delete LLinPEXforFNegValueArray.second;
            delete Bkg;
            delete BkgE;
        }
    }
private:
    string NameE, prefixE;
    std::map<string, DistributionProducerFromSelected*> ACsignal_samplesE;
    std::map<string, DistributionProducerFromSelected*> signal_samplesE;
    std::map<string, DistributionProducerFromSelected*> bkg_samplesE;
    std::map<string, TH1*> inputACE;
    TH1* signalMCE;
    TH1* bkgE;

};
#endif	/* PRODUCTIONBIASFORCOMBINATION_H */

