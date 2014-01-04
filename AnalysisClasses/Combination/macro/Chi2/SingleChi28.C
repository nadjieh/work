/* 
 * File:   MultiDimFitTest.C
 * Author: nadjieh
 *
 * Created on June 9, 2012, 1:11 PM
 */
#include "../../../BackgroundStudies/interface/MultiDimensionalFit.h"
#include "/opt/root/math/mathcore/inc/Math/Functor.h"
#include "TH1.h"
#include "TFile.h"
#include "../../interface/UsefullStructsForCombination.h"
#include <string>
#include <iostream>
#include "TRandom.h"
#include "../../interface/WhelFitChiSquared.h"

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
    double nTop7 = 1.;
    double nW8 = 0;
    double nW7 = 0;
    //    cout << pars[0] << "\t" << pars[1] << "\t" << pars[2] << "\t" << pars[3] << "\t" << endl;
    double delStatF0 = 0;
    double delStatFL = 0;

    double delSystF0 = 0;
    double delSystFL = 0;
    double F0_ = 0;
    double FL_ = 0;
    double delTotF0 = 0;
    double delTotFL = 0;
    string channel = "";
    std::vector<string> namings;
    std::map<string, double> sampleinfo;
    double iRandom = 0;
    string addname = "";
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
        } else if (arg_fth == "F0Stat") {
            f++;
            std::string out(*(argv + f));
            delStatF0 = atof(out.c_str());
        } else if (arg_fth == "FLStat") {
            f++;
            std::string out(*(argv + f));
            delStatFL = atof(out.c_str());
        } else if (arg_fth == "F0Syst") {
            f++;
            std::string out(*(argv + f));
            delSystF0 = atof(out.c_str());
        } else if (arg_fth == "FLSyst") {
            f++;
            std::string out(*(argv + f));
            delSystFL = atof(out.c_str());
        } else if (arg_fth == "F0Tot") {
            f++;
            std::string out(*(argv + f));
            delTotF0 = atof(out.c_str());
        } else if (arg_fth == "FLTot") {
            f++;
            std::string out(*(argv + f));
            delTotFL = atof(out.c_str());
        } else if (arg_fth == "nW7") {
            f++;
            std::string out(*(argv + f));
            nW7 = atof(out.c_str());
        } else if (arg_fth == "ntop7") {
            f++;
            std::string out(*(argv + f));
            nTop7 = atof(out.c_str());
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
        } else if (arg_fth == "name") {
            f++;
            std::string out(*(argv + f));
            addname = out;
        }
    }
    cout << bkg << "\t" << data << "\t" << wtemplate << endl;
    wtemplate->Sumw2();
    wtemplate->Scale((double) 1. / (double) wtemplate->Integral());
    data->Print();

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
    pars.push_back(nTop7);
    pars.push_back(nW7);

    ChiSquaredCaculatorAndPlotter myChi2Syst(channel + string("_Chi2Syst_") + addname, pars, my3DInput, delSystF0, delSystFL);
    myChi2Syst.PrintOut();
    cout << "ChiSquared: " << myChi2Syst.GetChiSquared() << endl;
    cout << "NormalChiSquared: " << myChi2Syst.GetNormalizedChiSquared() << endl;
    myChi2Syst.WriteInfo();

    my3DInput.Wtemplate = (TH1*) wtemplate->Clone("Wtemp_Stat"); //normal
    ChiSquaredCaculatorAndPlotter myChi2Stat(channel + string("_Chi2Stat_") + addname, pars, my3DInput, delStatF0, delStatFL);
    myChi2Stat.PrintOut();
    cout << "ChiSquared: " << myChi2Stat.GetChiSquared() << endl;
    cout << "NormalChiSquared: " << myChi2Stat.GetNormalizedChiSquared() << endl;
    myChi2Stat.WriteInfo();

    my3DInput.Wtemplate = (TH1*) wtemplate->Clone("Wtemp_total"); //normal
    ChiSquaredCaculatorAndPlotter myChi2total(channel + string("_Chi2total_") + addname, pars, my3DInput, delTotF0, delTotFL);
    myChi2total.PrintOut();
    cout << "ChiSquared: " << myChi2total.GetChiSquared() << endl;
    cout << "NormalChiSquared: " << myChi2total.GetNormalizedChiSquared() << endl;
    myChi2total.WriteInfo();



    return 0;
}

