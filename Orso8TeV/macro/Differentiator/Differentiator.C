/* 
 * File:   OrsoHistogramCreator.C
 * Author: Nadjieh
 *
 * Created on October 12, 2012, 12:34 PM
 */

#include "TDirectory.h"

#include "../../../AnalysisClasses/EventSelection/interface/ElectronSelector.h"

#include "../../../AnalysisClasses/EventSelection/interface/Event.h"

#include "../../../AnalysisClasses/EventSelection/interface/ElectronHists.h"
#include "../../../AnalysisClasses/EventSelection/interface/MuonHists.h"
#include "../../../AnalysisClasses/EventSelection/interface/PVHists.h"
#include "../../../AnalysisClasses/EventSelection/interface/JetHists.h"
#include "../../../AnalysisClasses/EventSelection/interface/JetSelector.h"
#include "../../../AnalysisClasses/EventSelection/interface/MuonVetoSelector.h"
#include "../../../AnalysisClasses/EventSelection/interface/MetHists.h"
#include "../../../AnalysisClasses/EventSelection/interface/PrimaryVertexSelector.h"
#include "../../../TopBrussels/TopTreeProducer/interface/TRootMuon.h"
#include "../../../TopBrussels/TopTreeProducer/interface/TRootElectron.h"
#include "../../../TopBrussels/TopTreeProducer/interface/TRootJet.h"
#include "../../../TopBrussels/TopTreeProducer/interface/TRootCaloJet.h"
#include "../../../TopBrussels/TopTreeProducer/interface/TRootPFJet.h"
#include "../../../TopBrussels/TopTreeProducer/interface/TRootMET.h"
#include "../../../TopBrussels/TopTreeProducer/interface/TRootGenEvent.h"
#include "../../../TopBrussels/TopTreeProducer/interface/TRootNPGenEvent.h"
#include "../../../TopBrussels/TopTreeProducer/interface/TRootEvent.h"
#include "../../../TopBrussels/TopTreeProducer/interface/TRootRun.h"
#include "../../../TopBrussels/TopTreeProducer/interface/TRootParticle.h"
#include "../../../TopBrussels/TopTreeProducer/interface/TRootMCParticle.h"
#include "../../../TopBrussels/TopTreeProducer/interface/TRootVertex.h"
#include "../../../TopBrussels/TopTreeProducer/interface/TRootHLTInfo.h"
#include "../../../AnalysisClasses/EventSelection/interface/PracticalEvent.h"
#include "../../../AnalysisClasses/ToyAnalysis/interface/GenSingleTopMaker.h"
#include "../../../AnalysisClasses/PhysicsObjects/interface/SemiLepTopQuark.h"
#include "../../interface/TRootGenEventMaker.h"
#include "../../../AnalysisClasses/ChiSquared/interface/DR.h"
#include "../../interface/MuonTree.h"
#include "../../interface/GenInfoMuonTree.h"
#include "../../interface/SingleTopHistograms.h"

#include <sstream>
#include <iostream>
#include <string>

#include <TApplication.h>
#include <TFile.h>
#include <TH1.h>
#include <TH2.h>
#include <TCanvas.h>
#include <TBranch.h>
#include <TTree.h>
#include <TRandom.h>
#include <TRandom3.h>
#include <TSystem.h>
#include <vector>

using namespace std;

bool acceptEvent(std::string ttDecayMode, GenSingleTopMaker * genSingleTop = 0) {
    if (ttDecayMode == "dimu" && !genSingleTop->isDiMuTt) {
        cout << "dimu " << genSingleTop->isDiMuTt << endl;
        return false;
    }
    if (ttDecayMode == "die" && !genSingleTop->isDiETt) {
        cout << "diE " << genSingleTop->isDiETt << endl;
        return false;
    }
    if (ttDecayMode == "mue" && !genSingleTop->isMuETt) {
        cout << "muE" << endl;
        return false;
    }
    if (ttDecayMode == "mutau" && !genSingleTop->isMuTauTt) {
        cout << "muTau" << endl;
        return false;
    }
    if (ttDecayMode == "etau" && (!genSingleTop->isETauTt)) {
        cout << "tauE" << endl;
        return false;
    }
    if (ttDecayMode == "muhad" && !genSingleTop->isSemiMuSingleTop) {
        cout << "muHad" << endl;
        return false;
    }
    if (ttDecayMode == "ehad" && !genSingleTop->isSemiElecTt) {
        cout << "eHad" << endl;
        return false;
    }
    /*dilep-semiLep separation*/
    //                bool othersSemiLep = (genSingleTop->isSemiElecTt || genSingleTop->isSemiTauTt);
    //                if (ttDecayMode == "othersSemiLep" && !othersSemiLep) {
    //                    cout << "Others SemiLep" << endl;
    //                    return false;
    //                }
    if (ttDecayMode == "disemitau" && !(genSingleTop->isSemiTauTt || genSingleTop->isDiTauTt)) {
        cout << "disemitau" << endl;
        return false;
    }
    if (ttDecayMode == "ditau" && !genSingleTop->isDiTauTt) {
        cout << "ditau" << endl;
        return false;
    }
    if (ttDecayMode == "semitau" && !genSingleTop->isSemiTauTt) {
        cout << "semitau" << endl;
        return false;
    }
    return true;
}

bool tWacceptEvent(std::string ttDecayMode, GenSingleTopMaker * genSingleTop = 0) {
    if (ttDecayMode == "HadMu") {
        if (genSingleTop->ntops == 1 && genSingleTop->nonTopWs.size() != 0) {
            if (!(genSingleTop->nonTopWs[0] == 2 && genSingleTop->isHadSingleTop))
                return false;
            else cout << "In TW diff: " << genSingleTop->nonTopWs[0] << "\t" << genSingleTop->isSemiTauTt << endl;
        }
    } else if (genSingleTop->ntops == 1 && genSingleTop->nonTopWs.size() != 0) {
        if (genSingleTop->nonTopWs[0] == 2 && (genSingleTop->isHadSingleTop || genSingleTop->isSemiElecTt
                || genSingleTop->isSemiTauTt))
            return false;
    }
    return true;
}

int main(int argc, char** argv) {
    std::vector<std::string> inputFileNames;
    std::string plotFileName;
    int verbosity = 0;
    TH1D * METResolutions = 0;
    bool pu3D = false; //true;
    double doJES = 1;
    bool isData = false;
    int smearingSkim = 1;
    bool doTopDiff = true;
    bool doTWDiff = false;
    TString sample = "";
    string ttDecayMode = "";
    for (int f = 1; f < argc; f++) {
        std::string arg_fth(*(argv + f));

        if (arg_fth == "input") {
            f++;
            std::string in(*(argv + f));
            //            inputFileNames.push_back(string("~/work/samples/postMoriond/May2013/" + in + ".root"));
            inputFileNames.push_back(string("~/work/samples/postMoriond/Aug2013/" + in + ".root"));
            //            inputFileNames.push_back(string("~/work/samples/Orso8TeV/Nov_53X/" + in + ".root"));
            sample = in;
            plotFileName = in + "_plots.root";
        } else if (arg_fth == "JES") {
            f++;
            std::string in(*(argv + f));
            doJES = atof(in.c_str());
        } else if (arg_fth == "isData") {
            f++;
            std::string in(*(argv + f));
            if (in == "yes" || in == "YES" || in == "Yes" || in == "y" || in == "Y")
                isData = true;
            else
                isData = false;
        } else if (arg_fth == "METResolFileName") {
            f++;
            std::string in(*(argv + f));
            TFile * METResolFileName = TFile::Open(in.c_str());
            METResolutions = (TH1D*) METResolFileName->Get("METresolutions");
        } else if (arg_fth == "smearingSkim") {
            f++;
            std::string in(*(argv + f));
            smearingSkim = atof(in.c_str());
        } else if (arg_fth == "ttDecayMode") {
            f++;
            std::string in(*(argv + f));
            ttDecayMode = in;
        }
    }
    cout << "START" << endl;

    TFile* f = 0;
    TApplication theApp("App", &argc, argv);

    //    MuonTree * myMuonTree = 0;
    GenInfoMuonTree * myMuonTree = 0;
    GenInfoMuonTree * myElecTree = 0;
    GenSingleTopMaker * genSingleTop = 0;
    TTree * eventTreeMu = 0;
    TTree * eventTreeEle = 0;
    TTree * OutTreeMu = 0;
    TTree * OutTreeEle = 0;
    TFile* orso_out = 0;


    for (unsigned int fNumber = 0; fNumber < inputFileNames.size(); fNumber++) {
        cout << "file number " << fNumber + 1 << ": " << inputFileNames.at(fNumber) << endl;
        TFile* f = TFile::Open(inputFileNames.at(fNumber).c_str());
        myMuonTree = new GenInfoMuonTree(eventTreeMu, f, sample + "_2J_1T_noSyst", "TreesMu");
        cout << myMuonTree->fChain << endl;
        myMuonTree->fChain->SetBranchStatus("*", 1);
        stringstream s("");
        if (ttDecayMode == "")
            s << sample << ".root";
        else
            s << ttDecayMode << "_" << sample << ".root";
        orso_out = new TFile(s.str().c_str(), "recreate");
        orso_out->mkdir("TreesMu")->cd();
        OutTreeMu = myMuonTree->fChain->CloneTree(0);
        for (int eventNumber = 0; eventNumber < myMuonTree->fChain->GetEntriesFast(); eventNumber++) {
            cout << "event number " << eventNumber << " -------------------" << endl;
            myMuonTree->GetEntry(eventNumber);

            TRootGenEventMaker NPGenMaker(myMuonTree, string(sample));
            genSingleTop = new GenSingleTopMaker(&NPGenMaker.output);
            if (doTopDiff) {
                if (!acceptEvent(ttDecayMode, genSingleTop))
                    continue;
            }
            if (doTWDiff) {
                if (!tWacceptEvent(ttDecayMode, genSingleTop))
                    continue;
            }
            OutTreeMu->Fill();
            delete genSingleTop;
        }
        myElecTree = new GenInfoMuonTree(eventTreeEle, f, sample + "_2J_1T_noSyst", "TreesEle");
        cout << myElecTree->fChain << endl;
        myElecTree->fChain->SetBranchStatus("*", 1);
        orso_out->cd();
        orso_out->mkdir("TreesEle")->cd();
        OutTreeEle = myElecTree->fChain->CloneTree(0);
        for (int eventNumber = 0; eventNumber < myElecTree->fChain->GetEntriesFast(); eventNumber++) {
            cout << "event number " << eventNumber << " -------------------" << endl;
            myElecTree->GetEntry(eventNumber);

            TRootGenEventMaker NPGenMaker(myElecTree, string(sample));
            genSingleTop = new GenSingleTopMaker(&NPGenMaker.output);
            if (doTopDiff) {
                if (!acceptEvent(ttDecayMode, genSingleTop))
                    continue;
            }
            if (doTWDiff) {
                if (!tWacceptEvent(ttDecayMode, genSingleTop))
                    continue;
            }
            OutTreeEle->Fill();
            delete genSingleTop;
        }
        orso_out->cd();
        orso_out->Write();
        orso_out->Close();
        //        delete myMuonTree;
        cout << "before closing file input " << f->GetName() << endl;
        f->Close();
        delete f;

    }

    return 0;

}





