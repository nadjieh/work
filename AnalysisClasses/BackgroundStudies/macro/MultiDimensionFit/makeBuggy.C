#include <vector>
#include <iostream>
#include "TFile.h"
#include "TString.h"
#include "TCanvas.h"
#include "TH2.h"
#include "TH1.h"
#include "TH3.h"
using namespace std;
void takeHist(TString fname){
	TFile * in = TFile::Open(fname);
	TH1D * h2 = ((TH2D*)in->Get("Default_allW/Default_allWcosTheta2D"))->ProjectionY();
	h2->Add((TH1D*)in->Get("Default_allW/Default_allWcosTheta"));
	TH3D * h1 = new TH3D("tmp","", 1000, -1., 1., 100, -1., 1., 10, -1. ,1.);
	TFile * out =  new TFile(fname+"Sec", "recreate");
	out->mkdir("Default_allW")->cd();
	h2->Write("Default_allWcosTheta");
	h1->Write("Default_allWcosTheta3D");
	out->Close();
}

void GetCorr(TString fname, int D){
	TFile * in = TFile::Open(fname);
	TH2D * h2 = ((TH2D*)in->Get("Default_allW/Default_allWcosTheta2D"));
	TH3D * h3 = ((TH3D*)in->Get("Default_allW/Default_allWcosTheta2D"));
	if(D == 2){
		cout<<"\t2D correlation: "<<h2->GetCorrelationFactor()<<endl;
	}
	if(D == 3){
		cout<<"\txy correlation: "<<((TH2D*)h3->Project3D("xy"))->GetCorrelationFactor()<<endl;
		cout<<"\txz correlation: "<<((TH2D*)h3->Project3D("xz"))->GetCorrelationFactor()<<endl;
		cout<<"\tyz correlation: "<<((TH2D*)h3->Project3D("yz"))->GetCorrelationFactor()<<endl;
	}
}
void doJob(){
	std::vector<TString> Enames, Munames;
    Enames.push_back("die");    
    Enames.push_back("mue");
    Enames.push_back("etau"); 
    Enames.push_back("ehad"); 

    Munames.push_back("dimu");    
    Munames.push_back("mue");
    Munames.push_back("mutau"); 
    Munames.push_back("muhad"); 
	cout<<"- e-met"<<endl;
	for(unsigned int i = 0; i<Enames.size(); i++){
		cout<<"  - "<<Enames[i]<<endl;
		GetCorr("TreesEle_"+Enames[i]+"_TTBar_RW.root",3);
	} 
	cout<<"t"<<endl;
	GetCorr("TreesEle_TChannel_RW.root",2);
	cout<<"tbar"<<endl;
	GetCorr("TreesEle_TbarChannel_RW.root",2);
	cout<<"- mu-mt"<<endl;
	for(unsigned int i = 0; i<Munames.size(); i++){
		cout<<"  - "<<Munames[i]<<endl;
		GetCorr("TreesMu_"+Munames[i]+"_TTBar_RW.root",3);
	}
	cout<<"t"<<endl;
	GetCorr("TreesMu_TChannel_RW.root",2);
	cout<<"tbar"<<endl;
	GetCorr("TreesMu_TbarChannel_RW.root",2);
}
