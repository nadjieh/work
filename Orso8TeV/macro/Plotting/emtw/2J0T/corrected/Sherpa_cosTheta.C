{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Thu Nov 21 12:11:32 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",435,105,700,502);
   Canvas_1->Range(-1.25,13680.73,1.25,38283.85);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *Default_allWcosTheta__3 = new TH1D("Default_allWcosTheta__3","Default_allW: cos(#theta)",20,-1,1);
   Default_allWcosTheta__3->SetBinContent(1,17516.78);
   Default_allWcosTheta__3->SetBinContent(2,17033.67);
   Default_allWcosTheta__3->SetBinContent(3,18717.89);
   Default_allWcosTheta__3->SetBinContent(4,20380.34);
   Default_allWcosTheta__3->SetBinContent(5,21533.44);
   Default_allWcosTheta__3->SetBinContent(6,23121.94);
   Default_allWcosTheta__3->SetBinContent(7,23521.71);
   Default_allWcosTheta__3->SetBinContent(8,24389.38);
   Default_allWcosTheta__3->SetBinContent(9,24762.37);
   Default_allWcosTheta__3->SetBinContent(10,25524.53);
   Default_allWcosTheta__3->SetBinContent(11,26616.02);
   Default_allWcosTheta__3->SetBinContent(12,27149.14);
   Default_allWcosTheta__3->SetBinContent(13,28101.07);
   Default_allWcosTheta__3->SetBinContent(14,28780.71);
   Default_allWcosTheta__3->SetBinContent(15,29168.76);
   Default_allWcosTheta__3->SetBinContent(16,30210.62);
   Default_allWcosTheta__3->SetBinContent(17,30959.35);
   Default_allWcosTheta__3->SetBinContent(18,31826.14);
   Default_allWcosTheta__3->SetBinContent(19,33347.87);
   Default_allWcosTheta__3->SetBinContent(20,34886.28);
   Default_allWcosTheta__3->SetEntries(262769);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Default_allWcosTheta__3");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 262769 ");
   text = ptstats->AddText("Mean  = 0.1116");
   text = ptstats->AddText("RMS   = 0.5639");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   Default_allWcosTheta__3->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(Default_allWcosTheta__3);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Default_allWcosTheta__3->SetLineColor(ci);
   Default_allWcosTheta__3->GetXaxis()->SetTitle("cos(#theta*)");
   Default_allWcosTheta__3->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta__3->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__3->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__3->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta__3->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta__3->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__3->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__3->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta__3->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta__3->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__3->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__3->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta__3->Draw("");
   
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
