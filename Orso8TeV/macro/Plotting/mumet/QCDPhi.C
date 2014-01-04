{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Dec  7 18:16:25 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",494,157,700,502);
   Canvas_1->Range(-1.25,-9.456789,1.25,222.3023);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *Default_allWcosTheta = new TH1D("Default_allWcosTheta","Default_allW: cos(#theta)",20,-1,1);
   Default_allWcosTheta->SetBinContent(1,190.2975);
   Default_allWcosTheta->SetBinContent(2,130.5529);
   Default_allWcosTheta->SetBinContent(3,112.8508);
   Default_allWcosTheta->SetBinContent(4,117.2763);
   Default_allWcosTheta->SetBinContent(5,137.1912);
   Default_allWcosTheta->SetBinContent(6,101.787);
   Default_allWcosTheta->SetBinContent(7,101.787);
   Default_allWcosTheta->SetBinContent(8,86.29768);
   Default_allWcosTheta->SetBinContent(9,75.23388);
   Default_allWcosTheta->SetBinContent(10,68.59559);
   Default_allWcosTheta->SetBinContent(11,70.80835);
   Default_allWcosTheta->SetBinContent(12,66.38283);
   Default_allWcosTheta->SetBinContent(13,46.46798);
   Default_allWcosTheta->SetBinContent(14,46.46798);
   Default_allWcosTheta->SetBinContent(15,57.53179);
   Default_allWcosTheta->SetBinContent(16,39.8297);
   Default_allWcosTheta->SetBinContent(17,24.34037);
   Default_allWcosTheta->SetBinContent(18,28.76589);
   Default_allWcosTheta->SetBinContent(19,22.12761);
   Default_allWcosTheta->SetBinContent(20,22.12761);
   Default_allWcosTheta->SetEntries(699);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Default_allWcosTheta");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 699    ");
   text = ptstats->AddText("Mean  = -0.3099");
   text = ptstats->AddText("RMS   = 0.5141");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   Default_allWcosTheta->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(Default_allWcosTheta);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Default_allWcosTheta->SetLineColor(ci);
   Default_allWcosTheta->GetXaxis()->SetTitle("cos(#theta*)");
   Default_allWcosTheta->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta->Draw("");
   
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
