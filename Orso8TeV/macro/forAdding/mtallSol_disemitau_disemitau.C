{
//=========Macro generated from canvas: c1/c1
//=========  (Fri Jan 24 17:42:58 2014) by ROOT version5.32/00
   TCanvas *c1 = new TCanvas("c1", "c1",67,53,700,500);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: c1_1
   TPad *c1_1 = new TPad("c1_1", "c1_1",0.01,0.01,0.49,0.99);
   c1_1->Draw();
   c1_1->cd();
   c1_1->Range(0,0,1,1);
   c1_1->SetFillColor(0);
   c1_1->SetBorderMode(0);
   c1_1->SetBorderSize(2);
   c1_1->SetFrameBorderMode(0);
   
   TH2D *Default_allWcosTheta2D = new TH2D("Default_allWcosTheta2D","mu+jets",10000,-1,1,100,-1,1);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Default_allWcosTheta2D->SetLineColor(ci);
   Default_allWcosTheta2D->GetXaxis()->SetTitle(" cos(#theta)_{gen}");
   Default_allWcosTheta2D->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta2D->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta2D->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta2D->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta2D->GetYaxis()->SetTitle(" cos(#theta)_{rec}");
   Default_allWcosTheta2D->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta2D->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta2D->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta2D->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta2D->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta2D->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta2D->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta2D->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta2D->Draw("");
   c1_1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: c1_2
   c1_2 = new TPad("c1_2", "c1_2",0.51,0.01,0.99,0.99);
   c1_2->Draw();
   c1_2->cd();
   c1_2->Range(0,0,1,1);
   c1_2->SetFillColor(0);
   c1_2->SetBorderMode(0);
   c1_2->SetBorderSize(2);
   c1_2->SetFrameBorderMode(0);
   
   TH2D *Default_allWcosTheta2D = new TH2D("Default_allWcosTheta2D","e+jets",10000,-1,1,100,-1,1);

   ci = TColor::GetColor("#000099");
   Default_allWcosTheta2D->SetLineColor(ci);
   Default_allWcosTheta2D->GetXaxis()->SetTitle(" cos(#theta)_{gen}");
   Default_allWcosTheta2D->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta2D->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta2D->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta2D->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta2D->GetYaxis()->SetTitle(" cos(#theta)_{rec}");
   Default_allWcosTheta2D->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta2D->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta2D->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta2D->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta2D->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta2D->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta2D->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta2D->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta2D->Draw("");
   c1_2->Modified();
   c1->cd();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
