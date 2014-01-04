/* 
 * File:   Plotting.C
 * Author: ajafari
 *
 * Created on February 10, 2011, 1:31 PM
 */

#include "../../../AnalysisClasses/EventSelection/interface/HistogramPlotter.h"
#include "../../../AnalysisClasses/EventSelection/interface/HistogramAdder.h"
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "TColor.h"
#include "TColorWheel.h"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    vector<TFile*> MCfiles;
    vector<string> MCnames;
    vector<string> Samplesnames;
    vector<Color_t> Colors;
    vector<double> Uncs;
    vector<double> beta;
    string outFileName;
    TFile * data;

    //    string prefix = "Summer11_";
    string prefix = "";
    for (int f = 1; f < argc; f++) {
        std::string arg_fth(*(argv + f));

        if (arg_fth == "out") {
            cout << "out -------------------------" << endl;
            f++;
            std::string out(*(argv + f));
            outFileName = out;
        } else if (arg_fth == "prefix") {
            cout << "I saw PREFIX" << endl;
            f++;
            std::string Xsec(*(argv + f));
            prefix = Xsec;
        } else if (arg_fth == "mcinput") {
            cout << "mcinput -------------------------" << endl;
            f++;
            std::string Xsec(*(argv + f));
            Samplesnames.push_back(Xsec);
            if (Xsec == "TChannel" || Xsec == "TbarChannel") {
                Colors.push_back(kRed);
            } else if (Xsec == "SChannel" || Xsec == "SbarChannel") {
                Colors.push_back(kYellow);
            } else if (Xsec == "TWChannel" || Xsec == "TbarWChannel") {
                Colors.push_back(kOrange);
            } else if (Xsec == "TTBar" || (Xsec.find("TTBar") >= 0 && Xsec.find("TTBar") < Xsec.size()))
                Colors.push_back(kMagenta - 3);
            else if (Xsec == "WJets" || Xsec == "WTemplateDefFormat" || Xsec == "Data" || Xsec == "WTemplate")
                Colors.push_back(kAzure);
            else if (Xsec == "ZJets") {
                Colors.push_back(kGreen + 1);
            } else if (Xsec == "QCD" || Xsec == "QCDMu" || Xsec == "QCDEle")
                Colors.push_back(kGray);
            else if (Xsec == "WW" || Xsec == "WZ" || Xsec == "ZZ") {
                Colors.push_back(kCyan);
            }
            std::string Xsec_2 = prefix + Xsec + "_plots.root";
            //          Xsec ="CreateWeighedHists_" + Xsec + "_plots.root";
            //          Xsec ="./Converted/CovertedSel_" + Xsec + "_plots.root";
            //            TFile * tmp = TFile::Open(Xsec_2.c_str());
            TFile * tmp = TFile::Open(Xsec_2.c_str());
            if (tmp == NULL) {
                cout << "for RW!" << endl;
                Xsec_2 = prefix + Xsec + "_RW.root";
                tmp = TFile::Open(Xsec_2.c_str());
                if (tmp == NULL) {
                    cout << "Give me a reasonable file!" << endl;
                }
            }
            MCfiles.push_back(tmp);
        } else if (arg_fth == "beta") {
            cout << "beta -------------------------" << endl;
            f++;
            std::string Xsec(*(argv + f));
            beta.push_back(atof(Xsec.c_str()));
            cout << MCfiles[MCfiles.size() - 1]->GetName() << "\t" << beta[beta.size() - 1] << endl;
        } else if (arg_fth == "mcname") {
            cout << "mcname -------------------------" << endl;
            f++;
            std::string Xsec(*(argv + f));

            //            cout << "process " << Xsec << "\tweight: " << weights.at(weights.size() - 1) << endl;
            //            cout << "input file " << MCfiles.at(MCfiles.size() - 1)->GetName() << endl;
            MCnames.push_back(Xsec);
        } else if (arg_fth == "unc") {
            cout << "Uncertainty on beta -------------------------" << endl;
            f++;
            std::string Xsec(*(argv + f));

            //            cout << "process " << Xsec << "\tweight: " << weights.at(weights.size() - 1) << endl;
            Uncs.push_back(atof(Xsec.c_str()));
            cout << "input file " << MCfiles.at(MCfiles.size() - 1)->GetName() << "\n\tuncertainty: "
                    << Uncs.at(Uncs.size() - 1) << endl;
        } else if (arg_fth == "data") {
            cout << "data -------------------------" << endl;
            f++;
            std::string preSelEff(*(argv + f));
            std::string preSelEff_ = prefix + preSelEff + "_plots.root";
            //            data = TFile::Open(preSelEff.c_str());
            data = TFile::Open(preSelEff_.c_str());
            if (data == NULL) {
                cout << "for RW!" << endl;
                preSelEff_ = prefix + preSelEff + "_RW.root";
                data = TFile::Open(preSelEff_.c_str());
                if (data == NULL) {
                    cout << "Give me a reasonable data file!" << endl;
                }
            }
        }
    }
    cout << "PREFIX: " << prefix << endl;
    cout << "Input files: " << MCfiles.size() << endl;
    cout << "Colors: " << Colors.size() << endl;
    cout << "Betas: " << beta.size() << endl;
    cout << "names: " << MCnames.size() << endl;
    cout << "samples: " << Samplesnames.size() << endl;

    //    HistogramPlotter histPlot(Lumi,true);
    for (unsigned int i = 0; i < MCfiles.size(); i++)
        cout << MCnames.at(i) << "\t";
    cout << endl;
    //    bool myPrefix = false;
    bool myPrefix = (prefix.find("/forStack/") < prefix.size() && prefix.find("/forStack/") != 0) ||
            (prefix.find("/WTemps/plots/WTemp_") < prefix.size() && prefix.find("/WTemps/plots/WTemp_") != 0);

    if (myPrefix) {
        cout << "Stack :-)" << endl;
        HistogramPlotter histPlot(false);
        histPlot.StructureFinder(data);
        histPlot.printStructure();
        TFile * out = new TFile(outFileName.c_str(), "recreate");
        histPlot.plot(MCfiles, beta, Colors, MCnames, out, data);
    } else {
        myPrefix = (prefix.find("/forAdding/") < prefix.size() && prefix.find("/forAdding/") != 0) ||
                (prefix.find("WTemps/plots/unc/WTemp_") < prefix.size() && prefix.find("WTemps/plots/unc/WTemp_") != 0);

        //
        if (myPrefix) {
            HistogramAdder histPlot(false, true);
            histPlot.StructureFinder(data);
            histPlot.printStructure();
            TFile * out = new TFile(outFileName.c_str(), "recreate");
            histPlot.plot(MCfiles, beta, out, Uncs);
        }
    }
    cout << "here" << endl;
    if (!myPrefix) {
        HistogramAdder histPlot(false, false);
        histPlot.StructureFinder(data);
        histPlot.printStructure();
        TFile * out = new TFile(outFileName.c_str(), "recreate");
        histPlot.plot(MCfiles, beta, out, Uncs);
    }


    return 0;
}

