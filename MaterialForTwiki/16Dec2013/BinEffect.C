#include "TCanvas.h"
#include "TGraphErrors.h"
#include "TGraph.h"
#include "TH1.h"
#include "TH2.h"
#include <vector>
#include <iostream>

using namespace std;

std::vector<TGraphErrors*> GetAllDD10(){

	std::vector<TGraphErrors*> ret;
	double x[3] = {2,2,2};
	double xE[3] = {4,4,4};
	double xEM[3] = {6,6,6};
	double xerr[3] = {0,0,0};
	
	double MuY[3] = {0.72238,0.308293,-0.0306769};
	double MuYerr[3] = {0.0508874,0.0330198,0.0239062};	
	TGraphErrors * Mu = new TGraphErrors(3, x,MuY,xerr,MuYerr);
	Mu->SetName("Mu");
	ret.push_back(Mu);

	double EY[3] = {0.648717,0.283083,0.0682 };
	double EYerr[3] = {0.079309,0.046279,0.0417572};

	TGraphErrors * E = new TGraphErrors(3, xE,EY,xerr,EYerr);
	E->SetName("E");
	ret.push_back(E);	

	double EMTWY[3] = {0.676909,0.314307,0.00878328 };
	double EMTWerr[3] = {0.0772704,0.0544271,0.034482};
	TGraphErrors * EM = new TGraphErrors(3, xEM,EMTWY,xerr,EMTWerr);
	EM->SetName("EM");
	ret.push_back(EM);	

	for(unsigned int s = 0; s<ret.size();s++){
		ret[s]->SetMarkerStyle(20);
		ret[s]->SetFillColor(kWhite);
	}
	ret[0]->SetMarkerColor(kRed);
	ret[0]->SetTitle("muon");
	ret[1]->SetMarkerColor(kBlue);
	ret[1]->SetTitle("e (MET)");
	ret[2]->SetMarkerColor(kGreen);
	ret[2]->SetTitle("e (MTW)");

	return ret;

}

std::vector<TGraphErrors*> GetTrueDD10(){
	std::vector<TGraphErrors*> ret;
	double x[3] = {2,2,2};
	double xE[3] = {4,4,4};
	double xEM[3] = {6,6,6};
	double xerr[3] = {0,0,0};

	double MuY[3] = {0.853899,0.222561,-0.0764598};
	double MuYerr[3] = {0.0573562,0.0356617,0.0302815};	
	TGraphErrors * Mu = new TGraphErrors(3, x,MuY,xerr,MuYerr);
	Mu->SetName("Mu");
	ret.push_back(Mu);

	double EY[3] = {0.909709,0.176371,-0.0860798 };
	double EYerr[3] = {0.11926,0.0592233,0.0730185};

	TGraphErrors * E = new TGraphErrors(3, xE,EY,xerr,EYerr);
	E->SetName("E");
	ret.push_back(E);	

	double EMTWY[3] = {0.970245,0.155829,-0.126073 };
	double EMTWerr[3] = {0.0962319,0.0609719,0.0471778};
	TGraphErrors * EM = new TGraphErrors(3, xEM,EMTWY,xerr,EMTWerr);
	EM->SetName("EM");
	ret.push_back(EM);

	for(unsigned int s = 0; s<ret.size();s++){
		ret[s]->SetMarkerStyle(20);
		ret[s]->SetFillColor(kWhite);
	}
	ret[0]->SetMarkerColor(kRed);
	ret[1]->SetMarkerColor(kBlue);
	ret[2]->SetMarkerColor(kGreen);
	
	return ret;


}


std::vector<TGraphErrors*> GetAllDD100(){
	std::vector<TGraphErrors*> ret;
	double x[3] = {2,2,2};
	double xE[3] = {4,4,4};
	double xEM[3] = {6,6,6};
	double xerr[3] = {0,0,0};

	double MuY[3] = {0.68911,0.321879,-0.0109891};
	double MuYerr[3] = {0.0433257,0.0300998,0.0196342};	
	TGraphErrors * Mu = new TGraphErrors(3, x,MuY,xerr,MuYerr);
	Mu->SetName("Mu");
	ret.push_back(Mu);

	double EY[3] = {0.725251,0.245879,0.0289 };
	double EYerr[3] = {0.064632,0.0417117,0.0321019};

	TGraphErrors * E = new TGraphErrors(3, xE,EY,xerr,EYerr);
	E->SetName("E");
	ret.push_back(E);	

	double EMTWY[3] = {0.713921,0.298873,-0.0127941 };
	double EMTWerr[3] = {0.0628563,0.0420037,0.0292492};
	TGraphErrors * EM = new TGraphErrors(3, xEM,EMTWY,xerr,EMTWerr);
	EM->SetName("EM");
	ret.push_back(EM);	

	for(unsigned int s = 0; s<ret.size();s++){
		ret[s]->SetMarkerStyle(20);
		ret[s]->SetFillColor(kWhite);
	}
	ret[0]->SetMarkerColor(kRed);
	ret[1]->SetMarkerColor(kBlue);
	ret[2]->SetMarkerColor(kGreen);

	return ret;
}

std::vector<TGraphErrors*> GetTrueDD100(){

	std::vector<TGraphErrors*> ret;
	double x[3] = {2,2,2};
	double xE[3] = {4,4,4};
	double xEM[3] = {6,6,6};
	double xerr[3] = {0,0,0};

	double MuY[3] = {0.761674,0.258842,-0.0205151};
	double MuYerr[3] = {0.0446499,0.0323287,0.021327};	
	TGraphErrors * Mu = new TGraphErrors(3, x,MuY,xerr,MuYerr);
	Mu->SetName("Mu");
	ret.push_back(Mu);

	double EY[3] = {0.879713,0.190246,-0.0699588 };
	double EYerr[3] = {0.109298,0.0563053,0.0660335};

	TGraphErrors * E = new TGraphErrors(3, xE,EY,xerr,EYerr);
	E->SetName("E");
	ret.push_back(E);	

	double EMTWY[3] = {0.893946,0.183754,-0.077701 };
	double EMTWerr[3] = {0.0880071,0.0576065,0.0424455};
	TGraphErrors * EM = new TGraphErrors(3, xEM,EMTWY,xerr,EMTWerr);
	EM->SetName("EM");
	ret.push_back(EM);	

	for(unsigned int s = 0; s<ret.size();s++){
		ret[s]->SetMarkerStyle(20);
		ret[s]->SetFillColor(kWhite);
	}
	ret[0]->SetMarkerColor(kRed);
	ret[1]->SetMarkerColor(kBlue);
	ret[2]->SetMarkerColor(kGreen);

	return ret;
}



void plotBinning(){
	TGraph * p = new TGraph(2);
	p->SetPoint(0,6.5,1);
	p->SetPoint(1,1.5,-0.2);
	p->SetTitle("");
	p->SetMarkerColor(kWhite);


	TH2F * h = new TH2F("h","",5,1.5,6.5,12,-0.2,1);
	h->GetXaxis()->SetBinLabel(h->GetXaxis()->FindBin(2.), "muon");
	h->GetXaxis()->SetBinLabel(h->GetXaxis()->FindBin(4.), "e (MET)");
	h->GetXaxis()->SetBinLabel(h->GetXaxis()->FindBin(6.), "e (MTW)");

	h->GetYaxis()->SetBinLabel(h->GetYaxis()->FindBin(0.7), "F_{0}");
	h->GetYaxis()->SetBinLabel(h->GetYaxis()->FindBin(0.3), "F_{L}");
	h->GetYaxis()->SetBinLabel(h->GetYaxis()->FindBin(0.), "F_{R}");
	h->SetStats(kFALSE);


	TH1F * f = new TH1F("f","",5,1.5,6.5);
	f->GetXaxis()->SetBinLabel(h->GetXaxis()->FindBin(2.), "muon");
	f->GetXaxis()->SetBinLabel(h->GetXaxis()->FindBin(4.), "e (MET)");
	f->GetXaxis()->SetBinLabel(h->GetXaxis()->FindBin(6.), "e (MTW)");
	f->GetXaxis()->SetLabelSize(0.07);
	f->SetStats(kFALSE);
	f->SetMinimum(-0.25);
	f->SetMaximum(1.1);
//	f->GetYaxis()->SetLabelColor(kWhite);
	f->GetYaxis()->SetTitle("W-helicities");
	f->GetYaxis()->SetTitleSize(0.05);
	f->SetLineStyle(3);
	f->SetLineColor(kBlack);
	f->GetYaxis()->CenterTitle();
//	TCanvas s;
//	s.Divide(3,3);

	std::vector<TGraphErrors*> g = GetAllDD10();
	TCanvas c1;
	c1.SetGridy();
	c1.cd();
	f->Draw();
	for(unsigned int b = 0; b < g.size(); b++)
		g[b]->Draw("p");
	g.clear();
	c1.SaveAs("binning_AllDD10.C");

	g = GetTrueDD10();
	TCanvas c2;
	c2.SetGridy();
	c2.cd();
	//p->Draw("ap");
	f->Draw();
	for(unsigned int b = 0; b < g.size(); b++)
		g[b]->Draw("p");
	g.clear();
	c2.SaveAs("binning_TrueDD10.C");

	g = GetAllDD100();
	TCanvas c3;
	c3.SetGridy();
	c3.cd();
	//p->Draw("ap");
	f->Draw();
	for(unsigned int b = 0; b < g.size(); b++)
		g[b]->Draw("p");
	g.clear();
	c3.SaveAs("binning_AllDD100.C");

	g = GetTrueDD100();
	TCanvas c4;
	c4.SetGridy();
	c4.cd();
//	p->Draw("ap");
	f->Draw();
	for(unsigned int b = 0; b < g.size(); b++)
		g[b]->Draw("p");
	g.clear();
	c4.SaveAs("binning_TrueDD100.C");
	//s.SaveAs("binning.C");

}

