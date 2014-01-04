/* 
 * File:   BaseLinearityCheker.h
 * Author: nadjieh
 *
 * Created on June 10, 2013, 5:25 PM
 */

#ifndef BASELINEARITYCHEKER_H
#define	BASELINEARITYCHEKER_H
#include "TDirectory.h"
#include "TF1.h"
#include "TH1.h"
#include "TH2.h"
#include "TH3.h"
#include "TFile.h"
#include <vector>
#include <iostream>
#include <sstream>
#include <string>
#include "FitValidator.h"
#include "ValidatorExecuter.h"
using namespace std;

class MuonSignalSampleInfo {// should be changed ....
public:

    MuonSignalSampleInfo() {
        /*Xsections["ttdiL"] = 2.04;
        Xsections["ttLpL"] = 4.07;
        Xsections["ttLtau"] = 4.07;
        Xsections["ttLhad"] = 24.4;
        Xsections["ttrest"] = 130.42;*/
        //pt>60
        //        Xsections["qcd_Nominal"] = 42.184318; 
        //        Xsections["qcd_Up"] = 63.276477;
        //        Xsections["qcd_Down"] =  21.092159;
        //pt>40
        //        Xsections["qcd_Nominal"] = 46.641911;
        //        Xsections["qcd_Up"] = 69.962866;
        //        Xsections["qcd_Down"] =  23.320956 ;
        /*        Xsections["tt_Nominal"] =234 ;
                Xsections["tt_Q2Down"] =234 ;
                Xsections["tt_Q2Up"] =234 ;
                Xsections["t_Q2Down"] = 17.4961;
                Xsections["tbar_Q2Down"] = 9.9468;
                Xsections["t_Q2Up"] = 17.4961;
                Xsections["tbar_Q2Up"] = 9.9468;
                Xsections["t_Nominal"] = 17.4961;
                Xsections["tbar_Nominal"] = 9.9468;*/
        Xsections["w"] = 36257.2;
        Xsections["dy"] = 3503.71;
        Xsections["t"] = 17.496;
        Xsections["tbar"] = 9.9468;
        Xsections["tW"] = 11.1;
        Xsections["tWbar"] = 11.1;
        //      Xsections["tt"] =234 ;
        Xsections["s"] = 1.22796;
        Xsections["sbar"] = 0.57024;
        Xsections["dimu"] = 2.72;
        Xsections["die"] = 2.72;
        Xsections["mue"] = 5.46;
        Xsections["mutau"] = 5.46;
        Xsections["etau"] = 5.46;
        Xsections["muhad"] = 34.2;
        Xsections["ehad"] = 34.2;
        Xsections["disemitau"] = 36.9;

        /*N0["ttdiL"] = 2.04;
        N0["ttLpL"] = 4.07;
        N0["ttLtau"] = 4.07;
        N0["ttLhad"] = 24.4;
        N0["ttrest"] = 130.42;*/
        //        N0["qcd_Nominal"] = 10000000;
        //        N0["qcd_Up"] = 10000000;
        //        N0["qcd_Down"] = 10000000;
        /*        N0["t_Nominal"] = 3915598;
                N0["tbar_Nominal"] = 1711403;
                N0["t_Q2Down"] = 1901907;
                N0["tbar_Q2Down"] = 979639;
                N0["t_Q2Up"] = 1945116;
                N0["tbar_Q2Up"] = 979898;
        //        N0["tt_Nominal"] = 28460502;// pt>60
                N0["tt_Nominal"] = 29955051;// pt>40
                N0["tt_Q2Up"] = 3187807;
                N0["tt_Q2Down"] = 5387181;*/
        N0["w"] = 75748221;
        N0["dy"] = 25490579;
        N0["t"] = 3915598;
        N0["tbar"] = 1711403;
        N0["tW"] = 497658;
        N0["tWbar"] = 493460;
        //        N0["tt"] = 28460502;// pt>60
        //        N0["tt"] = 29955051;// pt>40
        N0["s"] = 3932710;
        N0["sbar"] = 1999667;
        N0["dimu"] = 471827;
        N0["die"] = 471827;
        N0["mue"] = 943654;
        N0["mutau"] = 943654;
        N0["etau"] = 943654;
        N0["muhad"] = 3743301;
        N0["ehad"] = 3743301;
        N0["disemitau"] = 4215128;

    }

    ~MuonSignalSampleInfo() {
    };
    std::map<string, double> Xsections; //pb
    std::map<string, double> N0;
};

class ElectronSignalSampleInfo {// should be changed ....
public:

    ElectronSignalSampleInfo() {

        Xsections["dimu"] = 2.72;
        Xsections["die"] = 2.72;
        Xsections["mue"] = 5.46;
        Xsections["mutau"] = 5.46;
        Xsections["etau"] = 5.46;
        Xsections["muhad"] = 34.2;
        Xsections["ehad"] = 34.2;
        Xsections["disemitau"] = 36.9;
        //pt>60
        //        Xsections["qcd_Nominal"] = 46.511091;
        //       Xsections["qcd_Up"] = 69.766638;
        //        Xsections["qcd_Down"] =  23.255546;
        //pt>40
        //        Xsections["qcd_Nominal"] = 55.794700;
        //        Xsections["qcd_Up"] = 83.692053;
        //        Xsections["qcd_Down"] =  27.897350;
        //pt>60 MTW
        //        Xsections["qcd_Nominal"] = 15.584;
        //        Xsections["qcd_Up"] = 31.17;
        //        Xsections["qcd_Down"] =  0.000000001;
        //        Xsections["tt_Nominal"] = 234;
        /*        Xsections["tt_Q2Up"] = 234;
                Xsections["tt_Q2Down"] = 234;*/
        //        Xsections["t_Nominal"] = 17.4961;
        //        Xsections["tbar_Nominal"] = 9.9468;
        /*        Xsections["t_Q2Down"] = 17.4961;
                Xsections["tbar_Q2Down"] = 9.9468;
                Xsections["t_Q2Up"] = 17.4961;
                Xsections["tbar_Q2Up"] = 9.9468;*/
        Xsections["w"] = 36257.2;
        Xsections["dy"] = 3503.71;
        Xsections["t"] = 17.4961;
        Xsections["tbar"] = 9.9468;
        //        Xsections["tt"] = 234;
        Xsections["tW"] = 11.1;
        Xsections["tWbar"] = 11.1;
        Xsections["s"] = 1.22796;
        Xsections["sbar"] = 0.57024;

        /*N0["ttdiL"] = 2.04;
        N0["ttLpL"] = 4.07;
        N0["ttLtau"] = 4.07;
        N0["ttLhad"] = 24.4;
        N0["ttrest"] = 130.42;*/
        //        N0["qcd_Nominal"] = 10000000;
        //        N0["qcd_Up"] = 10000000;
        //        N0["qcd_Down"] = 10000000;
        //        N0["tt_Nominal"] = 28838503;//pt >60
        //        N0["tt_Nominal"] = 27840909;//pt >40
        /*        N0["tt_Q2Up"] = 3187807;
                N0["tt_Q2Down"] = 5387181;*/
        //        N0["t_Nominal"] = 3915598;
        //        N0["tbar_Nominal"] = 1711403;
        /*        N0["t_Q2Down"] = 1901907;
                N0["tbar_Q2Down"] = 979639;
                N0["t_Q2Up"] = 1945116;
                N0["tbar_Q2Up"] = 979898;*/
        N0["w"] = 75748221;
        N0["dy"] = 25490579;
        N0["t"] = 3915598;
        N0["tbar"] = 1711403;
        N0["tW"] = 497658;
        N0["tWbar"] = 493460;
        //        N0["tt"] = 28838503;//pt >60
        //        N0["tt"] = 27840909;//pt >40
        N0["s"] = 3932710;
        N0["sbar"] = 1999667;
        N0["dimu"] = 471827;
        N0["die"] = 471827;
        N0["mue"] = 943654;
        N0["mutau"] = 943654;
        N0["etau"] = 943654;
        N0["muhad"] = 3743301;
        N0["ehad"] = 3743301;
        N0["disemitau"] = 4215128;
    }

    ~ElectronSignalSampleInfo() {
    };
    std::map<string, double> Xsections; //pb
    std::map<string, double> N0;
};


//class ElectronSignalSampleInfo {// should be changed ....
//public:
//
//    ElectronSignalSampleInfo() {
//
//        Xsections["w"] = 31314;
//        Xsections["dy"] = 3048;
//        Xsections["t"] = 41.9;
//        Xsections["tbar"] = 22.6;
//        Xsections["tW"] = (0.58 * 2);
//        Xsections["tWbar"] = (0.58 * 2);
//        Xsections["ttdiL"] = 2.04;
//        Xsections["ttLpL"] = 4.07;
//        Xsections["ttLtau"] = 4.07;
//        Xsections["ttLhad"] = 24.4;
//        Xsections["ttrest"] = 130.42;
//        Xsections["s"] = 3.19;
//        Xsections["sbar"] = 1.44;
//
//        N0["w"] = 75748221;
//        N0["dy"] = 30459503;
//        N0["t"] = 41.9;
//        N0["tbar"] = 22.6;
//        N0["tW"] = (0.58 * 2);
//        N0["tWbar"] = (0.58 * 2);
//        N0["ttdiL"] = 2.04;
//        N0["ttLpL"] = 4.07;
//        N0["ttLtau"] = 4.07;
//        N0["ttLhad"] = 24.4;
//        N0["ttrest"] = 130.42;
//        N0["s"] = 3.19;
//        N0["sbar"] = 1.44;
//    }
//
//    ~ElectronSignalSampleInfo() {
//    };
//    std::map<string, double> Xsections; //pb
//    std::map<string, double> N0;
//};

//class MuonSignalSampleInfo {// should be changed ....
//public:
//
//    MuonSignalSampleInfo() {
//        Xsections["w"] = 31314;
//        Xsections["dy"] = 3048;
//        Xsections["t"] = 41.9;
//        Xsections["tbar"] = 22.6;
//        Xsections["tW"] = (0.58 * 2);
//        Xsections["tWbar"] = (0.58 * 2);
//        Xsections["ttdiL"] = 2.04;
//        Xsections["ttLpL"] = 4.07;
//        Xsections["ttLtau"] = 4.07;
//        Xsections["ttLhad"] = 24.4;
//        Xsections["ttrest"] = 130.42;
//        Xsections["s"] = 3.19;
//        Xsections["sbar"] = 1.44;
//
//        N0["w"] = 75748221;
//        N0["dy"] = 30459503;
//        N0["t"] = 41.9;
//        N0["tbar"] = 22.6;
//        N0["tW"] = (0.58 * 2);
//        N0["tWbar"] = (0.58 * 2);
//        N0["ttdiL"] = 2.04;
//        N0["ttLpL"] = 4.07;
//        N0["ttLtau"] = 4.07;
//        N0["ttLhad"] = 24.4;
//        N0["ttrest"] = 130.42;
//        N0["s"] = 3.19;
//        N0["sbar"] = 1.44;
//    }
//
//    ~MuonSignalSampleInfo() {
//    };
//    std::map<string, double> Xsections; //pb
//    std::map<string, double> N0;
//};

class BaseLinearityCheker {
public:

    BaseLinearityCheker(string NAME, string pfix, string sfix, string hist, string dir, string chan,
            int bins = 10) : Name(NAME), prefix(pfix), suffix(sfix), histName(hist), dirName(dir), channel(chan),
    nBins(bins) {
        hFinalFNeg = new TH2D("hFinalFNeg", "Linearirty Check for F_{-};F_{-} input;F_{-} output", 300, 0., 1., 300, 0., 1.);
        hFinalF0 = new TH2D("hFinalF0", "Linearirty Check for F_{0};F_{0} input;F_{0} output", 300, 0., 1., 300, 0., 1.);
        hFinalFPos = new TH2D("hFinalFPos", "Linearirty Check for F_{+};nPEX;F_{+} output", 300, 0., 300., 1000, -0.5, 0.5);
        WtbWeightor = WeightFunctionCreator::getWeightFunction(string(Name + "WtbWeightor").c_str());
        FposFixed = 1 - (F0)-(FL);

        hPullFNeg = new TH1D("hPullFNeg", "Pull distribution for F_{-}", 1000, -5, 5);
        hPullF0 = new TH1D("hPullF0", "Pull distribution for F_{0}", 1000, -5, 5);
        hPullFPos = new TH1D("hPullFPos", "Pull distribution for F_{+}", 1000, -5, 5);
        hPullFResp = new TH1D("hPullFResp", "Pull distribution for F_{resp}", 1000, -5, 5);
        hResFNeg = new TH1D("hResFNeg", "Residual for F_{-}", 1000, -0.5, 0.5);
        hResF0 = new TH1D("hResF0", "Residual for F_{0}", 1000, -0.5, 0.5);
        hResFPos = new TH1D("hResFPos", "Residual for F_{+}", 1000, -0.5, 0.5);
        hResFResp = new TH1D("hResFResp", "Residual for F_{resp}", 1000, -0.5, 0.5);

        bkg = 0;
    }

    virtual ~BaseLinearityCheker() {
    }

    void addFlatBkgs(double Lumi = 1) {
        ElectronSignalSampleInfo myESampleInfo;
        MuonSignalSampleInfo myMuSampleInfo;
        std::map<string, double>::iterator eSampleItr = myESampleInfo.Xsections.begin();
        std::map<string, double>::iterator mSampleItr = myMuSampleInfo.Xsections.begin();
        for (; eSampleItr != myESampleInfo.Xsections.end(); eSampleItr++, mSampleItr++) {
            if (eSampleItr->first == "w" || eSampleItr->first == "dy") {
                TH1* hist = GetCosThetaPlot(eSampleItr->first, prefix, suffix, histName, dirName, 10);
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
            } else {// be careful with channel
                TH1* bkginsignal = 0;
                DistributionProducerFromSelected* myDist = 0;
                if (channel == "electron") {
                    bkginsignal = GetCosThetaPlot(eSampleItr->first, prefix, suffix, histName, dirName, 10);
                    bkginsignal->Sumw2();
                    myDist = new DistributionProducerFromSelected(bkginsignal, string(eSampleItr->first)
                            , Lumi);
                    myDist->SetBasicValues(myESampleInfo.Xsections[eSampleItr->first],
                            myESampleInfo.N0[eSampleItr->first], bkginsignal->GetEntries());
                    bkginsignal->Scale(float(Lumi * eSampleItr->second) / float(myESampleInfo.N0[eSampleItr->first]));
                } else if (channel == "muon") {
                    bkginsignal = GetCosThetaPlot(mSampleItr->first, prefix, suffix, histName, dirName, 10);
                    bkginsignal->Sumw2();
                    myDist = new DistributionProducerFromSelected(bkginsignal, string(mSampleItr->first)
                            , Lumi);
                    myDist->SetBasicValues(myMuSampleInfo.Xsections[mSampleItr->first],
                            myMuSampleInfo.N0[mSampleItr->first], bkginsignal->GetEntries());
                    bkginsignal->Scale(float(Lumi * mSampleItr->second) / float(myMuSampleInfo.N0[mSampleItr->first]));
                }
                bkg_samples[eSampleItr->first] = myDist;
                if (bkg != 0)
                    bkg->Add(bkginsignal);
                else {
                    cout << "WARNING: CHECK BKG SCENARIO \n\t first put w, dy, ... in the input list" << endl;
                    bkg = (TH1*) bkginsignal->Clone(string(Name + "_bkginsig").c_str());
                }
                cout << "bkginSignal is added " << mSampleItr->first << endl;
            }
        }
    }

    virtual void addSamples(double Lumi = 1) {
        this->addFlatBkgs(Lumi);
        //filling the vectors
        ElectronSignalSampleInfo myESampleInfo;
        MuonSignalSampleInfo myMuSampleInfo;
        std::map<string, double>::iterator eSampleItr = myESampleInfo.Xsections.begin();
        std::map<string, double>::iterator mSampleItr = myMuSampleInfo.Xsections.begin();
        for (; eSampleItr != myESampleInfo.Xsections.end(); eSampleItr++, mSampleItr++) {
            if (eSampleItr->first == string("dy") || eSampleItr->first == string("w"))
                continue;
            bool isDitop = this->isDiTop(eSampleItr->first);
            cout << "for 3D, the name should contain mu: " << eSampleItr->first
                    << "\t" << isDitop << endl;
            TH2* histIID = 0;
            if (!this->isDiTop(eSampleItr->first)) {
                cout << "it is not ditop" << endl;
                if (channel == "electron") {
                    histIID = (TH2*) GetCosThetaPlot(eSampleItr->first, prefix, suffix, histName, dirName, 10, /*is2D*/true);
                    histIID->Sumw2();
                    DistributionProducerFromSelected* myDist2D = new DistributionProducerFromSelected(histIID
                            , string(eSampleItr->first), Lumi, true);
                    myDist2D->SetBasicValues(myESampleInfo.Xsections[eSampleItr->first],
                            myESampleInfo.N0[eSampleItr->first], histIID->GetEntries());
                    histIID->Scale(float(Lumi * eSampleItr->second) / float(myESampleInfo.N0[eSampleItr->first]));
                    signal_samples[eSampleItr->first] = myDist2D;
                }
                if (channel == "muon") {
                    histIID = (TH2*) GetCosThetaPlot(mSampleItr->first, prefix, suffix, histName, dirName, 10, /*is2D*/true);
                    histIID->Sumw2();
                    DistributionProducerFromSelected* myDist2D = new DistributionProducerFromSelected(histIID
                            , string(mSampleItr->first), Lumi, true);
                    myDist2D->SetBasicValues(myMuSampleInfo.Xsections[mSampleItr->first],
                            myMuSampleInfo.N0[mSampleItr->first], histIID->GetEntries());
                    histIID->Scale(float(Lumi * mSampleItr->second) / float(myMuSampleInfo.N0[mSampleItr->first]));
                    signal_samples[mSampleItr->first] = myDist2D;
                }
                signalIID.push_back((TH2*) histIID->Clone(std::string("MyTwoD_" + Name + "_" + eSampleItr->first + "_" +
                        std::string(histIID->GetName())).c_str()));
            } else {
                cout << "it is ditop" << endl;
                TH3* histIIID = 0;
                if (channel == "electron") {
                    histIIID = (TH3*) GetCosThetaPlot(eSampleItr->first, prefix, suffix, histName, dirName,
                            10, /*is2D*/false, /*is3D*/true);
                    histIIID->Sumw2();
                    DistributionProducerFromSelected* myDist3D = new DistributionProducerFromSelected(histIIID
                            , string(eSampleItr->first), Lumi, false, true);
                    myDist3D->SetBasicValues(myESampleInfo.Xsections[eSampleItr->first],
                            myESampleInfo.N0[eSampleItr->first], histIID->GetEntries());
                    signal_samples[eSampleItr->first] = myDist3D;
                    histIIID->Scale(float(Lumi * eSampleItr->second) / float(myESampleInfo.N0[eSampleItr->first]));
                }
                if (channel == "muon") {
                    histIIID = (TH3*) GetCosThetaPlot(mSampleItr->first, prefix, suffix, histName, dirName,
                            10, /*is2D*/false, /*is3D*/true);
                    histIIID->Sumw2();
                    DistributionProducerFromSelected* myDist3D = new DistributionProducerFromSelected(histIIID
                            , string(mSampleItr->first), Lumi, false, true);
                    myDist3D->SetBasicValues(myMuSampleInfo.Xsections[mSampleItr->first],
                            myMuSampleInfo.N0[mSampleItr->first], histIID->GetEntries());
                    signal_samples[mSampleItr->first] = myDist3D;
                    histIIID->Scale(float(Lumi * mSampleItr->second) / float(myMuSampleInfo.N0[mSampleItr->first]));
                }
                signalIIID.push_back((TH3*) histIIID->Clone(std::string("MyThreeD_" + Name + "_" + eSampleItr->first + "_" +
                        std::string(histIIID->GetName())).c_str()));
            }
        }
    }

    virtual TH1* GetBkgPartial(int nPEX) {
        stringstream name__;
        name__ << "CosTheta_bkg_" << nPEX;
        stringstream title__;
        title__ << "noWtb cos(#theta) : PEX=" << nPEX;
        TH1* hSumBGPartial = new TH1D(name__.str().c_str(), title__.str().c_str(), bkg->GetYaxis()->GetNbins()
                , bkg->GetYaxis()->GetXmin(), bkg->GetYaxis()->GetXmax());
        hSumBGPartial->Sumw2();
        std::map<string, DistributionProducerFromSelected*>::iterator bkgItr = bkg_samples.begin();
        cout << "--------GetBkgPartial--------- " << nPEX << endl;
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
        hSumBGPartial->SetName(string(Name + "_" + string(hSumBGPartial->GetName())).c_str());
        return hSumBGPartial;
    }

    virtual TH1* GetPullBkgPartial(int nPEXPull) {
        stringstream name__;
        name__ << "CosTheta_bkg_" << nPEXPull;
        stringstream title__;
        title__ << "noWtb cos(#theta) : PEX=" << nPEXPull;
        TH1* hData = new TH1D(name__.str().c_str(), title__.str().c_str(), bkg->GetYaxis()->GetNbins()
                , bkg->GetYaxis()->GetXmin(), bkg->GetYaxis()->GetXmax());
        hData->Sumw2();
        cout << "--------GetPullBkgPartial--------- " << nPEXPull << endl;
        std::map<string, DistributionProducerFromSelected*>::iterator bkgItr = bkg_samples.begin();
        for (; bkgItr != bkg_samples.end(); bkgItr++) {
            TH1* tmp = bkgItr->second->GeneratePartialSampleLumiEQ(nPEXPull);
            hData->Add(tmp);
            delete tmp;
        }
        hData->SetName(string(Name + "_" + string(hData->GetName())).c_str());
        return hData;
    }

    virtual void SetSigPartialCollection(int nPEX) {
        stringstream name2D__;
        stringstream title__;
        name2D__.str("");
        name2D__ << Name << "_CosTheta_signal_32D_" << nPEX;
        title__.str("");
        title__ << "Wtb cos(#theta) : PEX=" << nPEX;
        std::map<string, DistributionProducerFromSelected*> ::iterator sigItr = signal_samples.begin();
        signalIIDPartial.clear();
        signalIIIDPartial.clear();
        for (; sigItr != signal_samples.end(); sigItr++) {
            if (!this->isDiTop(sigItr->first)) {
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

    virtual TH1* GetPullSignalPartial(int nPEXPull) {
        stringstream name__;
        stringstream title__;
        name__.str("");
        name__ << Name << "_CosTheta_signal_32D_" << nPEXPull;
        title__.str("");
        title__ << "Wtb cos(#theta) : PEXPull =" << nPEXPull;
        TH1* hData = new TH1D(name__.str().c_str(), title__.str().c_str(), bkg->GetYaxis()->GetNbins()
                , bkg->GetYaxis()->GetXmin(), bkg->GetYaxis()->GetXmax());
        hData->Sumw2();
        std::map<string, DistributionProducerFromSelected*> ::iterator sigItr = signal_samples.begin();

        for (; sigItr != signal_samples.end(); sigItr++) {
            if (!this->isDiTop(sigItr->first)) {
                TH2* tmp1 = (TH2*) sigItr->second->GeneratePartialSampleLumiEQ(nPEXPull);
                TH1* tmp = tmp1->ProjectionY("tmp");
                hData->Add(tmp);
                delete tmp1;
                delete tmp;
            } else {
                TH3* tmp1 = (TH3*) sigItr->second->GeneratePartialSampleLumiEQ(nPEXPull);
                TH1* tmp = tmp1->Project3D("y");
                hData->Add(tmp);
                delete tmp1;
                delete tmp;
            }
        }
        return hData;
    }

    virtual TH1* GetPsuedoData(int nPEX, double iFNeg, double iF0, TH1* myBkg) {
        WtbWeightor.first.SetParameters(iF0, iFNeg);
        stringstream name__;
        name__ << Name << "_PDforPEX_" << nPEX << "_" << iF0 << "_" << iFNeg;
        stringstream title__;
        title__ << "Psuedo Data for PEX_" << nPEX << "_" << iF0 << "_" << iFNeg;
        stringstream name2D__;
        TH1* SIGinPEX = new TH1D(name__.str().c_str(), title__.str().c_str(), signalIID.at(0)->GetYaxis()->GetNbins()
                , signalIID.at(0)->GetYaxis()->GetXmin(), signalIID.at(0)->GetYaxis()->GetXmax());
        SIGinPEX->Sumw2();
        SIGinPEX->SetTitle(title__.str().c_str());
        for (int iBin = 0; iBin < SIGinPEX->GetXaxis()->GetNbins(); iBin++) {
            double iContent = 0;
            for (unsigned int iSample = 0; iSample < signalIIDPartial.size(); iSample++) {
                name2D__.str("");
                name2D__ << signalIIDPartial.at(iSample)->GetName() << "_" << iFNeg << "_" << iBin;
                TH1* sigProjectionX = signalIIDPartial.at(iSample)->ProjectionX(name2D__.str().c_str(), iBin + 1, iBin + 1);
                sigProjectionX->SetTitle(title__.str().c_str());
                sigProjectionX->Multiply(&WtbWeightor.first, 1);
                iContent += sigProjectionX->Integral();
                delete sigProjectionX;
            }
            for (unsigned int iSample = 0; iSample < signalIIIDPartial.size(); iSample++) {
                name2D__.str("");
                name2D__ << Name << "_" << signalIIIDPartial.at(iSample)->GetName() << "_" << iFNeg
                        << "_" << iBin;
                TH1D * coefficients = new TH1D("tmp", "tmp",
                        signalIIIDPartial.at(iSample)->GetXaxis()->GetNbins(),
                        signalIIIDPartial.at(iSample)->GetXaxis()->GetXmin(),
                        signalIIIDPartial.at(iSample)->GetXaxis()->GetXmax());
                for (int genBin = 0; genBin < signalIIIDPartial.at(iSample)->GetXaxis()->GetNbins(); genBin++) {
                    TH1* sigProjectionZ = ((TH3*) signalIIIDPartial.at(iSample))->ProjectionZ(
                            name2D__.str().c_str(), genBin + 1, genBin + 1, iBin + 1, iBin + 1, "o");
                    sigProjectionZ->Multiply(&(WtbWeightor.first), 1);
                    coefficients->SetBinContent(genBin + 1, sigProjectionZ->Integral());
                    delete sigProjectionZ;
                }
                coefficients->Multiply(&(WtbWeightor.first), 1);
                iContent += coefficients->Integral();
                delete coefficients;
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
            TH1* myBkg = this->GetBkgPartial(nPEX);
            this->SetSigPartialCollection(nPEX);

            stringstream name__;
            for (int i = 0; i < nSteps; i++) {
                if (FNegValueSteps[i] > (1.0 - FposFixed))
                    continue;
                double F0Value = 1.0 - FposFixed - FNegValueSteps[i];
                name__.str("");
                name__ << Name << "_myLL_" << nPEX << "_" << FNegValueSteps[i] << "_" << F0Value;
                TH1* PD = this->GetPsuedoData(nPEX, FNegValueSteps[i], F0Value, myBkg);
                std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray = LikelihoodFunction::getLLFunctionForBias(
                        string("F_" + name__.str()), bkg, PD, signalIID, signalIIID);
                TF3 LLinPEXforFNegValue = LLinPEXforFNegValueArray.first;
                double x[3] = {-1., -1., -1.};
                double xerr[3] = {-1., -1., -1.};
                double correlation12 = -1000;
                GetMinimum(LLinPEXforFNegValue, x, xerr, correlation12, false);
                hFinalF0->Fill(F0Value, x[0]);
                hFinalFNeg->Fill(FNegValueSteps[i], x[1]);
                hFinalFPos->Fill(nPEX, 1.0 - x[0] - x[1]);
                delete PD;
                delete LLinPEXforFNegValueArray.second;
            }
            delete myBkg;
            for (unsigned int iP2D = 0; iP2D < signalIIDPartial.size(); iP2D++)
                delete signalIIDPartial[iP2D];
            for (unsigned int iP3D = 0; iP3D < signalIIIDPartial.size(); iP3D++)
                delete signalIIIDPartial[iP3D];
            signalIIDPartial.clear();
            signalIIIDPartial.clear();
        }
    }

    virtual void doBiasCheck(int StartPEX, int LPEX, int nSteps = 300) {
        ElectronSignalSampleInfo myESampleInfo;
        double FNegValueSteps[nSteps];
        for (int i = 0; i < nSteps; i++) {
            FNegValueSteps[i] = float(i) / (float) nSteps;
        }
        std::vector<TH2*> tmp2D3DSignal;
        for (unsigned int iTwoDSignal = 0; iTwoDSignal < signalIID.size(); iTwoDSignal++) {
            tmp2D3DSignal.push_back(new TH2D(*((TH2D*) signalIID.at(iTwoDSignal))));
        }
        for (unsigned int iTwoDSignal = 0; iTwoDSignal < signalIIID.size(); iTwoDSignal++) {
            tmp2D3DSignal.push_back((TH2*) ((TH3*) signalIIID.at(iTwoDSignal))->Project3D("yx"));
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
            TH1* myBkg = this->GetBkgPartial(nPEX);
            this->SetSigPartialCollection(nPEX);

            stringstream name__;
            for (int i = 0; i < nSteps; i++) {
                if (FNegValueSteps[i] > (1.0 - FposFixed))
                    continue;
                double F0Value = 1.0 - FposFixed - FNegValueSteps[i];
                name__.str("");
                name__ << Name << "_myLL_" << nPEX << "_" << FNegValueSteps[i] << "_" << F0Value;
                TH1* PD = this->GetPsuedoData(nPEX, FNegValueSteps[i], F0Value, myBkg);
                std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray = LikelihoodFunction::getLLFunctionGeneralized(
                        string("F_" + name__.str()), bkg, PD, tmp2D3DSignal);
                TF3 LLinPEXforFNegValue = LLinPEXforFNegValueArray.first;
                double x[3] = {-1., -1., -1.};
                double xerr[3] = {-1., -1., -1.};
                double correlation12 = -1000;
                GetMinimum(LLinPEXforFNegValue, x, xerr, correlation12, false);
                hFinalF0->Fill(F0Value, x[0]);
                hFinalFNeg->Fill(FNegValueSteps[i], x[1]);
                hFinalFPos->Fill(nPEX, 1.0 - x[0] - x[1]);
                delete PD;
                delete LLinPEXforFNegValueArray.second;
            }
            delete myBkg;
            for (unsigned int iP2D = 0; iP2D < signalIIDPartial.size(); iP2D++)
                delete signalIIDPartial[iP2D];
            for (unsigned int iP3D = 0; iP3D < signalIIIDPartial.size(); iP3D++)
                delete signalIIIDPartial[iP3D];
            signalIIDPartial.clear();
            signalIIIDPartial.clear();
        }
        for (unsigned int iP2D = 0; iP2D < tmp2D3DSignal.size(); iP2D++)
            delete tmp2D3DSignal[iP2D];
        tmp2D3DSignal.clear();
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
            TH1* hData = this->GetPullBkgPartial(nPEXPull);
            hData->Add(this->GetPullSignalPartial(nPEXPull));
            std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray = LikelihoodFunction::getLLFunctionForBias(
                    string("F_" + name__.str()), bkg, hData, signalIID, signalIIID);
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

    virtual void WriteAll(string outDir, int StartPEX, int LPEX, int StartPEXPull, int LPEXPull) {
        stringstream outName;
        outName << outDir << Name << "_" << channel << "_Linearity_start-" << StartPEX << "-length-"
                << LPEX << "_Pull_start-" << StartPEXPull << "-length-" << LPEXPull << ".root";
        TFile * f = new TFile(outName.str().c_str(), "recreate");
        f->cd();
        hFinalFNeg->Write();
        hFinalF0->Write();
        hFinalFPos->Write();

        hPullFNeg->Write();
        hPullF0->Write();
        hPullFPos->Write();
        hPullFResp->Write();

        hResFNeg->Write();
        hResF0->Write();
        hResFPos->Write();
        hResFResp->Write();
        f->Write();
        f->Close();
    }

    bool isDiTop(string name) {
        if (name == string("mue"))
            return true;
        if(this->channel == "electron"){
            if (name == string("die"))
                return true;
            if (name == string("ehad"))
                return true;
            if (name == string("etau"))
                return true;
        } else if(channel == "muon"){
            if (name == string("dimu"))
                return true;
            if (name == string("muhad"))
                return true;
            if (name == string("mutau"))
                return true;
        }
        return false;
    }

    TH1* GetBkgMC()const {
        return bkg;
    }
protected:
    string Name, prefix, suffix, histName, dirName;
    string channel;
    int nBins;
    TH2D * hFinalFNeg;
    TH2D * hFinalF0;
    TH2D * hFinalFPos;

    TH1D* hPullFNeg;
    TH1D* hPullF0;
    TH1D* hPullFPos;
    TH1D* hPullFResp;

    TH1D* hResFNeg;
    TH1D* hResF0;
    TH1D* hResFPos;
    TH1D* hResFResp;

    std::pair<TF1, WeightFunctionCreator*> WtbWeightor;
    double FposFixed;
    TH1* bkg;
    std::vector<TH2*> signalIID;
    std::vector<TH3*> signalIIID;
    std::vector<TH2*> signalIIDPartial;
    std::vector<TH3*> signalIIIDPartial;
    std::map<string, DistributionProducerFromSelected*> bkg_samples;
    std::map<string, DistributionProducerFromSelected*> signal_samples;
};


#endif	/* BASELINEARITYCHEKER_H */

