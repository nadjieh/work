/*{
TFile *_file0 = TFile::Open("2J1T/mumet/TreesMu_bXWJets_plots.root");
TFile *_file1 = TFile::Open("2J1T/mumet/TreesMu_cWJets_plots.root");
TFile *_file2 = TFile::Open("2J1T/mumet/TreesMu_lWJets_plots.root");
TFile *_file3 = TFile::Open("2J1T/mumet/TreesMu_WJets_plots.root");
TH1D * b = (TH1D*)_file0->Get("Default_allW/Default_allWcosTheta");
TH1D * c = (TH1D*)_file1->Get("Default_allW/Default_allWcosTheta");
TH1D * l = (TH1D*)_file2->Get("Default_allW/Default_allWcosTheta");
TH1D * bUp = (TH1D*)b->Clone("bUp");
TH1D * bDown = (TH1D*)b->Clone("bDown");
bUp->Scale(2.);
bDown->Scale(0.5);
bUp->Add(c);
bUp->Add(l);
bDown->Add(c);
bDown->Add(l);
double nwjets = 18068.;
bUp->Scale(nwjets/bUp->Integral());
bDown->Scale(nwjets/bDown->Integral());
TFile * f =  new TFile("2J1T/mumet/TreesMu_bUpWJetsMC_RW.root","recreate");
f->mkdir("Default_allW")->cd();
bUp->Write("Default_allWcosTheta");
f->Save();
f->Close();
TFile * f1 =  new TFile("2J1T/mumet/TreesMu_bDownWJetsMC_RW.root","recreate");
f1->mkdir("Default_allW")->cd();
bDown->Write("Default_allWcosTheta");
f1->Save();
f1->Close();

}
*/



/*{
TFile *_file0 = TFile::Open("2J1T/mumet/emtw/TreesEle_bXWJets_plots.root");
TFile *_file1 = TFile::Open("2J1T/mumet/emtw/TreesEle_cWJets_plots.root");
TFile *_file2 = TFile::Open("2J1T/mumet/emtw/TreesEle_lWJets_plots.root");
TFile *_file3 = TFile::Open("2J1T/mumet/emtw/TreesEle_WJets_plots.root");
TH1D * b = (TH1D*)_file0->Get("Default_allW/Default_allWcosTheta");
TH1D * c = (TH1D*)_file1->Get("Default_allW/Default_allWcosTheta");
TH1D * l = (TH1D*)_file2->Get("Default_allW/Default_allWcosTheta");
TH1D * bUp = (TH1D*)b->Clone("bUp");
TH1D * bDown = (TH1D*)b->Clone("bDown");
bUp->Scale(2.);
bDown->Scale(0.5);
bUp->Add(c);
bUp->Add(l);
bDown->Add(c);
bDown->Add(l);
//double nwjets = 10977.;
double nwjets = 20287.;
bUp->Scale(nwjets/bUp->Integral());
bDown->Scale(nwjets/bDown->Integral());
TFile * f =  new TFile("2J1T/mumet/emtw/TreesEle_bUpWJetsMC_RW.root","recreate");
f->mkdir("Default_allW")->cd();
bUp->Write("Default_allWcosTheta");
f->Save();
f->Close();
TFile * f1 =  new TFile("2J1T/mumet/emtw/TreesEle_bDownWJetsMC_RW.root","recreate");
f1->mkdir("Default_allW")->cd();
bDown->Write("Default_allWcosTheta");
f1->Save();
f1->Close();

}
*/

{
TFile *_file0 = TFile::Open("2J1T/mumet/TreesMu_bXWJets_plots.root");
TFile *_file1 = TFile::Open("2J1T/mumet/TreesMu_cWJets_plots.root");
TFile *_file2 = TFile::Open("2J1T/mumet/TreesMu_lWJets_plots.root");
TFile *_file3 = TFile::Open("2J1T/mumet/TreesMu_WJets_plots.root");
TH1D * b = (TH1D*)_file0->Get("Default_allW/Default_allWcosTheta");
TH1D * c = (TH1D*)_file1->Get("Default_allW/Default_allWcosTheta");
TH1D * l = (TH1D*)_file2->Get("Default_allW/Default_allWcosTheta");
TH1D * cUp = (TH1D*)b->Clone("cUp");
TH1D * cDown = (TH1D*)b->Clone("cDown");
cUp->Scale(2.);
cDown->Scale(0.5);
cUp->Add(b);
cUp->Add(l);
cDown->Add(b);
cDown->Add(l);
double nwjets = 12435.501;//18068.;
cUp->Scale(nwjets/cUp->Integral());
cDown->Scale(nwjets/cDown->Integral());
TFile * f =  new TFile("2J1T/mumet/TreesMu_cUpWJetsMC_RW.root","recreate");
f->mkdir("Default_allW")->cd();
cUp->Write("Default_allWcosTheta");
f->Save();
f->Close();
TFile * f1 =  new TFile("2J1T/mumet/TreesMu_cDownWJetsMC_RW.root","recreate");
f1->mkdir("Default_allW")->cd();
cDown->Write("Default_allWcosTheta");
f1->Save();
f1->Close();
}
/*

{
TFile *_file0 = TFile::Open("2J1T/mumet/emtw/TreesEle_bXWJets_plots.root");
TFile *_file1 = TFile::Open("2J1T/mumet/emtw/TreesEle_cWJets_plots.root");
TFile *_file2 = TFile::Open("2J1T/mumet/emtw/TreesEle_lWJets_plots.root");
TFile *_file3 = TFile::Open("2J1T/mumet/emtw/TreesEle_WJets_plots.root");
TH1D * b = (TH1D*)_file0->Get("Default_allW/Default_allWcosTheta");
TH1D * c = (TH1D*)_file1->Get("Default_allW/Default_allWcosTheta");
TH1D * l = (TH1D*)_file2->Get("Default_allW/Default_allWcosTheta");

TH1D * cUp = (TH1D*)b->Clone("cUp");
TH1D * cDown = (TH1D*)b->Clone("cDown");
cUp->Scale(2.);
cDown->Scale(0.5);
cUp->Add(b);
cUp->Add(l);
cDown->Add(b);
cDown->Add(l);
//double nwjets = 10977.;
double nwjets = 20287.;
cUp->Scale(nwjets/cUp->Integral());
cDown->Scale(nwjets/cDown->Integral());
TFile * f =  new TFile("2J1T/mumet/emtw/TreesEle_cUpWJetsMC_RW.root","recreate");
f->mkdir("Default_allW")->cd();
cUp->Write("Default_allWcosTheta");
f->Save();
f->Close();
TFile * f1 =  new TFile("2J1T/mumet/emtw/TreesEle_cDownWJetsMC_RW.root","recreate");
f1->mkdir("Default_allW")->cd();
cDown->Write("Default_allWcosTheta");
f1->Save();
f1->Close();

}*/
