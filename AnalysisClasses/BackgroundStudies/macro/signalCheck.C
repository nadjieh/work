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
#include <sstream>
#include <iostream>
#include "TRandom.h"

using namespace std;

std::string NameFinder(std::string input) {
    int pos1 = input.find("_");
    std::string sub1 = input.substr(pos1 + 1);
    pos1 = sub1.find("plots");
    std::string ret = sub1.substr(0, pos1 - 1);
    return ret;
}

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
    int nOrigBin = 0;
    std::map<string, double> sampleinfo;
    //2870.81/3064.80
    double ratio = 1.; //0.976435; //2870.81 / (2.98521000000000004e+03); //1;//4462.610 / 4268.66;
    std::string channel = "";
    std::vector<std::string> namings;
    std::vector<std::string> names2D;
    std::vector<std::string> names3D;
    std::string histNameInFile = "";
    for (int f = 1; f < argc; f++) {
        std::string arg_fth(*(argv + f));
        if (iRandom == 0)
            cout << f << " ---- " << arg_fth << endl;
        if (arg_fth == "histName") {
            f++;
            std::string out(*(argv + f));
            histNameInFile = out+"/"+out+"cosTheta";
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
                tmpsignalIID.push_back(((TH2*) file->Get((histNameInFile+"2D").c_str()))->RebinY(nReBin));
                tmpsignalIID[tmpsignalIID.size() - 1]->RebinX(nReBinX);
                tmpsignalIID.at(tmpsignalIID.size() - 1)->Scale(ratio);
                names2D.push_back(NameFinder(out));
                //                cout << tmpsignalIID.at(tmpsignalIID.size() - 1)->GetName() << endl;
            }//                else
            //                tmpsignalIID.push_back(((TH2*) ((TH3D*) file->Get(histNameInFile3D"))->Project3D("yx"))->Rebin2D(1,1));
            if (do3D && muonfile) {
                //                cout << " in 3D :-)" << endl;
                names3D.push_back(NameFinder(out));
                tmpsignalIIID.push_back(((TH3D*) file->Get((histNameInFile+"3D").c_str()))->Rebin3D(1, nReBin, 1, "newname"));
                //                cout << tmpsignalIIID.at(tmpsignalIIID.size() - 1) << endl;
                tmpsignalIIID.at(tmpsignalIIID.size() - 1)->Scale(ratio);
            }
            if (bkginsignal == 0)
                bkginsignal = (((TH1*) file->Get(histNameInFile.c_str()))->Rebin(nReBin));
            else
                bkginsignal->Add(((TH1*) file->Get(histNameInFile.c_str()))->Rebin(nReBin));

            TH1 * myTemp = (TH1*) (((TH1*) file->Get(histNameInFile.c_str())))->Clone("myTemp");
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
            data = ((TH1*) file->Get(histNameInFile.c_str()))->Rebin(nReBin);
            if (iRandom == 0)
                cout << data << endl;
        } else if (arg_fth == "bkg") {
            f++;
            std::string out(*(argv + f));
            if (iRandom == 0)
                cout << "bkg" << endl;
            file = new TFile(out.c_str(), "read");
            nOrigBin = ((TH1*) file->Get(histNameInFile.c_str()))->GetXaxis()->GetNbins();
            bool myQCD = (out.find("_QCD.root") > 0 && fabs(out.find("_QCD.root")) < out.size());
            if (iRandom == 0)
                cout << file->GetName() << "\tmyQCD: " << myQCD << endl;
            TH1 * tmpQCD = 0;
            if (myQCD) {
                tmpQCD = ((TH1*) file->Get(histNameInFile.c_str()))->Rebin(nReBin);
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
                    bkg = ((TH1*) file->Get(histNameInFile.c_str()))->Rebin(nReBin);
            } else {
                if (myQCD)
                    bkg->Add(tmpQCD);
                else
                    bkg->Add(((TH1*) file->Get(histNameInFile.c_str()))->Rebin(nReBin));
            }
        } else if (arg_fth == "wtemplate") {
            f++;
            std::string out(*(argv + f));
            if (iRandom == 0)
                cout << "w template" << endl;
            file = new TFile(out.c_str(), "read");
            if (iRandom == 0)
                cout << out << "\t";
            wtemplate = ((TH1*) file->Get(histNameInFile.c_str()));
            if (wtemplate == 0)
                wtemplate = ((TH1*) file->Get(histNameInFile.c_str()));
            //            wtemplate = ((TH1*) file->Get("btag10"));

            //            wtemplate = ((TH1*) file->Get(histNameInFile.c_str()))->Rebin(10);
            if (iRandom == 0)
                cout << wtemplate << endl;
            wtemplate->Rebin(nReBin);

        } else if (arg_fth == "toptemplate") {
            f++;
            std::string out(*(argv + f));
            cout << "top template" << endl;
            file = new TFile(out.c_str(), "read");
            toptemplate = ((TH1*) file->Get(histNameInFile.c_str()));
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
    std::vector<TH1D*> Hists;

    TH1D * tmp1Dbin = 0;
    for (unsigned int q = 0; q < signalIID.size(); q++) {
        tmp1Dbin = signalIID[q]->ProjectionY("prjec");
        Hists.push_back((TH1D *) tmp1Dbin->Clone(names2D[q].c_str()));
        delete tmp1Dbin;
    }
    for (unsigned int q = 0; q < signalIIID.size(); q++) {
        tmp1Dbin = signalIIID[q]->ProjectionY("prjec3");
        Hists.push_back((TH1D *) tmp1Dbin->Clone(names3D[q].c_str()));
        delete tmp1Dbin;
    }

    stringstream binName;
    binName << channel << "_" << nOrigBin / nReBin << ".root";
    TFile * fBin = new TFile(binName.str().c_str(), "recreate");
    fBin->cd();
    cout << "nHist: " << Hists.size() << endl;
    for (unsigned int iH = 0; iH < Hists.size(); iH++)
        Hists[iH]->Write();
    fBin->Close();



    return 0;
}

