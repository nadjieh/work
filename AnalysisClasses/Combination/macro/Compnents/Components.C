/* 
 * File:   MultiDimFitTest.C
 * Author: nadjieh
 *
 * Created on June 9, 2012, 1:11 PM
 */
#include "../../../BackgroundStudies/interface/MultiDimensionalFit.h"
#include "/opt/root/math/mathcore/inc/Math/Functor.h"
#include "TH1.h"
#include "TF1.h"
#include "TH2.h"
#include "TFile.h"
#include "../../interface/UsefullStructsForCombination.h"
#include <string>
#include <iostream>
#include <sstream>
#include "TRandom.h"
#include "../../interface/WHelicityComponents.h"

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
    bool do3D = true;
    int nReBin = 10;
    TFile * file = 0;
    std::vector<double> pars;
    string addname = "";

    double nW7 = 0;
    //    cout << pars[0] << "\t" << pars[1] << "\t" << pars[2] << "\t" << pars[3] << "\t" << endl;



    double F0_ = 0;
    double FL_ = 0;

    string channel = "";
    std::vector<string> namings;
    std::map<string, double> sampleinfo;
    int dim = 2;
    TH1D* ratio = 0;
    double iRandom = 0;
    double nTop = 1.;
    for (int f = 1; f < argc; f++) {
        std::string arg_fth(*(argv + f));
        cout << f << " ---- " << arg_fth << endl;
        if (arg_fth == "channel") {
            f++;
            std::string out(*(argv + f));
            channel = out; //e-mu
            namings.push_back(string("di") + channel);
            namings.push_back(channel + string("had"));
            namings.push_back(channel + string("tau"));
            namings.push_back("mue");
        } else if (arg_fth == "FL") {
            f++;
            std::string out(*(argv + f));
            FL_ = atof(out.c_str());
        } else if (arg_fth == "F0") {
            f++;
            std::string out(*(argv + f));
            F0_ = atof(out.c_str());
        } else if (arg_fth == "nW7") {
            f++;
            std::string out(*(argv + f));
            nW7 = atof(out.c_str());
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
                signalIID.push_back(((TH2*) file->Get("Default_allW/Default_allWcosTheta2D"))->RebinY(nReBin));
                //                signalIID.at(signalIID.size() - 1)->Scale(ratio);
                //                cout << signalIID.at(signalIID.size() - 1)->GetName() << endl;
            }//                else
            //                signalIID.push_back(((TH2*) ((TH3D*) file->Get("Default_allW/Default_allWcosTheta3D"))->Project3D("yx"))->Rebin2D(1,1));
            if (do3D && muonfile) {
                //                cout << " in 3D :-)" << endl;
                signalIIID.push_back(((TH3D*) file->Get("Default_allW/Default_allWcosTheta3D"))->Rebin3D(1, nReBin, 1, "newname"));
                //                cout << signalIIID.at(signalIIID.size() - 1) << endl;
                //                signalIIID.at(signalIIID.size() - 1)->Scale(ratio);
            }
            if (bkginsignal == 0)
                bkginsignal = (((TH1*) file->Get("Default_allW/Default_allWcosTheta"))->Rebin(nReBin));
            else
                bkginsignal->Add(((TH1*) file->Get("Default_allW/Default_allWcosTheta"))->Rebin(nReBin));

            TH1 * myTemp = (TH1*) (((TH1*) file->Get("Default_allW/Default_allWcosTheta")))->Clone("myTemp");
            if (iRandom == 0) {
                if (!muonfile) {
                    cout << " : " << signalIID.at(signalIID.size() - 1)->Integral() << " + " << myTemp->Integral()
                            << " = " << signalIID.at(signalIID.size() - 1)->Integral() + myTemp->Integral() << endl;
                    sampleinfo[out] = signalIID.at(signalIID.size() - 1)->Integral() + myTemp->Integral();
                } else if (do3D) {
                    cout << " : " << signalIIID.at(signalIIID.size() - 1)->Integral() << " + " << myTemp->Integral()
                            << " = " << signalIIID.at(signalIIID.size() - 1)->Integral() + myTemp->Integral() << endl;
                    sampleinfo[out] = signalIIID.at(signalIIID.size() - 1)->Integral() + myTemp->Integral();
                }
            }
            delete myTemp;

        } else if (arg_fth == "data") {
            f++;
            std::string out(*(argv + f));
            cout << "data" << endl;
            file = new TFile(out.c_str(), "read");
            data = ((TH1*) file->Get("Default_allW/Default_allWcosTheta"))->Rebin(nReBin);
            cout << data << endl;
        } else if (arg_fth == "bkg") {
            f++;
            std::string out(*(argv + f));
            cout << "bkg" << endl;
            file = new TFile(out.c_str(), "read");
            if (bkg == NULL) {
                cout << "here .." << endl;
                bkg = ((TH1*) file->Get("Default_allW/Default_allWcosTheta"))->Rebin(nReBin);
            } else {
                bkg->Add(((TH1*) file->Get("Default_allW/Default_allWcosTheta"))->Rebin(nReBin));
            }
        } else if (arg_fth == "wtemplate") {
            f++;
            std::string out(*(argv + f));
            cout << "w template" << endl;
            file = new TFile(out.c_str(), "read");
            cout << out << "\t";
            wtemplate = ((TH1*) file->Get("Default_allW/Default_allWcosTheta"));
            cout << wtemplate << endl;
            wtemplate->Rebin(nReBin);
        } else if (arg_fth == "dim") {
            f++;
            std::string out(*(argv + f));
            dim = (int) atof(out.c_str());
        } else if (arg_fth == "ratio") {
            f++;
            std::string out(*(argv + f));
            TFile* f_ = TFile::Open(out.c_str());
            ratio = (TH1D*) f_->Get("Ratio");
        } else if (arg_fth == "name") {
            f++;
            std::string out(*(argv + f));
            addname = out;
        } else if (arg_fth == "ntop") {
            f++;
            std::string out(*(argv + f));
            nTop = (double)atof(out.c_str());
        }
    }
    cout << bkg << "\t" << data << "\t" << wtemplate << endl;
    wtemplate->Sumw2();
    wtemplate->Scale((double) 1. / (double) wtemplate->Integral());

    cout << "In Bias fit: \n\tsize of 2D signal is " << signalIID.size() <<
            "\n\tsize of 3D signal is " << signalIIID.size() << endl;
    cout << "bkginsignal: " << bkginsignal->Integral() << " bkg: " << bkg->Integral() << endl;
    if (bkg != NULL && bkginsignal != NULL) {
        bkg->Add(bkginsignal);
    } else if (bkg == NULL && bkginsignal != NULL) {
        bkg = (TH1*) bkginsignal->Clone("myBkg");
    }
    //        bkg->Scale(ratio);
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
    cout << nSignal << endl;
    WTempForCombination3D my3DInput;
    my3DInput.Wtemplate = (TH1*) wtemplate->Clone("Wtemp_Syst"); //normal
    my3DInput.rest.data = data;
    my3DInput.rest.nonRWs = bkg;
    my3DInput.rest.signalIID = signalIID;
    my3DInput.rest.signalIIID = signalIIID;


    pars.push_back(F0_);
    pars.push_back(FL_);
    pars.push_back(nTop);
    pars.push_back(nW7);

    stringstream pnam;
    pnam << channel << "_" << addname << dim << "_Components2";
    cout << "Ratio: " << ratio << endl;
    WHelicityComponents myComponents(pnam.str(), pars, my3DInput, dim, ratio);

    TF1 * myFunc = myComponents.GetCosThetaAfterFit();
    TH1D * bkg_ = (TH1D*) myComponents.GetBackground();
    TH2D * matrix = (TH2D*) myComponents.GetRMatrix();
    TH2D * stmatrix = (TH2D*) myComponents.GetSingleTopMatrix();
    TH3D * tmatrix = (TH3D*) myComponents.GetTopMatrix();
    TH1D * subtracted = (TH1D*) myComponents.GetSubtractedHist();
    TH1D * unfHist = (TH1D*) myComponents.GetUnfoldedHistogram();
    TH1D * unfHistSt = (TH1D*) myComponents.GetSingletopUnfolded();
    TH1D * unfHistT = (TH1D*) myComponents.GetTopUnfolded();
    TH1D * f0Hist = (TH1D*) myComponents.GetComponent(0);
    TH1D * flHist = (TH1D*) myComponents.GetComponent(1);
    TH1D * frHist = (TH1D*) myComponents.GetComponent(2);
    TH1D * f0HistSt = (TH1D*) myComponents.GetSingleTopComponent(0);
    TH1D * flHistSt = (TH1D*) myComponents.GetSingleTopComponent(1);
    TH1D * frHistSt = (TH1D*) myComponents.GetSingleTopComponent(2);
    TH1D * f0HistT = (TH1D*) myComponents.GetTopComponent(0);
    TH1D * flHistT = (TH1D*) myComponents.GetTopComponent(1);
    TH1D * frHistT = (TH1D*) myComponents.GetTopComponent(2);
    TH1D * genSig = (TH1D*) myComponents.GetGenSignal();
    TFile * f = new TFile(string(myComponents.GetName() + ".root").c_str(), "recreate");
    f->cd();
    myFunc->Write();
    bkg_->Write();
    matrix->Write();
    stmatrix->Write();
    tmatrix->Write();
    subtracted->Write();
    unfHist->Write();
    unfHistSt->Write();
    unfHistT->Write();
    f0Hist->Write();
    flHist->Write();
    frHist->Write();
    f0HistT->Write();
    flHistT->Write();
    frHistT->Write();
    f0HistSt->Write();
    flHistSt->Write();
    frHistSt->Write();
    genSig->Write();
    f->Write();
    f->Close();
    return 0;
}

