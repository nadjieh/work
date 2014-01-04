{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Mon Nov 11 18:36:59 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",1040,343,316,327);
   Canvas_1->Range(-1.25,1353.383,1.25,2756.865);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   Double_t xAxis2[11] = {-1, -0.8, -0.6, -0.4, -0.2, 0, 0.2, 0.4, 0.6, 0.8, 1}; 
   
   TH1D *CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID = new TH1D("CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID","tmpCombinedID",10, xAxis2);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetBinContent(1,1581.897);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetBinContent(2,2003.166);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetBinContent(3,2398.688);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetBinContent(4,2563.051);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetBinContent(5,2527.905);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetBinContent(6,2404.493);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetBinContent(7,2233.09);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetBinContent(8,1976.715);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetBinContent(9,1731.625);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetBinContent(10,1544.651);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetEntries(10);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 10     ");
   text = ptstats->AddText("Mean  = -0.02604");
   text = ptstats->AddText("RMS   = 0.5315");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetLineColor(ci);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->GetXaxis()->SetLabelFont(42);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->GetXaxis()->SetLabelSize(0.035);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->GetXaxis()->SetTitleSize(0.035);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->GetXaxis()->SetTitleFont(42);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->GetYaxis()->SetLabelFont(42);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->GetYaxis()->SetLabelSize(0.035);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->GetYaxis()->SetTitleSize(0.035);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->GetYaxis()->SetTitleFont(42);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->GetZaxis()->SetLabelFont(42);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->GetZaxis()->SetLabelSize(0.035);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->GetZaxis()->SetTitleSize(0.035);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->GetZaxis()->SetTitleFont(42);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->Draw("");
   
   TPaveText *pt = new TPaveText(0.2928846,0.9355573,0.7071154,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("tmpCombinedID");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
