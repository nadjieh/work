/* 
 * File:   NormValidation.C
 * Author: nadjieh
 *
 * Created on June 24, 2013, 5:39 PM
 */

#include "../interface/ToyFitter.h"
#include "../interface/FitValidator.h"
#include "../interface/OneDLinearityChecker.h"




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
#include "../interface/NormOneDBiasChecker.h"
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
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
    double norm = 0;
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
        } else if (arg_fth == "norm") {
            f++;
            std::string out(*(argv + f));
            norm = atof(out.c_str());
        }
    }

    NormOneDBiasChecker myNormOneDBiasCheckerEle("myNormOneDBiasChecker", prefix, suffix, histName, dirName,
            "electron", norm, 10);
    myNormOneDBiasCheckerEle.addSamples(Lumi);
    myNormOneDBiasCheckerEle.doLinearityCheck(StartPEX, LPEX);
    myNormOneDBiasCheckerEle.WriteAll(outDir, StartPEX, LPEX, StartPEXPull, LPEXPull);

    NormOneDBiasChecker myNormOneDBiasCheckerMu("myNormOneDBiasChecker", prefix, suffix, histName, dirName,
            "muon", norm, 10);
    myNormOneDBiasCheckerMu.addSamples(Lumi);
    myNormOneDBiasCheckerMu.doLinearityCheck(StartPEX, LPEX);
    myNormOneDBiasCheckerMu.WriteAll(outDir, StartPEX, LPEX, StartPEXPull, LPEXPull);


    return 0;
}

