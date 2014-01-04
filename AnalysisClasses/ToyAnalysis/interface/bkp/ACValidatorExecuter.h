/* 
 * File:   ACValidatorExecuter.h
 * Author: nadjieh
 *
 * Created on February 1, 2013, 6:13 PM
 */

#ifndef ACVALIDATOREXECUTER_H
#define	ACVALIDATOREXECUTER_H
#define mtop 172.5
#define MW 80.39
#define mB 4.8

class ACVLVRSamplesInfo {
public:

    ACVLVRSamplesInfo() {
        Xsections["t"] = 9.4206722625; //0
        Xsections["sm"] = 9.4206722625; //0
        Xsections["unphys"] = 9.4206722625; //1
        Xsections["r"] = 9.4206722625; //2
        N0["t"] = 305295;
        N0["sm"] = 305295; //0
        N0["unphys"] = 375847; //1
        N0["r"] = 277183; //2
    }

    ~ACVLVRSamplesInfo() {
    };
    std::map<string, double> Xsections; //pb
    std::map<string, double> N0;
};
using namespace std;
#include "FitValidator.h"
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
#include "ValidatorExecuter.h"

TH1* MixedACHistogram(bool frac, std::map<string, DistributionProducerFromSelected*> acsamples, double VL, double VR, int nPEX,
        double mt = mtop, double mW = MW) {
    std::map<string, DistributionProducerFromSelected*>::iterator sampleItr = acsamples.begin();
    TH1* ret = 0;
    Coefficients coeffs = VLVRCoeffs(VL, VR, 1, mt, mW);
    TH1* tmp = 0;
    for (; sampleItr != acsamples.end(); sampleItr++) {
        if (frac)
            tmp = sampleItr->second->GeneratePartialSample(1.0 / 3.0, nPEX);
        else
            tmp = sampleItr->second->GeneratePartialSampleLumiEQ(nPEX, false);
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

TH1* MixedACHistogramMC(std::map<string, TH1*> acsamples, double& n0, double VL, double VR, int nPEX,
        double mt = mtop, double mW = MW) {
    SamplesInfo si;
    std::map<string, TH1*>::iterator sampleItr = acsamples.begin();
    TH1* ret = 0;
    Coefficients coeffs = VLVRCoeffs(VL, VR, 1, mt, mW);
    TH1* tmp = 0;
    double selEf = 0;
    for (; sampleItr != acsamples.end(); sampleItr++) {
        tmp = sampleItr->second;

        if (sampleItr->first == string("sm")) {
            tmp->Scale(coeffs.m);
            selEf += (coeffs.m * tmp->GetEntries() / (double) si.N0[sampleItr->first]);
            cout << "confirmation: " << tmp->GetEntries() << " coeff is " << coeffs.m << " and N0 is " << si.N0[sampleItr->first] << endl;
            cout << "selEf is " << selEf << endl;
        }
        if (sampleItr->first == string("unphys")) {
            tmp->Scale(coeffs.n);
            selEf += (coeffs.n * tmp->GetEntries() / (double) si.N0[sampleItr->first]);
            cout << "confirmation: " << tmp->GetEntries() << " coeff is " << coeffs.n << " and N0 is " << si.N0[sampleItr->first] << endl;
            cout << "selEf is " << selEf << endl;
        }
        if (sampleItr->first == string("r")) {
            tmp->Scale(coeffs.k);
            selEf += (coeffs.k * tmp->GetEntries() / (double) si.N0[sampleItr->first]);
            cout << "confirmation: " << tmp->GetEntries() << " coeff is " << coeffs.k << " and N0 is " << si.N0[sampleItr->first] << endl;
            cout << "selEf is " << selEf << endl;
        }
        if (ret == 0)
            ret = (TH1*) tmp->Clone("TheFirstMC");
        else
            ret->Add(tmp);
        cout << "confirmation II: " << ret->GetEntries() << endl;
    }
    n0 = (double) ret->GetEntries() / selEf;
    cout << "n0: " << n0 << endl;
    return ret;
}

void RunACFitValidation(double VL, double VR, int StartPEX, int LPEX, int StartPEXPull, int LPEXPull, string prefix, string suffix,
        string histName, string dirName, double Lumi = 3793, bool is2D = false, std::string outDir = "./", bool is3D = false) {
    stringstream outName;
    outName << outDir << "Linearity_start-" << StartPEX << "-length-" << LPEX << "_Pull_start-" << StartPEXPull <<
            "-length-" << LPEXPull << ".root";
    cout << outName.str().c_str() << endl;
    //    double FposFixed = 0.0009;
    double FposFixed = 1 - (F0)-(FL);
    std::pair<TF1, WeightFunctionCreator*> WtbWeightor = WeightFunctionCreator::getWeightFunction("WtbWeightor");
    SamplesInfo mySampleInfo;

    std::map<string, DistributionProducerFromSelected*> bkg_samples;
    std::map<string, DistributionProducerFromSelected*> signal_samples;
    std::map<string, DistributionProducerFromSelected*> ACsignal_samples;
    std::vector<TH2*> signalIIDPartial;
    std::vector<TH2*> signalIID;
    std::vector<TH3*> signalIIIDPartial;
    std::vector<TH3*> signalIIID;
    TH1* ACtotal = 0;
    TH1* ACtotalMC = 0;
    std::map<string, double>::iterator sampleItr = mySampleInfo.Xsections.begin();
    std::map<string, TH1*> inputAC;
    //    TH1* signal = 0;
    TH1* signalMC = 0;
    TH1* bkg = 0;
    int sampleIndex = 0;
    signalIIDPartial.clear();
    signalIID.clear();
    signalIIIDPartial.clear();
    signalIIID.clear();
    std::vector<TH2*> tmpVec2DDiLep;
    TH1D * bkgTmpDilep = 0;
    TH1D * bkgTmpDiTop = 0;
    for (; sampleItr != mySampleInfo.Xsections.end(); sampleItr++) {
        if (isAC(sampleItr->first)) {
            TH1* hist = GetCosThetaPlot(sampleItr->first, prefix, suffix, histName, dirName, 10);
            hist->Sumw2();
            DistributionProducerFromSelected *myDist = new DistributionProducerFromSelected(hist, string(sampleItr->first), Lumi);
            ACsignal_samples[sampleItr->first] = myDist;
            hist->Scale(float(Lumi * sampleItr->second) / float(mySampleInfo.N0[sampleItr->first]));
            inputAC[sampleItr->first] = (TH1*) hist->Clone((string("cosTheta_") + sampleItr->first).c_str());
            cout << "AC is added " << sampleItr->first << " " << inputAC.size() << endl;
        }
        if (sampleItr->first == "qcd") {
            sampleIndex++;
            continue;
        }
        if (sampleItr->first == "w" || sampleItr->first == "dy") {
            //            cout<<sampleItr->first<<endl;
            TH1* hist = GetCosThetaPlot(sampleItr->first, prefix, suffix, histName, dirName, 10);
            hist->Sumw2();
            DistributionProducerFromSelected *myDist = new DistributionProducerFromSelected(hist, string(sampleItr->first), Lumi);
            bkg_samples[sampleItr->first] = myDist;
            hist->Scale(float(Lumi * sampleItr->second) / float(mySampleInfo.N0[sampleItr->first]));
            //           if(sampleItr == mySampleInfo.Xsections.begin())
            //            if (sampleIndex == 0)
            if (bkg == 0)
                bkg = ((TH1*) hist->Clone(string("bkg_" + string(hist->GetName())).c_str()));
            else {
                bkg->Add(hist);
                //                cout<<"Adding bkg with nbins = "<<bkg->GetXaxis()->GetNbins()<<
                //                        " and hist with nbins = "<<hist->GetXaxis()->GetNbins()<<endl;
            }
            cout << "bkg is added " << sampleItr->first << endl;
        } else if (!isAC(sampleItr->first) && sampleItr->first != string("AC")) {
            cout << sampleItr->first << endl;
            //            cout<<sampleItr->first<<endl;
            if (!is2D && !is3D) {
#ifndef TEST_CHANGE_SIG_BKG
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
                signal_samples[sampleItr->first] = myDist;
                hist1D->Scale(float(Lumi * sampleItr->second) / float(mySampleInfo.N0[sampleItr->first]));
                if (signalMC == 0)
                    signalMC = ((TH1*) hist1D->Clone(string("signal_" + string(hist1D->GetName())).c_str()));
                else {
                    signalMC->Add(hist1D);
#endif /*TEST_CHANGE_SIG_BKG*/
                }

            } else if (is2D && !is3D) {
                cout << "I am in right place\t" << sampleItr->first << endl;
                TH1* bkginsignal = GetCosThetaPlot(sampleItr->first, prefix, suffix, histName, dirName, 10);
                //                    if (bkginsignal->GetEntries() != 0) {
                cout << "Let's get random distribution!!" << endl;
                bkginsignal->Sumw2();
                DistributionProducerFromSelected* myDist = new DistributionProducerFromSelected(bkginsignal
                        , string(sampleItr->first), Lumi);
                bkg_samples[sampleItr->first] = myDist;
                bkginsignal->Scale(float(Lumi * sampleItr->second) / float(mySampleInfo.N0[sampleItr->first]));
                //            if(sampleItr == mySampleInfo.Xsections.begin())
                if (bkg != 0)
                    bkg->Add(bkginsignal);
                else {
                    cout << "WARNING: CHECK BKG SCENARIO \n\t first put w, dy, ... in the input list" << endl;
                    bkg = (TH1*) bkginsignal->Clone("bkginsig");
                    //                        return;
                }
                cout << "bkginSignal is added " << sampleItr->first << endl;
                //                    }
                TH2* histIID = (TH2*) GetCosThetaPlot(sampleItr->first, prefix, suffix, histName, dirName, 10, /*is2D*/true);
                histIID->Sumw2();
#ifdef TEST_DIAGONALITY
                TH2* diagonal2D = DiagonalMaker(histIID);
                delete histIID;
                DistributionProducerFromSelected* myDist2D = new DistributionProducerFromSelected(diagonal2D
                        , string(sampleItr->first), Lumi, true);
                signal_samples[sampleItr->first] = myDist2D;
                diagonal2D->Scale(float(Lumi * sampleItr->second) / float(mySampleInfo.N0[sampleItr->first]));
                signalIID.push_back((TH2*) diagonal2D->Clone((sampleItr->first + "_" + std::string(diagonal2D->GetName())).c_str()));
#endif /*TEST_DIAGONALITY*/
#ifndef TEST_DIAGONALITY
                DistributionProducerFromSelected* myDist2D = new DistributionProducerFromSelected(histIID
                        , string(sampleItr->first), Lumi, true);
                signal_samples[sampleItr->first] = myDist2D;
                histIID->Scale(float(Lumi * sampleItr->second) / float(mySampleInfo.N0[sampleItr->first]));
                signalIID.push_back((TH2*) histIID->Clone(("MyTwoD_" + sampleItr->first + "_" + std::string(histIID->GetName())).c_str()));

#ifdef TEST_DILEPTON_JEANNINE
                bool isDilep = isDesiredSample(string(signalIID.at(signalIID.size() - 1)->GetName()), "mu");
                if (!isDilep)
                    tmpVec2DDiLep.push_back((TH2*) signalIID.at(signalIID.size() - 1)->Clone());
                if (isDilep) {
                    if (bkgTmpDilep != 0)
                        bkgTmpDilep->Add(signalIID.at(signalIID.size() - 1)->ProjectionY());
                    else
                        bkgTmpDilep = signalIID.at(signalIID.size() - 1)->ProjectionY("firstDiLep");
                }
#endif /*TEST_DILEPTON_JEANNINE*/ 
#ifdef TEST_TWBIAS_JEANNINE
                bool isDilep = isDesiredSample(string(signalIID.at(signalIID.size() - 1)->GetName()), "Mu");
                if (!isDilep)
                    tmpVec2DDiLep.push_back((TH2*) signalIID.at(signalIID.size() - 1)->Clone());
                if (isDilep) {
                    if (bkgTmpDilep != 0)
                        bkgTmpDilep->Add(signalIID.at(signalIID.size() - 1)->ProjectionY());
                    else
                        bkgTmpDilep = signalIID.at(signalIID.size() - 1)->ProjectionY("firstDiTop");
                }
#endif /*TEST_TWBIAS_JEANNINE*/

#endif /*TEST_DIAGONALITY*/
            } else if (!is2D && is3D) {
                bool isDitop = isDesiredSample(sampleItr->first, "mu");
                cout << "for 3D, the name should contain mu: " << sampleItr->first << "\t" << isDitop << endl;
                TH1* bkginsignal = GetCosThetaPlot(sampleItr->first, prefix, suffix, histName, dirName, 10);
                bkginsignal->Sumw2();
                DistributionProducerFromSelected* myDist = new DistributionProducerFromSelected(bkginsignal
                        , string(sampleItr->first), Lumi);
                bkg_samples[sampleItr->first] = myDist;
                bkginsignal->Scale(float(Lumi * sampleItr->second) / float(mySampleInfo.N0[sampleItr->first]));
                //            if(sampleItr == mySampleInfo.Xsections.begin())
                if (bkg != 0)
                    bkg->Add(bkginsignal);
                else {
                    cout << "WARNING: CHECK BKG SCENARIO \n\t first put w, dy, ... in the input list" << endl;
                    bkg = (TH1*) bkginsignal->Clone("bkginsig");
                    //                        return;
                }
                cout << "bkginSignal is added " << sampleItr->first << endl;
                if (!isDitop) {
                    cout << "it is not ditop" << endl;
                    TH2* histIID = (TH2*) GetCosThetaPlot(sampleItr->first, prefix, suffix, histName, dirName, 10, /*is2D*/true);
                    histIID->Sumw2();
                    DistributionProducerFromSelected* myDist2D = new DistributionProducerFromSelected(histIID
                            , string(sampleItr->first), Lumi, true);
                    signal_samples[sampleItr->first] = myDist2D;
                    histIID->Scale(float(Lumi * sampleItr->second) / float(mySampleInfo.N0[sampleItr->first]));
                    signalIID.push_back((TH2*) histIID->Clone(("MyTwoD_" + sampleItr->first + "_" +
                            std::string(histIID->GetName())).c_str()));

                } else {
                    cout << "it is ditop" << endl;
                    TH3* histIIID = (TH3*) GetCosThetaPlot(sampleItr->first, prefix, suffix, histName, dirName,
                            10, /*is2D*/false, /*is3D*/true);
                    histIIID->Sumw2();
                    DistributionProducerFromSelected* myDist3D = new DistributionProducerFromSelected(histIIID
                            , string(sampleItr->first), Lumi, false, true);
                    signal_samples[sampleItr->first] = myDist3D;
                    histIIID->Scale(float(Lumi * sampleItr->second) / float(mySampleInfo.N0[sampleItr->first]));
                    signalIIID.push_back((TH3*) histIIID->Clone(("MyThreeD_" + sampleItr->first + "_" +
                            std::string(histIIID->GetName())).c_str()));
                }
            }
        }
        sampleIndex++;
    }
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
    cout << "Signal 2D size is " << signalIID.size() << endl;
    cout << "Signal 3D size is " << signalIIID.size() << endl;
#if defined (TEST_DILEPTON_JEANNINE) || defined (TEST_TWBIAS_JEANNINE)
    bkgTmpDilep->Add(bkg);
#endif /*TEST_DILEPTON_JEANNINE OR TEST_DILEPTON_JEANNINE*/
    gROOT->cd();

    int nFSteps = 300;
    //            int nFSteps = 5;

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
    TH2D hFinalFNeg("hFinalFNeg", "Linearirty Check for F_{-};F_{-} input;F_{-} output", nFSteps, 0., 1., nFSteps, 0., 1.);
    TH2D hFinalF0("hFinalF0", "Linearirty Check for F_{0};V_{R} input;F_{0} output", nFSteps, 0., 1., nFSteps, 0., 1.);
    TH2D hFinalFPos("hFinalFPos", "Linearirty Check for F_{R};F_{R} input;F_{R} output", nFSteps, 0., 1., nFSteps, 0., 1.);
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
        F0 = F0ValuesData[nPEX];
        FL = FLValuesData[nPEX];
        double FposFixed = 1 - (F0)-(FL);

        TH1 * ACSingleTopPartial = MixedACHistogram(true, ACsignal_samples, VLFixed, VRValuesStep[nPEX], nPEX);
        stringstream name__;
        name__ << "CosTheta_bkg_" << nPEX;
        stringstream title__;
        title__ << "noWtb cos(#theta) : PEX=" << nPEX;
        TH1* hSumBGPartial = 0;
        if (!is2D && !is3D) {
            if (signalMC != NULL)
                hSumBGPartial = new TH1D(name__.str().c_str(), title__.str().c_str(), signalMC->GetXaxis()->GetNbins()
                    , signalMC->GetXaxis()->GetXmin(), signalMC->GetXaxis()->GetXmax());
            else if (inputAC.size() != 0 && inputAC["sm"] != NULL)
                hSumBGPartial = new TH1D(name__.str().c_str(), title__.str().c_str(), inputAC["sm"]->GetXaxis()->GetNbins()
                    , inputAC["sm"]->GetXaxis()->GetXmin(), inputAC["sm"]->GetXaxis()->GetXmax());
            else
                cout << "What a hell -------------------" << endl;
        } else
            hSumBGPartial = new TH1D(name__.str().c_str(), title__.str().c_str(), signalIID.at(0)->GetYaxis()->GetNbins()
                , signalIID.at(0)->GetYaxis()->GetXmin(), signalIID.at(0)->GetYaxis()->GetXmax());
        hSumBGPartial->Sumw2();
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
        stringstream name2D__;
        name2D__.str("");
        name__.str("");
        title__.str("");
        title__ << "Wtb cos(#theta) : PEX=" << nPEX;
        TH1* hSumSIGPartial = 0;
        if (!is2D && !is3D) {
            if (signalMC != NULL)
                hSumSIGPartial = new TH1D(name__.str().c_str(), title__.str().c_str(), signalMC->GetXaxis()->GetNbins()
                    , signalMC->GetXaxis()->GetXmin(), signalMC->GetXaxis()->GetXmax());
            else if (inputAC.size() != 0 && inputAC["sm"] != NULL)
                hSumSIGPartial = new TH1D(name__.str().c_str(), title__.str().c_str(), inputAC["sm"]->GetXaxis()->GetNbins()
                    , inputAC["sm"]->GetXaxis()->GetXmin(), inputAC["sm"]->GetXaxis()->GetXmax());
            else
                cout << "What a hell for bkg -------------------" << endl;

            hSumSIGPartial->Sumw2();
            std::map<string, DistributionProducerFromSelected*> ::iterator sigItr = signal_samples.begin();
            name__ << "CosTheta_signal_" << nPEX;
            for (; sigItr != signal_samples.end(); sigItr++) {
                if (sigItr->first == string("t") || sigItr->first == string("tbar"))
                    continue;
                cout << "signal to add!!!" << endl;
                TH1* tmp = sigItr->second->GeneratePartialSample(1.0 / 3.0, nPEX);
                hSumSIGPartial->Add(tmp);
                delete tmp;
            }
        } else if (is2D && !is3D) {
            hSumSIGPartial = new TH1D(name__.str().c_str(), title__.str().c_str(), signalIID.at(0)->GetYaxis()->GetNbins()
                    , signalIID.at(0)->GetYaxis()->GetXmin(), signalIID.at(0)->GetYaxis()->GetXmax());
            hSumSIGPartial->Sumw2();
            std::map<string, DistributionProducerFromSelected*> ::iterator sigItr = signal_samples.begin();
            name2D__ << "CosTheta_signal_2D_" << nPEX;
            signalIIDPartial.clear();
            for (; sigItr != signal_samples.end(); sigItr++) {
                if (sigItr->first == string("t") || sigItr->first == string("tbar"))
                    continue;
                TH2* tmp = ((TH2*) sigItr->second->GeneratePartialSample(1.0 / 3.0, nPEX));
                signalIIDPartial.push_back((TH2*) tmp->Clone(std::string(sigItr->first + "_" + name2D__.str()).c_str()));
                delete tmp;
            }
        } else if (!is2D && is3D) {
            hSumSIGPartial = new TH1D(name__.str().c_str(), title__.str().c_str(), signalIID.at(0)->GetYaxis()->GetNbins()
                    , signalIID.at(0)->GetYaxis()->GetXmin(), signalIID.at(0)->GetYaxis()->GetXmax());
            hSumSIGPartial->Sumw2();
            std::map<string, DistributionProducerFromSelected*> ::iterator sigItr = signal_samples.begin();
            name2D__ << "CosTheta_signal_2D_" << nPEX;
            signalIIDPartial.clear();
            signalIIIDPartial.clear();
            for (; sigItr != signal_samples.end(); sigItr++) {
                if (sigItr->first == string("t") || sigItr->first == string("tbar"))
                    continue;
                bool isDitop = isDesiredSample(sigItr->first, "mu");
                if (!isDitop) {
                    TH2* tmp = ((TH2*) sigItr->second->GeneratePartialSample(1.0 / 3.0, nPEX));
                    signalIIDPartial.push_back((TH2*) tmp->Clone(std::string(sigItr->first + "_" + name2D__.str()).c_str()));
                    delete tmp;
                } else {
                    TH3* tmp = ((TH3*) sigItr->second->GeneratePartialSample(1.0 / 3.0, nPEX));
                    signalIIIDPartial.push_back((TH3*) tmp->Clone(std::string(sigItr->first + "_" + name2D__.str()).c_str()));
                    delete tmp;
                }
            }
        }
        cout << "for different polarization values" << endl;
        for (int i = 0; i < nFSteps; i++) {
            if (FNegValueSteps[i] > (1.0 - FposFixed))
                continue;

            double F0Value = 1.0 - FposFixed - FNegValueSteps[i];

            WtbWeightor.first.SetParameters(F0Value, FNegValueSteps[i]);

            name__.str("");
            name__ << hSumBGPartial->GetName() << "_" << VRValuesStep[nPEX] << "_" << FNegValueSteps[i] << endl;
            title__.str("");
            title__ << hSumBGPartial->GetTitle() << " for F_ = " << VRValuesStep[nPEX] << "_" << FNegValueSteps[i] << endl;
            if (!is2D && !is3D) {
                cout << "In 1D method: " << hSumBGPartial << endl;
                TH1* SIGinPEX = ((TH1*) hSumSIGPartial->Clone(name__.str().c_str()));
                SIGinPEX->SetTitle(title__.str().c_str());
                SIGinPEX->Add(ACSingleTopPartial);
                SIGinPEX->Multiply(&WtbWeightor.first, 1);
                SIGinPEX->SetTitle(title__.str().c_str());
                if (hSumBGPartial != NULL)
                    SIGinPEX->Add(hSumBGPartial);
                if (signalMC != NULL && SIGinPEX != NULL && bkg != NULL) {
                    cout << "signal: " << signalMC->GetName() << " " << signalMC->GetNbinsX() << " " << signalMC->Integral() << endl;
                    cout << "pData: " << SIGinPEX->GetName() << " " << SIGinPEX->GetNbinsX() << " " << SIGinPEX->Integral() << endl;
                    cout << "bkg: " << bkg->GetName() << " " << bkg->GetNbinsX() << " " << bkg->Integral() << endl;
                }
                cout << "I am here ..." << endl;
                cout << "ACSingleTopPartial: " << ACSingleTopPartial->Integral() << endl;
                cout << "SIGinPEX: " << SIGinPEX->Integral() << endl;
                cout << "signalMC: " << signalMC->Integral() << endl;
                cout << "bkg: " << bkg->Integral() << endl;
                std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray = LikelihoodFunction::getLLFunction(
                        string("F_" + name__.str()), bkg, SIGinPEX, signalMC);
                //std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray = LikelihoodFunction::getLLFunction(
                //        string("F_" + name__.str()), bkg, SIGinPEX, signalMC);
                TF3 LLinPEXforFNegValue = LLinPEXforFNegValueArray.first;
                cout << "after likelihood" << endl;
                double x[3] = {-1., -1., -1.};
                double xerr[3] = {-1., -1., -1.};
                double correlation12 = -1000;
                GetMinimum(LLinPEXforFNegValue, x, xerr, correlation12, false);
                hFinalFNeg.Fill(FNegValueSteps[i], x[1]);
                hFinalF0.Fill(F0Value, x[0]);
                hFinalFPos.Fill(FposFixed, 1.0 - x[0] - x[1]);
                cout << "before deleting" << endl;
                delete SIGinPEX;
                cout << "after deleting" << endl;
                delete LLinPEXforFNegValueArray.second;
            } else if (is2D && !is3D) {
                TH1* SIGinPEX = ((TH1*) hSumSIGPartial->Clone(name__.str().c_str()));
                SIGinPEX->SetTitle(title__.str().c_str());
                for (int iBin = 0; iBin < SIGinPEX->GetXaxis()->GetNbins(); iBin++) {
                    double iContent = 0;
                    for (unsigned int iSample = 0; iSample < signalIIDPartial.size(); iSample++) {
                        name2D__.str("");
                        name2D__ << signalIIDPartial.at(iSample)->GetName() << "_" << VRValuesStep[i] << "_" << iBin;
                        TH1* sigProjectionX = signalIIDPartial.at(iSample)->ProjectionX(name2D__.str().c_str(), iBin + 1, iBin + 1);
                        sigProjectionX->SetTitle(title__.str().c_str());
                        sigProjectionX->Multiply(&WtbWeightor.first, 1);
                        iContent += sigProjectionX->Integral();
                        delete sigProjectionX;
                    }
                    SIGinPEX->SetBinContent(iBin + 1, iContent);
                }
                SIGinPEX->Add(ACtotal);
                SIGinPEX->Add(hSumBGPartial);
#if defined (TEST_DILEPTON_JEANNINE) || defined (TEST_TWBIAS_JEANNINE)
                std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray = LikelihoodFunction::getLLFunctionGeneralized(
                        string("F_" + name__.str()), bkgTmpDilep, SIGinPEX, tmpVec2DDiLep);
#endif /*TEST_DILEPTON_JEANNINE OR TEST_TWBIAS_JEANNINE*/
#if ! defined (TEST_DILEPTON_JEANNINE) && ! defined (TEST_TWBIAS_JEANNINE)
                std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray = LikelihoodFunction::getLLFunctionGeneralized(
                        string("F_" + name__.str()), bkg, SIGinPEX, signalIID);
#endif /*!TEST_DILEPTON_JEANNINE AND !TEST_TWBIAS_JEANNINE*/
                TF3 LLinPEXforFNegValue = LLinPEXforFNegValueArray.first;
                //            for(int as = 0; as <1; as+=0.01)
                //                cout<<LLinPEXforFNegValue.Eval(as,1-as,1);

                double x[3] = {-1., -1., -1.};
                double xerr[3] = {-1., -1., -1.};
                double correlation12 = -1000;
                GetMinimum(LLinPEXforFNegValue, x, xerr, correlation12, false);
                //                hFinalFPos.Fill(1 - F0 - FL, 1.0 - x[0] - x[1]);
                hFinalFNeg.Fill(FNegValueSteps[i], x[1]);
                hFinalF0.Fill(F0Value, x[0]);
                //            hFinalFNeg.Fill(FNegValueSteps[i],x[0]);
                //            hFinalF0.Fill(F0Value,x[1]);
                hFinalFPos.Fill(1 - F0 - FL, 1.0 - x[0] - x[1]);
                delete SIGinPEX;
                delete LLinPEXforFNegValueArray.second;
            } else if (!is2D && is3D) {
                TH1* SIGinPEX = ((TH1*) hSumSIGPartial->Clone(name__.str().c_str()));
                SIGinPEX->SetTitle(title__.str().c_str());
                for (int iBin = 0; iBin < SIGinPEX->GetXaxis()->GetNbins(); iBin++) {
                    double iContent = 0;
                    for (unsigned int iSample = 0; iSample < signalIIDPartial.size(); iSample++) {
                        name2D__.str("");
                        name2D__ << signalIIDPartial.at(iSample)->GetName() << "_" << VRValuesStep[i] << "_" << iBin;
                        TH1* sigProjectionX = signalIIDPartial.at(iSample)->ProjectionX(name2D__.str().c_str(), iBin + 1, iBin + 1);
                        sigProjectionX->SetTitle(title__.str().c_str());
                        sigProjectionX->Multiply(&WtbWeightor.first, 1);
                        iContent += sigProjectionX->Integral();
                        delete sigProjectionX;
                    }
                    for (unsigned int iSample = 0; iSample < signalIIIDPartial.size(); iSample++) {
                        name2D__.str("");
                        name2D__ << signalIIIDPartial.at(iSample)->GetName() << "_" << VRValuesStep[i]
                                << "_" << iBin;
                        TH1D * coefficients = new TH1D("tmp", "tmp",
                                signalIIIDPartial.at(iSample)->GetXaxis()->GetNbins(),
                                signalIIIDPartial.at(iSample)->GetXaxis()->GetXmin(),
                                signalIIIDPartial.at(iSample)->GetXaxis()->GetXmax());
                        for (int genBin = 0; genBin < signalIIIDPartial.at(iSample)->GetXaxis()->GetNbins(); genBin++) {
                            TH1* sigProjectionZ = ((TH3*) signalIIIDPartial.at(iSample))->ProjectionZ(
                                    name2D__.str().c_str(), genBin + 1, genBin + 1, iBin + 1, iBin + 1, "o");
                            //                            cout<<"PreOld: "<<sigProjectionZ->Integral()<<endl;
                            sigProjectionZ->Multiply(&(WtbWeightor.first), 1);
                            coefficients->SetBinContent(genBin + 1, sigProjectionZ->Integral());
                            //                            cout<<"New: "<<coefficients->GetBinContent(genBin+1)<<"\tOld: "<<
                            //                                    ((TH3*) signalIIIDPartial.at(iSample))->Integral(genBin+1,genBin+1, iBin+1, iBin+1,0,11)<<endl;
                            delete sigProjectionZ;
                        }
                        coefficients->Multiply(&(WtbWeightor.first), 1);
                        iContent += coefficients->Integral();
                        delete coefficients;
                        //#endif /*TEST_DITOPBIAS_JEANNINE*/

                    }
                    SIGinPEX->SetBinContent(iBin + 1, iContent);
                }
                SIGinPEX->Add(ACtotal);
                SIGinPEX->Add(hSumBGPartial);
#ifdef TEST_DITOPBIAS_JEANNINE
                std::vector<TH2*> tmp2D3DSignal;
                for (unsigned int iTwoDSignal = 0; iTwoDSignal < signalIID.size(); iTwoDSignal++) {
                    tmp2D3DSignal.push_back(new TH2D(*((TH2D*) signalIID.at(iTwoDSignal))));
                }
                for (unsigned int iTwoDSignal = 0; iTwoDSignal < signalIIID.size(); iTwoDSignal++) {
                    tmp2D3DSignal.push_back((TH2*) ((TH3*) signalIIID.at(iTwoDSignal))->Project3D("yx"));
                }
                std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray = LikelihoodFunction::getLLFunctionGeneralized(
                        string("F_" + name__.str()), bkg, SIGinPEX, tmp2D3DSignal);
#endif /*TEST_DITOPBIAS_JEANNINE*/
#ifndef TEST_DITOPBIAS_JEANNINE
                //		cout<<"Befor LL Declaration"<<endl;
                std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray = LikelihoodFunction::getLLFunctionForBias(
                        string("F_" + name__.str()), bkg, SIGinPEX, signalIID, signalIIID);
                //		cout<<"After LL Declaration"<<endl;
#endif /*TEST_DITOPBIAS_JEANNINE*/
                TF3 LLinPEXforFNegValue = LLinPEXforFNegValueArray.first;
                double x[3] = {-1., -1., -1.};
                double xerr[3] = {-1., -1., -1.};
                double correlation12 = -1000;
                GetMinimum(LLinPEXforFNegValue, x, xerr, correlation12, false);
                hFinalFNeg.Fill(FNegValueSteps[i], x[1]);
                hFinalF0.Fill(F0Value, x[0]);
                //            hFinalFNeg.Fill(FNegValueSteps[i],x[0]);
                //            hFinalF0.Fill(F0Value,x[1]);
                hFinalFPos.Fill(1 - F0 - FL, 1.0 - x[0] - x[1]);
                delete SIGinPEX;
                delete LLinPEXforFNegValueArray.second;
#ifdef TEST_DITOPBIAS_JEANNINE
                for (unsigned int g = 0; g < tmp2D3DSignal.size(); g++) {
                    delete tmp2D3DSignal[g];
                }
                tmp2D3DSignal.clear();
#endif /*TEST_DITOPBIAS_JEANNINE*/
            }
        }//for loop
        delete hSumBGPartial;
        delete hSumSIGPartial;
    }
    TH1D hPullFNeg("hPullFNeg", "Pull distribution for F_{-}", 1000, -5, 5);
    TH1D hPullF0("hPullF0", "Pull distribution for F_{0}", 1000, -5, 5);
    TH1D hPullFPos("hPullFPos", "Pull distribution for F_{+}", 1000, -5, 5);
    TH1D hPullFResp("hPullFResp", "Pull distribution for F_{resp}", 1000, -5, 5);

    TH1D hResFNeg("hResFNeg", "Residual for F_{-}", 1000, -0.5, 0.5);
    TH1D hResF0("hResF0", "Residual for F_{0}", 1000, -0.5, 0.5);
    TH1D hResFPos("hResFPos", "Residual for F_{+}", 1000, -0.5, 0.5);
    TH1D hResFResp("hResFResp", "Residual for F_{resp}", 1000, -0.5, 0.5);
    cout << StartPEXPull << "  " << LPEXPull << endl;
    for (int nPEXPull = 0; nPEXPull < 1000; nPEXPull++) {
        //        cout<< "PEXPull:"<<nPEXPull<<endl;

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

        TH1* hData = 0;
        cout << "before background session" << endl;
        if (!is2D && !is3D)
            hData = new TH1D(name__.str().c_str(), title__.str().c_str(), signalMC->GetXaxis()->GetNbins(),
                signalMC->GetXaxis()->GetXmin(), signalMC->GetXaxis()->GetXmax());
        else
            hData = new TH1D(name__.str().c_str(), title__.str().c_str(), signalIID.at(0)->GetYaxis()->GetNbins(),
                signalIID.at(0)->GetYaxis()->GetXmin(), signalIID.at(0)->GetYaxis()->GetXmax());
        hData->Sumw2();
        cout << "hData is declared" << endl;
        std::map<string, DistributionProducerFromSelected*>::iterator bkgItr = bkg_samples.begin();
        for (; bkgItr != bkg_samples.end(); bkgItr++) {
            cout << "..." << bkgItr->first << "..." << endl;
            TH1* tmp = bkgItr->second->GeneratePartialSampleLumiEQ(nPEXPull);
            hData->Add(tmp);
            delete tmp;
        }
        cout << "bkg is done!" << endl;
        std::map<string, DistributionProducerFromSelected*>::iterator sigItr = signal_samples.begin();
        cout << "sigItr is declared" << endl;
        Coefficients Fs = GetFs(VL, VR, 0, 0);
        F0 = Fs.n;
        FL = Fs.m;
        if (!is2D && !is3D) {
            for (; sigItr != signal_samples.end(); sigItr++) {
                if (sigItr->first == string("t") || sigItr->first == string("tbar"))
                    continue;
                //            cout<< "..." << sigItr->first<< "..." <<endl;
                TH1* tmp = sigItr->second->GeneratePartialSampleLumiEQ(nPEXPull);
                hData->Add(tmp);
                delete tmp;
            }
            TH1* ACsignalPull = MixedACHistogram(false, ACsignal_samples, VL, VR, nPEXPull);
            cout << "Confirmation III: " << ACsignalPull->GetEntries() << endl;
            cout << "hData Info: Nbins " << hData->GetXaxis()->GetNbins() << endl;
            hData->Add(ACsignalPull);
            cout << "Added to data" << endl;
            delete ACsignalPull;
            if (signalMC != NULL && bkg != NULL && hData != NULL) {
                cout << "before fit: \n\tsignalMC: " << signalMC->GetEntries() << "\n\tBkgMC: " << bkg->GetEntries()
                        << "\n\tData: " << hData->GetEntries() << endl;
            }
            cout << "I am guessing correctly!" << endl;
            if (bkg == NULL) {
                bkg = (TH1*) signalMC->Clone("tmpBkg");
                for (int iBkgBin = 0; iBkgBin < bkg->GetXaxis()->GetNbins(); iBkgBin++)
                    bkg->SetBinContent(iBkgBin + 1, 0);
            }
            std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray = LikelihoodFunction::getLLFunction(
                    string("F_" + name__.str()), bkg, hData, signalMC);
            TF3 LLinPEXforFNegValue = LLinPEXforFNegValueArray.first;
            double x[3] = {-1., -1., -1.};
            double xerr[3] = {-1., -1., -1.};
            double correlation12 = -1000;
            GetMinimum(LLinPEXforFNegValue, x, xerr, correlation12);
            double fneg = x[1];
            double f0 = x[0];
            double fpos = 1.0 - x[1] - x[0];

            double fresponse = x[2];
            double errfrespo = xerr[2];
            double resfresp0 = fresponse - 1.0;

            hPullFResp.Fill((double) resfresp0 / (double) errfrespo);
            hResFResp.Fill(resfresp0);

            double errfneg = xerr[1];
            double errf0 = xerr[0];
            double errfpos = sqrt(errf0 * errf0 + errfneg * errfneg + (2 * correlation12));
            cout << "VL: " << VL << "\tVR: " << VR << endl;
            cout << "F0: " << Fs.n << endl;
            cout << "FL: " << Fs.m << endl;
            cout << "FR: " << Fs.k << endl;
            double resneg = fneg - (Fs.m);
            double respos = fpos - Fs.k;
            double resf0 = f0 - (Fs.n);


            hPullFNeg.Fill((double) resneg / (double) errfneg);
            hPullF0.Fill((double) resf0 / (double) errf0);
            hPullFPos.Fill((double) respos / (double) errfpos);

            hResFPos.Fill(respos);
            hResFNeg.Fill(resneg);
            hResF0.Fill(resf0);

            delete hData;
            delete LLinPEXforFNegValueArray.second;
        } else {
            for (; sigItr != signal_samples.end(); sigItr++) {
                if (sigItr->first == string("t") || sigItr->first == string("tbar"))
                    continue;
                cout << "..." << sigItr->first << "..." << endl;
                bool isDitop = isDesiredSample(sigItr->first, "mu");
                TH1* tmp = 0;
                if (!isDitop) {
                    TH2* tmp1 = (TH2*) sigItr->second->GeneratePartialSampleLumiEQ(nPEXPull, isDitop);
                    tmp = tmp1->ProjectionY("tmp");
                    delete tmp1;
                } else {
                    cout << "sampl contains mu" << endl;
                    TH3* tmp1 = (TH3*) sigItr->second->GeneratePartialSampleLumiEQ(nPEXPull, isDitop);
                    tmp = tmp1->ProjectionY("tmp");
                    delete tmp1;
                }
                hData->Add(tmp);
                delete tmp;
            }
            TH1* ACsignalPull = MixedACHistogram(false, ACsignal_samples, VL, VR, nPEXPull);
            hData->Add(ACsignalPull);
            delete ACsignalPull;
            if (is2D && !is3D) {
#if ! defined  (TEST_DILEPTON_JEANNINE) && ! defined (TEST_TWBIAS_JEANNINE)
                std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray = LikelihoodFunction::getLLFunctionGeneralized(
                        string("F_" + name__.str()), bkg, hData, signalIID);
#endif /*!TEST_DILEPTON_JEANNINE AND !TEST_TWBIAS_JEANNINE*/
#if defined (TEST_DILEPTON_JEANNINE) || defined (TEST_TWBIAS_JEANNINE)
                std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray = LikelihoodFunction::getLLFunctionGeneralized(
                        string("F_" + name__.str()), bkgTmpDilep, hData, tmpVec2DDiLep);
#endif /*TEST_DILEPTON_JEANNINE OR TEST_TWBIAS_JEANNINE*/
                TF3 LLinPEXforFNegValue = LLinPEXforFNegValueArray.first;
                double x[3] = {-1., -1., -1.};
                double xerr[3] = {-1., -1., -1.};
                double correlation12 = -1000;
                GetMinimum(LLinPEXforFNegValue, x, xerr, correlation12);
                double fneg = x[1];
                double f0 = x[0];
                double fpos = 1.0 - x[1] - x[0];


                cout << "VL: " << VL << "\tVR: " << VR << endl;
                cout << "F0: " << Fs.n << endl;
                cout << "FL: " << Fs.m << endl;
                cout << "FR: " << Fs.k << endl;
                double resneg = fneg - (Fs.m);
                double respos = fpos - Fs.k;
                double resf0 = f0 - (Fs.n);
                double fresponse = x[2];
                double errfrespo = xerr[2];
                double resfresp0 = fresponse - 1.0;

                hPullFResp.Fill((double) resfresp0 / (double) errfrespo);
                hResFResp.Fill(resfresp0);

                double errfneg = xerr[1];
                double errf0 = xerr[0];
                double errfpos = sqrt(errf0 * errf0 + errfneg * errfneg + (2 * correlation12));
                hPullFNeg.Fill((double) resneg / (double) errfneg);
                hPullF0.Fill((double) resf0 / (double) errf0);
                hPullFPos.Fill((double) respos / (double) errfpos);

                hResFPos.Fill(respos);
                hResFNeg.Fill(resneg);
                hResF0.Fill(resf0);

                delete hData;
                delete LLinPEXforFNegValueArray.second;
            } else if (!is2D && is3D) {
                cout << "In right place for pull" << endl;
                std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray = LikelihoodFunction::getLLFunctionForBias(
                        string("F_" + name__.str()), bkg, hData, signalIID, signalIIID);

                TF3 LLinPEXforFNegValue = LLinPEXforFNegValueArray.first;
                double x[3] = {-1., -1., -1.};
                double xerr[3] = {-1., -1., -1.};
                double correlation12 = -1000;
                GetMinimum(LLinPEXforFNegValue, x, xerr, correlation12);
                double fneg = x[1];
                double f0 = x[0];
                double fpos = 1.0 - x[1] - x[0];

                double fresponse = x[2];
                double errfrespo = xerr[2];
                double resfresp0 = fresponse - 1.0;

                hPullFResp.Fill((double) resfresp0 / (double) errfrespo);
                hResFResp.Fill(resfresp0);

                double errfneg = xerr[1];
                double errf0 = xerr[0];
                double errfpos = sqrt(errf0 * errf0 + errfneg * errfneg + (2 * correlation12));

                double resneg = fneg - (FL);
                double respos = fpos - FposFixed;
                double resf0 = f0 - (F0);

                hPullFNeg.Fill((double) resneg / (double) errfneg);
                hPullF0.Fill((double) resf0 / (double) errf0);
                hPullFPos.Fill((double) respos / (double) errfpos);

                hResFPos.Fill(respos);
                hResFNeg.Fill(resneg);
                hResF0.Fill(resf0);

                delete hData;
                delete LLinPEXforFNegValueArray.second;
            }
        }
    }
    delete WtbWeightor.second;
    TFile * outFile = new TFile(outName.str().c_str(), "recreate");
    outFile->cd();
    hFinalF0.Write();
    hFinalFNeg.Write();
    hFinalFPos.Write();
    hPullFNeg.Write();
    hPullF0.Write();
    hPullFPos.Write();
    hPullFResp.Write();
    hResFNeg.Write();
    hResF0.Write();
    hResFPos.Write();
    hResFResp.Write();
    std::map<string, DistributionProducerFromSelected*>::iterator bkgItr = bkg_samples.begin();
    for (; bkgItr != bkg_samples.end(); bkgItr++)
        bkgItr->second->WriteChecks(outFile);
    outFile->Close();
}

#endif	/* ACVALIDATOREXECUTER_H */

