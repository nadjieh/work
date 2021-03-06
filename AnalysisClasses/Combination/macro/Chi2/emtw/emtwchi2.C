{
//=========Macro generated from canvas: Canvas_1/c
//=========  (Tue Oct  1 16:09:46 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "c",67,53,600,602);
   Canvas_1->SetHighLightColor(2);
   Canvas_1->Range(-1.275862,-906.9768,1.022989,8162.791);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetLeftMargin(0.12);
   Canvas_1->SetRightMargin(0.01);
   Canvas_1->SetTopMargin(0.04);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *forBand = new TH1D("forBand","MC after fit",10,-1,1);
   forBand->SetBinContent(1,4580.609);
   forBand->SetBinContent(2,4792.502);
   forBand->SetBinContent(3,5437.128);
   forBand->SetBinContent(4,5604.878);
   forBand->SetBinContent(5,5595.203);
   forBand->SetBinContent(6,5504.675);
   forBand->SetBinContent(7,5325.75);
   forBand->SetBinContent(8,5315.026);
   forBand->SetBinContent(9,5532.927);
   forBand->SetBinContent(10,6818.123);
   forBand->SetBinError(1,46.31884);
   forBand->SetBinError(2,98.52862);
   forBand->SetBinError(3,140.5006);
   forBand->SetBinError(4,68.24783);
   forBand->SetBinError(5,88.98702);
   forBand->SetBinError(6,192.7596);
   forBand->SetBinError(7,308.0641);
   forBand->SetBinError(8,473.2606);
   forBand->SetBinError(9,633.239);
   forBand->SetBinError(10,817.2643);
   forBand->SetMinimum(0);
   forBand->SetMaximum(7800);
   forBand->SetEntries(980903);
   
   TPaveStats *ptstats = new TPaveStats(0.2147651,0.1655052,0.4161074,0.325784,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("forBand");
   text->SetTextSize(0.03686411);
   text = ptstats->AddText("Entries = 980903 ");
   text = ptstats->AddText("Mean  = 0.04363");
   text = ptstats->AddText("RMS   = 0.5742");
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
   
   TPaveText *pt = new TPaveText(0.2097315,0.2020906,0.4848993,0.2630662,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("MC after fit");
   pt->Draw();
   
   ptstats = new TPaveStats(0.261745,0.1707317,0.4043624,0.3310105,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("e_Chi2Syst_correlated_data");
   text->SetTextSize(0.03686411);
   text = ptstats->AddText("Entries = 54542  ");
   text = ptstats->AddText("Mean  = 0.04072");
   text = ptstats->AddText("RMS   = 0.5748");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   TH1D *e_Chi2Syst_correlated_data = new TH1D("e_Chi2Syst_correlated_data","Data",10,-1,1);
   e_Chi2Syst_correlated_data->SetBinContent(1,4838);
   e_Chi2Syst_correlated_data->SetBinContent(2,4700);
   e_Chi2Syst_correlated_data->SetBinContent(3,5304);
   e_Chi2Syst_correlated_data->SetBinContent(4,5592);
   e_Chi2Syst_correlated_data->SetBinContent(5,5578);
   e_Chi2Syst_correlated_data->SetBinContent(6,5498);
   e_Chi2Syst_correlated_data->SetBinContent(7,5450);
   e_Chi2Syst_correlated_data->SetBinContent(8,5301);
   e_Chi2Syst_correlated_data->SetBinContent(9,5677);
   e_Chi2Syst_correlated_data->SetBinContent(10,6604);
   e_Chi2Syst_correlated_data->SetEntries(54542);
   
   ptstats = new TPaveStats(0.261745,0.1707317,0.4043624,0.3310105,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("e_Chi2Syst_correlated_data");
   text->SetTextSize(0.03686411);
   text = ptstats->AddText("Entries = 54542  ");
   text = ptstats->AddText("Mean  = 0.04072");
   text = ptstats->AddText("RMS   = 0.5748");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   e_Chi2Syst_correlated_data->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(e_Chi2Syst_correlated_data);
   e_Chi2Syst_correlated_data->SetMarkerStyle(20);
   e_Chi2Syst_correlated_data->GetXaxis()->SetTitle("cos(#theta*)");
   e_Chi2Syst_correlated_data->GetXaxis()->SetLabelFont(42);
   e_Chi2Syst_correlated_data->GetXaxis()->SetLabelSize(0.035);
   e_Chi2Syst_correlated_data->GetXaxis()->SetTitleSize(0.035);
   e_Chi2Syst_correlated_data->GetXaxis()->SetTitleFont(42);
   e_Chi2Syst_correlated_data->GetYaxis()->SetLabelFont(42);
   e_Chi2Syst_correlated_data->GetYaxis()->SetLabelSize(0.035);
   e_Chi2Syst_correlated_data->GetYaxis()->SetTitleSize(0.035);
   e_Chi2Syst_correlated_data->GetYaxis()->SetTitleFont(42);
   e_Chi2Syst_correlated_data->GetZaxis()->SetLabelFont(42);
   e_Chi2Syst_correlated_data->GetZaxis()->SetLabelSize(0.035);
   e_Chi2Syst_correlated_data->GetZaxis()->SetTitleSize(0.035);
   e_Chi2Syst_correlated_data->GetZaxis()->SetTitleFont(42);
   e_Chi2Syst_correlated_data->Draw("SAMESAME");
      tex = new TLatex(-0.7821492,2553.44,"#chi^{2}/ndf = 1.65");
   tex->SetTextSize(0.043554);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TLegend *leg = new TLegend(0.1963087,0.1289199,0.5755034,0.3397213,NULL,"brNDC");
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
   entry=leg->AddEntry("e_Chi2Syst_correlated_data","Data","lpf");
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
}
