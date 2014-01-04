#include <vector>
#include <iostream>
#include <TFile.h>
#include <TH1.h>
#include <TH2.h>
using namespace std;
void Ratio(){
std::vector<TFile*> files;
files.push_back(TFile::Open("TreesMu_SChannel_RW.root"));
files.push_back(TFile::Open("TreesMu_SbarChannel_RW.root"));
files.push_back(TFile::Open("TreesMu_TChannel_RW.root"));
files.push_back(TFile::Open("TreesMu_TbarChannel_RW.root"));
files.push_back(TFile::Open("TreesMu_TWChannel_RW.root"));
files.push_back(TFile::Open("TreesMu_TbarWChannel_RW.root"));
TH2D * tmp = (TH2D*)files[0]->Get("Default_allW/Default_allWcosTheta2D");
TH1D * singleTop = tmp->ProjectionY("myST");

for(unsigned int i = 1; i< files.size(); i++){
	singleTop->Add(((TH2D*)files[0]->Get("Default_allW/Default_allWcosTheta2D"))->ProjectionY());
}

std::vector<TFile*> files2;
files2.push_back(TFile::Open("TreesMu_dimu_TTBar_RW.root"));
files2.push_back(TFile::Open("TreesMu_mue_TTBar_RW.root"));
files2.push_back(TFile::Open("TreesMu_mutau_TTBar_RW.root"));
files2.push_back(TFile::Open("TreesMu_muhad_TTBar_RW.root"));
TH2D * tmp2 = (TH2D*)files2[0]->Get("Default_allW/Default_allWcosTheta2D");
TH1D * top = tmp2->ProjectionY("myT");


for(unsigned int i = 1; i< files2.size(); i++){
	top->Add(((TH2D*)files2[0]->Get("Default_allW/Default_allWcosTheta2D"))->ProjectionY());
}
cout<<"here"<<endl;
top->Divide(singleTop);
top->SetNameTitle("Ratio","Ratio");
top->Rebin(10);
TFile* f = new TFile("TreesMu_Ratio_RW.root","recreate");
f->cd();
top->Write();
f->Write();
f->Close();

}
