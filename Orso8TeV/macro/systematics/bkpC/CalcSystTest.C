/* 
 * File:   CalcSystTest.C
 * Author: nadjieh
 *
 * Created on September 9, 2013, 5:46 PM
 */

#include <stdlib.h>

#include "../../interface/ProperSystCalculator.h"
#include <string>
#include <iostream>
#include <vector>
#include <TEllipse.h>
#include <TCanvas.h>
#include <bits/stl_vector.h>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    std::vector<std::string> names;
    names.push_back("b-tag");
    names.push_back("mis-tag");
    names.push_back("JER");
    names.push_back("JES");
    names.push_back("luminosity");
    names.push_back("$\\rm m_{top}$");
    names.push_back("Unclust. Energy");
    names.push_back("pile up");
    names.push_back("$\\rm Q^{2}$ scale");
    names.push_back("$t\\bar{t}$ norm.");
    names.push_back("EWK norm.");
    names.push_back("QCD norm.");
    names.push_back("Wshape (c-flavor)");
    names.push_back("Wshape (b-flavor)");
    names.push_back("PDF");
    names.push_back("CompHep");
    names.push_back("MC stat.");
    names.push_back("Anom. $\\twb;\\,V_{R}$");
    names.push_back("Anom. $\\twb;\\,g_{L}$");
    names.push_back("SM W-helicity Ref.");
    /*
     * For Muon
     * * VR:
     * +0.05 * 0.308 = 0.0154
     * 0.02 * -0.03 = - 0.0006
     * +0.00 * 0.722 = 0
     * * gL:
     * +0.075 * 0.308 = 0.023
     * -0.012 * 0.722 = -0.009
     * -0.02 * -0.03 = 0.0006
     */
    std::vector<double> F0Up;
    std::vector<double> FlUp;
    std::vector<double> FrUp;
    std::vector<double> F0Down;
    std::vector<double> FlDown;
    std::vector<double> FrDown;
    double F0Cent = 0;
    double FlCent = 0;
    for (int f = 1; f < argc; f++) {
        std::string arg_fth(*(argv + f));
        if (arg_fth == "F0Up") {
            f++;
            std::string in(*(argv + f));
            F0Up.push_back(atof(in.c_str()));
        } else if (arg_fth == "FlUp") {
            f++;
            std::string in(*(argv + f));
            FlUp.push_back(atof(in.c_str()));
        } else if (arg_fth == "F0Down") {
            f++;
            std::string in(*(argv + f));
            F0Down.push_back(atof(in.c_str()));
        } else if (arg_fth == "FlDown") {
            f++;
            std::string in(*(argv + f));
            FlDown.push_back(atof(in.c_str()));
        } else if (arg_fth == "FrDown") {
            f++;
            std::string in(*(argv + f));
            FrDown.push_back(atof(in.c_str()));
        } else if (arg_fth == "FrUp") {
            f++;
            std::string in(*(argv + f));
            FrUp.push_back(atof(in.c_str()));
        } else if (arg_fth == "F0Cent") {
            f++;
            std::string in(*(argv + f));
            F0Cent = atof(in.c_str());
        } else if (arg_fth == "FlCent") {
            f++;
            std::string in(*(argv + f));
            FlCent = atof(in.c_str());
        }
    }
    cout << F0Up.size() << "\t" << FlUp.size() << "\t" << FrUp.size() << "\t" << names.size() << "\t" << endl;
    if (FlUp.size() > names.size()) {
        cout << (FlUp.size() - names.size()) << endl;
        double p = (FlUp.size() - names.size());
        for (unsigned int s = 0; s < p; s++)
            names.push_back("blah");
    }
    cout << F0Up.size() << "\t" << FlUp.size() << "\t" << FrUp.size() << "\t" << names.size() << "\t" << endl;
    ProperSystCalculator myIndividualSyst(F0Cent, FlCent, F0Up, F0Down, FlUp, FlDown, names);
    TMatrixT<double> * p = myIndividualSyst.GetCovarianceMatrix();
    cout << p->GetMatrixArray()[0] << "\t" << p->GetMatrixArray()[1] << "\t" << p->GetMatrixArray()[2] << "\t" << p->GetMatrixArray()[3] << endl;
    std::pair<double, double> roots = myIndividualSyst.GetRoots(p);
    cout << "not ordered: " << roots.first << "\t" << roots.second << endl;
    if (!myIndividualSyst.isFirstGreater(p)) {
        double s = roots.first;
        roots.first = roots.second;
        roots.second = s;
    }

    cout << "ordered: " << roots.first << "\t" << roots.second << endl;
    std::cout.setf(std::ios::fixed);
    std::cout.precision(3);
    cout << sqrt(roots.first) << "\t" << sqrt(roots.second) << endl;
    myIndividualSyst.Set3rdVar(FrUp, FrDown);
    //    myIndividualSyst.printSystTable(false, true);
    //    myIndividualSyst.printSystTable(true, true);
    TEllipse * el = myIndividualSyst.GetEllipse(p);
    TCanvas C;
    C.cd();
    el->Draw("ap");
    C.SaveAs("a.C");

    return 0;
}

