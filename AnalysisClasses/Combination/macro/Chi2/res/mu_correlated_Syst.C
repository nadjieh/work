{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Sep 29 19:47:06 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",400,105,700,530);
   Canvas_1->Range(-1.25,4697.719,1.25,6823.022);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *forBand = new TH1D("forBand","MC after fit",10,-1,1);
   forBand->SetBinContent(1,5530.678);
   forBand->SetBinContent(2,6116.166);
   forBand->SetBinContent(3,6503.642);
   forBand->SetBinContent(4,6450.793);
   forBand->SetBinContent(5,6290.406);
   forBand->SetBinContent(6,5976.477);
   forBand->SetBinContent(7,5769.859);
   forBand->SetBinContent(8,5400.294);
   forBand->SetBinContent(9,5280.273);
   forBand->SetBinContent(10,5120.11);
   forBand->SetBinContent(11,0.06189306);
   forBand->SetBinError(1,74.64643);
   forBand->SetBinError(2,54.45699);
   forBand->SetBinError(3,25.88558);
   forBand->SetBinError(4,33.25536);
   forBand->SetBinError(5,63.71105);
   forBand->SetBinError(6,78.9607);
   forBand->SetBinError(7,86.75325);
   forBand->SetBinError(8,87.74272);
   forBand->SetBinError(9,105.1341);
   forBand->SetBinError(10,132.7524);
   forBand->SetBinError(11,0.03573397);
   forBand->SetEntries(911801);
   
   TPaveStats *ptstats = new TPaveStats(0.3146552,0.1919831,0.5158046,0.3523207,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("forBand");
   text->SetTextSize(0.03687764);
   text = ptstats->AddText("Entries = 911801 ");
   text = ptstats->AddText("Mean  = -0.02917");
   text = ptstats->AddText("RMS   = 0.5619");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   forBand->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(forBand);
   forBand->SetFillColor(5);
   forBand->SetLineColor(5);
   forBand->SetMarkerColor(2);
   forBand->SetMarkerStyle(21);
   forBand->GetXaxis()->SetTitle("cos(#theta_{l}*)");
   forBand->GetXaxis()->SetLabelFont(42);
   forBand->GetXaxis()->SetLabelSize(0.035);
   forBand->GetXaxis()->SetTitleSize(0.035);
   forBand->GetXaxis()->SetTitleFont(42);
   forBand->GetYaxis()->SetLabelFont(42);
   forBand->GetYaxis()->SetLabelSize(0.035);
   forBand->GetYaxis()->SetTitleSize(0.035);
   forBand->GetYaxis()->SetTitleFont(42);
   forBand->GetZaxis()->SetLabelFont(42);
   forBand->GetZaxis()->SetLabelSize(0.035);
   forBand->GetZaxis()->SetTitleSize(0.035);
   forBand->GetZaxis()->SetTitleFont(42);
   forBand->Draw("E2");
   
   TPaveText *pt = new TPaveText(0.2887931,0.242616,0.4899425,0.3037975,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("MC after fit");
   pt->Draw();
   
   TH1D *mu_Chi2Syst_correlated_data = new TH1D("mu_Chi2Syst_correlated_data","Data",10,-1,1);
   mu_Chi2Syst_correlated_data->SetBinContent(1,5557);
   mu_Chi2Syst_correlated_data->SetBinContent(2,6120);
   mu_Chi2Syst_correlated_data->SetBinContent(3,6499);
   mu_Chi2Syst_correlated_data->SetBinContent(4,6312);
   mu_Chi2Syst_correlated_data->SetBinContent(5,6396);
   mu_Chi2Syst_correlated_data->SetBinContent(6,6018);
   mu_Chi2Syst_correlated_data->SetBinContent(7,5725);
   mu_Chi2Syst_correlated_data->SetBinContent(8,5312);
   mu_Chi2Syst_correlated_data->SetBinContent(9,5459);
   mu_Chi2Syst_correlated_data->SetBinContent(10,5041);
   mu_Chi2Syst_correlated_data->SetEntries(58439);
   
   ptstats = new TPaveStats(0.3031609,0.1962025,0.5043103,0.3565401,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("mu_Chi2Syst_correlated_data");
   text->SetTextSize(0.03687764);
   text = ptstats->AddText("Entries = 58439  ");
   text = ptstats->AddText("Mean  = -0.03028");
   text = ptstats->AddText("RMS   = 0.5641");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   mu_Chi2Syst_correlated_data->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(mu_Chi2Syst_correlated_data);
   mu_Chi2Syst_correlated_data->SetMarkerStyle(20);
   mu_Chi2Syst_correlated_data->GetXaxis()->SetTitle("cos(#theta*)");
   mu_Chi2Syst_correlated_data->GetXaxis()->SetLabelFont(42);
   mu_Chi2Syst_correlated_data->GetXaxis()->SetLabelSize(0.035);
   mu_Chi2Syst_correlated_data->GetXaxis()->SetTitleSize(0.035);
   mu_Chi2Syst_correlated_data->GetXaxis()->SetTitleFont(42);
   mu_Chi2Syst_correlated_data->GetYaxis()->SetLabelFont(42);
   mu_Chi2Syst_correlated_data->GetYaxis()->SetLabelSize(0.035);
   mu_Chi2Syst_correlated_data->GetYaxis()->SetTitleSize(0.035);
   mu_Chi2Syst_correlated_data->GetYaxis()->SetTitleFont(42);
   mu_Chi2Syst_correlated_data->GetZaxis()->SetLabelFont(42);
   mu_Chi2Syst_correlated_data->GetZaxis()->SetLabelSize(0.035);
   mu_Chi2Syst_correlated_data->GetZaxis()->SetTitleSize(0.035);
   mu_Chi2Syst_correlated_data->GetZaxis()->SetTitleFont(42);
   mu_Chi2Syst_correlated_data->Draw("ESAME");
      tex = new TLatex(-0.5208333,5576.536,"#chi^{2}/ndf = 1.139");
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.2686782,0.1687764,0.6479885,0.3797468,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("forBand","MC after fit","lpf");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("mu_Chi2Syst_correlated_data","Data","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
   Canvas_1->ToggleToolBar();
}
