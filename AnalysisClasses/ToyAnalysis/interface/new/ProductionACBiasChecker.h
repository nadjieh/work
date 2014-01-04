/* 
 * File:   ProductionACBiasChecker.h
 * Author: nadjieh
 *
 * Created on June 13, 2013, 12:33 PM
 * VL-VR Scenario Only
 */

#ifndef PRODUCTIONACBIASCHECKER_H
#define	PRODUCTIONACBIASCHECKER_H
#include "ToyFitter.h"
#include "TF1.h"
#include "TF3.h"
#include "TH1.h"
#include "TH2.h"
#include "TMath.h"
#include "TCanvas.h"
#include "TRandom1.h"
#include "TRandom.h"
#include "TROOT.h"
#include "TFile.h"
#include "TVirtualFitter.h"
#include <string>
#include <iostream>
#include <sstream>
#include <map>
#include <vector>
#include "FitValidator.h"
#include "ValidatorExecuter.h"
//Constants:
using namespace std;

class ACVLVRSamplesInfo {// for muon channel only
public:

    ACVLVRSamplesInfo() {
        Xsections["t"] = 9.4206722625; //0
        Xsections["sm"] = 9.4206722625; //0
        Xsections["unphys"] = 9.4206722625; //1
        Xsections["r"] = 9.4206722625; //2
        Xsections["w"] = 31314;
        Xsections["dy"] = 3048;
        Xsections["tW"] = (0.58 * 2);
        Xsections["tWbar"] = (0.58 * 2);
        Xsections["ttdiL"] = 2.04;
        Xsections["ttLpL"] = 4.07;
        Xsections["ttLtau"] = 4.07;
        Xsections["ttLhad"] = 24.4;
        Xsections["ttrest"] = 130.42;
        Xsections["s"] = 3.19;
        Xsections["sbar"] = 1.44;
        N0["t"] = 305295;
        N0["sm"] = 305295; //0
        N0["unphys"] = 375847; //1
        N0["r"] = 277183; //2
        N0["w"] = 75748221;
        N0["dy"] = 30459503;
        N0["tW"] = (0.58 * 2);
        N0["tWbar"] = (0.58 * 2);
        N0["ttdiL"] = 2.04;
        N0["ttLpL"] = 4.07;
        N0["ttLtau"] = 4.07;
        N0["ttLhad"] = 24.4;
        N0["ttrest"] = 130.42;
        N0["s"] = 3.19;
        N0["sbar"] = 1.44;
    }

    ~ACVLVRSamplesInfo() {
    };
    std::map<string, double> Xsections; //pb
    std::map<string, double> N0;
};

class ProductionACBiasChecker {
public:

    ProductionACBiasChecker(string NAME, string pfix, string sfix, string hist, string dir, string chan,
            int nSteps = 300, int bins = 10) : Name(NAME), prefix(pfix), suffix(sfix), histName(hist),
    dirName(dir), channel(chan), nFSteps(nSteps), nBins(bins) {
        hFinalFNeg = new TH2D("hFinalFNeg", "Linearirty Check for F_{-};F_{-} input;F_{-} output", nFSteps, 0., 1., nFSteps, 0., 1.);
        hFinalF0 = new TH2D("hFinalFZero", "Linearirty Check for F_{0};V_{R} input;F_{0} output", nFSteps, 0., 1., nFSteps, 0., 1.);
        hFinalFPos = new TH2D("hFinalFPos", "Linearirty Check for F_{R};F_{R} input;F_{R} output", nFSteps, 0., 1., nFSteps, 0., 1.);

        hFinalFNegVR = new TH2D("hFinalFNegVR", "V_{R} input;F_{L} output", nFSteps, 0., 1., nFSteps, 0., 1.);
        hFinalF0VR = new TH2D("hFinalFZeroVR", "V_{R} input;F_{0} output", nFSteps, 0., 1., nFSteps, 0., 1.);
        hFinalFPosVR = new TH2D("hFinalFPosVR", "V_{R} input;F_{R} output", nFSteps, 0., 1., nFSteps, 0., 1.);

        signalMC = 0;
        bkg = 0;
        WtbWeightor = WeightFunctionCreator::getWeightFunction(string(Name + "WtbWeightor").c_str());
    }

    virtual ~ProductionACBiasChecker() {
    }

    virtual void addFlatBkgs(double Lumi = 1) {
        ACVLVRSamplesInfo myESampleInfo;
        std::map<string, double>::iterator eSampleItr = myESampleInfo.Xsections.begin();
        for (; eSampleItr != myESampleInfo.Xsections.end(); eSampleItr++) {
            if (eSampleItr->first == "w" || eSampleItr->first == "dy") {
                TH1* hist = GetCosThetaPlot(eSampleItr->first, prefix,
                        suffix, histName, dirName, 10);
                hist->Sumw2();
                DistributionProducerFromSelected* myDist =
                        new DistributionProducerFromSelected(hist, string(eSampleItr->first), Lumi);
                myDist->SetBasicValues(myESampleInfo.Xsections[eSampleItr->first],
                        myESampleInfo.N0[eSampleItr->first], hist->GetEntries());
                bkg_samples[eSampleItr->first] = myDist;
                hist->Scale(float(Lumi * eSampleItr->second) / float(myESampleInfo.N0[eSampleItr->first]));
                if (bkg == 0)
                    bkg = ((TH1*) hist->Clone(string(Name + "_bkg_" + string(hist->GetName())).c_str()));
                else {
                    bkg->Add(hist);
                }
                cout << "bkg is added " << eSampleItr->first << endl;
            }
        }
    }

    virtual void addSamples(double Lumi = 1) {
        this->addFlatBkgs(Lumi);
        ACVLVRSamplesInfo mySampleInfo;
        std::map<string, double>::iterator sampleItr = mySampleInfo.Xsections.begin();
        for (; sampleItr != mySampleInfo.Xsections.end(); sampleItr++) {
            if (isAC(sampleItr->first)) {
                TH1* hist = GetCosThetaPlot(sampleItr->first, prefix, suffix, histName, dirName, 10);
                hist->Sumw2();
                DistributionProducerFromSelected *myDist = new DistributionProducerFromSelected(hist, string(sampleItr->first), Lumi);
                myDist->SetBasicValues(mySampleInfo.Xsections[sampleItr->first],
                        mySampleInfo.N0[sampleItr->first], hist->GetEntries());
                ACsignal_samples[sampleItr->first] = myDist;
                hist->Scale(float(Lumi * sampleItr->second) / float(mySampleInfo.N0[sampleItr->first]));
                inputAC[sampleItr->first] = (TH1*) hist->Clone((Name + string("_cosTheta_") + sampleItr->first).c_str());
                cout << "AC is added " << sampleItr->first << " " << inputAC.size() << endl;
            } else {//this is for non t-channel signal or standard t-channel signal for MC
                TH1* hist1D = GetCosThetaPlot(sampleItr->first, prefix, suffix, histName, dirName, 10);
                hist1D->Sumw2();
                TH2* hist2D = (TH2*) GetCosThetaPlot(sampleItr->first, prefix, suffix, histName, dirName, 10, true);
                hist1D->Sumw2();
                hist2D->Sumw2();
                TH1* tmph2 = hist2D->ProjectionY();
                hist1D->Add(tmph2);
                delete tmph2;
                delete hist2D;
                DistributionProducerFromSelected* myDist = new DistributionProducerFromSelected(hist1D, string(sampleItr->first), Lumi);
                myDist->SetBasicValues(mySampleInfo.Xsections[sampleItr->first],
                        mySampleInfo.N0[sampleItr->first], hist1D->GetEntries());
                signal_samples[sampleItr->first] = myDist;
                hist1D->Scale(float(Lumi * sampleItr->second) / float(mySampleInfo.N0[sampleItr->first]));
                if (signalMC == 0)
                    signalMC = ((TH1*) hist1D->Clone(string(Name + "_signal_" + string(hist1D->GetName())).c_str()));
                else {
                    signalMC->Add(hist1D);
                }
            }
        }
    }

    virtual void doSanityCheckForMCs() {
        if (signalMC == NULL) {
            if (inputAC.size() != 0 && inputAC["sm"] != NULL)
                signalMC = new TH1D("tmpSignal", "tmpSignal", inputAC["sm"]->GetXaxis()->GetNbins()
                    , inputAC["sm"]->GetXaxis()->GetXmin(), inputAC["sm"]->GetXaxis()->GetXmax());
            else
                cout << "What a hell in signalMC -------------------" << endl;
        }
        if (bkg == NULL) {
            if (signalMC != NULL)
                bkg = new TH1D("myBKG", "myBKG", signalMC->GetXaxis()->GetNbins()
                    , signalMC->GetXaxis()->GetXmin(), signalMC->GetXaxis()->GetXmax());
            else
                cout << "What a hell in bkg -------------------" << endl;
        }
    }

    virtual TH1* GetAnomalousSignalPartial(bool frac, double VL, double VR, int nPEX,
            double mt = mtop, double mW = MW) {
        std::map<string, DistributionProducerFromSelected*>::iterator sampleItr = ACsignal_samples.begin();
        TH1* ret = 0;
        Coefficients coeffs = VLVRCoeffs(VL, VR, 1, mt, mW);
        TH1* tmp = 0;
        for (; sampleItr != ACsignal_samples.end(); sampleItr++) {
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

    virtual TH1* GetBkgPartial(int nPEX) {
        stringstream name__;
        name__ << Name << "_CosTheta_bkg_" << nPEX;
        stringstream title__;
        title__ << Name << "_noWtb cos(#theta) : PEX=" << nPEX;
        TH1* hSumBGPartial = 0;
        if (signalMC != NULL)
            hSumBGPartial = new TH1D(name__.str().c_str(), title__.str().c_str(), signalMC->GetXaxis()->GetNbins()
                , signalMC->GetXaxis()->GetXmin(), signalMC->GetXaxis()->GetXmax());
        else if (inputAC.size() != 0 && inputAC["sm"] != NULL)
            hSumBGPartial = new TH1D(name__.str().c_str(), title__.str().c_str(), inputAC["sm"]->GetXaxis()->GetNbins()
                , inputAC["sm"]->GetXaxis()->GetXmin(), inputAC["sm"]->GetXaxis()->GetXmax());
        else {
            cout << "What a hell in partial bkg -------------------" << endl;
            return hSumBGPartial;
        }
        hSumBGPartial->Sumw2();
        if (bkg_samples.size() == 0)
            return hSumBGPartial;
        else {
            std::map<string, DistributionProducerFromSelected*>::iterator bkgItr = bkg_samples.begin();
            cout << "-------------------- bkg_samples.size(): " << bkg_samples.size() << endl;
            for (; bkgItr != bkg_samples.end(); bkgItr++) {
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

    virtual TH1* GetOtherSignalPartial(int nPEX) {
        stringstream name__;
        name__ << Name << "_CosTheta_OtherSignal_" << nPEX;
        stringstream title__;
        title__ << Name << "_OtherWtb cos(#theta) : PEX=" << nPEX;
        TH1* hSumSIGPartial = 0;
        if (signalMC != NULL)
            hSumSIGPartial = new TH1D(name__.str().c_str(), title__.str().c_str(), signalMC->GetXaxis()->GetNbins()
                , signalMC->GetXaxis()->GetXmin(), signalMC->GetXaxis()->GetXmax());
        else if (inputAC.size() != 0 && inputAC["sm"] != NULL)
            hSumSIGPartial = new TH1D(name__.str().c_str(), title__.str().c_str(), inputAC["sm"]->GetXaxis()->GetNbins()
                , inputAC["sm"]->GetXaxis()->GetXmin(), inputAC["sm"]->GetXaxis()->GetXmax());
        else {
            cout << "What a hell for Other signal -------------------" << endl;
            return hSumSIGPartial;
        }

        hSumSIGPartial->Sumw2();
        std::map<string, DistributionProducerFromSelected*> ::iterator sigItr = signal_samples.begin();
        for (; sigItr != signal_samples.end(); sigItr++) {
            if (sigItr->first == string("t") || sigItr->first == string("tbar"))
                continue;
            cout << "signal to add!!!" << endl;
            TH1* tmp = sigItr->second->GeneratePartialSample(1.0 / 3.0, nPEX);
            hSumSIGPartial->Add(tmp);
            delete tmp;
        }
        return hSumSIGPartial;
    }

    void doProdBiasCheck_IDontTrust(int StartPEX, int LPEX) {
        ACVLVRSamplesInfo mySampleInfo;
        double VRValuesStep[nFSteps];
        double VLFixed = 1;
        double FLValuesData[nFSteps];
        double F0ValuesData[nFSteps];
        double FRValuesData[nFSteps];
        for (int i = 0; i < nFSteps; i++) {
            VRValuesStep[i] = (float(i) / (float) nFSteps);
            Coefficients Fs = GetFs(VLFixed, VRValuesStep[i], 0, 0);
            FLValuesData[i] = Fs.m;
            FRValuesData[i] = Fs.k;
            F0ValuesData[i] = Fs.n;
        }
        double FNegValueSteps[nFSteps];
        for (int i = 0; i < nFSteps; i++) {
            FNegValueSteps[i] = float(i) / (float) nFSteps;
        }
        for (int nPEX = 0; nPEX < 300; nPEX++) {
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
            double FposFixed = 1 - F0ValuesData[nPEX] - FLValuesData[nPEX];
            TH1* ACsignal = this->GetAnomalousSignalPartial(true, VLFixed, VRValuesStep[nPEX], nPEX);
            TH1* Bkg = this->GetBkgPartial(nPEX);
            ACsignal->Add(this->GetOtherSignalPartial(nPEX));
            for (int i = 0; i < nFSteps; i++) {
                if (FNegValueSteps[i] > (1.0 - FposFixed))
                    continue;

                double F0Value = 1.0 - FposFixed - FNegValueSteps[i];
                WtbWeightor.first.SetParameters(F0Value, FNegValueSteps[i]);
                stringstream name__;
                name__ << Name << "_PD_" << nPEX << "_" << F0Value << "_" << FNegValueSteps[i];
                stringstream title__;
                title__ << Name << " Psuedo Data in" << nPEX << "_" << F0Value << "_" << FNegValueSteps[i];
                TH1* ACPsuedoData = (TH1*) ACsignal->Clone(name__.str().c_str());
                ACPsuedoData->Multiply(&WtbWeightor.first, 1);
                if (Bkg != NULL)
                    ACPsuedoData->Add(Bkg);
                std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray = LikelihoodFunction::getLLFunction(
                        string("F_" + name__.str()), bkg, ACPsuedoData, signalMC);
                TF3 LLinPEXforFNegValue = LLinPEXforFNegValueArray.first;
                cout << "after likelihood" << endl;
                double x[3] = {-1., -1., -1.};
                double xerr[3] = {-1., -1., -1.};
                double correlation12 = -1000;
                GetMinimum(LLinPEXforFNegValue, x, xerr, correlation12, false);
                hFinalFNeg->Fill(FNegValueSteps[i], x[1]);
                hFinalF0->Fill(F0Value, x[0]);
                hFinalFPos->Fill(FposFixed, 1.0 - x[0] - x[1]);
                hFinalFNegVR->Fill(VRValuesStep[nPEX], x[1]);
                hFinalF0VR->Fill(VRValuesStep[nPEX], x[0]);
                hFinalFPosVR->Fill(VRValuesStep[nPEX], 1.0 - x[0] - x[1]);
                cout << "before deleting" << endl;
                delete ACPsuedoData;
                cout << "after deleting" << endl;
                delete LLinPEXforFNegValueArray.second;
            }
            delete ACsignal;
            delete Bkg;
        }
    }

    void doProdBiasCheck(int StartPEX, int LPEX) {
        ACVLVRSamplesInfo mySampleInfo;
        double VRValuesStep[nFSteps];
        double VLFixed = 1;
        double FLValuesData[nFSteps];
        double F0ValuesData[nFSteps];
        double FRValuesData[nFSteps];
        for (int i = 0; i < nFSteps; i++) {
            VRValuesStep[i] = (float(i) / (float) nFSteps);
            Coefficients Fs = GetFs(VLFixed, VRValuesStep[i], 0, 0);
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

            double FposFixed = 1 - F0ValuesData[nPEX] - FLValuesData[nPEX];
            WtbWeightor.first.SetParameters(F0ValuesData[nPEX], FLValuesData[nPEX]);

            TH1* OtherSignal = this->GetOtherSignalPartial(nPEX);
            OtherSignal->Multiply(&WtbWeightor.first, 1);
            OtherSignal->Add(this->GetAnomalousSignalPartial(true, VLFixed, VRValuesStep[nPEX], nPEX));
            TH1* Bkg = this->GetBkgPartial(nPEX);
            if (Bkg != NULL)
                OtherSignal->Add(Bkg);

            stringstream name__;
            name__ << Name << "_PD_" << nPEX;

            std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray = LikelihoodFunction::getLLFunction(
                    string("F_" + name__.str()), bkg, OtherSignal, signalMC);
            TF3 LLinPEXforFNegValue = LLinPEXforFNegValueArray.first;
            cout << "after likelihood" << endl;
            double x[3] = {-1., -1., -1.};
            double xerr[3] = {-1., -1., -1.};
            double correlation12 = -1000;
            GetMinimum(LLinPEXforFNegValue, x, xerr, correlation12, false);
            hFinalFNeg->Fill(FLValuesData[nPEX], x[1]);
            hFinalF0->Fill(F0ValuesData[nPEX], x[0]);
            hFinalFPos->Fill(FposFixed, 1.0 - x[0] - x[1]);
            hFinalFNegVR->Fill(VRValuesStep[nPEX], x[1]);
            hFinalF0VR->Fill(VRValuesStep[nPEX], x[0]);
            hFinalFPosVR->Fill(VRValuesStep[nPEX], 1.0 - x[0] - x[1]);
            cout << "before deleting" << endl;
            delete OtherSignal;
            cout << "after deleting" << endl;
            delete LLinPEXforFNegValueArray.second;
            delete Bkg;
        }
    }

    virtual void WriteAll(string outDir, int StartPEX, int LPEX, int StartPEXPull, int LPEXPull) {
        stringstream outName;
        outName << outDir << Name << "_" << channel << "_Linearity_start-" << StartPEX << "-length-"
                << LPEX << "_Pull_start-" << StartPEXPull << "-length-" << LPEXPull << ".root";
        TFile * d = new TFile(outName.str().c_str(), "recreate");
        d->cd();
        hFinalF0->Write();
        hFinalFNeg->Write();
        hFinalFPos->Write();
        hFinalF0VR->Write();
        hFinalFNegVR->Write();
        hFinalFPosVR->Write();
        d->Write();
        d->Close();
    }

private:
    string Name, prefix, suffix, histName, dirName;
    string channel;
    int nFSteps, nBins;
    std::map<string, DistributionProducerFromSelected*> ACsignal_samples;
    std::map<string, DistributionProducerFromSelected*> signal_samples;
    std::map<string, DistributionProducerFromSelected*> bkg_samples;
    std::map<string, TH1*> inputAC;
    std::pair<TF1, WeightFunctionCreator*> WtbWeightor;
    TH1* signalMC;
    TH1* bkg; //SM scenario
    TH2D* hFinalFNeg;
    TH2D* hFinalF0;
    TH2D* hFinalFPos;

    TH2D* hFinalFNegVR;
    TH2D* hFinalF0VR;
    TH2D* hFinalFPosVR;
};

#endif	/* PRODUCTIONACBIASCHECKER_H */

