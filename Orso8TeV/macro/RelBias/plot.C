#include "TFile.h"
#include "TString.h"
#include "TH2.h"
#include "TProfile.h"
#include "TCanvas.h"
void plot(TString name){
	TFile * f = TFile::Open(name+".root");
	TH2D * fneg = (TH2D*)f->Get("hFNeg");
	TH2D * fzero = (TH2D*)f->Get("hFZero");
	TH2D * fpos = (TH2D*)f->Get("hFPos");

	TCanvas *c = new TCanvas("c", "c",140,82,604,628);
	c->Range(-1.275862,-45.98206,1.022989,434.2249);
	c->SetFillColor(0);
	c->SetBorderMode(0);
	c->SetBorderSize(2);
	c->SetLeftMargin(0.12);
	c->SetRightMargin(0.01);
	c->SetTopMargin(0.04);
	c->SetFrameBorderMode(0);
	c->SetFrameBorderMode(0);

	c->Divide(1,2);
	c->cd(1);
	TProfile * fneg_px = fneg->ProfileX();
	fneg_px->GetYaxis()->SetTitle(fneg->GetYaxis()->GetTitle());
	fneg_px->Draw();
	c->cd(2);
	TProfile * fzero_px = fzero->ProfileX();
	fzero_px->GetYaxis()->SetTitle(fzero->GetYaxis()->GetTitle());
	fzero_px->Draw();
/*	c->cd(3);
	TProfile * fpos_px = fpos->ProfileX();
	fpos_px->GetYaxis()->SetTitle(fpos->GetYaxis()->GetTitle());
	fpos_px->Draw();
  */  c->SaveAs(name+".C");

}

void doJob(){
	plot("RelBias_Ele");
	plot("RelBias_Mu");
	plot("RelBias_Ele_emtw");

}
