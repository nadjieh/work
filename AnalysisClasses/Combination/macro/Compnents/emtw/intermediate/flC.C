{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Oct  1 19:54:35 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",325,100,363,327);
   Canvas_1->Range(-1.25,-493.9866,1.25,4445.879);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *component_1_meas = new TH1D("component_1_meas","e_comb2_Components2SingleTopR",10,-1,1);
   component_1_meas->SetBinContent(1,2040.061);
   component_1_meas->SetBinContent(2,3541.926);
   component_1_meas->SetBinContent(3,3703.67);
   component_1_meas->SetBinContent(4,3319.13);
   component_1_meas->SetBinContent(5,2686.828);
   component_1_meas->SetBinContent(6,1966.765);
   component_1_meas->SetBinContent(7,1284.388);
   component_1_meas->SetBinContent(8,691.1848);
   component_1_meas->SetBinContent(9,274.8486);
   component_1_meas->SetBinContent(10,48.86228);
   component_1_meas->SetBinError(1,64.28644);
   component_1_meas->SetBinError(2,70.14388);
   component_1_meas->SetBinError(3,60.03729);
   component_1_meas->SetBinError(4,47.84934);
   component_1_meas->SetBinError(5,36.32739);
   component_1_meas->SetBinError(6,26.17208);
   component_1_meas->SetBinError(7,17.51527);
   component_1_meas->SetBinError(8,10.34671);
   component_1_meas->SetBinError(9,4.931994);
   component_1_meas->SetBinError(10,1.43359);
   component_1_meas->SetEntries(21993.22);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("component_1_meas");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 21993  ");
   text = ptstats->AddText("Mean  = -0.3205");
   text = ptstats->AddText("RMS   =  0.399");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   component_1_meas->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(component_1_meas);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   component_1_meas->SetLineColor(ci);
   component_1_meas->GetXaxis()->SetLabelFont(42);
   component_1_meas->GetXaxis()->SetLabelSize(0.035);
   component_1_meas->GetXaxis()->SetTitleSize(0.035);
   component_1_meas->GetXaxis()->SetTitleFont(42);
   component_1_meas->GetYaxis()->SetLabelFont(42);
   component_1_meas->GetYaxis()->SetLabelSize(0.035);
   component_1_meas->GetYaxis()->SetTitleSize(0.035);
   component_1_meas->GetYaxis()->SetTitleFont(42);
   component_1_meas->GetZaxis()->SetLabelFont(42);
   component_1_meas->GetZaxis()->SetLabelSize(0.035);
   component_1_meas->GetZaxis()->SetTitleSize(0.035);
   component_1_meas->GetZaxis()->SetTitleFont(42);
   component_1_meas->Draw("");
   
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
