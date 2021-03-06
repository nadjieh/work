{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Aug  3 17:04:25 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",325,100,363,327);
   Canvas_1->Range(-24.30556,-23670.56,225,206579.4);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *allW_Jet_Pt = new TH1D("allW_Jet_Pt","allW_Jet_Pt",25,0,200);
   allW_Jet_Pt->SetBinContent(6,170917.9);
   allW_Jet_Pt->SetBinContent(7,139021);
   allW_Jet_Pt->SetBinContent(8,113053.5);
   allW_Jet_Pt->SetBinContent(9,92091.81);
   allW_Jet_Pt->SetBinContent(10,74546.95);
   allW_Jet_Pt->SetBinContent(11,61215.45);
   allW_Jet_Pt->SetBinContent(12,50273.01);
   allW_Jet_Pt->SetBinContent(13,41600.09);
   allW_Jet_Pt->SetBinContent(14,34392.3);
   allW_Jet_Pt->SetBinContent(15,28886.5);
   allW_Jet_Pt->SetBinContent(16,24289.33);
   allW_Jet_Pt->SetBinContent(17,20346.43);
   allW_Jet_Pt->SetBinContent(18,17304.29);
   allW_Jet_Pt->SetBinContent(19,14854);
   allW_Jet_Pt->SetBinContent(20,12796.66);
   allW_Jet_Pt->SetBinContent(21,10970.72);
   allW_Jet_Pt->SetBinContent(22,9279.15);
   allW_Jet_Pt->SetBinContent(23,7890.052);
   allW_Jet_Pt->SetBinContent(24,6801.58);
   allW_Jet_Pt->SetBinContent(25,6022.564);
   allW_Jet_Pt->SetBinContent(26,45329.98);
   allW_Jet_Pt->SetBinError(6,3964.196);
   allW_Jet_Pt->SetBinError(7,4086.353);
   allW_Jet_Pt->SetBinError(8,3671.401);
   allW_Jet_Pt->SetBinError(9,2994.585);
   allW_Jet_Pt->SetBinError(10,2383.392);
   allW_Jet_Pt->SetBinError(11,1866.046);
   allW_Jet_Pt->SetBinError(12,1463.189);
   allW_Jet_Pt->SetBinError(13,1156.531);
   allW_Jet_Pt->SetBinError(14,905.5823);
   allW_Jet_Pt->SetBinError(15,726.56);
   allW_Jet_Pt->SetBinError(16,590.0514);
   allW_Jet_Pt->SetBinError(17,476.5183);
   allW_Jet_Pt->SetBinError(18,380.301);
   allW_Jet_Pt->SetBinError(19,319.8965);
   allW_Jet_Pt->SetBinError(20,266.9719);
   allW_Jet_Pt->SetBinError(21,225.0635);
   allW_Jet_Pt->SetBinError(22,188.8312);
   allW_Jet_Pt->SetBinError(23,159.6034);
   allW_Jet_Pt->SetBinError(24,139.2556);
   allW_Jet_Pt->SetBinError(25,125.4942);
   allW_Jet_Pt->SetBinError(26,205.9952);
   allW_Jet_Pt->SetEntries(2618848);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("allW_Jet_Pt");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 2618848");
   text = ptstats->AddText("Mean  =  78.93");
   text = ptstats->AddText("RMS   =  35.59");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   allW_Jet_Pt->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(allW_Jet_Pt);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   allW_Jet_Pt->SetLineColor(ci);
   allW_Jet_Pt->GetXaxis()->SetTitle("P_{T}");
   allW_Jet_Pt->GetXaxis()->SetLabelFont(42);
   allW_Jet_Pt->GetXaxis()->SetLabelSize(0.035);
   allW_Jet_Pt->GetXaxis()->SetTitleSize(0.035);
   allW_Jet_Pt->GetXaxis()->SetTitleFont(42);
   allW_Jet_Pt->GetYaxis()->SetLabelFont(42);
   allW_Jet_Pt->GetYaxis()->SetLabelSize(0.035);
   allW_Jet_Pt->GetYaxis()->SetTitleSize(0.035);
   allW_Jet_Pt->GetYaxis()->SetTitleFont(42);
   allW_Jet_Pt->GetZaxis()->SetLabelFont(42);
   allW_Jet_Pt->GetZaxis()->SetLabelSize(0.035);
   allW_Jet_Pt->GetZaxis()->SetTitleSize(0.035);
   allW_Jet_Pt->GetZaxis()->SetTitleFont(42);
   allW_Jet_Pt->Draw("");
   
   TPaveText *pt = new TPaveText(0.3646518,0.9351869,0.6353482,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("allW_Jet_Pt");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
