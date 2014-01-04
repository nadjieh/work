#include "TFile.h"
#include "TH1.h"
#include "TH2.h"
#include "TH3.h"
#include "TString.h"
TH1* GetScale(TH1* lpt1T, TH1* lpt0T, TString name){
	TH1D * ret = (TH1D*)lpt1T->Clone(name);
    ret->Scale(1./lpt1T->Integral());
    lpt0T->Scale(1./lpt0T->Integral());
    ret->Divide(lpt0T);
	return ret;
}



void scaler(TString f0T, TString f1T, TString wname){
	TFile * f0T_ = TFile::Open(f0T);
	TFile * f1T_ = TFile::Open(f1T);


	TH1D * lpt1T = (TH1D*)f1T_->Get("allW_Muon_Muon/allW_Muon_Pt");
	TH1D * lpt0T = (TH1D*)f0T_->Get("allW_Muon_Muon/allW_Muon_Pt");
    TH1D * LPTW = (TH1D*)GetScale(lpt1T,lpt0T, "lptw");

	TH1D * leta1T = (TH1D*)f1T_->Get("allW_BJet_Jet/allW_BJet_Eta");
	TH1D * leta0T = (TH1D*)f0T_->Get("allW_BJet_Jet/allW_BJet_Eta");
    TH1D * BETAW = (TH1D*)GetScale(leta1T,leta0T, "betaw");

	TH1D * bpt1T = (TH1D*)f1T_->Get("allW_BJet_Jet/allW_BJet_Pt");
	TH1D * bpt0T = (TH1D*)f0T_->Get("allW_BJet_Jet/allW_BJet_Pt");
    TH1D * BPTW = (TH1D*)GetScale(bpt1T,bpt0T, "bptw");

	TH2D * lbpt1T = (TH2D*)f1T_->Get("lpt_bpt");
	TH2D * lbpt0T = (TH2D*)f0T_->Get("lpt_bpt");
    TH2D * LBPTW = (TH2D*)GetScale(lbpt1T,lbpt0T, "lbptw");

	TH2D * lptbetaw1T = (TH2D*)f1T_->Get("lpt_beta");
	TH2D * lptbetaw0T = (TH2D*)f0T_->Get("lpt_beta");
    TH2D * LPTBETAW = (TH2D*)GetScale(lptbetaw1T,lptbetaw0T, "lptbetaw");

	TH2D * bptbetaw1T = (TH2D*)f1T_->Get("bpt_beta");
	TH2D * bptbetaw0T = (TH2D*)f0T_->Get("bpt_beta");
    TH2D * BPTBETAW = (TH2D*)GetScale(bptbetaw1T,bptbetaw0T, "bptbetaw");

	TH3D * lbptbetaw1T = (TH3D*)f1T_->Get("bpt_beta_lpt");
	TH3D * lbptbetaw0T = (TH3D*)f0T_->Get("bpt_beta_lpt");
    TH3D * LBPTBETAW = (TH3D*)GetScale(lbptbetaw1T,lbptbetaw0T, "lbptbetaw");

	TFile * f = new TFile(wname,"recreate");
	f->cd();
	LPTW->Write();
	BPTW->Write();
	BETAW->Write();
	LBPTW->Write();
	LPTBETAW->Write();
	BPTBETAW->Write();
	LBPTBETAW->Write();
	f->Close();
}

void doJob(){
	TString wname = "TreesMu_weights.root";
	scaler("TreesMu_WJets_plots.root", "2J1T/TreesMu_WJets_plots.root", wname);

	wname = "TreesEle_weights.root";
	scaler("TreesEle_WJets_plots.root", "2J1T/TreesEle_WJets_plots.root", wname);

	wname = "emtw/TreesEle_weights.root";
	scaler("emtw/TreesEle_WJets_plots.root", "emtw/2J1T/TreesEle_WJets_plots.root", wname);
};
