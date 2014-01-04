#include <vector>
#include <iostream>
#include <TFile.h>
#include <TH1.h>
#include <TH2.h>
#include <TH3.h>
using namespace std;
void Ratio(){
std::vector<TFile*> files;
files.push_back(TFile::Open("TreesEle_SChannel_RW.root"));
files.push_back(TFile::Open("TreesEle_SbarChannel_RW.root"));
files.push_back(TFile::Open("TreesEle_TChannel_RW.root"));
files.push_back(TFile::Open("TreesEle_TbarChannel_RW.root"));
files.push_back(TFile::Open("TreesEle_TWChannel_RW.root"));
files.push_back(TFile::Open("TreesEle_TbarWChannel_RW.root"));
TH2D * tmp = (TH2D*)files[0]->Get("Default_allW/Default_allWcosTheta2D");
TH1D * singleTop = tmp->ProjectionY("myST");

for(unsigned int i = 1; i< files.size(); i++){
	singleTop->Add(((TH2D*)files[0]->Get("Default_allW/Default_allWcosTheta2D"))->ProjectionY());
}

std::vector<TFile*> files2;
files2.push_back(TFile::Open("TreesEle_die_TTBar_RW.root"));
files2.push_back(TFile::Open("TreesEle_mue_TTBar_RW.root"));
files2.push_back(TFile::Open("TreesEle_etau_TTBar_RW.root"));
files2.push_back(TFile::Open("TreesEle_ehad_TTBar_RW.root"));
TH3D * tmp2 = (TH3D*)files2[0]->Get("Default_allW/Default_allWcosTheta3D");
TH1D * top = tmp2->ProjectionY("myT");


for(unsigned int i = 1; i< files2.size(); i++){
	top->Add(((TH3D*)files2[0]->Get("Default_allW/Default_allWcosTheta3D"))->ProjectionY());
}
cout<<"top: "<<top->Integral()<<endl;
cout<<"singletop: "<<singleTop->Integral()<<endl;
top->Divide(singleTop);
top->SetNameTitle("Ratio","Ratio");
top->Rebin(10);
TFile* f = new TFile("TreesEle_Ratio_RW.root","recreate");
f->cd();
top->Write();
f->Write();
f->Close();

}
