{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Nov 29 23:14:38 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",319,141,700,502);
   Canvas_1->Range(-1.25,-1208.57,1.25,42203.15);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *DefaultTrue_allWcosTheta__3 = new TH1D("DefaultTrue_allWcosTheta__3","DefaultTrue_allW: cos(#theta)",20,-1,1);
   DefaultTrue_allWcosTheta__3->SetBinContent(1,4707.631);
   DefaultTrue_allWcosTheta__3->SetBinContent(2,10966.41);
   DefaultTrue_allWcosTheta__3->SetBinContent(3,14826.79);
   DefaultTrue_allWcosTheta__3->SetBinContent(4,18301.71);
   DefaultTrue_allWcosTheta__3->SetBinContent(5,20753.59);
   DefaultTrue_allWcosTheta__3->SetBinContent(6,22863.16);
   DefaultTrue_allWcosTheta__3->SetBinContent(7,23852.33);
   DefaultTrue_allWcosTheta__3->SetBinContent(8,25127.36);
   DefaultTrue_allWcosTheta__3->SetBinContent(9,25695.23);
   DefaultTrue_allWcosTheta__3->SetBinContent(10,27065.21);
   DefaultTrue_allWcosTheta__3->SetBinContent(11,28075.11);
   DefaultTrue_allWcosTheta__3->SetBinContent(12,29119.5);
   DefaultTrue_allWcosTheta__3->SetBinContent(13,30927.73);
   DefaultTrue_allWcosTheta__3->SetBinContent(14,31199.82);
   DefaultTrue_allWcosTheta__3->SetBinContent(15,31617.98);
   DefaultTrue_allWcosTheta__3->SetBinContent(16,32650.36);
   DefaultTrue_allWcosTheta__3->SetBinContent(17,33356.46);
   DefaultTrue_allWcosTheta__3->SetBinContent(18,34605.95);
   DefaultTrue_allWcosTheta__3->SetBinContent(19,35627.47);
   DefaultTrue_allWcosTheta__3->SetBinContent(20,36208.2);
   DefaultTrue_allWcosTheta__3->SetEntries(185359);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("DefaultTrue_allWcosTheta__3");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 185359 ");
   text = ptstats->AddText("Mean  =  0.175");
   text = ptstats->AddText("RMS   =  0.526");
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
   
   TPaveText *pt = new TPaveText(0.2910057,0.9342405,0.7089943,0.995,"blNDC");
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
