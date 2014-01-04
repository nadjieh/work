{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Oct  1 19:54:24 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",325,100,363,327);
   Canvas_1->Range(-1.25,-639.4006,1.25,5754.605);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *component_0_meas = new TH1D("component_0_meas","e_comb2_Components2SingleTopR",10,-1,1);
   component_0_meas->SetBinContent(1,214.7432);
   component_0_meas->SetBinContent(2,1250.091);
   component_0_meas->SetBinContent(3,2469.113);
   component_0_meas->SetBinContent(4,3574.448);
   component_0_meas->SetBinContent(5,4396.627);
   component_0_meas->SetBinContent(6,4807.647);
   component_0_meas->SetBinContent(7,4770.585);
   component_0_meas->SetBinContent(8,4147.109);
   component_0_meas->SetBinContent(9,3114.95);
   component_0_meas->SetBinContent(10,1856.767);
   component_0_meas->SetBinError(1,6.766993);
   component_0_meas->SetBinError(2,24.75666);
   component_0_meas->SetBinError(3,40.02486);
   component_0_meas->SetBinError(4,51.53006);
   component_0_meas->SetBinError(5,59.44483);
   component_0_meas->SetBinError(6,63.9762);
   component_0_meas->SetBinError(7,65.05672);
   component_0_meas->SetBinError(8,62.08026);
   component_0_meas->SetBinError(9,55.89593);
   component_0_meas->SetBinError(10,54.47642);
   component_0_meas->SetEntries(35046.82);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("component_0_meas");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 35047  ");
   text = ptstats->AddText("Mean  = 0.1314");
   text = ptstats->AddText("RMS   = 0.4348");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   component_0_meas->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(component_0_meas);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   component_0_meas->SetLineColor(ci);
   component_0_meas->GetXaxis()->SetLabelFont(42);
   component_0_meas->GetXaxis()->SetLabelSize(0.035);
   component_0_meas->GetXaxis()->SetTitleSize(0.035);
   component_0_meas->GetXaxis()->SetTitleFont(42);
   component_0_meas->GetYaxis()->SetLabelFont(42);
   component_0_meas->GetYaxis()->SetLabelSize(0.035);
   component_0_meas->GetYaxis()->SetTitleSize(0.035);
   component_0_meas->GetYaxis()->SetTitleFont(42);
   component_0_meas->GetZaxis()->SetLabelFont(42);
   component_0_meas->GetZaxis()->SetLabelSize(0.035);
   component_0_meas->GetZaxis()->SetTitleSize(0.035);
   component_0_meas->GetZaxis()->SetTitleFont(42);
   component_0_meas->Draw("");
   
   TPaveText *pt = new TPaveText(0.2184644,0.9318421,0.7815356,0.995,"blNDC");
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
