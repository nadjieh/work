#include "TFile.h"
#include "TString.h"
#include "TH1.h"
void doMultiply(TString name, TString chan){
TString fname;
TString fnamedata = "../../2J0T/emtw/"+chan+"_WTemplateDefFormat_plots.root";
if(name == "bUp" || name == "bDown")
	fname = chan+"_WSF100_plots.root";
else if(name == "cUp" || name == "cDown")
	fname = chan+"_cWSF100_plots.root";


TFile *Data = TFile::Open(fnamedata);// data template 
TFile *SF = TFile::Open(fname);


TH1D * Temp = (TH1D*)Data->Get("Default_allW/Default_allWcosTheta");
TH1D * hSF  = (TH1D*)SF->Get(name);

Temp->Multiply(hSF);

TFile * f =  new TFile("../../2J0T/emtw/"+chan+"_"+name+"WTemplate100_plots.root","recreate");
f->mkdir("Default_allW")->cd();
Temp->SetNameTitle("Default_allWcosTheta","Default_allWcosTheta");
Temp->Write();
f->cd();
f->Save();
f->Close();

}

void doJob(){
doMultiply("bUp","TreesEle");
doMultiply("bDown","TreesEle");
doMultiply("cDown","TreesEle");
doMultiply("cUp","TreesEle");


}
