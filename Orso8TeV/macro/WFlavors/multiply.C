#include "TFile.h"
#include "TString.h"
#include "TH1.h"
void doMultiply(TString name, TString chan){
TString fname;
//TString fnamedata = "2J0T/mumet/"+chan+"_WTemplateDefFormat_plots.root";
TString fnamedata = "../reweightedHists/forAdding/mumet/"+chan+"_WTemplateDefFormat_RW.root";
if(name == "bUp" || name == "bDown")
	fname = "2J1T/mumet/"+chan+"_WSFDefault_plots.root";
else if(name == "cUp" || name == "cDown")
	fname = "2J1T/mumet/"+chan+"_cWSFDefault_plots.root";


TFile *Data = TFile::Open(fnamedata);// data template 
TFile *SF = TFile::Open(fname);


TH1D * Temp = (TH1D*)Data->Get("Default_allW/Default_allWcosTheta");
TH1D * hSF  = (TH1D*)SF->Get(name);
double integ = Temp->Integral();
Temp->Multiply(hSF);
Temp->Scale(integ/Temp->Integral());
TFile * f =  new TFile("2J0T/mumet/"+chan+"_"+name+"WTemplateDefFormat_RW.root","recreate");
f->mkdir("Default_allW")->cd();
Temp->Write();
f->cd();
f->Save();
f->Close();

}

void doJob(){

doMultiply("bUp","TreesMu");
doMultiply("bDown","TreesMu");
doMultiply("cDown","TreesMu");
doMultiply("cUp","TreesMu");
/*

doMultiply("bUp","TreesEle");
doMultiply("bDown","TreesEle");
doMultiply("cDown","TreesEle");
doMultiply("cUp","TreesEle");

*/
}
