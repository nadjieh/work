{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Oct  1 19:54:48 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",325,100,363,327);
   Canvas_1->Range(-1.25,-2383.081,1.25,21447.73);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *component_2_meas = new TH1D("component_2_meas","e_comb2_Components2SingleTopR",10,-1,1);
   component_2_meas->SetBinContent(1,5.651137);
   component_2_meas->SetBinContent(2,110.3022);
   component_2_meas->SetBinContent(3,411.5189);
   component_2_meas->SetBinContent(4,962.3513);
   component_2_meas->SetBinContent(5,1798.62);
   component_2_meas->SetBinContent(6,2938.007);
   component_2_meas->SetBinContent(7,4429.829);
   component_2_meas->SetBinContent(8,6220.663);
   component_2_meas->SetBinContent(9,8825.692);
   component_2_meas->SetBinContent(10,17639.28);
   component_2_meas->SetBinError(1,0.1780788);
   component_2_meas->SetBinError(2,2.184411);
   component_2_meas->SetBinError(3,6.67081);
   component_2_meas->SetBinError(4,13.87348);
   component_2_meas->SetBinError(5,24.31834);
   component_2_meas->SetBinError(6,39.09657);
   component_2_meas->SetBinError(7,60.40981);
   component_2_meas->SetBinError(8,93.12039);
   component_2_meas->SetBinError(9,158.3718);
   component_2_meas->SetBinError(10,517.526);
   component_2_meas->SetEntries(6107.083);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("component_2_meas");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 6107   ");
   text = ptstats->AddText("Mean  = 0.6006");
   text = ptstats->AddText("RMS   = 0.3473");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   component_2_meas->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(component_2_meas);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   component_2_meas->SetLineColor(ci);
   component_2_meas->GetXaxis()->SetLabelFont(42);
   component_2_meas->GetXaxis()->SetLabelSize(0.035);
   component_2_meas->GetXaxis()->SetTitleSize(0.035);
   component_2_meas->GetXaxis()->SetTitleFont(42);
   component_2_meas->GetYaxis()->SetLabelFont(42);
   component_2_meas->GetYaxis()->SetLabelSize(0.035);
   component_2_meas->GetYaxis()->SetTitleSize(0.035);
   component_2_meas->GetYaxis()->SetTitleFont(42);
   component_2_meas->GetZaxis()->SetLabelFont(42);
   component_2_meas->GetZaxis()->SetLabelSize(0.035);
   component_2_meas->GetZaxis()->SetTitleSize(0.035);
   component_2_meas->GetZaxis()->SetTitleFont(42);
   component_2_meas->Draw("");
   
   TPaveText *pt = new TPaveText(0.15,0.9351869,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("e_comb2_Components2SingleTopR");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
