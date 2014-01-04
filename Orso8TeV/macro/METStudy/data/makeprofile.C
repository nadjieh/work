{

TFile* f = TFile::Open("TreesEle_Data_plots.root");
TProfile * px = ((TH2D*)f->Get("hMetXNvtx"))->ProfileX();
TProfile * pxc = ((TH2D*)f->Get("hMetXNvtxCorr"))->ProfileX();
TCanvas c1;
c1->cd();
px->SetLineColor(kRed);
px->Draw();
pxc->Draw("sames");
c1.SaveAs("metx.C");
TProfile * py = ((TH2D*)f->Get("hMetYNvtx"))->ProfileX();
TProfile * pyc = ((TH2D*)f->Get("hMetYNvtxCorr"))->ProfileX();
TCanvas c2;
c2->cd();
py->SetLineColor(kRed);
py->Draw();
pyc->Draw("sames");
c2.SaveAs("mety.C");



}
