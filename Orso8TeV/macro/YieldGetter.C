#include <string>
#include <vector>
#include <iostream>
#include "TString.h"
#include "TH1.h"
#include "TH2.h"
#include "TH3.h"
#include "TFile.h"
#include "TDirectory.h"
#include <TApplication.h>
using namespace std;

bool isTopSample(std::string name) {
    return (name == "SChannel" || name == "SbarChannel" || name == "TbarWChannel"
            || name == "TWChannel" || name == "TTBar");
}

bool isEWKSample(std::string name) {
    return (name == "WW" || name == "WZ" || name == "ZJets"
            || name == "WJets" || name == "ZZ");
}

bool isSignalSample(std::string name) {
    return (name == "TChannel" || name == "TbarChannel");
}

int main(int argc, char** argv) {
    TApplication theApp("App", &argc, argv);
    vector<TH1*> MCHists;
    vector<TH1*> MCHistsPU;
    vector<TH1*> MCHistsPUB;
    vector<TH1*> MCHistsAll;
    vector<string> MCName;
    double nTop = 0;
    double nEWk = 0;
    double nSignal = 0;
    TString addressANDprefix = "";
    for (int f = 1; f < argc; f++) {
        std::string arg_fth(*(argv + f));

        if (arg_fth == "prefix") {
            //            cout << "I saw PREFIX" << endl;
            f++;
            std::string Xsec(*(argv + f));
            addressANDprefix = Xsec.c_str();
        } else if (arg_fth == "mcinput") {
            cout << "mcinput -------------------------" << endl;
            f++;
            std::string Xsec(*(argv + f));
            MCName.push_back(Xsec);
            Xsec = string(addressANDprefix) + Xsec + "_plots.root";
            TFile * tmp = TFile::Open(Xsec.c_str());
            TH1 * my2D = ((TH2*) tmp->Get("Default_Def/Default_DefcosTheta2D"))->ProjectionY();
            if (my2D->GetEntries() != 0) {
                MCHists.push_back(((TH1*) tmp->Get("Default_Def/Default_DefcosTheta")));
                MCHists[MCHists.size() - 1]->Add(my2D);
            } else
                MCHists.push_back((TH1*) tmp->Get("Default_Def/Default_DefcosTheta"));
            cout << "1" << endl;
            //            my2D = ((TH2*) tmp->Get("Default_PuW/Default_PuWcosTheta2D"))->ProjectionY();
            //            if (my2D->GetEntries() != 0) {
            //                MCHistsPU.push_back(((TH1*) tmp->Get("Default_PuW/Default_PuWcosTheta")));
            //                MCHistsPU[MCHists.size() - 1]->Add(my2D);
            //            } else
            //                MCHistsPU.push_back((TH1*) tmp->Get("Default_PuW/Default_PuWcosTheta"));
            //            cout<<"2"<<endl;
            //            my2D = ((TH2*) tmp->Get("Default_BtagPuW/Default_BtagPuWcosTheta2D"))->ProjectionY();
            //            if (my2D->GetEntries() != 0) {
            //                MCHistsPUB.push_back(((TH1*) tmp->Get("Default_BtagPuW/Default_BtagPuWcosTheta")));
            //                MCHistsPUB[MCHists.size() - 1]->Add(my2D);
            //            } else
            //                MCHistsPUB.push_back((TH1*) tmp->Get("Default_BtagPuW/Default_BtagPuWcosTheta"));
            //            cout<<"3"<<endl;
            my2D = ((TH2*) tmp->Get("Default_allW/Default_allWcosTheta2D"))->ProjectionY();
            if (my2D->GetEntries() != 0) {
                MCHistsAll.push_back(((TH1*) tmp->Get("Default_allW/Default_allWcosTheta")));
                MCHistsAll[MCHists.size() - 1]->Add(my2D);
            } else
                MCHistsAll.push_back((TH1*) tmp->Get("Default_allW/Default_allWcosTheta"));
            cout << "4" << endl;
            if (isTopSample(MCName[MCName.size() - 1]))
                nTop += MCHistsAll[MCHists.size() - 1]->Integral();
            else if (isEWKSample(MCName[MCName.size() - 1]))
                nEWk += MCHistsAll[MCHists.size() - 1]->Integral();
            else if (isSignalSample(MCName[MCName.size() - 1]))
                nSignal += MCHistsAll[MCHists.size() - 1]->Integral();
            cout << "5" << endl;
            delete my2D;

        }
    }
    cout << "|\t| *bare* | *a = weight x PUWeight* |  *b = a x bWeight* | *all* |" << endl;
    for (unsigned int s = 0; s < MCHists.size(); s++) {
        cout << "| *" << MCName[s] << "* |" << MCHists[s]->GetEntries() << "|" <<
                //  MCHistsPU[s]->Integral() << "|" << MCHistsPUB[s]->Integral() << "|" <<
                MCHistsAll[s]->Integral() << "|" << endl;
    }

    //        cout << "|\t| *all* | *real* |*efficiency*|" << endl;
    //    for (unsigned int s = 0; s < MCHists.size(); s++) {
    //        cout << "| *" << MCName[s] << "* |" << MCHists[s]->GetEntries() << "|" <<
    //                MCHistsPU[s]->GetEntries() << "|" <<(double)MCHistsPU[s]->GetEntries()/ (double)MCHists[s]->GetEntries()<<"|" << endl;
    //}
    cout << "| *SUM Top* |" << nTop << "|" << endl;
    cout << "| *SUM EWK* |" << nEWk << "|" << endl;
    cout << "| *SUM Signal* |" << nSignal << "|" << endl;

    return 0;
}
