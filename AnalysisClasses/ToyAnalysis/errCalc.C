#include <vector>
#include <string>
#include <iostream>
#include "TFile.h"
#include "TH1.h"
#include "TH2.h"
using namespace std;
void calcErr(){
	std::vector<TFile* > files;
	std::vector<std::string > names;
	std::vector<double > w;
	std::vector<int > n;
	files.push_back(TFile::Open("TbarChannel_plots.root"));names.push_back("single top (t)");
	files.push_back(TFile::Open("TChannel_plots.root"));names.push_back("single top (t)");
	files.push_back(TFile::Open("TWChannel_plots.root"));names.push_back("single top (tW)");
	files.push_back(TFile::Open("TbarWChannel_plots.root"));names.push_back("single top (tW)");
	files.push_back(TFile::Open("SbarChannel_plots.root"));names.push_back("single top (s)");
	files.push_back(TFile::Open("SChannel_plots.root"));names.push_back("single top (s)");
	files.push_back(TFile::Open("TTBar_plots.root"));names.push_back("$t\\bar{t}$");
	files.push_back(TFile::Open("WW_plots.root"));names.push_back("Diboson");
	files.push_back(TFile::Open("WZ_plots.root"));names.push_back("Diboson");
	files.push_back(TFile::Open("ZZ_plots.root"));names.push_back("Diboson");
	files.push_back(TFile::Open("WTemplateDefFormat_plots.root"));names.push_back("W+jets");
	files.push_back(TFile::Open("ZJets_plots.root"));names.push_back("Z+jets");
	files.push_back(TFile::Open("Data_plots.root"));names.push_back("Data");

    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);
	for(unsigned int i = 0; i<files.size(); i++){
		TH1D * h1 = (TH1D*)files[i]->Get("Default_allW/Default_allWcosTheta");
		TH2D * h2 = (TH2D*)files[i]->Get("Default_allW/Default_allWcosTheta2D");
		int nTot = h1->GetEntries() +  h2->GetEntries();
		double integ = h1->Integral() + h2->Integral();
		double W = integ/(double)nTot;
		w.push_back(W);
		n.push_back(nTot);
		//cout<<names[i]<<"&"<<integ<<"$\\pm$"<<err<<endl;
	}
	for(unsigned int i = 0; i<names.size(); i++){
		if(i == 0){
			cout<<names[i]<<"&"<<n[i]*w[i] + n[i+1]*w[i+1] <<"$\\pm$"<<sqrt(n[i]*w[i]*w[i] + n[i+1]*w[i+1]*w[i+1])<<"\n\\hline"<<endl;
			i++;
			continue;
		}
		if(i == 2){
			cout<<names[i]<<"&"<<n[i]*w[i] + n[i+1]*w[i+1] <<"$\\pm$"<<sqrt(n[i]*w[i]*w[i] + n[i+1]*w[i+1]*w[i+1])<<"\n\\hline"<<endl;
			i++;
			continue;
		}
		if(i == 4){
			cout<<names[i]<<"&"<<n[i]*w[i] + n[i+1]*w[i+1] <<"$\\pm$"<<sqrt(n[i]*w[i]*w[i] + n[i+1]*w[i+1]*w[i+1])<<"\n\\hline"<<endl;
			i++;
			continue;
		}
		if(i == 7){
			cout<<names[i]<<"&"<<n[i]*w[i] + n[i+1]*w[i+1] + n[i+2]*w[i+2]<<"$\\pm$"<<sqrt(n[i]*w[i]*w[i] + n[i+1]*w[i+1]*w[i+1] + n[i+2]*w[i+2]*w[i+2])<<"\n\\hline"<<endl;
			i+=2;
			continue;
		}

		cout<<names[i]<<"&"<<n[i]*w[i]<<"$\\pm$"<<w[i]*sqrt(n[i])<<endl;
		if(i == 11){
			cout<<"QCD&78$\\pm$39"<<"\n\\hline"<<"\n\\hline"<<endl;
			double allMC = 0;
			double MCerr = 0;
			for(unsigned int j = 0; j<(names.size()-1); j++){
				allMC+=n[j]*w[j];
				MCerr+= n[j]*w[j]*w[j];
			}
			allMC+=78;
			MCerr+= 39*39;
			cout<<"Sum simulation"<<"&"<<allMC<<"$\\pm$"<<sqrt(MCerr)<<"\n\\hline"<<endl;
		}
	}
}
