{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Nov 29 23:33:00 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",327,158,363,327);
   Canvas_1->Range(-1.25,-456.1056,1.25,23224.28);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *DefaultTrue_allWcosTheta__3 = new TH1D("DefaultTrue_allWcosTheta__3","DefaultTrue_allW: cos(#theta)",20,-1,1);
   DefaultTrue_allWcosTheta__3->SetBinContent(1,2771.085);
   DefaultTrue_allWcosTheta__3->SetBinContent(2,6169.054);
   DefaultTrue_allWcosTheta__3->SetBinContent(3,8310.417);
   DefaultTrue_allWcosTheta__3->SetBinContent(4,10102.92);
   DefaultTrue_allWcosTheta__3->SetBinContent(5,11528.51);
   DefaultTrue_allWcosTheta__3->SetBinContent(6,12818);
   DefaultTrue_allWcosTheta__3->SetBinContent(7,13296.55);
   DefaultTrue_allWcosTheta__3->SetBinContent(8,14162.56);
   DefaultTrue_allWcosTheta__3->SetBinContent(9,14226.17);
   DefaultTrue_allWcosTheta__3->SetBinContent(10,15061.53);
   DefaultTrue_allWcosTheta__3->SetBinContent(11,15723.05);
   DefaultTrue_allWcosTheta__3->SetBinContent(12,16144.66);
   DefaultTrue_allWcosTheta__3->SetBinContent(13,17142.66);
   DefaultTrue_allWcosTheta__3->SetBinContent(14,17386.34);
   DefaultTrue_allWcosTheta__3->SetBinContent(15,17865.48);
   DefaultTrue_allWcosTheta__3->SetBinContent(16,18054.7);
   DefaultTrue_allWcosTheta__3->SetBinContent(17,18454.55);
   DefaultTrue_allWcosTheta__3->SetBinContent(18,19090);
   DefaultTrue_allWcosTheta__3->SetBinContent(19,19709.78);
   DefaultTrue_allWcosTheta__3->SetBinContent(20,19954.13);
   DefaultTrue_allWcosTheta__3->SetEntries(142247);
   
   TPaveStats *ptstats = new TPaveStats(0.1337047,0.728972,0.3314763,0.8909657,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("DefaultTrue_allWcosTheta__3");
   text->SetTextSize(0.03725855);
   text = ptstats->AddText("Entries = 142247 ");
   text = ptstats->AddText("Mean  = 0.1726");
   text = ptstats->AddText("RMS   = 0.5262");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   DefaultTrue_allWcosTheta__3->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(DefaultTrue_allWcosTheta__3);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   DefaultTrue_allWcosTheta__3->SetLineColor(ci);
   DefaultTrue_allWcosTheta__3->GetXaxis()->SetTitle("cos(#theta*)");
   DefaultTrue_allWcosTheta__3->GetXaxis()->SetLabelFont(42);
   DefaultTrue_allWcosTheta__3->GetXaxis()->SetLabelSize(0.035);
   DefaultTrue_allWcosTheta__3->GetXaxis()->SetTitleSize(0.035);
   DefaultTrue_allWcosTheta__3->GetXaxis()->SetTitleFont(42);
   DefaultTrue_allWcosTheta__3->GetYaxis()->SetLabelFont(42);
   DefaultTrue_allWcosTheta__3->GetYaxis()->SetLabelSize(0.035);
   DefaultTrue_allWcosTheta__3->GetYaxis()->SetTitleSize(0.035);
   DefaultTrue_allWcosTheta__3->GetYaxis()->SetTitleFont(42);
   DefaultTrue_allWcosTheta__3->GetZaxis()->SetLabelFont(42);
   DefaultTrue_allWcosTheta__3->GetZaxis()->SetLabelSize(0.035);
   DefaultTrue_allWcosTheta__3->GetZaxis()->SetTitleSize(0.035);
   DefaultTrue_allWcosTheta__3->GetZaxis()->SetTitleFont(42);
   DefaultTrue_allWcosTheta__3->Draw("");
   
   TPaveText *pt = new TPaveText(0.3055431,0.9318421,0.6944569,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("DefaultTrue_allW: cos(#theta)");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
