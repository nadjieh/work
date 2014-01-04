#include "TFile.h"
#include "TString.h"
#include "TH1.h"
#include <iostream>
void changeThis(TString s, TString name){
TFile * fOld = TFile::Open(s,"UPDATE");
TH1D * h = (TH1D*)((TH1D*)fOld->Get(name+"/"+name+"cosTheta"))->Clone("Default_allWcosTheta");


fOld->mkdir("Default_allW")->cd();
h->Write();
fOld->cd();
fOld->Close();


} //10976.661 //18068.028
void extractBeta(TString s, double finalNimber){
TFile * fOld = TFile::Open(s);
TH1D * h = (TH1D*)fOld->Get("Default_allW/Default_allWcosTheta");
cout<<s<<"\t"<<finalNimber/h->Integral()<<endl;
}



void doJob(){
/*changeThis("TreesEle_bDownWTemplate_plots.root","Default_Def");
changeThis("TreesEle_bUpWTemplate_plots.root","Default_Def");
changeThis("TreesEle_cDownWTemplate_plots.root","Default_Def");
changeThis("TreesEle_cUpWTemplate_plots.root","Default_Def");
changeThis("TreesMu_bDownWTemplate_plots.root","Default_Def");
changeThis("TreesMu_bUpWTemplate_plots.root","Default_Def");
changeThis("TreesMu_cDownWTemplate_plots.root","Default_Def");
changeThis("TreesMu_cUpWTemplate_plots.root","Default_Def");*/

extractBeta("TreesEle_bDownWTemplate_plots.root",10976.661);
extractBeta("TreesEle_bUpWTemplate_plots.root",10976.661);
extractBeta("TreesEle_cDownWTemplate_plots.root",10976.661);
extractBeta("TreesEle_cUpWTemplate_plots.root",10976.661);
extractBeta("TreesMu_bDownWTemplate_plots.root",18068.028);
extractBeta("TreesMu_bUpWTemplate_plots.root",18068.028);
extractBeta("TreesMu_cDownWTemplate_plots.root",18068.028);
extractBeta("TreesMu_cUpWTemplate_plots.root",18068.028);
}
