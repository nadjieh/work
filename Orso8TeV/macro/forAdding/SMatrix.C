#include <vector>
#include <iostream>
#include "TFile.h"
#include "TString.h"
#include "TCanvas.h"
#include "TH2.h"
using namespace std;
void plot(TString mufile, TString efile, TString name){
	TFile * muf = TFile::Open(mufile);
	TFile * ef = TFile::Open(efile);
	TH2D * muh = (TH2D*) muf->Get("Default_allW/Default_allWcosTheta2D");
	muh->SetTitle("mu+jets");
	cout<<"|"<<name<<"|"<<muh->GetCorrelationFactor()<<"|";
	TH2D * eh = (TH2D*) ef->Get("Default_allW/Default_allWcosTheta2D");
	eh->SetTitle("e+jets");
	cout<<eh->GetCorrelationFactor()<<"|"<<endl;
	/*TCanvas c;
	c.Divide(2,1);
	c.cd(1);
	muh->Draw();

	c.cd(2);
	eh->Draw();
    c.SaveAs(name+".C");*/
}

void doJob(){
	std::vector<TString> Enames, Munames;
    Enames.push_back("die");    Munames.push_back("dimu");
    Enames.push_back("mue");	Munames.push_back("mue");
    Enames.push_back("etau"); 	Munames.push_back("mutau");
    Enames.push_back("ehad");   Munames.push_back("muhad");
	Enames.push_back("disemitau");	Munames.push_back("disemitau");

	TString mu = "mumet/TreesMu";
	TString e = "TreesEle";
	cout<<"|| *mu+jets* | *e+jets* |"<<endl;
	for(unsigned int i = 0; i<Enames.size(); i++){
		plot(mu+"_"+Munames[i]+"_TTBar_plots.root", e+"_"+Enames[i]+"_TTBar_plots.root", "mtallSol_"+Munames[i]+"_"+Enames[i]);
	}
	plot(mu+"_TChannel_plots.root",e+"_TChannel_plots.root", "mtallSol_tchannel");
	plot(mu+"_TbarChannel_plots.root",e+"_TbarChannel_plots.root", "mtallSol_tbarchannel");
}
