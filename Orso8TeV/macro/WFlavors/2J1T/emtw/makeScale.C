
{
TFile *_file0 = TFile::Open("TreesEle_bXWJets_plots.root");
TFile *_file1 = TFile::Open("TreesEle_cWJets_plots.root");
TFile *_file2 = TFile::Open("TreesEle_lWJets_plots.root");
TFile *_file3 = TFile::Open("TreesEle_WJets_plots.root");
TH1D * b = (TH1D*)_file0->Get("Default_allW/Default_allWcosTheta");
TH1D * c = (TH1D*)_file1->Get("Default_allW/Default_allWcosTheta");
TH1D * l = (TH1D*)_file2->Get("Default_allW/Default_allWcosTheta");
TH1D * bUp = (TH1D*)b->Clone("bUp");
TH1D * bDown = (TH1D*)b->Clone("bDown");
bUp->Scale(2.);
bDown->Scale(0.0);
bUp->Add(c);
bUp->Add(l);
bDown->Add(c);
bDown->Add(l);
//TH1D * nominal = (TH1D*)_file3->Get("Default_allW/Default_allWcosTheta");
TH1D * nominal = (TH1D*)b->Clone("nominal");
nominal->Add(c);
nominal->Add(l);
bDown->Divide(nominal);
bUp->Divide(nominal);
TFile * f =  new TFile("TreesEle_WSF100_plots.root","recreate");
f->cd();
bUp->Write();
bDown->Write();
f->Save();
f->Close();

}


/*
{
TFile *_file0 = TFile::Open("TreesEle_bXWJets_plots.root");
TFile *_file1 = TFile::Open("TreesEle_cWJets_plots.root");
TFile *_file2 = TFile::Open("TreesEle_lWJets_plots.root");
TFile *_file3 = TFile::Open("TreesEle_WJets_plots.root");
TH1D * b = (TH1D*)_file0->Get("Default_allW/Default_allWcosTheta");
TH1D * c = (TH1D*)_file1->Get("Default_allW/Default_allWcosTheta");
TH1D * l = (TH1D*)_file2->Get("Default_allW/Default_allWcosTheta");
TH1D * cUp = (TH1D*)b->Clone("cUp");
TH1D * cDown = (TH1D*)b->Clone("cDown");
cUp->Scale(2.);
cDown->Scale(0.0);
cUp->Add(b);
cUp->Add(l);
cDown->Add(b);
cDown->Add(l);
//TH1D * nominal = (TH1D*)_file3->Get("Default_allW/Default_allWcosTheta");
TH1D * nominal = (TH1D*)b->Clone("nominal");
nominal->Add(c);
nominal->Add(l);
cDown->Divide(nominal);
cUp->Divide(nominal);
TFile * f =  new TFile("TreesEle_cWSF100_plots.root","recreate");
f->cd();
cUp->Write();
cDown->Write();
f->Save();
f->Close();

}*/
