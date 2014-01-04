{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Jul 26 18:04:43 2013) by ROOT version5.32/00
   TCanvas *c1 = new TCanvas("c1", "c1",453,167,700,500);
   c1->Range(-1.25,568.5003,1.25,1718.398);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1D *Default_allWcosTheta__7__1 = new TH1D("Default_allWcosTheta__7__1","t#bar{t}",20,-1,1);
   Default_allWcosTheta__7__1->SetBinContent(1,1546.494);
   Default_allWcosTheta__7__1->SetBinContent(2,1412.688);
   Default_allWcosTheta__7__1->SetBinContent(3,1494.202);
   Default_allWcosTheta__7__1->SetBinContent(4,1559.603);
   Default_allWcosTheta__7__1->SetBinContent(5,1540.183);
   Default_allWcosTheta__7__1->SetBinContent(6,1501.501);
   Default_allWcosTheta__7__1->SetBinContent(7,1494.027);
   Default_allWcosTheta__7__1->SetBinContent(8,1441.06);
   Default_allWcosTheta__7__1->SetBinContent(9,1400.328);
   Default_allWcosTheta__7__1->SetBinContent(10,1314.059);
   Default_allWcosTheta__7__1->SetBinContent(11,1231.348);
   Default_allWcosTheta__7__1->SetBinContent(12,1195.371);
   Default_allWcosTheta__7__1->SetBinContent(13,1136.754);
   Default_allWcosTheta__7__1->SetBinContent(14,1068.551);
   Default_allWcosTheta__7__1->SetBinContent(15,988.4161);
   Default_allWcosTheta__7__1->SetBinContent(16,923.9356);
   Default_allWcosTheta__7__1->SetBinContent(17,868.1538);
   Default_allWcosTheta__7__1->SetBinContent(18,817.4514);
   Default_allWcosTheta__7__1->SetBinContent(19,763.1637);
   Default_allWcosTheta__7__1->SetBinContent(20,725.2097);
   Default_allWcosTheta__7__1->SetEntries(177933);
   Default_allWcosTheta__7__1->SetDirectory(0);
   Default_allWcosTheta__7__1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Default_allWcosTheta__7__1->SetLineColor(ci);
   Default_allWcosTheta__7__1->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta__7__1->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__7__1->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__7__1->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta__7__1->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta__7__1->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__7__1->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__7__1->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta__7__1->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta__7__1->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__7__1->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__7__1->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta__7__1->Draw("");
   
   TPaveText *pt = new TPaveText(0.4785057,0.9291772,0.5214943,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("t#bar{t}");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
