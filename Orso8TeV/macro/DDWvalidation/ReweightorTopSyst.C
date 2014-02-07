#define F00 0.6862069 /* SM */
#define FLL 0.3170087 /* SM */
#define FLSys 0.026 /*TOP-13-008*/
#define F0Sys 0.028 /*TOP-13-008*/
#include "TFile.h"
#include "TH1.h"
#include "TH2.h"
#include "TF1.h"
#include "../../../AnalysisClasses/ToyAnalysis/interface/ToyFitter.h"
#include <string>
#include <sstream>
#include <iostream>
#include "TString.h"
TH1D * myReweightor(TH2D* ttMtop2D, std::pair<TF1, WeightFunctionCreator*> weightFunc, TString Name){
  TH1D * res = new TH1D(Name, Name,
                ttMtop2D->GetYaxis()->GetNbins(), ttMtop2D->GetYaxis()->GetXmin(),
                ttMtop2D->GetYaxis()->GetXmax());
  for(int i = 1; i < (res->GetXaxis()->GetNbins() + 1); i++){                
  	double nSignal = 0;
    gROOT->cd();
    TH1* hithrecbin = ttMtop2D->ProjectionX("_pX", i, i, "o");
    hithrecbin->Multiply(&(weightFunc.first), 1);
    nSignal = hithrecbin->Integral();
    if (hithrecbin != NULL)
    	delete hithrecbin;
  	res->SetBinContent(i, nSignal);
	}
	return res;
}
using namespace std;

int main(){
	TFile * data = TFile::Open("TreesMu_Data_plots.root");
	TH1D * dataMtop = (TH1D*)data->Get("antiEtaFwDTrue_allW/antiEtaFwDTrue_allWcosTheta");
	
	TFile * tt = TFile::Open("TreesMu_TTBar_RW.root");
	
	TH1D * ttMtop = (TH1D*)tt->Get("MtopOutWindowTrue_allW/MtopOutWindowTrue_allWcosTheta");
	
	TH2D * ttMtop2D = (TH2D*)tt->Get("MtopOutWindowTrue_allW/MtopOutWindowTrue_allWcosTheta2D");
	
  std::pair<TF1, WeightFunctionCreator*> WeightFuncUD(WeightFunctionCreator::getWeightFunction("WeightFuncUDF", F0, FL));
  std::pair<TF1, WeightFunctionCreator*> WeightFuncDU(WeightFunctionCreator::getWeightFunction("WeightFuncDUF", F0, FL));
  cout<<F0 + F0Sys<<"\t"<<FL - FLSys<<endl;
	WeightFuncUD.first.SetParameters(F0 + F0Sys, FL - FLSys);
	WeightFuncDU.first.SetParameters(F0 - F0Sys, FL + FLSys);
	
	TH1D * ttUD = myReweightor(ttMtop2D,WeightFuncUD,"WeightFuncUD_");
	cout<<"ratio: "<<ttMtop2D->Integral()/ttUD->Integral()<<endl;
	ttUD->Scale(ttMtop2D->Integral()/ttUD->Integral());
	ttUD->Add(ttMtop);
	TH1D * wUD = (TH1D*)ttUD->Clone("wUD");
	wUD->Scale(-1.);
	wUD->Add(dataMtop);
	
	TH1D * ttDU = myReweightor(ttMtop2D,WeightFuncDU,"WeightFuncDU_");
	cout<<"ratio: "<<ttMtop2D->Integral()/ttDU->Integral()<<endl;
	ttDU->Scale(ttMtop2D->Integral()/ttDU->Integral());
	ttDU->Add(ttMtop);
	TH1D * wDU = (TH1D*)ttDU->Clone("wDU");
	wDU->Scale(-1.);
	wDU->Add(dataMtop);
	
	TFile * out = new TFile("file.root","recreate");
	out->cd();
	WeightFuncUD.first.Write();
	WeightFuncDU.first.Write();
	ttUD->Write();
	ttDU->Write();	
	wUD->Write();
	wDU->Write();	
	out->Close();
	return 1;
}
