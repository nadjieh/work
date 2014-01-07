#include <vector>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
#include "TFile.h"
#include "TCanvas.h"
#include "TH1.h"
#include "TGraph.h"
#include "TList.h"
void dop(){
std::vector<TFile*> files;

files.push_back(TFile::Open("mu_10.root"));

files.push_back(TFile::Open("mu_25.root"));

files.push_back(TFile::Open("mu_50.root"));

files.push_back(TFile::Open("mu_72.root"));

files.push_back(TFile::Open("mu_100.root"));

std::vector<int> colors;
colors.push_back(kRed);
colors.push_back(kBlue);
colors.push_back(kGreen);
colors.push_back(kOrange+4);
colors.push_back(kBlack);




TList * l = files[0]->GetListOfKeys();

std::vector<std::vector<TGraph*> > allGs;

for(int k = 0; k < l->GetSize(); k++){
	TH1D * h = 	0;
    std::vector<TGraph*> grs;
	for(unsigned int i = 0; i < files.size(); i++){
		h = (TH1D*)files[i]->Get(l->At(k)->GetName());
		stringstream NAME;
		NAME<<h->GetXaxis()->GetNbins()<<"\tbins";
		TGraph * myg = new TGraph(h->GetXaxis()->GetNbins());
		for(int b = 0; b < h->GetXaxis()->GetNbins(); b++){	
			myg->SetPoint(b, h->GetBinCenter(b+1), h->GetBinContent(b+1));
		}
		myg->SetName(l->At(k)->GetName());
		myg->SetTitle(NAME.str().c_str());
        grs.push_back(myg);
	}
	allGs.push_back(grs);
}
cout<<allGs.size()<<endl;
TGraph * def = new TGraph(2);
def->SetPoint(0,1, 1000);
def->SetPoint(1,-1, 0);
for(unsigned int s = 0; s < allGs.size(); s++){
	std::vector<TGraph*> grs = allGs[s];
	TCanvas c;
	def->Draw("ap");
	for(unsigned int i = 0; i < grs.size(); i++){
		grs[i]->SetMarkerStyle(20);
		grs[i]->SetMarkerColor(colors[i]);
		grs[i]->SetFillColor(kWhite);
		grs[i]->Draw("p");
	}
	c.SaveAs((string(l->At(s)->GetName())+".C").c_str());
}

}
