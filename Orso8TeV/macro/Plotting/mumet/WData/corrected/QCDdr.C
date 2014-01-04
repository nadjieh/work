{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Dec  7 18:16:44 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",493,156,700,504);
   Canvas_1->Range(-1.25,-5.925364,1.25,149.9246);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *Default_allWcosTheta__1 = new TH1D("Default_allWcosTheta__1","Default_allW: cos(#theta)",20,-1,1);
   Default_allWcosTheta__1->SetBinContent(1,128.4025);
   Default_allWcosTheta__1->SetBinContent(2,110.7324);
   Default_allWcosTheta__1->SetBinContent(3,108.3764);
   Default_allWcosTheta__1->SetBinContent(4,100.1304);
   Default_allWcosTheta__1->SetBinContent(5,123.6905);
   Default_allWcosTheta__1->SetBinContent(6,110.7324);
   Default_allWcosTheta__1->SetBinContent(7,121.3345);
   Default_allWcosTheta__1->SetBinContent(8,96.59637);
   Default_allWcosTheta__1->SetBinContent(9,96.59637);
   Default_allWcosTheta__1->SetBinContent(10,83.63832);
   Default_allWcosTheta__1->SetBinContent(11,94.24037);
   Default_allWcosTheta__1->SetBinContent(12,69.50227);
   Default_allWcosTheta__1->SetBinContent(13,57.72222);
   Default_allWcosTheta__1->SetBinContent(14,65.96826);
   Default_allWcosTheta__1->SetBinContent(15,64.79025);
   Default_allWcosTheta__1->SetBinContent(16,37.69615);
   Default_allWcosTheta__1->SetBinContent(17,24.7381);
   Default_allWcosTheta__1->SetBinContent(18,21.20408);
   Default_allWcosTheta__1->SetBinContent(19,15.31406);
   Default_allWcosTheta__1->SetBinContent(20,15.31406);
   Default_allWcosTheta__1->SetEntries(1313);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Default_allWcosTheta__1");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 1313   ");
   text = ptstats->AddText("Mean  = -0.2609");
   text = ptstats->AddText("RMS   =  0.484");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   Default_allWcosTheta__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(Default_allWcosTheta__1);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Default_allWcosTheta__1->SetLineColor(ci);
   Default_allWcosTheta__1->GetXaxis()->SetTitle("cos(#theta*)");
   Default_allWcosTheta__1->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta__1->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__1->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__1->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta__1->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta__1->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__1->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__1->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta__1->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta__1->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__1->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__1->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta__1->Draw("");
   
   TPaveText *pt = new TPaveText(0.3276437,0.9342405,0.6723563,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("Default_allW: cos(#theta)");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
