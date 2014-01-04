/* 
 * File:   OrsoHistogramCreator.C
 * Author: nadjieh
 *
 * Created on October 12, 2012, 12:34 PM
 */
//#define ISDATA
//#define QCD
//#define Wtemplate
#include "TDirectory.h"

#include "../../AnalysisClasses/EventSelection/interface/ElectronSelector.h"

#include "../../AnalysisClasses/EventSelection/interface/Event.h"

#include "../../AnalysisClasses/EventSelection/interface/ElectronHists.h"
#include "../../AnalysisClasses/EventSelection/interface/MuonHists.h"
#include "../../AnalysisClasses/EventSelection/interface/PVHists.h"
#include "../../AnalysisClasses/EventSelection/interface/JetHists.h"
#include "../../AnalysisClasses/EventSelection/interface/JetSelector.h"
#include "../../AnalysisClasses/EventSelection/interface/MuonVetoSelector.h"
#include "../../AnalysisClasses/EventSelection/interface/MetHists.h"
#include "../../AnalysisClasses/EventSelection/interface/PrimaryVertexSelector.h"
#include "../../TopBrussels/TopTreeProducer/interface/TRootMuon.h"
#include "../../TopBrussels/TopTreeProducer/interface/TRootElectron.h"
#include "../../TopBrussels/TopTreeProducer/interface/TRootJet.h"
#include "../../TopBrussels/TopTreeProducer/interface/TRootCaloJet.h"
#include "../../TopBrussels/TopTreeProducer/interface/TRootPFJet.h"
#include "../../TopBrussels/TopTreeProducer/interface/TRootMET.h"
#include "../../TopBrussels/TopTreeProducer/interface/TRootGenEvent.h"
#include "../../TopBrussels/TopTreeProducer/interface/TRootNPGenEvent.h"
#include "../../TopBrussels/TopTreeProducer/interface/TRootEvent.h"
#include "../../TopBrussels/TopTreeProducer/interface/TRootRun.h"
#include "../../TopBrussels/TopTreeProducer/interface/TRootParticle.h"
#include "../../TopBrussels/TopTreeProducer/interface/TRootMCParticle.h"
#include "../../TopBrussels/TopTreeProducer/interface/TRootVertex.h"
#include "../../TopBrussels/TopTreeProducer/interface/TRootHLTInfo.h"
#include "../../AnalysisClasses/EventSelection/interface/PracticalEvent.h"
#include "../../AnalysisClasses/ToyAnalysis/interface/GenSingleTopMaker.h"
#include "../../AnalysisClasses/PhysicsObjects/interface/SemiLepTopQuark.h"
#include "../../AnalysisClasses/ChiSquared/interface/DR.h"
#include "../../AnalysisClasses/EventSelection/interface/DifferentHistogramsTwb.h"
#include "../interface/MuonTree.h"
#include "../interface/GenInfoMuonTree.h"
#include "../interface/TRootGenEventMaker.h"



#include <sstream>
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
    if (input->nGoodVertices < 10000)
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

string anomalousNameCorrector(string name) {
    int iLV = name.find("LV");
    if (iLV > 0 && iLV < name.size()) {
        string ret = name.substr(0, iLV - 1);
        return ret;
    }
    return name;
}

int main(int argc, char** argv) {
    std::vector<std::string> inputFileNames;
    std::string plotFileName;
    TH1D * METResolutions = 0;
    double doJES = 1;
    bool isData = false;
    bool applyJetPt = false;
    int smearingSkim = 1;
    string sample = "";
    string ttDecayMode = "";
    string prefix = "";
    string myFlavor = "";
    int nWM = 0;
    int nWP = 0;
    int nSRP = 0;
    int nSRM = 0;
    int nSBP = 0;
    int nSBM = 0;
    TString dirName = "";
    bool isStack = false;
    bool e_mtw = false;
    TH1D * cutFlow = new TH1D("cutFlow", "cutFlow", 10, 0, 10);
    cutFlow->GetXaxis()->SetBinLabel(1, "Intitial");
    cutFlow->GetXaxis()->SetBinLabel(2, "p_{T} (lep.) > 26");
    cutFlow->GetXaxis()->SetBinLabel(3, "p_{T} (lep.) > 30");
    cutFlow->GetXaxis()->SetBinLabel(4, "p_{T} (bjet) > 40");
    cutFlow->GetXaxis()->SetBinLabel(5, "p_{T} (fjet) > 40");
    for (int f = 1; f < argc; f++) {
        std::string arg_fth(*(argv + f));
        if (arg_fth == "prefix") {
            f++;
            std::string in(*(argv + f));
            prefix = in + string("_");
        } else if (arg_fth == "input") {
            f++;
            std::string in(*(argv + f));
            if (dirName == "TreesEle" && in == "Data")
                inputFileNames.push_back(string("~/work/samples/postMoriond/July2013/" + prefix + in + "_Ele.root"));
            else
                inputFileNames.push_back(string("~/work/samples/postMoriond/July2013/" + prefix + in + ".root"));
            sample = in;
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
        } else if (arg_fth == "emtw") {
            f++;
            std::string in(*(argv + f));
            if (in == "yes" || in == "YES" || in == "Yes" || in == "y" || in == "Y")
                e_mtw = true;
            else
                e_mtw = false;
        }
    }
    int channel = 0;
    if (dirName == "TreesEle")
        channel = 1;
    PVHists atLeastOnGPV("DefW_PV");
    JetHists Jets("DefW_Jet", 2);
    if (!isStack)
        Jets.SetErrors(true);
    JetHists BJets("DefW_BJet", 2);
    if (!isStack)
        BJets.SetErrors(true);
    JetHists nonBJets("DefW_nonBJet", 2);
    if (!isStack)
        nonBJets.SetErrors(true);
    JetHists FwDJet("DefW_FwD", 2);
    if (!isStack)
        FwDJet.SetErrors(true);
    MuonHists GoldenFinalPUMuons("DefW_Muon", 3);
    if (!isStack)
        GoldenFinalPUMuons.SetErrors(true);
    MetHists MetHist("DefW_Met");
    if (!isStack)
        MetHist.SetErrors(true);

    PVHists atLeastOnGPV_PuW("PuW_PV");
    JetHists Jets_PuW("PuW_Jet", 2);
    if (!isStack)
        Jets_PuW.SetErrors(true);
    JetHists BJets_PuW("PuW_BJet", 2);
    if (!isStack)
        BJets_PuW.SetErrors(true);
    JetHists nonBJets_PuW("PuW_nonBJet", 2);
    if (!isStack)
        nonBJets_PuW.SetErrors(true);
    JetHists FwDJet_PuW("PuW_FwD", 2);
    if (!isStack)
        FwDJet_PuW.SetErrors(true);
    MuonHists GoldenFinalPUMuons_PuW("PuW_Muon", 3);
    if (!isStack)
        GoldenFinalPUMuons_PuW.SetErrors(true);
    MetHists MetHist_PuW("PuW_Met");
    if (!isStack)
        MetHist_PuW.SetErrors(true);

    PVHists atLeastOnGPV_BtagPuW("BtagPuW_PV");
    JetHists Jets_BtagPuW("BtagPuW_Jet", 2);
    if (!isStack)
        Jets_BtagPuW.SetErrors(true);
    JetHists BJets_BtagPuW("BtagPuW_BJet", 2);
    if (!isStack)
        BJets_BtagPuW.SetErrors(true);
    JetHists nonBJets_BtagPuW("BtagPuW_nonBJet", 2);
    if (!isStack)
        nonBJets_BtagPuW.SetErrors(true);
    JetHists FwDJet_BtagPuW("BtagPuW_FwD", 2);
    if (!isStack)
        FwDJet_BtagPuW.SetErrors(true);
    MuonHists GoldenFinalPUMuons_BtagPuW("BtagPuW_Muon", 3);
    if (!isStack)
        GoldenFinalPUMuons_BtagPuW.SetErrors(true);
    MetHists MetHist_BtagPuW("BtagPuW_Met");
    if (!isStack)
        MetHist_BtagPuW.SetErrors(true);

    PVHists atLeastOnGPV_allW("allW_PV");
    JetHists Jets_allW("allW_Jet", 2);
    if (!isStack)
        Jets_allW.SetErrors(true);
    JetHists BJets_allW("allW_BJet", 2);
    if (!isStack)
        BJets_allW.SetErrors(true);
    JetHists nonBJets_allW("allW_nonBJet", 2);
    if (!isStack)
        nonBJets_allW.SetErrors(true);
    JetHists FwDJet_allW("allW_FwD", 2);
    if (!isStack)
        FwDJet_allW.SetErrors(true);
    MuonHists GoldenFinalPUMuons_allW("allW_Muon", 3);
    if (!isStack)
        GoldenFinalPUMuons_allW.SetErrors(true);
    MetHists MetHist_allW("allW_Met");
    if (!isStack)
        MetHist_allW.SetErrors(true);

    SingleTopHistograms Default_Def("Default_Def");
    if (!isStack)
        Default_Def.SetErrors(true);
    SingleTopHistograms EtaCut_Def("EtaFwD_Def");
    if (!isStack)
        EtaCut_Def.SetErrors(true);
    SingleTopHistograms HtCut_Def("HtCut_Def");
    if (!isStack)
        HtCut_Def.SetErrors(true);
    SingleTopHistograms AntiEtaCut_allW("antiEtaFwD_allW");
    if (!isStack)
        AntiEtaCut_allW.SetErrors(true);
    SingleTopHistograms AntiHtCut_Def("antiHtCut_Def");
    if (!isStack)
        AntiHtCut_Def.SetErrors(true);

    SingleTopHistograms DefaultTrue_Def("DefaultTrue_Def");
    if (!isStack)
        DefaultTrue_Def.SetErrors(true);
    SingleTopHistograms EtaCutTrue_Def("EtaFwDTrue_Def");
    if (!isStack)
        EtaCutTrue_Def.SetErrors(true);
    SingleTopHistograms HtCutTrue_Def("HtCutTrue_Def");
    if (!isStack)
        HtCutTrue_Def.SetErrors(true);
    SingleTopHistograms AntiEtaCutTrue_Def("antiEtaFwDTrue_Def");
    if (!isStack)
        AntiEtaCutTrue_Def.SetErrors(true);
    SingleTopHistograms AntiHtCutTrue_Def("antiHtCutTrue_Def");
    if (!isStack)
        AntiHtCutTrue_Def.SetErrors(true);

    SingleTopHistograms Default_PuW("Default_PuW");
    if (!isStack)
        Default_PuW.SetErrors(true);
    SingleTopHistograms Default_BtagPuW("Default_BtagPuW");
    if (!isStack)
        Default_BtagPuW.SetErrors(true);
    SingleTopHistograms Default_allW("Default_allW");
    if (!isStack)
        Default_allW.SetErrors(true);

    SingleTopHistograms EtaCut_PuW("EtaFwD_PuW");
    if (!isStack)
        EtaCut_PuW.SetErrors(true);
    SingleTopHistograms EtaCut_BtagPuW("EtaFwD_BtagPuW");
    if (!isStack)
        EtaCut_BtagPuW.SetErrors(true);
    SingleTopHistograms EtaCut_allW("EtaFwD_allW");
    if (!isStack)
        EtaCut_allW.SetErrors(true);

    SingleTopHistograms DefaultTrue_PuW("DefaultTrue_PuW");
    if (!isStack)
        DefaultTrue_PuW.SetErrors(true);
    SingleTopHistograms DefaultTrue_BtagPuW("DefaultTrue_BtagPuW");
    if (!isStack)
        DefaultTrue_BtagPuW.SetErrors(true);
    SingleTopHistograms DefaultTrue_allW("DefaultTrue_allW");
    if (!isStack)
        DefaultTrue_allW.SetErrors(true);

    SingleTopHistograms EtaCutTrue_PuW("EtaFwDTrue_PuW");
    if (!isStack)
        EtaCutTrue_PuW.SetErrors(true);
    SingleTopHistograms EtaCutTrue_BtagPuW("EtaFwDTrue_BtagPuW");
    if (!isStack)
        EtaCutTrue_BtagPuW.SetErrors(true);
    SingleTopHistograms EtaCutTrue_allW("EtaFwDTrue_allW");
    if (!isStack)
        EtaCutTrue_allW.SetErrors(true);

    DiLeptonHistograms DiLep_Default_Def("Default_Def");
    if (!isStack)
        DiLep_Default_Def.SetErrors(true);
    DiLeptonHistograms DiLep_EtaCut_Def("EtaFwD_Def");
    if (!isStack)
        DiLep_EtaCut_Def.SetErrors(true);
    DiLeptonHistograms DiLep_HtCut_Def("HtCut_Def");
    if (!isStack)
        DiLep_HtCut_Def.SetErrors(true);
    DiLeptonHistograms DiLep_AntiEtaCut_allW("antiEtaFwD_allW");
    if (!isStack)
        DiLep_AntiEtaCut_allW.SetErrors(true);
    DiLeptonHistograms DiLep_AntiHtCut_Def("antiHtCut_Def");
    if (!isStack)
        DiLep_AntiHtCut_Def.SetErrors(true);

    DiLeptonHistograms DiLep_DefaultTrue_Def("DefaultTrue_Def");
    if (!isStack)
        DiLep_DefaultTrue_Def.SetErrors(true);
    DiLeptonHistograms DiLep_EtaCutTrue_Def("EtaFwDTrue_Def");
    if (!isStack)
        DiLep_EtaCutTrue_Def.SetErrors(true);
    DiLeptonHistograms DiLep_HtCutTrue_Def("HtCutTrue_Def");
    if (!isStack)
        DiLep_HtCutTrue_Def.SetErrors(true);
    DiLeptonHistograms DiLep_AntiEtaCutTrue_Def("antiEtaFwDTrue_Def");
    if (!isStack)
        DiLep_AntiEtaCutTrue_Def.SetErrors(true);
    DiLeptonHistograms DiLep_AntiHtCutTrue_Def("antiHtCutTrue_Def");
    if (!isStack)
        DiLep_AntiHtCutTrue_Def.SetErrors(true);

    DiLeptonHistograms DiLep_Default_PuW("Default_PuW");
    if (!isStack)
        DiLep_Default_PuW.SetErrors(true);
    DiLeptonHistograms DiLep_Default_BtagPuW("Default_BtagPuW");
    if (!isStack)
        DiLep_Default_BtagPuW.SetErrors(true);
    DiLeptonHistograms DiLep_Default_allW("Default_allW");
    if (!isStack)
        DiLep_Default_allW.SetErrors(true);

    DiLeptonHistograms DiLep_EtaCut_PuW("EtaFwD_PuW");
    if (!isStack)
        DiLep_EtaCut_PuW.SetErrors(true);
    DiLeptonHistograms DiLep_EtaCut_BtagPuW("EtaFwD_BtagPuW");
    if (!isStack)
        DiLep_EtaCut_BtagPuW.SetErrors(true);
    DiLeptonHistograms DiLep_EtaCut_allW("EtaFwD_allW");
    if (!isStack)
        DiLep_EtaCut_allW.SetErrors(true);

    DiLeptonHistograms DiLep_DefaultTrue_PuW("DefaultTrue_PuW");
    if (!isStack)
        DiLep_DefaultTrue_PuW.SetErrors(true);
    DiLeptonHistograms DiLep_DefaultTrue_BtagPuW("DefaultTrue_BtagPuW");
    if (!isStack)
        DiLep_DefaultTrue_BtagPuW.SetErrors(true);
    DiLeptonHistograms DiLep_DefaultTrue_allW("DefaultTrue_allW");
    if (!isStack)
        DiLep_DefaultTrue_allW.SetErrors(true);

    DiLeptonHistograms DiLep_EtaCutTrue_PuW("EtaFwDTrue_PuW");
    if (!isStack)
        DiLep_EtaCutTrue_PuW.SetErrors(true);
    DiLeptonHistograms DiLep_EtaCutTrue_BtagPuW("EtaFwDTrue_BtagPuW");
    if (!isStack)
        DiLep_EtaCutTrue_BtagPuW.SetErrors(true);
    DiLeptonHistograms DiLep_EtaCutTrue_allW("EtaFwDTrue_allW");
    if (!isStack)
        DiLep_EtaCutTrue_allW.SetErrors(true);



    TH1D * HT = new TH1D("HT", " ;p_{T,jet}^{2nd}(second)", 500, 0., 500.);
    if (!isStack)
        HT->Sumw2();
    TH1D * RMS = new TH1D("RMS", " ;f_{RMS}^{jet}(non-tagged)", 1000, 0., 1.);
    if (!isStack)
        RMS->Sumw2();
    TH1D * def_finalMT = new TH1D("def_finalMT", "final-W-neutrino transverse mass", 100, 0., 200.);
    if (!isStack)
        def_finalMT->Sumw2();
    def_finalMT->GetXaxis()->SetTitle("M_{T}(W,#nu)");
    TH1D * PuW_finalMT = new TH1D("PuW_finalMT", "final-W-neutrino transverse mass", 100, 0., 200.);
    if (!isStack)
        PuW_finalMT->Sumw2();
    PuW_finalMT->GetXaxis()->SetTitle("M_{T}(W,#nu)");
    TH1D * BtagPuW_finalMT = new TH1D("BtagPuW_finalMT", "final-W-neutrino transverse mass", 100, 0., 200.);
    BtagPuW_finalMT->GetXaxis()->SetTitle("M_{T}(W,#nu)");
    if (!isStack)
        BtagPuW_finalMT->Sumw2();
    TH1D * allW_finalMT = new TH1D("allW_finalMT", "final-W-neutrino transverse mass", 100, 0., 200.);
    allW_finalMT->GetXaxis()->SetTitle("M_{T}(W,#nu)");
    if (!isStack)
        allW_finalMT->Sumw2();
    TH2D * nVtx_cosTheta = new TH2D("nVtxcosTheta", "nVtxcosTheta;N_{vtx};cos(#theta_{l}*)", 100, 0, 100, 100, -1., 1.);
    if (!isStack)
        nVtx_cosTheta->Sumw2();

    //    TH2D * met_cosTheta = new TH2D("metcosTheta_true", "metcosTheta;cos(#theta_{l}*);MET", 100, -1., 1., 100, 0, 300);
    //    TH2D * mt_cosTheta = new TH2D("mtcosTheta_true", "mtcosTheta;M_{T}^{W};cos(#theta_{l}*)", 100, -1., 1., 100, 0, 300);
    //    TH2D * met_cosTheta2 = new TH2D("metcosTheta", "metcosTheta;cos(#theta_{l}*);MET", 100, -1., 1., 100, 0, 300);
    //    TH2D * mt_cosTheta2 = new TH2D("mtcosTheta", "mtcosTheta;M_{T}^{W};cos(#theta_{l}*)", 100, -1., 1., 100, 0, 300);

    cout << "START" << endl;

    TFile* f = 0;
    TApplication theApp("App", &argc, argv);
    double nInit = 0;
    double nl26 = 0;
    double nl30 = 0;
    double nbjet = 0;
    double nfjet = 0;
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


    GenSingleTopMaker* genSingleTop = 0;
    TRootGenEventMaker* genEvtMaker = 0;
    TRandom3 tr(154456);
    for (unsigned int fNumber = 0; fNumber < inputFileNames.size(); fNumber++) {
        cout << "file number " << fNumber + 1 << ": " << inputFileNames.at(fNumber) << endl;
        TFile* f = TFile::Open(inputFileNames.at(fNumber).c_str());
#if !defined ISDATA && !defined Wtemplate
        if (prefix != string("")) {
            cout << "sample name has _" << endl;
            myMuonTree = new GenInfoMuonTree(eventTree, f, sample + "_2J_1T_noSyst", dirName);
        } else {
            //            cout << "sample name does not have _: " << string(sample + "_2J_0T_noSyst") << endl;
            if (sample.find("Comphep") != 0 && fabs(sample.find("Comphep")) < sample.size())
                myMuonTree = new GenInfoMuonTree(eventTree, f, "TChannel_2J_1T_noSyst", dirName);
            else {
                sample = anomalousNameCorrector(sample);
                cout << "Sample is: " << sample << endl;
                myMuonTree = new GenInfoMuonTree(eventTree, f, sample + "_noSyst", dirName);
            }
        }
#endif /*ISDATA*/

        cout << "tree name: " << myMuonTree->fChain->GetName() << endl;
        for (int eventNumber = 0; eventNumber < myMuonTree->fChain->GetEntriesFast(); eventNumber++) {
            cout << "New event: " << eventNumber << "--------------------" << endl;
            myMuonTree->GetEntry(eventNumber);
            HT->Fill(myMuonTree->secondJetPt, 1);
            nInit++;
            if(myMuonTree->leptonPt < 26)
                continue;
            nl26++;
            if (myMuonTree->bJetPt < 40) 
                continue;
            nbjet++;
            if (myMuonTree->fJetPt < 40)
                continue;
            nfjet++;
            
            
            //            if (myMuonTree->leptonPt < 30) {
            //                continue;
            //            }
            if (!myMuonTree->passExtraSelection(applyJetPt, e_mtw)) {
                continue;
            }
            if (!isDesiredWJetsFlavor(myMuonTree, myFlavor))
                continue;
            //            cout << "I passed" << endl;
            nFinal++;
            bool isLeptonicTop = false;
            bool isHadronicTop = false;
            std::vector<int> nonTopW;
#if !defined ISDATA && !defined Wtemplate
            if (myMuonTree->SampleRecognizer(sample) > 0) {
                cout << "I am a top-contained sample :-)" << endl;
                genEvtMaker = new TRootGenEventMaker(myMuonTree, sample, "comphep");
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
            //
            double mt = myMuonTree->GetMTW();
            TLorentzVector fwdJet = myMuonTree->GetMostFwDJet();
            double eta = fabs(fwdJet.Eta());
            double ht = myMuonTree->GetHT();
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
            }

            SemiLepTopQuark myLeptonicTop(myEvent_tmp.BPFJets[0], myEvent_tmp.mets[0], myEvent_tmp.Dmuons[0],
                    myEvent_tmp.GPFJets[1], fwdJet, METResolutions);
            myLeptonicTop.setMuCharge((int) myMuonTree->charge);
            //            cout << "Before CosTheta Fill" << endl;
            if (myMuonTree->charge > 0)
                nWP++;
            if (myMuonTree->charge < 0)
                nWM++;
            /*
             * Filling CosTheta Histograms
             */
            if (ttDecayMode == "") {
                if (myLeptonicTop.hasNeutrinoSolution()) {
                    nGoodSolution++;
                    //                    nVtx_cosTheta->Fill(myMuonTree->nGoodVertices, myLeptonicTop.cosThetaStar());
                    //                    met_cosTheta->Fill(myLeptonicTop.cosThetaStar(), myMuonTree->GetMET().Pt());
                    //                    mt_cosTheta->Fill(myLeptonicTop.cosThetaStar(), myMuonTree->GetMTW());
                    DefaultTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                    DefaultTrue_PuW.Fill(myLeptonicTop, puOnlyW, genSingleTop, channel);
                    DefaultTrue_BtagPuW.Fill(myLeptonicTop, btagpuW, genSingleTop, channel);
                    DefaultTrue_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);

                    if (ht >= 180)
                        HtCutTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                    else
                        AntiHtCutTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                    if (eta > 1.5) {
                        EtaCutTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);

                        EtaCutTrue_PuW.Fill(myLeptonicTop, puOnlyW, genSingleTop, channel);
                        EtaCutTrue_BtagPuW.Fill(myLeptonicTop, btagpuW, genSingleTop, channel);
                        EtaCutTrue_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                    } else
                        AntiEtaCutTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                }
                Default_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                Default_PuW.Fill(myLeptonicTop, puOnlyW, genSingleTop, channel);
                Default_BtagPuW.Fill(myLeptonicTop, btagpuW, genSingleTop, channel);
                Default_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                nVtx_cosTheta->Fill(myMuonTree->nGoodVertices, myLeptonicTop.cosThetaStar());
                //                met_cosTheta2->Fill(myLeptonicTop.cosThetaStar(), myMuonTree->GetMET().Pt());
                //                mt_cosTheta2->Fill(myLeptonicTop.cosThetaStar(), myMuonTree->GetMTW());

                if (ht >= 180)
                    HtCut_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                else
                    AntiHtCut_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                if (eta > 1.5) {
                    EtaCut_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);

                    EtaCut_PuW.Fill(myLeptonicTop, puOnlyW, genSingleTop, channel);
                    EtaCut_BtagPuW.Fill(myLeptonicTop, btagpuW, genSingleTop, channel);
                    EtaCut_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                } else
                    AntiEtaCut_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
            } else {//Dimuon, muTau, muE TtBar
                if (myLeptonicTop.hasNeutrinoSolution()) {
                    nGoodSolution++;
                    DiLep_DefaultTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);

                    DiLep_DefaultTrue_PuW.Fill(myLeptonicTop, puOnlyW, genSingleTop, channel);
                    DiLep_DefaultTrue_BtagPuW.Fill(myLeptonicTop, btagpuW, genSingleTop, channel);
                    DiLep_DefaultTrue_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);

                    if (ht >= 180)
                        DiLep_HtCutTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                    else
                        DiLep_AntiHtCutTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                    if (eta > 1.5) {
                        DiLep_EtaCutTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);

                        DiLep_EtaCutTrue_PuW.Fill(myLeptonicTop, puOnlyW, genSingleTop, channel);
                        DiLep_EtaCutTrue_BtagPuW.Fill(myLeptonicTop, btagpuW, genSingleTop, channel);
                        DiLep_EtaCutTrue_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                    } else
                        DiLep_AntiEtaCutTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                }
                DiLep_Default_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);

                DiLep_Default_PuW.Fill(myLeptonicTop, puOnlyW, genSingleTop, channel);
                DiLep_Default_BtagPuW.Fill(myLeptonicTop, btagpuW, genSingleTop, channel);
                DiLep_Default_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);

                if (ht >= 180)
                    DiLep_HtCut_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                else
                    DiLep_AntiHtCut_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                if (eta > 1.5) {
                    DiLep_EtaCut_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);

                    DiLep_EtaCut_PuW.Fill(myLeptonicTop, puOnlyW, genSingleTop, channel);
                    DiLep_EtaCut_BtagPuW.Fill(myLeptonicTop, btagpuW, genSingleTop, channel);
                    DiLep_EtaCut_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                } else
                    DiLep_AntiEtaCut_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
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


            atLeastOnGPV.Fill(myEvent_tmp.Gpvs, myEvent_tmp.Gpvs.size(), 1);
            GoldenFinalPUMuons.Fill(myEvent_tmp.Dmuons, myEvent_tmp.Dmuons.size(), 1);
            Jets.FillPFJets(myEvent_tmp.GPFJets, myEvent_tmp.GPFJets.size(), myEvent_tmp.BPFJets.size(), false, 1);
            BJets.FillPFJets(myEvent_tmp.BPFJets, myEvent_tmp.BPFJets.size(), myEvent_tmp.BPFJets.size(), false, 1);
            nonBJets.FillPFJets(nonBs, nonBs.size(), myEvent_tmp.BPFJets.size(), false, 1);
            FwDJet.FillPFJets(sortedJetsbyEta, sortedJetsbyEta.size(), myEvent_tmp.BPFJets.size(), false, 1);
            MetHist.Fill(&myEvent_tmp.mets.at(0), 1);
            def_finalMT->Fill(mt, 1);

            atLeastOnGPV_PuW.Fill(myEvent_tmp.Gpvs, myEvent_tmp.Gpvs.size(), puOnlyW);
            GoldenFinalPUMuons_PuW.Fill(myEvent_tmp.Dmuons, myEvent_tmp.Dmuons.size(), puOnlyW);
            Jets_PuW.FillPFJets(myEvent_tmp.GPFJets, myEvent_tmp.GPFJets.size(), myEvent_tmp.BPFJets.size(), false, puOnlyW);
            BJets_PuW.FillPFJets(myEvent_tmp.BPFJets, myEvent_tmp.BPFJets.size(), myEvent_tmp.BPFJets.size(), false, puOnlyW);
            nonBJets_PuW.FillPFJets(nonBs, nonBs.size(), myEvent_tmp.BPFJets.size(), false, puOnlyW);
            FwDJet_PuW.FillPFJets(sortedJetsbyEta, sortedJetsbyEta.size(), myEvent_tmp.BPFJets.size(), false, puOnlyW);
            MetHist_PuW.Fill(&myEvent_tmp.mets.at(0), puOnlyW);
            PuW_finalMT->Fill(mt, puOnlyW);

            atLeastOnGPV_BtagPuW.Fill(myEvent_tmp.Gpvs, myEvent_tmp.Gpvs.size(), btagpuW);
            GoldenFinalPUMuons_BtagPuW.Fill(myEvent_tmp.Dmuons, myEvent_tmp.Dmuons.size(), btagpuW);
            Jets_BtagPuW.FillPFJets(myEvent_tmp.GPFJets, myEvent_tmp.GPFJets.size(), myEvent_tmp.BPFJets.size(), false, btagpuW);
            BJets_BtagPuW.FillPFJets(myEvent_tmp.BPFJets, myEvent_tmp.BPFJets.size(), myEvent_tmp.BPFJets.size(), false, btagpuW);
            nonBJets_BtagPuW.FillPFJets(nonBs, nonBs.size(), myEvent_tmp.BPFJets.size(), false, btagpuW);
            FwDJet_BtagPuW.FillPFJets(sortedJetsbyEta, sortedJetsbyEta.size(), myEvent_tmp.BPFJets.size(), false, btagpuW);
            MetHist_BtagPuW.Fill(&myEvent_tmp.mets.at(0), btagpuW);
            BtagPuW_finalMT->Fill(mt, btagpuW);

            atLeastOnGPV_allW.Fill(myEvent_tmp.Gpvs, myEvent_tmp.Gpvs.size(), lumiWeight3D);
            GoldenFinalPUMuons_allW.Fill(myEvent_tmp.Dmuons, myEvent_tmp.Dmuons.size(), lumiWeight3D);
            Jets_allW.FillPFJets(myEvent_tmp.GPFJets, myEvent_tmp.GPFJets.size(), myEvent_tmp.BPFJets.size(), false, lumiWeight3D);
            BJets_allW.FillPFJets(myEvent_tmp.BPFJets, myEvent_tmp.BPFJets.size(), myEvent_tmp.BPFJets.size(), false, lumiWeight3D);
            nonBJets_allW.FillPFJets(nonBs, nonBs.size(), myEvent_tmp.BPFJets.size(), false, lumiWeight3D);
            FwDJet_allW.FillPFJets(sortedJetsbyEta, sortedJetsbyEta.size(), myEvent_tmp.BPFJets.size(), false, lumiWeight3D);
            MetHist_allW.Fill(&myEvent_tmp.mets.at(0), lumiWeight3D);
            allW_finalMT->Fill(mt, lumiWeight3D);
            //            cout<<"End of event loop --------------------"<<endl;
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
        }

        cout << "before closing file input " << f->GetName() << endl;
        f->Close();
        delete f;

        cutFlow->SetBinContent(1, nInit);
        cutFlow->SetBinContent(2, nl26);
        cutFlow->SetBinContent(3, nl30);
        cutFlow->SetBinContent(4, nbjet);
        cutFlow->SetBinContent(5, nfjet);
    }
    cout << "before endjob" << endl;
    TFile * fout = new TFile(plotFileName.c_str(), "recreate");
    fout->cd();

    atLeastOnGPV.WriteAll(fout);
    GoldenFinalPUMuons.WriteAll(fout);
    Jets.WriteAll(fout);
    BJets.WriteAll(fout);
    nonBJets.WriteAll(fout);
    FwDJet.WriteAll(fout);
    MetHist.WriteAll(fout);
    def_finalMT->Write();

    atLeastOnGPV_PuW.WriteAll(fout);
    GoldenFinalPUMuons_PuW.WriteAll(fout);
    Jets_PuW.WriteAll(fout);
    BJets_PuW.WriteAll(fout);
    nonBJets_PuW.WriteAll(fout);
    FwDJet_PuW.WriteAll(fout);
    MetHist_PuW.WriteAll(fout);
    PuW_finalMT->Write();

    atLeastOnGPV_BtagPuW.WriteAll(fout);
    GoldenFinalPUMuons_BtagPuW.WriteAll(fout);
    Jets_BtagPuW.WriteAll(fout);
    BJets_BtagPuW.WriteAll(fout);
    nonBJets_BtagPuW.WriteAll(fout);
    FwDJet_BtagPuW.WriteAll(fout);
    MetHist_BtagPuW.WriteAll(fout);
    BtagPuW_finalMT->Write();

    atLeastOnGPV_allW.WriteAll(fout);
    GoldenFinalPUMuons_allW.WriteAll(fout);
    Jets_allW.WriteAll(fout);
    BJets_allW.WriteAll(fout);
    nonBJets_allW.WriteAll(fout);
    FwDJet_allW.WriteAll(fout);
    MetHist_allW.WriteAll(fout);
    allW_finalMT->Write();
    if (ttDecayMode == "") {
        Default_Def.Write(fout);

        Default_PuW.Write(fout);
        Default_BtagPuW.Write(fout);
        Default_allW.Write(fout);

        EtaCut_Def.Write(fout);
        EtaCut_PuW.Write(fout);
        EtaCut_BtagPuW.Write(fout);
        EtaCut_allW.Write(fout);

        AntiEtaCut_allW.Write(fout);
        HtCut_Def.Write(fout);
        AntiHtCut_Def.Write(fout);
        DefaultTrue_Def.Write(fout);
        EtaCutTrue_Def.Write(fout);
        DefaultTrue_allW.Write(fout);
        EtaCutTrue_allW.Write(fout);
        AntiEtaCutTrue_Def.Write(fout);
        HtCutTrue_Def.Write(fout);
        AntiHtCutTrue_Def.Write(fout);
    } else {
        DiLep_Default_Def.Write(fout);

        DiLep_Default_PuW.Write(fout);
        DiLep_Default_BtagPuW.Write(fout);
        DiLep_Default_allW.Write(fout);

        DiLep_EtaCut_Def.Write(fout);
        DiLep_EtaCut_PuW.Write(fout);
        DiLep_EtaCut_BtagPuW.Write(fout);
        DiLep_EtaCut_allW.Write(fout);

        DiLep_AntiEtaCut_allW.Write(fout);
        DiLep_HtCut_Def.Write(fout);
        DiLep_AntiHtCut_Def.Write(fout);
        DiLep_DefaultTrue_Def.Write(fout);
        DiLep_EtaCutTrue_Def.Write(fout);
        DiLep_DefaultTrue_allW.Write(fout);
        DiLep_EtaCutTrue_allW.Write(fout);
        DiLep_AntiEtaCutTrue_Def.Write(fout);
        DiLep_HtCutTrue_Def.Write(fout);
        DiLep_AntiHtCutTrue_Def.Write(fout);
    }
    HT->Write();
    RMS->Write();
    nVtx_cosTheta->Write();
    cutFlow->Write();
    //    met_cosTheta->Write();
    //    mt_cosTheta->Write();
    //    met_cosTheta2->Write();
    //    mt_cosTheta2->Write();

    fout->Write();
    fout->Close();

    cout << nInit << "\n" << nHLTrunB << "\n" << nMt << "\n" << nFinal << "\n" << nGoodSolution << endl;
    cout << "nW+: " << nWP << "\tnW-: " << nWM << endl;
    cout << "SR+" << nSRP << endl;
    cout << "SR-" << nSRM << endl;
    cout << "SB+" << nSBP << endl;
    cout << "SB-" << nSBM << endl;
    return 0;
}

