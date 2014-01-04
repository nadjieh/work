/*
 * Aimed to run on selected events
 * 
 */
/* 
 * File:   SelectAndSave.c
 * Author: ajafari
 *
 * Created on January 29, 2012, 8:18 PM
 */

#include "../interface/ToyFitter.h"
#include "../interface/FitValidator.h"
#include "../interface/BaseLinearityCheker.h"




#include <sstream>
#include <string>

#include <TApplication.h>
#include <TFile.h>
#include <TH1.h>
#include <TF3.h>
#include <TH2.h>
#include <TCanvas.h>
#include <TBranch.h>
#include <TTree.h>
#include <TSystem.h>
#include <TGraph.h>
#include <map>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
    //    sleep(60);

    TH1D data;
    TH1D signal;
    TH1D bkg;
    TFile * file = 0;
    int StartPEX = -1;
    int LPEX = 0;
    int StartPEXPull = -1;
    int LPEXPull = 0;
    double Lumi = 0;
    string prefix;
    string suffix;
    string histName;
    string dirName;
    string outDir;
    for (int f = 1; f < argc; f++) {
        std::string arg_fth(*(argv + f));
        if (arg_fth == "StartPEX") {
            f++;
            std::string out(*(argv + f));
            StartPEX = (int) atof(out.c_str());
        } else if (arg_fth == "LPEX") {
            f++;
            std::string out(*(argv + f));
            LPEX = (int) atof(out.c_str());
        } else if (arg_fth == "StartPEXPull") {
            f++;
            std::string out(*(argv + f));
            StartPEXPull = (int) atof(out.c_str());
        } else if (arg_fth == "LPEXPull") {
            f++;
            std::string out(*(argv + f));
            LPEXPull = (int) atof(out.c_str());
        } else if (arg_fth == "Lumi") {
            f++;
            std::string out(*(argv + f));
            Lumi = atof(out.c_str());
        } else if (arg_fth == "prefix") {
            f++;
            std::string out(*(argv + f));
            prefix = out;
        } else if (arg_fth == "suffix") {
            f++;
            std::string out(*(argv + f));
            suffix = out;
        } else if (arg_fth == "histName") {
            f++;
            std::string out(*(argv + f));
            histName = out;
        } else if (arg_fth == "dirName") {
            f++;
            std::string out(*(argv + f));
            dirName = out;
        } else if (arg_fth == "outDir") {
            f++;
            std::string out(*(argv + f));
            outDir = out;
        }
    }

    BaseLinearityCheker myBaseLinearityCheckerEle("myBaseLinearityChecker", prefix, suffix, histName, dirName,
            "electron", 10);
    myBaseLinearityCheckerEle.addSamples(Lumi);
    myBaseLinearityCheckerEle.doBiasCheck(StartPEX, LPEX);
    myBaseLinearityCheckerEle.WriteAll(outDir, StartPEX, LPEX, StartPEXPull, LPEXPull);

    BaseLinearityCheker myBaseLinearityCheckerMu("myBaseLinearityChecker", prefix, suffix, histName, dirName,
            "muon", 10);
    myBaseLinearityCheckerMu.addSamples(Lumi);
    myBaseLinearityCheckerMu.doBiasCheck(StartPEX, LPEX);
    myBaseLinearityCheckerMu.WriteAll(outDir, StartPEX, LPEX, StartPEXPull, LPEXPull);
    
    
    return 0;
}


