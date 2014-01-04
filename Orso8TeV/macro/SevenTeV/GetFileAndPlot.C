#include <TFile.h>
#include <TH2.h>
#include <TProfile.h>
#include <TCanvas.h>
#include <TProfile.h>
#include <TString.h>
using namespace std;
#include <iostream>
void getMyPlot(TString name, TString canv){
	TFile * f= TFile::Open(name);
   TCanvas *c1 = new TCanvas("c", "c",242,131,604,638);
	c1->Range(0.3110345,-0.07230999,1.01908,0.6295608);
	c1->SetFillColor(0);
	c1->SetBorderMode(0);
	c1->SetBorderSize(2);
	c1->SetLeftMargin(0.12);
	c1->SetRightMargin(0.01);
	c1->SetTopMargin(0.04);
	c1->SetFrameBorderMode(0);
	c1->SetFrameBorderMode(0);
	c1->Divide(1,3);
	c1->cd(1);
	TProfile * p = ((TH2D*)f->Get("hFinalFNeg"))->ProfileX();
	p->GetXaxis()->SetTitle("F_{L} input");
	p->GetYaxis()->SetTitle("F_{L} output");
	p->Draw();

	c1->cd(2);
	TProfile * q = 	((TH2D*)f->Get("hFinalFZero"))->ProfileX();
	q->GetXaxis()->SetTitle("F_{0} input");
	q->GetYaxis()->SetTitle("F_{0} output");
	q->Draw();
	c1->cd(3);

	TProfile * r = 	((TH2D*)f->Get("hFinalFPos"))->ProfileX();
	r->GetXaxis()->SetTitle("F_{R} input");
	r->GetYaxis()->SetTitle("F_{R} output");
	r->Draw();

	c1->SaveAs(canv+".C");


   TCanvas *c2 = new TCanvas("c2", "c2",242,131,604,638);
	c2->Range(0.3110345,-0.07230999,1.01908,0.6295608);
	c2->SetFillColor(0);
	c2->SetBorderMode(0);
	c2->SetBorderSize(2);
	c2->SetLeftMargin(0.12);
	c2->SetRightMargin(0.01);
	c2->SetTopMargin(0.04);
	c2->SetFrameBorderMode(0);
	c2->SetFrameBorderMode(0);
	c2->Divide(1,3);

	c2->cd(1);
	TProfile * p2 = ((TH2D*)f->Get("hFinalFNegVR"))->ProfileX();
	p2->GetXaxis()->SetTitle("V_{R} input");
	p2->GetYaxis()->SetTitle("F_{L} output");
	p2->Draw();

	c2->cd(2);
	TProfile * q2 = ((TH2D*)f->Get("hFinalFZeroVR"))->ProfileX();
	q2->GetXaxis()->SetTitle("V_{R} input");
	q2->GetYaxis()->SetTitle("F_{0} output");
	q2->Draw();

	c2->cd(3);
	TProfile * r2 = ((TH2D*)f->Get("hFinalFPosVR"))->ProfileX();
	r2->GetXaxis()->SetTitle("V_{R} input");
	r2->GetYaxis()->SetTitle("F_{R} output");
	r2->Draw();

	c2->SaveAs(canv+"_AnomInput.C");
}
