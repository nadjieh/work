#include "TFile.h"
#include "TString.h"
#include "TH1.h"
#include "TCanvas.h"
#include <iostream>
using namespace std;
void doOverlay(TString name, TString chan){
TString fnamemc = "2J1T/emtw/"+chan+"_WJets_plots.root";
TString fnamedata = "2J0T/emtw/"+chan+"_WTemplateDefFormat_plots.root";



TFile *Data = TFile::Open(fnamedata);// data template 
TFile *MC = TFile::Open(fnamemc);// data template 
TFile *Up = TFile::Open("2J0T/emtw/"+chan+"_"+name+"UpWTemplate_plots.root");
TFile *Down = TFile::Open("2J0T/emtw/"+chan+"_"+name+"DownWTemplate_plots.root");
cout<<"1"<<endl;
TH1D * Temp = (TH1D*)Data->Get("Default_allW/Default_allWcosTheta");
Temp->SetLineColor(kBlack);
Temp->SetTitle("2J0T Data (N)");
Temp->Rebin(5);
Temp->SetStats(kFALSE);
cout<<"2"<<endl;
TH1D * mcTemp = (TH1D*)MC->Get("Default_allW/Default_allWcosTheta");
mcTemp->SetLineWidth(2);
mcTemp->SetLineStyle(2);
mcTemp->SetLineColor(kRed);
mcTemp->SetTitle("2J1T MC");
mcTemp->Rebin(5);
mcTemp->SetStats(kFALSE);
cout<<"3"<<endl;
TH1D * hUp  = (TH1D*)Up->Get("Default_allW/Default_allWcosTheta");
hUp->SetLineColor(kOrange);
hUp->SetMarkerColor(kOrange);
hUp->SetFillColor(kOrange);
hUp->SetTitle("2J0T Data ("+name+"-syst.)");
hUp->Rebin(5);
hUp->SetStats(kFALSE);
cout<<"4"<<endl;
TH1D * hDown  = (TH1D*)Down->Get("Default_allW/Default_allWcosTheta");
hDown->SetLineColor(kOrange);
hDown->SetMarkerColor(kOrange);
hDown->SetFillColor(kOrange);
hDown->SetTitle("2J0T Data ("+name+"-syst.)");
hDown->Rebin(5);
hDown->SetStats(kFALSE);
cout<<"5"<<endl;
TCanvas *c = new TCanvas("c", "c",140,82,604,628);
c->Range(-1.275862,-45.98206,1.022989,434.2249);
c->SetFillColor(0);
c->SetBorderMode(0);
c->SetBorderSize(2);
c->SetLeftMargin(0.12);
c->SetRightMargin(0.01);
c->SetTopMargin(0.04);
c->SetFrameBorderMode(0);
c->SetFrameBorderMode(0);
c->cd();
hUp->DrawNormalized("");
hDown->DrawNormalized("sames");
Temp->DrawNormalized("sames");
mcTemp->DrawNormalized("sames");
c->SaveAs(chan+"_"+name+"Systs_emtw_qcdfree.C");
}

void doJob(){

//doOverlay("b","TreesMu");
doOverlay("b","TreesEle");
//doOverlay("c","TreesMu");
doOverlay("c","TreesEle");

}
