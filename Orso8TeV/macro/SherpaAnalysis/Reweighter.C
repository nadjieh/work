#include "TFile.h"
#include "TString.h"
#include "TH1.h"
void produceScales(TString flavor, TString channel, bool isMT = false){
	TString address = "";
	if(isMT)
		address = address + "emtw/";
    TString weightName = address + "Trees" + channel + "_" + flavor + "WJets_Weight.root";
    TString MGName = "2J1T/"+ address + "Trees" + channel + "_" + flavor + "WJets_plots.root";


	TFile *fWeight = TFile::Open(weightName);
	TFile *fMG = TFile::Open(MGName);

	TH1D * hWeight = (TH1D*)((TH1D*)fWeight->Get("Default_allW/Default_allWcosTheta"))->Clone("weightAll");
	TH1D * hMG = (TH1D*)((TH1D*)fMG->Get("Default_allW/Default_allWcosTheta"))->Clone("mgAll");

	double integ = hMG->Integral();

	hMG->Multiply(hWeight);
	hMG->Scale(integ/hMG->Integral());
	hMG->SetName("Default_allWcosTheta");

	TH1D * hWeightTrue = (TH1D*)((TH1D*)fWeight->Get("DefaultTrue_allW/DefaultTrue_allWcosTheta"))->Clone("weightTrue");
	TH1D * hMGTrue = (TH1D*)((TH1D*)fMG->Get("DefaultTrue_allW/DefaultTrue_allWcosTheta"))->Clone("mgTrue");

	double integTrue = hMGTrue->Integral();
	
	hMGTrue->Multiply(hWeightTrue);
	hMGTrue->Scale(integTrue/hMGTrue->Integral());
	hMGTrue->SetName("DefaultTrue_allWcosTheta");

	TString outName = address + "Trees" + channel + "_" + flavor + "WJetsMGSHRW_plots.root";
	TFile *fout = new TFile(outName,"recreate");
	fout->mkdir("Default_allW")->cd();
	hMG->Write();
	fout->cd();
	fout->mkdir("DefaultTrue_allW")->cd();
	hMGTrue->Write();
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

