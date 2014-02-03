/* 
 * File:   OrsoHistogramCreator.C
 * Author: nadjieh
 *
 * Created on October 12, 2012, 12:34 PM
 */
//#define ISDATA
//#define QCD
//#define Wtemplate
//#define LPTW
//#define BPTW
//#define BEtaW

//Mass window 130 < m νb < 220

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
#include "../../../AnalysisClasses/ChiSquared/interface/DR.h"
#include "../../../AnalysisClasses/EventSelection/interface/DifferentHistogramsTwb.h"
#include "../../interface/MuonTree.h"
#include "../../interface/GenInfoMuonTree.h"
#include "../../interface/TRootGenEventMaker.h"
#include "../../interface/TopPtReweighter.h"
#include "../../interface/METPhiCorrector.h"


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
using namespace TopTree;

Event myEventPreparation(GenInfoMuonTree * input) {
    //    cout << "in myEventPreparation" << endl;
    TRootPFJet BJET(input->GetBJet());
    BJET.setBtag_combinedSecondaryVertexBJetTags(input->highBTag);
    TRootPFJet nonBJET(input->GetFJet());
    nonBJET.setBtag_combinedSecondaryVertexBJetTags(input->lowBTag);
    TRootMuon MUON(input->GetLepton());
    TRootPFMET MET(input->GetMET());
    TRootVertex VTX;
    Event myEvent_tmp;
    for (int i = 0; i < input->nGoodVertices; i++)
        myEvent_tmp.Gpvs.push_back(VTX);
    myEvent_tmp.Dmuons.push_back(MUON);
    myEvent_tmp.GPFJets.push_back(BJET);
    myEvent_tmp.GPFJets.push_back(nonBJET);
    myEvent_tmp.BPFJets.push_back(BJET);
    myEvent_tmp.mets.push_back(MET);
    return myEvent_tmp;
}

Event myEventPreparation(MuonTree * input) {
    //    cout << "in myEventPreparation" << endl;
    TRootPFJet BJET(input->GetBJet());
    BJET.setBtag_combinedSecondaryVertexBJetTags(input->highBTag);
    TRootPFJet nonBJET(input->GetFJet());
    nonBJET.setBtag_combinedSecondaryVertexBJetTags(input->lowBTag);
    TRootMuon MUON(input->GetLepton());
    TRootPFMET MET(input->GetMET());
    TRootVertex VTX;
    Event myEvent_tmp;
    for (int i = 0; i < input->nGoodVertices; i++)
        myEvent_tmp.Gpvs.push_back(VTX);
    myEvent_tmp.Dmuons.push_back(MUON);
    myEvent_tmp.GPFJets.push_back(BJET);
    myEvent_tmp.GPFJets.push_back(nonBJET);
    myEvent_tmp.BPFJets.push_back(BJET);
    myEvent_tmp.mets.push_back(MET);
    return myEvent_tmp;
}

bool isDesiredWJetsFlavor(GenInfoMuonTree * input, string myFlavor) {
    if (myFlavor == "bX" && input->eventFlavour == 3)
        return true;
    if (myFlavor == "c" && input->eventFlavour == 2)
        return true;
    if (myFlavor == "l" && input->eventFlavour == 1)
        return true;
    if (myFlavor == "")
        return true;
    return false;
}

bool isDesiredWJetsFlavor(MuonTree * input, string myFlavor) {
    if (myFlavor == "bX" && input->eventFlavour == 3)
        return true;
    if (myFlavor == "c" && input->eventFlavour == 2)
        return true;
    if (myFlavor == "l" && input->eventFlavour == 1)
        return true;
    if (myFlavor == "")
        return true;
    return false;
}
//pfMEtSysShiftCorrParameters_2012runABCDvsNvtx_data = cms.VPSet(cms.PSet( # CV: ReReco data + Summer'13 JEC
//    numJetsMin = cms.int32(-1),
//    numJetsMax = cms.int32(-1),
//    px = cms.string("+4.83642e-02 + 2.48870e-01*Nvtx"),
//    py = cms.string("-1.50135e-01 - 8.27917e-02*Nvtx")
//))
//
//pfMEtSysShiftCorrParameters_2012runABCDvsNvtx_mc = cms.VPSet(cms.PSet( # CV: Summer'12 MC + Summer'13 JEC
//    numJetsMin = cms.int32(-1),
//    numJetsMax = cms.int32(-1),
//    px = cms.string("+1.62861e-01 - 2.38517e-02*Nvtx"),
//    py = cms.string("+3.60860e-01 - 1.30335e-01*Nvtx")

void CorrectMetPhi(MuonTree * input) {//Data
    /*
     * WJets:
     * X = -0.0874714 +0.292751 * input->nGoodVertices);
     * Y = -0.614804  -0.116728 * input->nGoodVertices);
     * QCD:
     * X = -0.0963494 +0.292453 * input->nGoodVertices);
     * Y = -0.433611 -0.131902 * input->nGoodVertices);
     */
    double ret = 1000;
    //    double metPx = input->metPt * cos(input->metPhi)-(3.54233e-01 + 2.65299e-01 * input->nGoodVertices);
    //    double metPy = input->metPt * sin(input->metPhi)-(1.88923e-01 - 1.66425e-01 * input->nGoodVertices);
    double metPx = input->metPt * cos(input->metPhi)-(+4.83642e-02 + 2.48870e-01 * input->nGoodVertices);
    double metPy = input->metPt * sin(input->metPhi)-(-1.50135e-01 - 8.27917e-02 * input->nGoodVertices);
    //    double corrX = 0;
    //    double corrY = 0;
    //#ifdef ISDATA
    //    corrX = -0.644958 + 0.331888 * input->nGoodVertices;
    //    corrY = -0.15276 - 0.191437 * input->nGoodVertices;
    //#endif
    //#ifdef QCD
    //    corrX = -0.0963494 + 0.292453 * input->nGoodVertices;
    //    corrY = -0.433611 - 0.131902 * input->nGoodVertices;
    //#endif
    //#ifdef Wtemplate
    //    corrX = -0.0874714 + 0.292751 * input->nGoodVertices;
    //    corrY = -0.614804 - 0.116728 * input->nGoodVertices;
    //#endif
    //    double metPx = input->metPt * cos(input->metPhi) - corrX;
    //    double metPy = input->metPt * sin(input->metPhi) - corrY;
    if (metPx < 0) {
        if (metPy > 0)ret = atan(metPy / metPx) + M_PI;
        if (metPy < 0)ret = atan(metPy / metPx) - M_PI;
    } else ret = (atan(metPy / metPx));
    input->SetMetPhi(ret);
}

void CorrectMetPhi(GenInfoMuonTree * input) {//MC
    int n = input->nGoodVertices;
    //    double metPx = input->metPt * cos(input->metPhi)-(-2.99576e-02 - 6.61932e-02 * input->nGoodVertices);
    //    double metPy = input->metPt * sin(input->metPhi)-(+3.70819e-01 - 1.48617e-01 * input->nGoodVertices);
    double metPx = input->metPt * cos(input->metPhi)-(+1.62861e-01 - 2.38517e-02 * n);
    double metPy = input->metPt * sin(input->metPhi)-(+3.60860e-01 - 1.30335e-01 * n);
    //    double metPx1 = input->metPt * cos(input->metPhi)-(-0.07846 + 0.00688 * input->nGoodVertices);
    //    double metPy1 = input->metPt * sin(input->metPhi)-(-0.3485 - 0.08732 * input->nGoodVertices);
    //    
    //    double metPx = metPx1 - (-0.0566001 + 0.00584205 * input->nGoodVertices);
    //    double metPy = metPy1 - (0.0542134 - 0.0732428 * input->nGoodVertices);
    //    double metPx = input->metPt * cos(input->metPhi)-(-0.515436 + 0.0465104 * n);
    //    double metPy = input->metPt * sin(input->metPhi)-(-7.39321 + 1.64706 * n - 0.134483 * pow(n, 2) + 0.00297996 * pow(n, 3));


    double ret = 1000;
    if (metPx < 0) {
        if (metPy > 0)ret = atan(metPy / metPx) + M_PI;
        if (metPy < 0)ret = atan(metPy / metPx) - M_PI;
    } else ret = (atan(metPy / metPx));
    input->SetMetPhi(ret);
}

int main(int argc, char** argv) {
    std::vector<std::string> inputFileNames;
    std::string plotFileName;
    TH1D * METResolutions = 0;
    double doJES = 1;
    bool isData = false;
    bool applyJetPt = false;
    bool e_mtw = false;
    bool dRcut = false;
    bool selectedwtemp = false;
    int smearingSkim = 1;
    string sample = "";
    string ttDecayMode = "";
    string prefix = "";
    string myFlavor = "";
    int ptrw = 0;
    int metphi = 0;
    int nWM = 0;
    int nWP = 0;
    int nSRP = 0;
    int nSRM = 0;
    int nSBP = 0;
    int nSBM = 0;
    TString dirName = "";
    bool isStack = false;
    int nBinY = 100;
    for (int f = 1; f < argc; f++) {
        std::string arg_fth(*(argv + f));
        if (arg_fth == "nBinY") {
            f++;
            std::string in(*(argv + f));
            nBinY = atof(in.c_str());
        } else if (arg_fth == "prefix") {
            f++;
            std::string in(*(argv + f));
            prefix = in + string("_");
        } else if (arg_fth == "input") {
            f++;
            std::string in(*(argv + f));
            string myDir = "~/work/samples/postMoriond/Aug2013/";
            if (in == string("WJetsSherpa_Mu") || in == string("WJetsSherpa_Ele")) {
                myDir = myDir + string("SHERPA/");
                sample = "WJets";
            } else {
                sample = in;
            }
            if (dirName == "TreesEle" && in == "Data")
                inputFileNames.push_back(string(myDir + prefix + in + "_Ele.root"));
            else
                inputFileNames.push_back(string(myDir + prefix + in + ".root"));
            plotFileName = prefix + in + "_plots.root";
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
        } else if (arg_fth == "dirName") {
            f++;
            std::string in(*(argv + f));
            dirName = in.c_str();
        } else if (arg_fth == "stack") {
            f++;
            std::string in(*(argv + f));
            if (in == "yes" || in == "YES" || in == "Yes" || in == "y" || in == "Y")
                isStack = true;
            else
                isStack = false;
        } else if (arg_fth == "dojetpt") {
            f++;
            std::string in(*(argv + f));
            if (in == "yes" || in == "YES" || in == "Yes" || in == "y" || in == "Y")
                applyJetPt = true;
            else
                applyJetPt = false;
        } else if (arg_fth == "flavor") {
            f++;
            std::string in(*(argv + f));
            myFlavor = in;
        } else if (arg_fth == "ptrw") {
            f++;
            std::string in(*(argv + f));
            ptrw = atof(in.c_str());
        } else if (arg_fth == "metphi") {
            f++;
            std::string in(*(argv + f));
            metphi = atof(in.c_str());
            cout << "================ " << metphi << endl;
        } else if (arg_fth == "emtw") {
            f++;
            std::string in(*(argv + f));
            if (in == "yes" || in == "YES" || in == "Yes" || in == "y" || in == "Y")
                e_mtw = true;
            else
                e_mtw = false;
        } else if (arg_fth == "selW") {
            f++;
            std::string in(*(argv + f));
            if (in == "yes" || in == "YES" || in == "Yes" || in == "y" || in == "Y")
                selectedwtemp = true;
            else
                selectedwtemp = false;
        } else if (arg_fth == "dr") {
            f++;
            std::string in(*(argv + f));
            if (in == "yes" || in == "YES" || in == "Yes" || in == "y" || in == "Y")
                dRcut = true;
            else
                dRcut = false;
        }
    }
    int channel = 0;
    if (dirName == "TreesEle")
        channel = 1;

    SingleTopHistograms Default_Def("Default_Def", false, nBinY);
    if (!isStack)
        Default_Def.SetErrors(true);
    SingleTopHistograms EtaCut_Def("EtaFwD_Def", false, nBinY);
    if (!isStack)
        EtaCut_Def.SetErrors(true);
    SingleTopHistograms MtopBelowCut_Def("MtopBelowCut_Def", false, nBinY); // < 130 GeV
    if (!isStack)
        MtopBelowCut_Def.SetErrors(true);
    SingleTopHistograms MtopInWindow_Def("MtopInWindow_Def", false, nBinY); // 130< <220 GeV
    if (!isStack)
        MtopInWindow_Def.SetErrors(true);
    SingleTopHistograms MtopAboveCut_Def("MtopAboveCut_Def", false, nBinY); // > 220 GeV
    if (!isStack)
        MtopAboveCut_Def.SetErrors(true);
    SingleTopHistograms MtopOutWindow_Def("MtopOutWindow_Def", false, nBinY); // > 220 GeV && < 130 GeV
    if (!isStack)
        MtopOutWindow_Def.SetErrors(true);


    SingleTopHistograms AntiEtaCut_Def("antiEtaFwD_Def", false, nBinY);
    if (!isStack)
        AntiEtaCut_Def.SetErrors(true);

    SingleTopHistograms Default_allW("Default_allW", false, nBinY);
    if (!isStack)
        Default_allW.SetErrors(true);
    SingleTopHistograms EtaCut_allW("EtaFwD_allW", false, nBinY);
    if (!isStack)
        EtaCut_allW.SetErrors(true);
    SingleTopHistograms MtopBelowCut_allW("MtopBelowCut_allW", false, nBinY); // < 130 GeV
    if (!isStack)
        MtopBelowCut_allW.SetErrors(true);
    SingleTopHistograms MtopInWindow_allW("MtopInWindow_allW", false, nBinY); // 130< <220 GeV
    if (!isStack)
        MtopInWindow_allW.SetErrors(true);
    SingleTopHistograms MtopAboveCut_allW("MtopAboveCut_allW", false, nBinY); // > 220 GeV
    if (!isStack)
        MtopAboveCut_allW.SetErrors(true);
    SingleTopHistograms MtopOutWindow_allW("MtopOutWindow_allW", false, nBinY); // > 220 GeV && < 130 GeV
    if (!isStack)
        MtopOutWindow_allW.SetErrors(true);
    SingleTopHistograms AntiEtaCut_allW("antiEtaFwD_allW", false, nBinY);
    if (!isStack)
        AntiEtaCut_allW.SetErrors(true);


    //-------------- Real



    SingleTopHistograms DefaultTrue_Def("DefaultTrue_Def", false, nBinY);
    if (!isStack)
        DefaultTrue_Def.SetErrors(true);

    SingleTopHistograms EtaCutTrue_Def("EtaFwDTrue_Def", false, nBinY);
    if (!isStack)
        EtaCutTrue_Def.SetErrors(true);
    SingleTopHistograms MtopBelowCutTrue_Def("MtopBelowCutTrue_Def", false, nBinY); // < 130 GeV
    if (!isStack)
        MtopBelowCutTrue_Def.SetErrors(true);
    SingleTopHistograms MtopInWindowTrue_Def("MtopInWindowTrue_Def", false, nBinY); // 130< <220 GeV
    if (!isStack)
        MtopInWindowTrue_Def.SetErrors(true);
    SingleTopHistograms MtopAboveCutTrue_Def("MtopAboveCutTrue_Def", false, nBinY); // > 220 GeV
    if (!isStack)
        MtopAboveCutTrue_Def.SetErrors(true);
    SingleTopHistograms MtopOutWindowTrue_Def("MtopOutWindowTrue_Def", false, nBinY); // > 220 GeV && < 130 GeV
    if (!isStack)
        MtopOutWindowTrue_Def.SetErrors(true);
    SingleTopHistograms AntiEtaCutTrue_Def("antiEtaFwDTrue_Def", false, nBinY);
    if (!isStack)
        AntiEtaCutTrue_Def.SetErrors(true);


    SingleTopHistograms DefaultTrue_allW("DefaultTrue_allW", false, nBinY);
    if (!isStack)
        DefaultTrue_allW.SetErrors(true);
    SingleTopHistograms EtaCutTrue_allW("EtaFwDTrue_allW", false, nBinY);
    if (!isStack)
        EtaCutTrue_allW.SetErrors(true);
    SingleTopHistograms MtopBelowCutTrue_allW("MtopBelowCutTrue_allW", false, nBinY); // < 130 GeV
    if (!isStack)
        MtopBelowCutTrue_allW.SetErrors(true);
    SingleTopHistograms MtopInWindowTrue_allW("MtopInWindowTrue_allW", false, nBinY); // 130< <220 GeV
    if (!isStack)
        MtopInWindowTrue_allW.SetErrors(true);
    SingleTopHistograms MtopAboveCutTrue_allW("MtopAboveCutTrue_allW", false, nBinY); // > 220 GeV
    if (!isStack)
        MtopAboveCutTrue_allW.SetErrors(true);
    SingleTopHistograms MtopOutWindowTrue_allW("MtopOutWindowTrue_allW", false, nBinY); // > 220 GeV && < 130 GeV
    if (!isStack)
        MtopOutWindowTrue_allW.SetErrors(true);
    SingleTopHistograms AntiEtaCutTrue_allW("antiEtaFwDTrue_allW", false, nBinY);
    if (!isStack)
        AntiEtaCutTrue_allW.SetErrors(true);



    //-----------Dilepton

    DiLeptonHistograms DiLep_Default_Def("Default_Def", false, nBinY);
    if (!isStack)
        DiLep_Default_Def.SetErrors(true);
    DiLeptonHistograms DiLep_EtaCut_Def("EtaFwD_Def", false, nBinY);
    if (!isStack)
        DiLep_EtaCut_Def.SetErrors(true);
    DiLeptonHistograms DiLep_MtopBelowCut_Def("MtopBelowCut_Def", false, nBinY); // < 130 GeV
    if (!isStack)
        DiLep_MtopBelowCut_Def.SetErrors(true);
    DiLeptonHistograms DiLep_MtopInWindow_Def("MtopInWindow_Def", false, nBinY); // 130< <220 GeV
    if (!isStack)
        DiLep_MtopInWindow_Def.SetErrors(true);
    DiLeptonHistograms DiLep_MtopAboveCut_Def("MtopAboveCut_Def", false, nBinY); // > 220 GeV
    if (!isStack)
        DiLep_MtopAboveCut_Def.SetErrors(true);
    DiLeptonHistograms DiLep_MtopOutWindow_Def("MtopOutWindow_Def", false, nBinY); // > 220 GeV && < 130 GeV
    if (!isStack)
        DiLep_MtopOutWindow_Def.SetErrors(true);


    DiLeptonHistograms DiLep_AntiEtaCut_Def("antiEtaFwD_Def", false, nBinY);
    if (!isStack)
        DiLep_AntiEtaCut_Def.SetErrors(true);

    DiLeptonHistograms DiLep_Default_allW("Default_allW", false, nBinY);
    if (!isStack)
        DiLep_Default_allW.SetErrors(true);
    DiLeptonHistograms DiLep_EtaCut_allW("EtaFwD_allW", false, nBinY);
    if (!isStack)
        EtaCut_allW.SetErrors(true);
    DiLeptonHistograms DiLep_MtopBelowCut_allW("MtopBelowCut_allW", false, nBinY); // < 130 GeV
    if (!isStack)
        DiLep_MtopBelowCut_allW.SetErrors(true);
    DiLeptonHistograms DiLep_MtopInWindow_allW("MtopInWindow_allW", false, nBinY); // 130< <220 GeV
    if (!isStack)
        DiLep_MtopInWindow_allW.SetErrors(true);
    DiLeptonHistograms DiLep_MtopAboveCut_allW("MtopAboveCut_allW", false, nBinY); // > 220 GeV
    if (!isStack)
        DiLep_MtopAboveCut_allW.SetErrors(true);
    DiLeptonHistograms DiLep_MtopOutWindow_allW("MtopOutWindow_allW", false, nBinY); // > 220 GeV && < 130 GeV
    if (!isStack)
        DiLep_MtopOutWindow_allW.SetErrors(true);
    DiLeptonHistograms DiLep_AntiEtaCut_allW("antiEtaFwD_allW", false, nBinY);
    if (!isStack)
        DiLep_AntiEtaCut_allW.SetErrors(true);


    //-------------- Real



    DiLeptonHistograms DiLep_DefaultTrue_Def("DefaultTrue_Def", false, nBinY);
    if (!isStack)
        DiLep_DefaultTrue_Def.SetErrors(true);

    DiLeptonHistograms DiLep_EtaCutTrue_Def("EtaFwDTrue_Def", false, nBinY);
    if (!isStack)
        DiLep_EtaCutTrue_Def.SetErrors(true);
    DiLeptonHistograms DiLep_MtopBelowCutTrue_Def("MtopBelowCutTrue_Def", false, nBinY); // < 130 GeV
    if (!isStack)
        DiLep_MtopBelowCutTrue_Def.SetErrors(true);
    DiLeptonHistograms DiLep_MtopInWindowTrue_Def("MtopInWindowTrue_Def", false, nBinY); // 130< <220 GeV
    if (!isStack)
        DiLep_MtopInWindowTrue_Def.SetErrors(true);
    DiLeptonHistograms DiLep_MtopAboveCutTrue_Def("MtopAboveCutTrue_Def", false, nBinY); // > 220 GeV
    if (!isStack)
        DiLep_MtopAboveCutTrue_Def.SetErrors(true);
    DiLeptonHistograms DiLep_MtopOutWindowTrue_Def("MtopOutWindowTrue_Def", false, nBinY); // > 220 GeV && < 130 GeV
    if (!isStack)
        DiLep_MtopOutWindowTrue_Def.SetErrors(true);
    DiLeptonHistograms DiLep_AntiEtaCutTrue_Def("antiEtaFwDTrue_Def", false, nBinY);
    if (!isStack)
        DiLep_AntiEtaCutTrue_Def.SetErrors(true);


    DiLeptonHistograms DiLep_DefaultTrue_allW("DefaultTrue_allW", false, nBinY);
    if (!isStack)
        DiLep_DefaultTrue_allW.SetErrors(true);
    DiLeptonHistograms DiLep_EtaCutTrue_allW("EtaFwDTrue_allW", false, nBinY);
    if (!isStack)
        DiLep_EtaCutTrue_allW.SetErrors(true);
    DiLeptonHistograms DiLep_MtopBelowCutTrue_allW("MtopBelowCutTrue_allW", false, nBinY); // < 130 GeV
    if (!isStack)
        DiLep_MtopBelowCutTrue_allW.SetErrors(true);
    DiLeptonHistograms DiLep_MtopInWindowTrue_allW("MtopInWindowTrue_allW", false, nBinY); // 130< <220 GeV
    if (!isStack)
        DiLep_MtopInWindowTrue_allW.SetErrors(true);
    DiLeptonHistograms DiLep_MtopAboveCutTrue_allW("MtopAboveCutTrue_allW", false, nBinY); // > 220 GeV
    if (!isStack)
        DiLep_MtopAboveCutTrue_allW.SetErrors(true);
    DiLeptonHistograms DiLep_MtopOutWindowTrue_allW("MtopOutWindowTrue_allW", false, nBinY); // > 220 GeV && < 130 GeV
    if (!isStack)
        DiLep_MtopOutWindowTrue_allW.SetErrors(true);
    DiLeptonHistograms DiLep_AntiEtaCutTrue_allW("antiEtaFwDTrue_allW", false, nBinY);
    if (!isStack)
        DiLep_AntiEtaCutTrue_allW.SetErrors(true);






    TH1D * def_finalMT = new TH1D("def_finalMT", "final-W-neutrino transverse mass", 100, 0., 200.);
    if (!isStack)
        def_finalMT->Sumw2();
    def_finalMT->GetXaxis()->SetTitle("M_{T}(W,#nu)");
    TH1D * allW_finalMT = new TH1D("allW_finalMT", "final-W-neutrino transverse mass", 100, 0., 200.);
    allW_finalMT->GetXaxis()->SetTitle("M_{T}(W,#nu)");
    if (!isStack)
        allW_finalMT->Sumw2();


    cout << "START" << endl;

    TFile * f = 0;
    TApplication theApp("App", &argc, argv);
    double nInit = 0;
    double nFinal = 0;
    double nHLTrunB = 0;
    double nMt = 0;
    double nGoodSolution = 0;
    plotFileName = dirName + string("_") + myFlavor + plotFileName;
#if defined ISDATA || defined   Wtemplate     
    MuonTree * myMuonTree = 0;
#endif
#if !defined  ISDATA && !defined   Wtemplate 
    GenInfoMuonTree * myMuonTree = 0;
#endif
    TTree * eventTree = 0;


    GenSingleTopMaker * genSingleTop = 0;
    TRootGenEventMaker * genEvtMaker = 0;
    TRandom3 tr(154456);
    for (unsigned int fNumber = 0; fNumber < inputFileNames.size(); fNumber++) {
        cout << "file number " << fNumber + 1 << ": " << inputFileNames.at(fNumber) << endl;
        TFile* f = TFile::Open(inputFileNames.at(fNumber).c_str());

#ifdef ISDATA
#if !defined QCD && !defined Wtemplate
        myMuonTree = new MuonTree(eventTree, f, sample + "_2J_1T_noSyst", dirName);
#endif /*QCD*/
#if defined QCD  && !defined Wtemplate
        myMuonTree = new MuonTree(eventTree, f, sample + "_2J_1T_QCD_noSyst", dirName);
#endif /*QCD*/
#if !defined QCD  && defined Wtemplate
        myMuonTree = new MuonTree(eventTree, f, sample + "_2J_0T_noSyst", dirName);
#endif /*Wtemplate*/
#if defined QCD  && defined Wtemplate
        myMuonTree = new MuonTree(eventTree, f, sample + "_2J_0T_QCD_noSyst", dirName);
#endif /*Wtemplate*/
#endif /*ISDATA*/
#if !defined ISDATA && !defined Wtemplate
        if (prefix != string("")) {
            cout << "sample name has _" << endl;
            myMuonTree = new GenInfoMuonTree(eventTree, f, sample + "_2J_1T_noSyst", dirName);
        } else {
            //            cout << "sample name does not have _: " << string(sample + "_2J_0T_noSyst") << endl;
            if (sample.find("Comphep") != 0 && fabs(sample.find("Comphep")) < sample.size())
                myMuonTree = new GenInfoMuonTree(eventTree, f, "TChannel_2J_1T_noSyst", dirName);
            else
                myMuonTree = new GenInfoMuonTree(eventTree, f, sample + "_2J_1T_noSyst", dirName);
        }
#endif /*ISDATA*/
#if defined Wtemplate && !defined QCD
        myMuonTree = new MuonTree(eventTree, f, sample + "_2J_0T_noSyst", dirName);
#endif


        if (string(myMuonTree->fChain->GetName()) == string("Data_2J_1T_QCD_noSyst") ||
                string(myMuonTree->fChain->GetName()) == string("Data_2J_0T_QCD_noSyst")) {
            plotFileName = dirName + "_QCD_plots.root";
        }
        if (string(myMuonTree->fChain->GetName()) == string("Data_2J_0T_noSyst")) {
            plotFileName = dirName + "_WTemplateDefFormat_plots.root";
            //            plotFileName = dirName + "_WTemplate_plots.root";
        }
        cout << "tree name: " << myMuonTree->fChain->GetName() << endl;
        METPhiCorrector metCorr;

        for (int eventNumber = 0; eventNumber < myMuonTree->fChain->GetEntriesFast(); eventNumber++) {
            //            cout << "New event: " << eventNumber << "--------------------" << endl;
            myMuonTree->GetEntry(eventNumber);
#if !defined Wtemplate || (defined Wtemplate && defined ISDATA )
            if (!myMuonTree->passExtraSelection(applyJetPt, e_mtw)) {
                continue;
            }
#endif
            if (!isDesiredWJetsFlavor(myMuonTree, myFlavor))
                continue;
            //            cout << "I passed" << endl;

            nFinal++;
#if defined Wtemplate && !defined ISDATA
            if (!myMuonTree->jetsForWtemplate(selectedwtemp, e_mtw)) {
                continue;
            }
#endif /*Wtemplate*/
            bool isLeptonicTop = false;
            bool isHadronicTop = false;
            std::vector<int> nonTopW;
#if !defined ISDATA && !defined Wtemplate
            if (myMuonTree->SampleRecognizer(sample) > 0) {
                cout << "I am a top-contained sample :-)" << endl;
                genEvtMaker = new TRootGenEventMaker(myMuonTree, sample);
                genSingleTop = new GenSingleTopMaker(&(genEvtMaker->output), channel);
                isLeptonicTop = (genEvtMaker->output.tops()[0].isLeptonicMu()
                        || genEvtMaker->output.tops()[0].isLeptonicEl());
                isHadronicTop = genEvtMaker->output.tops()[0].isHadronic();
                nonTopW = genEvtMaker->output.getNonTopWList();
                delete genEvtMaker;
            } else {
                //                    cout << "I am not a top-contained sample :-(\t" << genEvtMaker << "\t" << genSingleTop << endl;
            }
#endif /*ISDATA*/

            //            cout << "Number of tops at analysis level: " << genSingleTop->ntops << endl;
            Event myEvent_tmp = myEventPreparation(myMuonTree);
            double mt = myMuonTree->GetMTW();
            TLorentzVector fwdJet = myMuonTree->GetMostFwDJet();
            double eta = fabs(fwdJet.Eta());
            if (string(myMuonTree->fChain->GetName()) == string("Data_2J_1T_QCD_noSyst") ||
                    string(myMuonTree->fChain->GetName()) == string("Data_2J_0T_QCD_noSyst")) {
                //                cout << "QCD template" << endl;
                DR<TLorentzVector> dr;
                dr.SetVectors(myEvent_tmp.Dmuons[0], myEvent_tmp.BPFJets[0]);
                if (dr.getValue() < 0.3)
                    continue;
                if (dirName == "TreesEle") {
                    dr.SetVectors(myEvent_tmp.Dmuons[0], myEvent_tmp.GPFJets[1]);
                    if (dr.getValue() < 0.3)
                        continue;
                    if (myMuonTree->leptonRhoCorrectedRelIso <= 0.1)
                        continue;
                    if (!e_mtw)
                        if (cos(myMuonTree->leptonPhi - myMuonTree->metPhi) >= 0.8) {
                            cout << "*****************************" << endl;
                            continue;
                        }
                }
            } else if (dRcut) {
                DR<TLorentzVector> dr;
                dr.SetVectors(myEvent_tmp.Dmuons[0], myEvent_tmp.BPFJets[0]);
                if (dr.getValue() < 0.3)
                    continue;
            }

            double puOnlyW = 1;
            double btagpuW = 1;
            double lumiWeight3D = 1;
            if (genSingleTop != 0) {
                if (genSingleTop->isDesiredSemiLepton(channel)) {
                    cout << genSingleTop->genSingleTop.MuCharge() << "\t" << myMuonTree->charge;
                    if (isLeptonicTop) {
                        cout << ": leptonic top" << endl;
                    } else if (isHadronicTop) {
                        cout << ": hadronic top" << endl;
                    } else {
                        cout << endl;
                    }
                    cout << "Second W status: " << endl;
                    for (int s = 0; s < nonTopW.size(); s++) {
                        if (nonTopW[s] == 1)
                            cout << "\tW decays to Electron" << endl;
                        if (nonTopW[s] == 2)
                            cout << "\tW decays to Muon" << endl;
                        if (nonTopW[s] == 3)
                            cout << "\tW decays to Tau" << endl;
                        if (nonTopW[s] == 4)
                            cout << "\tW decays to Hadron" << endl;
                    }
                }
            }
            if (!isData) {
                //                GetWeightsNoPu(myMuonTree, lumiWeight3D, puOnlyW, btagpuW);
                puOnlyW *= myMuonTree->GetPUOnlyWeight();
                btagpuW *= myMuonTree->GetPUbTagWeight();
                lumiWeight3D = myMuonTree->GetTotalWeight();
#if !defined ISDATA && !defined Wtemplate
                if (ptrw != 0 && (string(myMuonTree->fChain->GetName()).find("TTBar") >= 0
                        && string(myMuonTree->fChain->GetName()).find("TTBar") <
                        string(myMuonTree->fChain->GetName()).size())) {
                    TopPtReweighter topptrw;
                    TLorentzVector antitop;
                    TLorentzVector top;
                    double myTopW = 1.;
                    if (myMuonTree->GetGenTop(1).type() == -6) {
                        antitop = myMuonTree->GetGenTop(1);
                        top = myMuonTree->GetGenTop(2);
                        myTopW = topptrw.Weight(top.Pt(), antitop.Pt());
                    } else if (myMuonTree->GetGenTop(1).type() == 6) {
                        antitop = myMuonTree->GetGenTop(2);
                        top = myMuonTree->GetGenTop(1);
                        myTopW = topptrw.Weight(top.Pt(), antitop.Pt());
                    } else {
                        cout << "***************bad top id value*************" << endl;
                    }

                    puOnlyW *= myTopW;
                    btagpuW *= myTopW;
                    lumiWeight3D *= myTopW;
                }
#endif
            }
            SemiLepTopQuark myLeptonicTop(myEvent_tmp.BPFJets[0], myEvent_tmp.mets[0], myEvent_tmp.Dmuons[0],
                    myEvent_tmp.GPFJets[1], fwdJet, METResolutions);
            myLeptonicTop.setMuCharge((int) myMuonTree->charge);
            //            cout << "Before CosTheta Fill" << endl;
            if (myMuonTree->charge > 0)
                nWP++;
            if (myMuonTree->charge < 0)
                nWM++;
            double topMass = myLeptonicTop.top().M();
            /*
             * Filling CosTheta Histograms
             */
            if (ttDecayMode == "") {
                if (myLeptonicTop.hasNeutrinoSolution()) {
                    nGoodSolution++;

                    DefaultTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                    DefaultTrue_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                    if (topMass <= 130) {
                        MtopBelowCutTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                        MtopBelowCutTrue_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                    } else if (topMass > 130 && topMass < 220) {
                        MtopInWindowTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                        MtopInWindowTrue_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                    } else if (topMass >= 220) {
                        MtopAboveCutTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                        MtopAboveCutTrue_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                    }
                    if (topMass >= 220 || topMass <= 130) {
                        MtopOutWindowTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                        MtopOutWindowTrue_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                    }
                    if (eta > 1.5) {
                        EtaCutTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                        EtaCutTrue_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                    } else {
                        AntiEtaCutTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                        AntiEtaCutTrue_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                    }
                }

                Default_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                Default_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);

                if (topMass <= 130) {
                    MtopBelowCut_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                    MtopBelowCut_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                } else if (topMass > 130 && topMass < 220) {
                    MtopInWindow_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                    MtopInWindow_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                } else if (topMass >= 220) {
                    MtopAboveCut_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                    MtopAboveCut_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                }
                if (topMass >= 220 || topMass <= 130) {
                    MtopOutWindow_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                    MtopOutWindow_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                }
                if (eta > 1.5) {
                    EtaCut_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                    EtaCut_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                } else {
                    AntiEtaCut_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                    AntiEtaCut_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                }
            } else {//Dimuon, muTau, muE TtBar
                if (myLeptonicTop.hasNeutrinoSolution()) {
                    nGoodSolution++;
                    DiLep_DefaultTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                    DiLep_DefaultTrue_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                    if (topMass <= 130) {
                        DiLep_MtopBelowCutTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                        DiLep_MtopBelowCutTrue_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                    } else if (topMass > 130 && topMass < 220) {
                        DiLep_MtopInWindowTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                        DiLep_MtopInWindowTrue_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                    } else if (topMass >= 220) {
                        DiLep_MtopAboveCutTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                        DiLep_MtopAboveCutTrue_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                    }
                    if (topMass >= 220 || topMass <= 130) {
                        DiLep_MtopOutWindowTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                        DiLep_MtopOutWindowTrue_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                    }
                    if (eta > 1.5) {
                        DiLep_EtaCutTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                        DiLep_EtaCutTrue_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                    } else {
                        DiLep_AntiEtaCutTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                        DiLep_AntiEtaCutTrue_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                    }
                }
                DiLep_Default_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                if (topMass <= 130) {
                    DiLep_MtopBelowCut_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                    DiLep_MtopBelowCut_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                } else if (topMass > 130 && topMass < 220) {
                    DiLep_MtopInWindow_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                    DiLep_MtopInWindow_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                } else if (topMass >= 220) {
                    DiLep_MtopAboveCut_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                    DiLep_MtopAboveCut_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                }
                if (topMass >= 220 || topMass <= 130) {
                    DiLep_MtopOutWindow_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                    DiLep_MtopOutWindow_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                }
                if (eta > 1.5) {
                    DiLep_EtaCut_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                    DiLep_EtaCut_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                } else {
                    DiLep_AntiEtaCut_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                    DiLep_AntiEtaCut_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                }
            }
            //            cout << "After CosTheta Fill" << endl;

            if (genSingleTop != NULL) {
                //                cout << "genSingleTop: " << genSingleTop << endl;
                delete genSingleTop;
            }

            /*
             * Filling Event Histograms
             */
            //            cout << "Before Event Fill" << endl;
            TRootPFJet FWDJET(fwdJet);
            std::vector<TRootPFJet> sortedJetsbyEta;
            sortedJetsbyEta.push_back(FWDJET);
            std::vector<TRootPFJet> nonBs;
            nonBs.push_back(myMuonTree->GetFJet());


            if (myLeptonicTop.top().M() > 130 && myLeptonicTop.top().M() < 220) {
                if (myMuonTree->charge > 0)
                    nSRP++;
                else if (myMuonTree->charge < 0)
                    nSRM++;
            } else {
                if (myMuonTree->charge > 0)
                    nSBP++;
                else if (myMuonTree->charge < 0)
                    nSBM++;
            }
            int bin = -1;

        }

        cout << "before closing file input " << f->GetName() << endl;
        f->Close();
        delete f;

    }
    cout << "before endjob" << endl;
    TFile * fout = new TFile(plotFileName.c_str(), "recreate");
    fout->cd();

    if (ttDecayMode == "") {
        Default_Def.Write(fout);
        Default_allW.Write(fout);
        MtopAboveCut_Def.Write(fout);
        MtopAboveCut_allW.Write(fout);
        MtopBelowCut_Def.Write(fout);
        MtopBelowCut_allW.Write(fout);
        MtopOutWindow_Def.Write(fout);
        MtopOutWindow_allW.Write(fout);
        MtopInWindow_Def.Write(fout);
        MtopInWindow_allW.Write(fout);
        EtaCut_Def.Write(fout);
        EtaCut_allW.Write(fout);
        AntiEtaCut_Def.Write(fout);
        AntiEtaCut_allW.Write(fout);

        DefaultTrue_Def.Write(fout);
        DefaultTrue_allW.Write(fout);
        MtopAboveCutTrue_Def.Write(fout);
        MtopAboveCutTrue_allW.Write(fout);
        MtopBelowCutTrue_Def.Write(fout);
        MtopBelowCutTrue_allW.Write(fout);
        MtopOutWindowTrue_Def.Write(fout);
        MtopOutWindowTrue_allW.Write(fout);
        MtopInWindowTrue_Def.Write(fout);
        MtopInWindowTrue_allW.Write(fout);
        EtaCutTrue_Def.Write(fout);
        EtaCutTrue_allW.Write(fout);
        AntiEtaCutTrue_Def.Write(fout);
        AntiEtaCutTrue_allW.Write(fout);


    } else {
        DiLep_Default_Def.Write(fout);
        DiLep_Default_allW.Write(fout);
        DiLep_MtopAboveCut_Def.Write(fout);
        DiLep_MtopAboveCut_allW.Write(fout);
        DiLep_MtopBelowCut_Def.Write(fout);
        DiLep_MtopBelowCut_allW.Write(fout);
        DiLep_MtopOutWindow_Def.Write(fout);
        DiLep_MtopOutWindow_allW.Write(fout);
        DiLep_MtopInWindow_Def.Write(fout);
        DiLep_MtopInWindow_allW.Write(fout);
        DiLep_EtaCut_Def.Write(fout);
        DiLep_EtaCut_allW.Write(fout);
        DiLep_AntiEtaCut_Def.Write(fout);
        DiLep_AntiEtaCut_allW.Write(fout);

        DiLep_DefaultTrue_Def.Write(fout);
        DiLep_DefaultTrue_allW.Write(fout);
        DiLep_MtopAboveCutTrue_Def.Write(fout);
        DiLep_MtopAboveCutTrue_allW.Write(fout);
        DiLep_MtopBelowCutTrue_Def.Write(fout);
        DiLep_MtopBelowCutTrue_allW.Write(fout);
        DiLep_MtopOutWindowTrue_Def.Write(fout);
        DiLep_MtopOutWindowTrue_allW.Write(fout);
        DiLep_MtopInWindowTrue_Def.Write(fout);
        DiLep_MtopInWindowTrue_allW.Write(fout);
        DiLep_EtaCutTrue_Def.Write(fout);
        DiLep_EtaCutTrue_allW.Write(fout);
        DiLep_AntiEtaCutTrue_Def.Write(fout);
        DiLep_AntiEtaCutTrue_allW.Write(fout);
    }

    fout->Write();
    fout->Close();

    return 0;
}

