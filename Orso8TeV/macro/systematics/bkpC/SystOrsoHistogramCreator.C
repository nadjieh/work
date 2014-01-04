/* 
 * File:   OrsoHistogramCreator.C
 * Author: nadjieh
 *
 * Created on October 12, 2012, 12:34 PM
 */
#define Syst2J1T

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
#include "../../interface/WeightHelper.h"


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

bool isTWMassSyst(string s) {
    std::vector<string> names;
    std::vector<string> namesQ;
    names.push_back("TWChannelFullLep_MassDown");
    names.push_back("TWChannelFullLep_MassUp");
    names.push_back("TWChannelThadWlep_MassDown");
    names.push_back("TWChannelThadWlep_MassUp");
    names.push_back("TWChannelTlepWhad_MassDown");
    names.push_back("TWChannelTlepWhad_MassUp");
    names.push_back("TbarWChannelFullLep_MassDown");
    names.push_back("TbarWChannelFullLep_MassUp");
    names.push_back("TbarWChannelThadWlep_MassDown");
    names.push_back("TbarWChannelThadWlep_MassUp");
    names.push_back("TbarWChannelTlepWhad_MassDown");
    names.push_back("TbarWChannelTlepWhad_MassUp");
    namesQ.push_back("TWChannelFullLep_Q2Down");
    namesQ.push_back("TWChannelFullLep_Q2Up");
    namesQ.push_back("TWChannelThadWlep_Q2Down");
    namesQ.push_back("TWChannelThadWlep_Q2Up");
    namesQ.push_back("TWChannelTlepWhad_Q2Down");
    namesQ.push_back("TWChannelTlepWhad_Q2Up");
    namesQ.push_back("TbarWChannelFullLep_Q2Down");
    namesQ.push_back("TbarWChannelFullLep_Q2Up");
    namesQ.push_back("TbarWChannelThadWlep_Q2Down");
    namesQ.push_back("TbarWChannelThadWlep_Q2Up");
    namesQ.push_back("TbarWChannelTlepWhad_Q2Down");
    namesQ.push_back("TbarWChannelTlepWhad_Q2Up");
    for (unsigned int i = 0; i < names.size(); i++) {
        if (s == names[i] || s == namesQ[i])
            return true;
    }
    return false;
}

string changeTWMassSyst(string s) {
    std::vector<string> namesUp;
    namesUp.push_back("TWChannelFullLep_MassUp");
    namesUp.push_back("TWChannelThadWlep_MassUp");
    namesUp.push_back("TWChannelTlepWhad_MassUp");
    std::vector<string> namesDown;
    namesDown.push_back("TWChannelFullLep_MassDown");
    namesDown.push_back("TWChannelThadWlep_MassDown");
    namesDown.push_back("TWChannelTlepWhad_MassDown");
    std::vector<string> namesbarUp;
    namesbarUp.push_back("TbarWChannelFullLep_MassUp");
    namesbarUp.push_back("TbarWChannelTlepWhad_MassUp");
    namesbarUp.push_back("TbarWChannelThadWlep_MassUp");
    std::vector<string> namesbarDown;
    namesbarDown.push_back("TbarWChannelThadWlep_MassDown");
    namesbarDown.push_back("TbarWChannelFullLep_MassDown");
    namesbarDown.push_back("TbarWChannelTlepWhad_MassDown");
    std::vector<string> QnamesUp;
    QnamesUp.push_back("TWChannelFullLep_Q2Up");
    QnamesUp.push_back("TWChannelThadWlep_Q2Up");
    QnamesUp.push_back("TWChannelTlepWhad_Q2Up");
    std::vector<string> QnamesDown;
    QnamesDown.push_back("TWChannelFullLep_Q2Down");
    QnamesDown.push_back("TWChannelThadWlep_Q2Down");
    QnamesDown.push_back("TWChannelTlepWhad_Q2Down");
    std::vector<string> QnamesbarUp;
    QnamesbarUp.push_back("TbarWChannelFullLep_Q2Up");
    QnamesbarUp.push_back("TbarWChannelTlepWhad_Q2Up");
    QnamesbarUp.push_back("TbarWChannelThadWlep_Q2Up");
    std::vector<string> QnamesbarDown;
    QnamesbarDown.push_back("TbarWChannelThadWlep_Q2Down");
    QnamesbarDown.push_back("TbarWChannelFullLep_Q2Down");
    QnamesbarDown.push_back("TbarWChannelTlepWhad_Q2Down");
    cout << namesDown.size() << "\t"
            << namesbarDown.size() << "\t"
            << namesUp.size() << "\t"
            << namesbarUp.size() << endl;
    cout << QnamesDown.size() << "\t"
            << QnamesbarDown.size() << "\t"
            << QnamesUp.size() << "\t"
            << QnamesbarUp.size() << endl;
    for (unsigned int i = 0; i < namesbarDown.size(); i++) {
        if (s == namesbarDown[i])
            return "TbarWChannel_MassDown";
        if (s == namesDown[i])
            return "TWChannel_MassDown";
        if (s == namesbarUp[i])
            return "TbarWChannel_MassUp";
        if (s == namesUp[i])
            return "TWChannel_MassUp";
        if (s == QnamesbarDown[i])
            return "TbarWChannel_Q2Down";
        if (s == QnamesDown[i])
            return "TWChannel_Q2Down";
        if (s == QnamesbarUp[i])
            return "TbarWChannel_Q2Up";
        if (s == QnamesUp[i])
            return "TWChannel_Q2Up";
    }
    return "";
}

int main(int argc, char** argv) {


    SingleTopHistograms Default_Def("Default_Def");
    SingleTopHistograms DefaultTrue_Def("DefaultTrue_Def");
    SingleTopHistograms Default_PuW("Default_PuW");
    SingleTopHistograms Default_BtagPuW("Default_BtagPuW");
    SingleTopHistograms Default_allW("Default_allW");
    SingleTopHistograms DefaultTrue_PuW("DefaultTrue_PuW");
    SingleTopHistograms DefaultTrue_BtagPuW("DefaultTrue_BtagPuW");
    SingleTopHistograms DefaultTrue_allW("DefaultTrue_allW");

    DiLeptonHistograms DiLep_Default_Def("Default_Def");
    DiLeptonHistograms DiLep_DefaultTrue_Def("DefaultTrue_Def");
    DiLeptonHistograms DiLep_Default_PuW("Default_PuW");
    DiLeptonHistograms DiLep_Default_BtagPuW("Default_BtagPuW");
    DiLeptonHistograms DiLep_Default_allW("Default_allW");
    DiLeptonHistograms DiLep_DefaultTrue_PuW("DefaultTrue_PuW");
    DiLeptonHistograms DiLep_DefaultTrue_BtagPuW("DefaultTrue_BtagPuW");
    DiLeptonHistograms DiLep_DefaultTrue_allW("DefaultTrue_allW");
    std::vector<std::string> inputFileNames;
    std::string plotFileName;
    TH1D * METResolutions = 0;
    int doJES = 0;
    int doJER = 0;
    int doMET = 0;
    int dobtag = 0;
    int domistag = 0;
    int dopu = 0;
    int dopdf = 0;
    int dolumi = 0;
    bool isData = false;
    int smearingSkim = 1;
    string sample = "";
    string ttDecayMode = "";
    string prefix = "";
    string dirName = "";
    string generator = "powheg";
    bool applyJetPt = false;
    bool e_mtw = false;
    for (int f = 1; f < argc; f++) {
        std::string arg_fth(*(argv + f));
        if (arg_fth == "prefix") {
            f++;
            std::string in(*(argv + f));
            prefix = in + string("_");
        } else if (arg_fth == "input") {
            f++;
            std::string in(*(argv + f));
            inputFileNames.push_back(string("~/work/samples/postMoriond/Aug2013/" + prefix + in + ".root"));
            sample = in;
            plotFileName = prefix + in + "_plots.root";
        } else if (arg_fth == "JES") {
            f++;
            std::string in(*(argv + f));
            doJES = atof(in.c_str());
        } else if (arg_fth == "btag") {
            f++;
            std::string in(*(argv + f));
            dobtag = atof(in.c_str());
        } else if (arg_fth == "mistag") {
            f++;
            std::string in(*(argv + f));
            domistag = atof(in.c_str());
        } else if (arg_fth == "pileup") {
            f++;
            std::string in(*(argv + f));
            dopu = atof(in.c_str());
        } else if (arg_fth == "JER") {
            f++;
            std::string in(*(argv + f));
            doJER = atof(in.c_str());
        } else if (arg_fth == "MET") {
            f++;
            std::string in(*(argv + f));
            doMET = atof(in.c_str());
        } else if (arg_fth == "dopdf") {
            f++;
            std::string in(*(argv + f));
            dopdf = atof(in.c_str());
        } else if (arg_fth == "dolumi") {
            f++;
            std::string in(*(argv + f));
            dolumi = atof(in.c_str());
        } else if (arg_fth == "dirName") {
            f++;
            std::string in(*(argv + f));
            dirName = string(in);
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
        } else if (arg_fth == "dojetpt") {
            f++;
            std::string in(*(argv + f));
            if (in == "yes" || in == "YES" || in == "Yes" || in == "y" || in == "Y")
                applyJetPt = true;
            else
                applyJetPt = false;
        } else if (arg_fth == "generator") {
            f++;
            std::string in(*(argv + f));
            generator = in;
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
    TH1D* WeightAll = new TH1D("weight", "weight", 1000, 0, 0.1);
    cout << "**************************" << endl;
    cout << "SYSTEMATIC SITUATION: " << endl;
    cout << "**************************" << endl;
    if (generator == "comphep")
        cout << "CompHep SYST" << endl;
    if (doJES > 0)
        cout << "JESUP SYST" << endl;
    if (doJES < 0)
        cout << "JESDOWN SYST" << endl;
    if (doJER > 0)
        cout << "JERUP SYST" << endl;
    if (doJER < 0)
        cout << "JERDOWN SYST" << endl;
    if (doMET > 0)
        cout << "METUP SYST" << endl;
    if (doMET < 0)
        cout << "METDOWN SYST" << endl;
    if (dobtag > 0)
        cout << "btagUP SYST" << endl;
    if (dobtag < 0)
        cout << "dobtagDOWN SYST" << endl;
    if (domistag > 0)
        cout << "mistagUP SYST" << endl;
    if (domistag < 0)
        cout << "domistagDOWN SYST" << endl;
    if (dopu > 0)
        cout << "pileupUP SYST" << endl;
    if (dopu < 0)
        cout << "pileupDOWN SYST" << endl;
    if (dolumi > 0)
        cout << "lumiUP SYST" << endl;
    if (dolumi < 0)
        cout << "lumiDOWN SYST" << endl;
    if (dopdf != 0 && (dopdf % 2) == 1)
        cout << "pdfUP SYST with parameter " << dopdf << endl;
    if (dopdf != 0 && (dopdf % 2) == 0)
        cout << "pdfDown SYST with parameter " << dopdf - 1 << endl;
    cout << "**************************" << endl;


    TApplication theApp("App", &argc, argv);
    double nGoodSolution = 0;
#ifndef Syst2J1T
    MuonTree * myMuonTree = 0;
#endif /*Syst2J1T*/
#ifdef Syst2J1T
    GenInfoMuonTree * myMuonTree = 0;
#endif /*Syst2J1T*/
    TTree * eventTree = 0;
    GenSingleTopMaker* genSingleTop = 0;
    TRootGenEventMaker* genEvtMaker = 0;
    TRandom3 tr(154456);
    for (unsigned int fNumber = 0; fNumber < inputFileNames.size(); fNumber++) {
        cout << "file number " << fNumber + 1 << ": " << inputFileNames.at(fNumber) << endl;
        TFile* f = TFile::Open(inputFileNames.at(fNumber).c_str());
#ifndef Syst2J1T
        if (doJES > 0)
            myMuonTree = new MuonTree(eventTree, f, sample + "_2J_1T_JESUp", dirName);
        else if (doJES < 0)
            myMuonTree = new MuonTree(eventTree, f, sample + "_2J_1T_JESDown", dirName);
        else if (doJER > 0)
            myMuonTree = new MuonTree(eventTree, f, sample + "_2J_1T_JERUp", dirName);
        else if (doJER < 0)
            myMuonTree = new MuonTree(eventTree, f, sample + "_2J_1T_JERDown", dirName);
        else if (doMET > 0)
            myMuonTree = new MuonTree(eventTree, f, sample + "_2J_1T_UnclusteredMETUp", dirName);
        else if (doMET < 0)
            myMuonTree = new MuonTree(eventTree, f, sample + "_2J_1T_UnclusteredMETDown", dirName);
        else {
            cout << "No systematic!!!" << endl;
            myMuonTree = new MuonTree(eventTree, f, sample + "_2J_1T_noSyst", dirName);
        }

#endif /*Syst2J1T*/
#ifdef Syst2J1T
        if (prefix != string("")) {
            cout << "sample name has _" << endl;
            myMuonTree = new GenInfoMuonTree(eventTree, f, sample + "_2J_1T_noSyst", dirName);
        } else {
            cout << "sample name does not have _" << endl;
            if (isTWMassSyst(sample)) {
                string p = changeTWMassSyst(sample);
                sample = p;
                cout << "sample: " << sample << endl;
            }
            myMuonTree = new GenInfoMuonTree(eventTree, f, sample + "_2J_1T_noSyst", dirName);
        }
#endif /*Syst2J1T*/
        cout << myMuonTree->fChain->GetName() << endl;
        cout << myMuonTree->fChain->GetEntries() << endl;
        for (int eventNumber = 0; eventNumber < myMuonTree->fChain->GetEntriesFast(); eventNumber++) {
            //            cout << "New event: " << eventNumber << "--------------------" << endl;
            myMuonTree->GetEntry(eventNumber);
            //            if (eventNumber > 10)
            //                break;
            if (!myMuonTree->passExtraSelection(applyJetPt, e_mtw, true)) {
                //                cout << "failing" << endl;
                continue;
            }
#ifdef Syst2J1T
            if (myMuonTree->SampleRecognizer(sample) > 0) {
                //                    cout << "I am a top-contained sample :-)" << endl;
                genEvtMaker = new TRootGenEventMaker(myMuonTree, sample, generator);
                genSingleTop = new GenSingleTopMaker(&(genEvtMaker->output), channel);
                delete genEvtMaker;
            } else {
                //                    cout << "I am not a top-contained sample :-(\t" << genEvtMaker << "\t" << genSingleTop << endl;
            }
#endif /*Syst2J1T*/

            //            cout << "Number of tops at analysis level: " << genSingleTop->ntops << endl;
            Event myEvent_tmp = myEventPreparation(myMuonTree);
            TLorentzVector fwdJet = myMuonTree->GetMostFwDJet();
            double puOnlyW = 1;
            double btagpuW = 1;
            double lumiWeight3D = 1;
            if (!isData) {
                puOnlyW *= myMuonTree->GetPUOnlyWeight();
                btagpuW *= myMuonTree->GetPUbTagWeight();
                lumiWeight3D = myMuonTree->GetTotalWeight();
            }
#ifdef Syst2J1T
            if (dobtag != 0) {
                puOnlyW = 1;
                btagpuW = 1;
                lumiWeight3D = 1;
                GetWeightsSysBTag(myMuonTree, lumiWeight3D, puOnlyW, btagpuW, dobtag);
            } else if (domistag != 0) {
                puOnlyW = 1;
                btagpuW = 1;
                lumiWeight3D = 1;
                GetWeightsSysMisTag(myMuonTree, lumiWeight3D, puOnlyW, btagpuW, domistag);
            } else if (dopu != 0) {
                puOnlyW = 1;
                btagpuW = 1;
                lumiWeight3D = 1;
                GetWeightsSysPU(myMuonTree, lumiWeight3D, puOnlyW, btagpuW, dopu);
            } else if (dopdf != 0) {
                double W = GetPDFWeight(myMuonTree, dopdf);
                puOnlyW *= W;
                btagpuW *= W;
                lumiWeight3D *= W;
            } else if (dolumi != 0) {
                puOnlyW = 1;
                btagpuW = 1;
                lumiWeight3D = 1;
                GetWeightsSysLumi(myMuonTree, lumiWeight3D, puOnlyW, btagpuW, dolumi);
            }
            WeightAll->Fill(lumiWeight3D);
#endif /*Syst2J1T*/
            SemiLepTopQuark myLeptonicTop(myEvent_tmp.BPFJets[0], myEvent_tmp.mets[0], myEvent_tmp.Dmuons[0],
                    myEvent_tmp.GPFJets[1], fwdJet, METResolutions);
            myLeptonicTop.setMuCharge((int) myMuonTree->charge);

            /*
             * Filling CosTheta Histograms
             */
            if (ttDecayMode == "") {
                if (myLeptonicTop.hasNeutrinoSolution()) {
                    nGoodSolution++;
                    DefaultTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                    DefaultTrue_PuW.Fill(myLeptonicTop, puOnlyW, genSingleTop, channel);
                    DefaultTrue_BtagPuW.Fill(myLeptonicTop, btagpuW, genSingleTop, channel);
                    DefaultTrue_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                }
                Default_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);
                Default_PuW.Fill(myLeptonicTop, puOnlyW, genSingleTop, channel);
                Default_BtagPuW.Fill(myLeptonicTop, btagpuW, genSingleTop, channel);
                Default_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
            } else {
                cout << "//Dimuon, muTau, muE TtBar" << endl;
                if (myLeptonicTop.hasNeutrinoSolution()) {
                    nGoodSolution++;
                    DiLep_DefaultTrue_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);

                    DiLep_DefaultTrue_PuW.Fill(myLeptonicTop, puOnlyW, genSingleTop, channel);
                    DiLep_DefaultTrue_BtagPuW.Fill(myLeptonicTop, btagpuW, genSingleTop, channel);
                    DiLep_DefaultTrue_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
                }
                DiLep_Default_Def.Fill(myLeptonicTop, 1, genSingleTop, channel);

                DiLep_Default_PuW.Fill(myLeptonicTop, puOnlyW, genSingleTop, channel);
                DiLep_Default_BtagPuW.Fill(myLeptonicTop, btagpuW, genSingleTop, channel);
                DiLep_Default_allW.Fill(myLeptonicTop, lumiWeight3D, genSingleTop, channel);
            }
            if (genSingleTop != NULL) {
                //                cout << "genSingleTop: " << genSingleTop << endl;
                delete genSingleTop;
            }
        }
        cout << "before closing file input " << f->GetName() << endl;
        f->Close();
        delete f;

    }
    cout << "before endjob" << endl;
    plotFileName = string(dirName + "_" + plotFileName);
    TFile * fout = new TFile(plotFileName.c_str(), "recreate");
    fout->cd();

    if (ttDecayMode == "") {
        Default_Def.Write(fout);
        Default_PuW.Write(fout);
        Default_BtagPuW.Write(fout);
        Default_allW.Write(fout);
        DefaultTrue_Def.Write(fout);
        DefaultTrue_PuW.Write(fout);
        DefaultTrue_BtagPuW.Write(fout);
        DefaultTrue_allW.Write(fout);
    } else {
        DiLep_Default_Def.Write(fout);
        DiLep_Default_PuW.Write(fout);
        DiLep_Default_BtagPuW.Write(fout);
        DiLep_Default_allW.Write(fout);
        DiLep_DefaultTrue_Def.Write(fout);
        DiLep_DefaultTrue_PuW.Write(fout);
        DiLep_DefaultTrue_BtagPuW.Write(fout);
        DiLep_DefaultTrue_allW.Write(fout);
    }
    //    WeightAll->Write();
    fout->Write();
    fout->Close();


    return 0;
}

