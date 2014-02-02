/* 
 * File:   MultiDimFitTest.C
 * Author: nadjieh
 *
 * Created on June 9, 2012, 1:11 PM
 */
#include "../interface/MultiDimensionalFit.h"
#include "/opt/root/math/mathcore/inc/Math/Functor.h"
#include "TH1.h"
#include "TFile.h"
#include "../../Combination/interface/UsefullStructsForCombination.h"
#include <string>
#include <iostream>
#include "TRandom.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    TH1* data;
    std::vector<TH2*> signalIID; // for munub t-processes
    std::vector<TH3*> signalIIID; // for munub t-processes
    TH1* bkginsignal = 0; //for t-processes other than munub
    TH1* bkg = 0; // for non-t processes
    TH1* wtemplate = 0;
    TH1* toptemplate = 0;
    std::vector<TH2*> tmpsignalIID; // for munub t-processes
    std::vector<TH3*> tmpsignalIIID; // for munub t-processes
    bool singleMatrix = false;
    bool is2Drecgen = false;
    bool do3D = false;
    int iRandom = 0;
    int nReBin = 10;
    int nReBinX = 1;
    TFile * file = 0;
    std::map<string, double> sampleinfo;
    //2870.81/3064.80
    double ratio = 1.; //0.976435; //2870.81 / (2.98521000000000004e+03); //1;//4462.610 / 4268.66;
    std::string channel = "";
    std::vector<std::string> namings;
    string directory = "";
    for (int f = 1; f < argc; f++) {
        std::string arg_fth(*(argv + f));
        if (iRandom == 0)
            cout << f << " ---- " << arg_fth << endl;
        if (arg_fth == "directory") {
            f++;
            std::string out(*(argv + f));
            directory = out + "/" + out + "cosTheta";
        } else if (arg_fth == "nbin") {
            f++;
            std::string out(*(argv + f));
            nReBin = atof(out.c_str());
        } else if (arg_fth == "channel") {
            f++;
            std::string out(*(argv + f));
            channel = out; //e-mu
            namings.push_back(string("di") + channel);
            namings.push_back(channel + string("had"));
            namings.push_back(channel + string("tau"));
            namings.push_back("mue");
        } else if (arg_fth == "signal") {
            f++;
            std::string out(*(argv + f));
            file = new TFile(out.c_str(), "read");
            bool muonfile = false;
            for (unsigned int i = 0; i < namings.size(); i++) {
                int pos = string(file->GetName()).find(namings[i].c_str());
                muonfile = (pos >= 0 && pos < string(file->GetName()).size());
                if (muonfile) {
                    if (iRandom == 0) {
                        cout << "I am in " << channel << " channel and I accept ";
                        cout << file->GetName() << " as signal" << endl;
                    }
                    break;
                }
            }

            if (!do3D || (do3D && !muonfile)) {
                tmpsignalIID.push_back(((TH2*) file->Get(string(directory + "2D").c_str()))->RebinY(nReBin));
                tmpsignalIID[tmpsignalIID.size() - 1]->RebinX(nReBinX);
                tmpsignalIID.at(tmpsignalIID.size() - 1)->Scale(ratio);
                //                cout << tmpsignalIID.at(tmpsignalIID.size() - 1)->GetName() << endl;
            }//                else
            //                tmpsignalIID.push_back(((TH2*) ((TH3D*) file->Get("Default_allW/Default_allWcosTheta3D"))->Project3D("yx"))->Rebin2D(1,1));
            if (do3D && muonfile) {
                //                cout << " in 3D :-)" << endl;
                tmpsignalIIID.push_back(((TH3D*) file->Get(string(directory + "3D").c_str()))->Rebin3D(1, nReBin, 1, "newname"));
                //                cout << tmpsignalIIID.at(tmpsignalIIID.size() - 1) << endl;
                tmpsignalIIID.at(tmpsignalIIID.size() - 1)->Scale(ratio);
            }
            if (bkginsignal == 0)
                bkginsignal = (((TH1*) file->Get(directory.c_str()))->Rebin(nReBin));
            else
                bkginsignal->Add(((TH1*) file->Get(directory.c_str()))->Rebin(nReBin));

            TH1 * myTemp = (TH1*) (((TH1*) file->Get(directory.c_str())))->Clone("myTemp");
            if (iRandom == 0) {
                if (!muonfile) {
                    cout << " : " << tmpsignalIID.at(tmpsignalIID.size() - 1)->Integral() << " + " << myTemp->Integral()
                            << " = " << tmpsignalIID.at(tmpsignalIID.size() - 1)->Integral() + myTemp->Integral() << endl;
                    sampleinfo[out] = tmpsignalIID.at(tmpsignalIID.size() - 1)->Integral() + myTemp->Integral();
                } else if (do3D) {
                    cout << " : " << tmpsignalIIID.at(tmpsignalIIID.size() - 1)->Integral() << " + " << myTemp->Integral()
                            << " = " << tmpsignalIIID.at(tmpsignalIIID.size() - 1)->Integral() + myTemp->Integral() << endl;
                    sampleinfo[out] = tmpsignalIIID.at(tmpsignalIIID.size() - 1)->Integral() + myTemp->Integral();
                }
            }
            delete myTemp;

        } else if (arg_fth == "data") {
            f++;
            std::string out(*(argv + f));
            if (iRandom == 0)
                cout << "data" << endl;
            file = new TFile(out.c_str(), "read");
            data = ((TH1*) file->Get(directory.c_str()))->Rebin(nReBin);
            if (iRandom == 0)
                cout << data << endl;
        } else if (arg_fth == "bkg") {
            f++;
            std::string out(*(argv + f));
            if (iRandom == 0)
                cout << "bkg" << endl;
            file = new TFile(out.c_str(), "read");
            cout << ((TH1*) file->Get(directory.c_str()))->Integral() << endl;
            bool myQCD = (out.find("_QCD.root") > 0 && fabs(out.find("_QCD.root")) < out.size());
            if (iRandom == 0)
                cout << file->GetName() << "\tmyQCD: " << myQCD << endl;
            TH1 * tmpQCD = 0;
            if (myQCD) {
                tmpQCD = ((TH1*) file->Get(directory.c_str()))->Rebin(nReBin);
                if (iRandom == 0)
                    cout << "tmpQCD: " << tmpQCD << endl;
                tmpQCD->Scale(107.5 / tmpQCD->Integral());
                if (iRandom == 0)
                    cout << out << "\thas " << tmpQCD->GetEntries() << " entries but " << tmpQCD->Integral() << " integral" << endl;
            }
            if (bkg == NULL) {
                if (iRandom == 0)
                    cout << "here .." << endl;
                if (myQCD)
                    bkg = tmpQCD;
                else
                    bkg = ((TH1*) file->Get(directory.c_str()))->Rebin(nReBin);
            } else {
                if (myQCD)
                    bkg->Add(tmpQCD);
                else
                    bkg->Add(((TH1*) file->Get(directory.c_str()))->Rebin(nReBin));
            }
        } else if (arg_fth == "wtemplate") {
            f++;
            std::string out(*(argv + f));
            if (iRandom == 0)
                cout << "w template" << endl;
            file = new TFile(out.c_str(), "read");
            if (iRandom == 0)
                cout << out << "\t";
            wtemplate = ((TH1*) file->Get(directory.c_str()));
            if (wtemplate == 0)
                wtemplate = ((TH1*) file->Get(directory.c_str()));
            //            wtemplate = ((TH1*) file->Get("btag10"));

            //            wtemplate = ((TH1*) file->Get("Default_Def/Default_DefcosTheta"))->Rebin(10);
            if (iRandom == 0)
                cout << wtemplate << endl;
            wtemplate->Rebin(nReBin);

            //            cout<<file->GetName()<<endl;
            //            file->ls();
            //            wtemplate = ((TH1*) file->Get("EtaCutBtagOrderedB/EtaCutBtagOrderedBcosTheta"));
            //            wtemplate = ((TH1*) file->Get(directory.c_str()))->Rebin(1);
            //            wtemplate = ((TH1*) file->Get("BtagOrderedB/BtagOrderedBcosTheta"));
            //            wtemplate = ((TH1*) file->Get("RandomB/RandomBcosTheta"));
            //            wtemplate = ((TH1*) file->Get("PtOrderedB/PtOrderedBcosTheta"));
        } else if (arg_fth == "toptemplate") {
            f++;
            std::string out(*(argv + f));
            cout << "top template" << endl;
            file = new TFile(out.c_str(), "read");
            toptemplate = ((TH1*) file->Get(directory.c_str()));
            //wtemplate = ((TH1*)file->Get("BtagOrderedB/BtagOrderedBcosTheta"));
            //wtemplate = ((TH1*)file->Get("PtOrderedB/PtOrderedBcosTheta"));
        } else if (arg_fth == "singleMatrix") {
            f++;
            cout << "singleMatrix" << endl;
            std::string out(*(argv + f));
            if (out == "true")
                singleMatrix = true;
        } else if (arg_fth == "is2Drecgen") {
            f++;
            if (iRandom == 0)
                cout << "is2Drecgen" << endl;
            std::string out(*(argv + f));
            if (out == "yes" || out == "Yes" || out == "Y" || out == "y"
                    || out == "YES")
                is2Drecgen = true;
        } else if (arg_fth == "do3D") {
            f++;
            if (iRandom == 0)
                cout << "do3D" << endl;
            std::string out(*(argv + f));
            if (out == "yes" || out == "Yes" || out == "Y" || out == "y"
                    || out == "YES")
                do3D = true;
        } else if (arg_fth == "nPE") {
            f++;
            if (iRandom == 0)
                cout << "nPE" << endl;
            std::string out(*(argv + f));
            iRandom = (int) atof(out.c_str());
        }
    }
    if (iRandom != 0) {
        if (iRandom == 1) {
            cout << "------------------------------" << endl;
            cout << "I will randomize the histogram" << endl;
            cout << "PE Number is " << iRandom << endl;
            cout << "------------------------------" << endl;
        }
        if (is2Drecgen && !singleMatrix && do3D) {
            //            cout << "2D randomizing: " << endl;
            for (unsigned int i = 0; i < tmpsignalIID.size(); i++) {
                signalIID.push_back((TH2*) MakeRandomHistogram(tmpsignalIID[i], iRandom, 2));
            }
            //            cout << "3D randomizing: " << endl;
            for (unsigned int i = 0; i < tmpsignalIIID.size(); i++) {
                signalIIID.push_back((TH3*) MakeRandomHistogram(tmpsignalIIID[i], iRandom, 3));
            }
        }
    } else {
        signalIID = tmpsignalIID;
        signalIIID = tmpsignalIIID;
    }
    if (iRandom == 0)
        cout << bkg << "\t" << data << "\t" << wtemplate << "\t" << toptemplate << endl;
    wtemplate->Sumw2();
    wtemplate->Scale((double) 1. / (double) wtemplate->Integral());

    //        toptemplate->Sumw2();
    //        toptemplate->Scale((double)1./(double)toptemplate->Integral());

    //    data->Print();
    double x[4] = {0.7, 0.3, 1., 1.};
    double xerr[4] = {-1., -1., -1., -1.};
    double correlation;
    if (is2Drecgen && !singleMatrix && do3D) {
        double nBKG = bkg->Integral();
        if (iRandom == 0) {
            cout << "In Bias fit: \n\tsize of 2D signal is " << signalIID.size() <<
                    "\n\tsize of 3D signal is " << signalIIID.size() << endl;
            cout << "bkginsignal: " << bkginsignal->Integral() << " bkg: " << bkg->Integral() << endl;
        }
        if (bkg != NULL && bkginsignal != NULL) {
            bkg->Add(bkginsignal);
        } else if (bkg == NULL && bkginsignal != NULL) {
            bkg = (TH1*) bkginsignal->Clone("myBkg");
        }
        bkg->Scale(ratio);
        if (iRandom == 0)
            cout << "bkg: " << bkg->Integral() << " data: " << data->Integral() << " signal: ";
        double nSignal = 0;
        for (unsigned int p = 0; p < signalIID.size(); p++) {
            nSignal += signalIID[p]->Integral();
            //            cout << signalIID[p]->Integral() << endl;
        }
        for (unsigned int p = 0; p < signalIIID.size(); p++) {
            nSignal += signalIIID[p]->Integral();
            //            cout << signalIIID[p]->Integral() << endl;
        }
        if (iRandom == 0)
            cout << nSignal << endl;
        //        cout << "------------- Befor fit for file info: " << endl;
        std::map<string, double>::iterator itr = sampleinfo.begin();
        double nS = 0;
        double nT = 0;
        double nTW = 0;
        double nTT = 0;
        for (; itr != sampleinfo.end(); itr++) {
            if (itr->first.find("TreesEle_S") == 0)
                nS += itr->second;
            else if (itr->first.find("TreesEle_TW") == 0 || itr->first.find("TreesEle_TbarW") == 0)
                nTW += itr->second;
            else if (itr->first.find("TreesEle_T") == 0)
                nT += itr->second;
            else
                nTT += itr->second;
            cout << itr->first << "\t" << itr->second << endl;
        }
        //        cout << "------ For signal we have: " << endl;
        //        cout << "------ tchannel: " << nT << endl;
        //        cout << "------ tWchannel: " << nTW << endl;
        //        cout << "------ schannel: " << nS << endl;
        //        cout << "------ tt: " << nTT << endl;
        //        cout << "------ For non WJets bkg we have: " << endl;
        //        cout << "------ Bkg: " << nBKG << endl;
        //        cout << "------------- Befor fit end file info: " << endl;
        //        for (int iBin = 0; iBin < signalIID[0]->GetYaxis()->GetNbins(); iBin++) {
        //            TH1D * tmp1Dbin = 0;
        //            for (unsigned int q = 0; q < signalIID.size(); q++) {
        //                tmp1Dbin = signalIID[q]->ProjectionY("prjec");
        //                cout<<tmp1Dbin->GetBinContent(iBin + 1)<<"\t" << tmp1Dbin->GetBinError(iBin + 1)<<endl;
        //                cout << "signal" << q << "->SetBinContent(" << iBin + 1 << ", " << tmp1Dbin->GetBinContent(iBin + 1) << ");" << endl;
        //                cout << "signalEntries" << q << "->SetBinContent(" << iBin + 1 << ", ";
        //                if (tmp1Dbin->GetBinContent(iBin + 1) != 0)
        //                    cout << pow(tmp1Dbin->GetBinContent(iBin + 1), 2) / pow(tmp1Dbin->GetBinError(iBin + 1), 2) << ");" << endl;
        //                else
        //                    cout << " 0);" << endl;
        //                delete tmp1Dbin;
        //            }
        //            for (unsigned int q = 0; q < signalIIID.size(); q++) {
        //                tmp1Dbin = signalIIID[q]->ProjectionY("prjec3");
        //                cout<<tmp1Dbin->GetBinContent(iBin + 1)<<"\t" << tmp1Dbin->GetBinError(iBin + 1)<<endl;
        //                cout << "signal3D" << q << "->SetBinContent(" << iBin + 1 << ", " << tmp1Dbin->GetBinContent(iBin + 1) << ");" << endl;
        //                cout << "signal3DEntries" << q << "->SetBinContent(" << iBin + 1 << ", ";
        //                if (tmp1Dbin->GetBinContent(iBin + 1) != 0)
        //                    cout << pow(tmp1Dbin->GetBinContent(iBin + 1), 2) / pow(tmp1Dbin->GetBinError(iBin + 1), 2) << ");" << endl;
        //                else
        //                    cout << " 0);" << endl;
        //                delete tmp1Dbin;
        //            }
        //        }
        std::pair<ROOT::Math::Functor, MultiDimensionalFitLiklihood*> myLL =
                MultiDimensionalFitLiklihood::getMDLLFunctionForBias("LL", bkg, data, signalIID, signalIIID, wtemplate, 0, -1., 1.);
        if (iRandom == 0) {
            cout << "before get minimum simple: " << endl;
            cout << "bkg bins: " << bkg->GetNbinsX() << endl;
            cout << "w bins: " << wtemplate->GetNbinsX() << endl;
            cout << "data bins: " << data->GetNbinsX() << endl;
        }
        bool show = (iRandom == 0);
        GetMinimumMD(myLL.first, x, xerr, correlation, show, true, channel);
        delete myLL.second;
    } else if (is2Drecgen && !singleMatrix) {
        cout << "In Generalized fit: \n\tsize of signal is " << signalIID.size() << endl;
        if (bkg != NULL && bkginsignal != NULL)
            bkg->Add(bkginsignal);
        cout << "bkg bins: " << bkg->GetNbinsX() << endl;
        cout << "w bins: " << wtemplate->GetNbinsX() << endl;
        cout << "data bins: " << data->GetNbinsX() << endl;
        std::pair<ROOT::Math::Functor, MultiDimensionalFitLiklihood*> myLL =
                MultiDimensionalFitLiklihood::getMDLLFunctionGeneralized("MDLL", bkg, data, signalIID, wtemplate);
        GetMinimumMD(myLL.first, x, xerr, correlation);
        delete myLL.second;
    } else if (is2Drecgen && singleMatrix) {
        cout << "single rec_gen matrix fit" << endl;
        if (bkg != NULL && bkginsignal != NULL)
            bkg->Add(bkginsignal);
        TH2* SingMSignal = 0;
        for (unsigned int p = 0; p < signalIID.size(); p++) {
            if (SingMSignal == 0)
                SingMSignal = signalIID.at(p);
            else
                SingMSignal->Add(signalIID.at(p));
        }
        std::pair<ROOT::Math::Functor, MultiDimensionalFitLiklihood*> myLL =
                MultiDimensionalFitLiklihood::getMDLLFunction("LL", bkg, data, SingMSignal, wtemplate, true);
        GetMinimumMD(myLL.first, x, xerr, correlation);
        delete myLL.second;
    } else if (!is2Drecgen) {
        cout << "no rec_gen matrix fit" << endl;
        TH1* Signal1D = 0;
        stringstream s;
        for (unsigned int p = 0; p < signalIID.size(); p++) {
            s.str("");
            s << p << "_pY";
            if (Signal1D == 0)
                Signal1D = (TH1*) signalIID.at(p)->ProjectionY(s.str().c_str());
            else
                Signal1D->Add((TH1*) signalIID.at(p)->ProjectionY(s.str().c_str()));
        }
        //        Signal1D->Scale(0.96 / 0.95);
        //        bkg->Scale(0.96 / 0.95);
        if (bkginsignal != NULL)
            //            bkg->Add(bkginsignal);        
            Signal1D->Add(bkginsignal);
        cout << "Data: " << data->Integral() << "\tSignal: " << Signal1D->Integral() << "\tbkg: " << bkg->Integral() << endl;
        std::pair<ROOT::Math::Functor, MultiDimensionalFitLiklihood*> myLL =
                MultiDimensionalFitLiklihood::getMDLLFunction("LL", bkg, data, Signal1D, wtemplate);
        GetMinimumMD(myLL.first, x, xerr, correlation);
        delete myLL.second;
    }

    //    double x[5]    = {0.7,0.3,1.,1.,1.};
    //    double xerr[5] = {-1.,-1.,-1.,-1.,-1.};


    return 0;
}

