#include "TFile.h"
#include "TString.h"
#include "TH1.h"
#include <iostream>
#include "TH2.h"
void extractBeta(TString s, double finalNimber){
TFile * fOld = TFile::Open(s);
TH1D * h = (TH1D*)fOld->Get("Default_allW/Default_allWcosTheta");
TH2D * h2= (TH2D*)fOld->Get("Default_allW/Default_allWcosTheta2D");
h->Add(h2->ProjectionY());
cout<<s<<"\t"<<h->Integral()<<endl;
cout<<"\t\t\t"<<finalNimber/h->Integral()<<endl;
}

void doJob(){
//extractBeta("TreesEle_comphep_plots.root", 4394.94); 
//extractBeta("TreesMu_comphep_plots.root",7800.35);
extractBeta("TreesEle_comphep_plots.root",5619.95);
}
