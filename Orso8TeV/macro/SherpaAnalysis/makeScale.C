#include "TFile.h"
#include "TString.h"
#include "TH1.h"
void produceScales(TString flavor, TString channel, bool isMT = false){
	TString address = "./";
	if(isMT)
		address = address + "emtw/";
	address = address + "Trees" + channel + "_" + flavor + "WJets";
    TString sherpaName = address + "Sherpa_" + channel + "_plots.root";
    TString MGName = address + "_plots.root";
	TFile *fSherpa = TFile::Open(sherpaName);
	TFile *fMG = TFile::Open(MGName);

	TH1D * hSherpa = (TH1D*)((TH1D*)fSherpa->Get("Default_allW/Default_allWcosTheta"))->Clone("sherpaAll");
	hSherpa->Scale(1./hSherpa->Integral());
	TH1D * hMG = (TH1D*)((TH1D*)fMG->Get("Default_allW/Default_allWcosTheta"))->Clone("mgAll");
	hMG->Scale(1./hMG->Integral());

	hSherpa->Divide(hMG);
	hSherpa->SetName("Default_allWcosTheta");

	TH1D * hSherpaTrue = (TH1D*)((TH1D*)fSherpa->Get("DefaultTrue_allW/DefaultTrue_allWcosTheta"))->Clone("sherpaTrue");
	hSherpaTrue->Scale(1./hSherpaTrue->Integral());
	TH1D * hMGTrue = (TH1D*)((TH1D*)fMG->Get("DefaultTrue_allW/DefaultTrue_allWcosTheta"))->Clone("mgTrue");
	hMGTrue->Scale(1./hMGTrue->Integral());
	
	hSherpaTrue->Divide(hMGTrue);
	hSherpaTrue->SetName("DefaultTrue_allWcosTheta");

	TString outName = address + "_Weight.root";
	TFile *fout = new TFile(outName,"recreate");
	fout->mkdir("Default_allW")->cd();
	hSherpa->Write();
	fout->cd();
	fout->mkdir("DefaultTrue_allW")->cd();
	hSherpaTrue->Write();
	fout->cd();
	fout->Close();
}

void doJob(){
	produceScales("l", "Ele", false);
	produceScales("l", "Ele", true);
	produceScales("l", "Mu", false);

	produceScales("c", "Ele", false);
	produceScales("c", "Ele", true);
	produceScales("c", "Mu", false);

	produceScales("bX", "Ele", false);
	produceScales("bX", "Ele", true);
	produceScales("bX", "Mu", false);
}

