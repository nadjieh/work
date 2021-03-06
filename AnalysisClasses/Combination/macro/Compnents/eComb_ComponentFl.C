{
//=========Macro generated from canvas: Canvas_1/c
//=========  (Sun Sep 29 21:23:31 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "c",413,80,600,636);
   Canvas_1->SetHighLightColor(2);
   Canvas_1->Range(-1.273603,-583.1739,1.023121,5229.445);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetLeftMargin(0.1191275);
   Canvas_1->SetRightMargin(0.01006711);
   Canvas_1->SetTopMargin(0.03947368);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *tmp = new TH1D("tmp","Signal after fit",10,-1,1);
   tmp->SetBinContent(1,2936.1);
   tmp->SetBinContent(2,3092.324);
   tmp->SetBinContent(3,3572.287);
   tmp->SetBinContent(4,3663.011);
   tmp->SetBinContent(5,3349.791);
   tmp->SetBinContent(6,2802.959);
   tmp->SetBinContent(7,2131.135);
   tmp->SetBinContent(8,1418.722);
   tmp->SetBinContent(9,833.77);
   tmp->SetBinContent(10,518.9939);
   tmp->SetMinimum(0);
   tmp->SetMaximum(5000);
   tmp->SetEntries(20);
   
   TPaveStats *ptstats = new TPaveStats(0.4127517,0.1716172,0.614094,0.3316832,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("tmp");
   text->SetTextSize(0.03681518);
   text = ptstats->AddText("Entries = 20     ");
   text = ptstats->AddText("Mean  = -0.2199");
   text = ptstats->AddText("RMS   = 0.4702");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   tmp->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(tmp);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#99cc99");
   tmp->SetLineColor(ci);
   tmp->SetLineWidth(3);
   tmp->GetXaxis()->SetTitle("cos(#theta_{l}*)");
   tmp->GetXaxis()->SetLabelFont(42);
   tmp->GetXaxis()->SetLabelSize(0.035);
   tmp->GetXaxis()->SetTitleSize(0.035);
   tmp->GetXaxis()->SetTitleFont(42);
   tmp->GetYaxis()->SetLabelFont(42);
   tmp->GetYaxis()->SetLabelSize(0.035);
   tmp->GetYaxis()->SetTitleSize(0.035);
   tmp->GetYaxis()->SetTitleFont(42);
   tmp->GetZaxis()->SetLabelFont(42);
   tmp->GetZaxis()->SetLabelSize(0.035);
   tmp->GetZaxis()->SetTitleSize(0.035);
   tmp->GetZaxis()->SetTitleFont(42);
   tmp->Draw("");
   
   TPaveText *pt = new TPaveText(0.3456376,0.19967,0.5956376,0.2574257,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("Signal after fit");
   pt->Draw();
   
   ptstats = new TPaveStats(0.4060403,0.169967,0.6073826,0.330033,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("e_comb3_Components2_subtracted");
   text->SetTextSize(0.03681518);
   text = ptstats->AddText("Entries = 24222  ");
   text = ptstats->AddText("Mean  = -0.2075");
   text = ptstats->AddText("RMS   = 0.4765");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   ptstats = new TPaveStats(0.4060403,0.169967,0.6073826,0.330033,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("e_comb3_Components2_subtracted");
   text->SetTextSize(0.03681518);
   text = ptstats->AddText("Entries = 24222  ");
   text = ptstats->AddText("Mean  = -0.2075");
   text = ptstats->AddText("RMS   = 0.4765");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   TH1D *e_comb3_Components2_subtracted = new TH1D("e_comb3_Components2_subtracted","Data -bkg (after fit)",10,-1,1);
   e_comb3_Components2_subtracted->SetBinContent(1,2982.539);
   e_comb3_Components2_subtracted->SetBinContent(2,2860.137);
   e_comb3_Components2_subtracted->SetBinContent(3,3499.153);
   e_comb3_Components2_subtracted->SetBinContent(4,3602.359);
   e_comb3_Components2_subtracted->SetBinContent(5,3226.8);
   e_comb3_Components2_subtracted->SetBinContent(6,2972.781);
   e_comb3_Components2_subtracted->SetBinContent(7,2198.763);
   e_comb3_Components2_subtracted->SetBinContent(8,1393.827);
   e_comb3_Components2_subtracted->SetBinContent(9,890.2437);
   e_comb3_Components2_subtracted->SetBinContent(10,596.0152);
   e_comb3_Components2_subtracted->SetBinError(1,65.94695);
   e_comb3_Components2_subtracted->SetBinError(2,68.20557);
   e_comb3_Components2_subtracted->SetBinError(3,75.13987);
   e_comb3_Components2_subtracted->SetBinError(4,75.99342);
   e_comb3_Components2_subtracted->SetBinError(5,73.1847);
   e_comb3_Components2_subtracted->SetBinError(6,69.80688);
   e_comb3_Components2_subtracted->SetBinError(7,62.04837);
   e_comb3_Components2_subtracted->SetBinError(8,52.30679);
   e_comb3_Components2_subtracted->SetBinError(9,42.34383);
   e_comb3_Components2_subtracted->SetBinError(10,35.59494);
   e_comb3_Components2_subtracted->SetEntries(24222);
   
   ptstats = new TPaveStats(0.4060403,0.169967,0.6073826,0.330033,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("e_comb3_Components2_subtracted");
   text->SetTextSize(0.03681518);
   text = ptstats->AddText("Entries = 24222  ");
   text = ptstats->AddText("Mean  = -0.2075");
   text = ptstats->AddText("RMS   = 0.4765");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   e_comb3_Components2_subtracted->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(e_comb3_Components2_subtracted);

   ci = TColor::GetColor("#000099");
   e_comb3_Components2_subtracted->SetLineColor(ci);
   e_comb3_Components2_subtracted->SetLineWidth(2);
   e_comb3_Components2_subtracted->SetMarkerStyle(20);
   e_comb3_Components2_subtracted->GetXaxis()->SetTitle("cos(#theta*)");
   e_comb3_Components2_subtracted->GetXaxis()->SetLabelFont(42);
   e_comb3_Components2_subtracted->GetXaxis()->SetLabelSize(0.035);
   e_comb3_Components2_subtracted->GetXaxis()->SetTitleSize(0.035);
   e_comb3_Components2_subtracted->GetXaxis()->SetTitleFont(42);
   e_comb3_Components2_subtracted->GetYaxis()->SetLabelFont(42);
   e_comb3_Components2_subtracted->GetYaxis()->SetLabelSize(0.035);
   e_comb3_Components2_subtracted->GetYaxis()->SetTitleSize(0.035);
   e_comb3_Components2_subtracted->GetYaxis()->SetTitleFont(42);
   e_comb3_Components2_subtracted->GetZaxis()->SetLabelFont(42);
   e_comb3_Components2_subtracted->GetZaxis()->SetLabelSize(0.035);
   e_comb3_Components2_subtracted->GetZaxis()->SetTitleSize(0.035);
   e_comb3_Components2_subtracted->GetZaxis()->SetTitleFont(42);
   e_comb3_Components2_subtracted->Draw("sames");
   
   ptstats = new TPaveStats(0.3909396,0.1551155,0.5922819,0.3151815,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("e_comb3_Components2_unfolded");
   text->SetTextSize(0.03681518);
   text = ptstats->AddText("Entries = 24222  ");
   text = ptstats->AddText("Mean  = -0.04856");
   text = ptstats->AddText("RMS   = 0.4319");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   ptstats = new TPaveStats(0.3909396,0.1551155,0.5922819,0.3151815,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("e_comb3_Components2_unfolded");
   text->SetTextSize(0.03681518);
   text = ptstats->AddText("Entries = 24222  ");
   text = ptstats->AddText("Mean  = -0.04856");
   text = ptstats->AddText("RMS   = 0.4319");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   TH1D *e_comb3_Components2_unfolded = new TH1D("e_comb3_Components2_unfolded","Signal unfolded",10,-1,1);
   e_comb3_Components2_unfolded->SetBinContent(1,719.3733);
   e_comb3_Components2_unfolded->SetBinContent(2,1964.821);
   e_comb3_Components2_unfolded->SetBinContent(3,2972.468);
   e_comb3_Components2_unfolded->SetBinContent(4,3655.802);
   e_comb3_Components2_unfolded->SetBinContent(5,3912.869);
   e_comb3_Components2_unfolded->SetBinContent(6,3732.62);
   e_comb3_Components2_unfolded->SetBinContent(7,3160.754);
   e_comb3_Components2_unfolded->SetBinContent(8,2298.108);
   e_comb3_Components2_unfolded->SetBinContent(9,1374.731);
   e_comb3_Components2_unfolded->SetBinContent(10,431.0723);
   e_comb3_Components2_unfolded->SetBinError(1,23.53732);
   e_comb3_Components2_unfolded->SetBinError(2,39.64929);
   e_comb3_Components2_unfolded->SetBinError(3,48.79784);
   e_comb3_Components2_unfolded->SetBinError(4,53.97561);
   e_comb3_Components2_unfolded->SetBinError(5,55.54592);
   e_comb3_Components2_unfolded->SetBinError(6,54.39301);
   e_comb3_Components2_unfolded->SetBinError(7,50.10831);
   e_comb3_Components2_unfolded->SetBinError(8,42.66816);
   e_comb3_Components2_unfolded->SetBinError(9,32.98997);
   e_comb3_Components2_unfolded->SetBinError(10,18.4697);
   e_comb3_Components2_unfolded->SetEntries(24222);
   
   ptstats = new TPaveStats(0.3909396,0.1551155,0.5922819,0.3151815,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("e_comb3_Components2_unfolded");
   text->SetTextSize(0.03681518);
   text = ptstats->AddText("Entries = 24222  ");
   text = ptstats->AddText("Mean  = -0.04856");
   text = ptstats->AddText("RMS   = 0.4319");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   e_comb3_Components2_unfolded->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(e_comb3_Components2_unfolded);

   ci = TColor::GetColor("#6666cc");
   e_comb3_Components2_unfolded->SetLineColor(ci);
   e_comb3_Components2_unfolded->SetLineWidth(2);
   e_comb3_Components2_unfolded->GetXaxis()->SetLabelFont(42);
   e_comb3_Components2_unfolded->GetXaxis()->SetLabelSize(0.035);
   e_comb3_Components2_unfolded->GetXaxis()->SetTitleSize(0.035);
   e_comb3_Components2_unfolded->GetXaxis()->SetTitleFont(42);
   e_comb3_Components2_unfolded->GetYaxis()->SetLabelFont(42);
   e_comb3_Components2_unfolded->GetYaxis()->SetLabelSize(0.035);
   e_comb3_Components2_unfolded->GetYaxis()->SetTitleSize(0.035);
   e_comb3_Components2_unfolded->GetYaxis()->SetTitleFont(42);
   e_comb3_Components2_unfolded->GetZaxis()->SetLabelFont(42);
   e_comb3_Components2_unfolded->GetZaxis()->SetLabelSize(0.035);
   e_comb3_Components2_unfolded->GetZaxis()->SetTitleSize(0.035);
   e_comb3_Components2_unfolded->GetZaxis()->SetTitleFont(42);
   e_comb3_Components2_unfolded->Draw("sames");
   
   ptstats = new TPaveStats(0.4144295,0.1666667,0.6157718,0.3267327,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("genSignal");
   text->SetTextSize(0.03681518);
   text = ptstats->AddText("Entries = 238320 ");
   text = ptstats->AddText("Mean  = -0.05317");
   text = ptstats->AddText("RMS   = 0.4314");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   ptstats = new TPaveStats(0.4144295,0.1666667,0.6157718,0.3267327,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("genSignal");
   text->SetTextSize(0.03681518);
   text = ptstats->AddText("Entries = 238320 ");
   text = ptstats->AddText("Mean  = -0.05317");
   text = ptstats->AddText("RMS   = 0.4314");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   TH1D *genSignal = new TH1D("genSignal","Signal gen-Info",10,-1,1);
   genSignal->SetBinContent(1,721.0416);
   genSignal->SetBinContent(2,2005.328);
   genSignal->SetBinContent(3,3024.541);
   genSignal->SetBinContent(4,3694.813);
   genSignal->SetBinContent(5,3934.294);
   genSignal->SetBinContent(6,3722.056);
   genSignal->SetBinContent(7,3133.455);
   genSignal->SetBinContent(8,2272.474);
   genSignal->SetBinContent(9,1352.166);
   genSignal->SetBinContent(10,422.8552);
   genSignal->SetBinError(1,23.73226);
   genSignal->SetBinError(2,40.61899);
   genSignal->SetBinError(3,49.87807);
   genSignal->SetBinError(4,54.81126);
   genSignal->SetBinError(5,56.11966);
   genSignal->SetBinError(6,54.53872);
   genSignal->SetBinError(7,49.9857);
   genSignal->SetBinError(8,42.46811);
   genSignal->SetBinError(9,32.67692);
   genSignal->SetBinError(10,18.24703);
   genSignal->SetEntries(238319.9);
   
   ptstats = new TPaveStats(0.4144295,0.1666667,0.6157718,0.3267327,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("genSignal");
   text->SetTextSize(0.03681518);
   text = ptstats->AddText("Entries = 238320 ");
   text = ptstats->AddText("Mean  = -0.05317");
   text = ptstats->AddText("RMS   = 0.4314");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   genSignal->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(genSignal);

   ci = TColor::GetColor("#ffcc66");
   genSignal->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc66");
   genSignal->SetMarkerColor(ci);
   genSignal->SetMarkerStyle(22);
   genSignal->GetXaxis()->SetTitle(" cos(#theta)_{gen}");
   genSignal->GetXaxis()->SetLabelFont(42);
   genSignal->GetXaxis()->SetLabelSize(0.035);
   genSignal->GetXaxis()->SetTitleSize(0.035);
   genSignal->GetXaxis()->SetTitleFont(42);
   genSignal->GetYaxis()->SetLabelFont(42);
   genSignal->GetYaxis()->SetLabelSize(0.035);
   genSignal->GetYaxis()->SetTitleSize(0.035);
   genSignal->GetYaxis()->SetTitleFont(42);
   genSignal->GetZaxis()->SetLabelFont(42);
   genSignal->GetZaxis()->SetLabelSize(0.035);
   genSignal->GetZaxis()->SetTitleSize(0.035);
   genSignal->GetZaxis()->SetTitleFont(42);
   genSignal->Draw("sames");
   
   TLegend *leg = new TLegend(0.2365772,0.1348684,0.6426174,0.3569079,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.03311258);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","Signal unfolded","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#6666cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("genSignal","Signal gen-info","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ffcc66");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc66");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(22);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("NULL","Signal after fit","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#99cc99");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(3);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("NULL","data - bkg (after fit)","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("NULL","F_{L} = 1, F_{0} = F_{R} = 0","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   leg->Draw();
   
   TH1D *component_1_meas = new TH1D("component_1_meas","e_comb3_Components2SingleTopR",10,-1,1);
   component_1_meas->SetBinContent(1,1956.178);
   component_1_meas->SetBinContent(2,3605.167);
   component_1_meas->SetBinContent(3,3864.719);
   component_1_meas->SetBinContent(4,3443.839);
   component_1_meas->SetBinContent(5,2681.744);
   component_1_meas->SetBinContent(6,1838.017);
   component_1_meas->SetBinContent(7,1081.255);
   component_1_meas->SetBinContent(8,509.416);
   component_1_meas->SetBinContent(9,169.2006);
   component_1_meas->SetBinContent(10,17.7652);
   component_1_meas->SetBinError(1,64.00459);
   component_1_meas->SetBinError(2,72.7508);
   component_1_meas->SetBinError(3,63.44556);
   component_1_meas->SetBinError(4,50.84611);
   component_1_meas->SetBinError(5,38.06924);
   component_1_meas->SetBinError(6,26.78421);
   component_1_meas->SetBinError(7,17.14144);
   component_1_meas->SetBinError(8,9.458148);
   component_1_meas->SetBinError(9,4.060373);
   component_1_meas->SetBinError(10,0.7611666);
   component_1_meas->SetEntries(19787.07);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("component_1_meas");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 19787  ");
   text = ptstats->AddText("Mean  = -0.3454");
   text = ptstats->AddText("RMS   = 0.3758");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   component_1_meas->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(component_1_meas);
   component_1_meas->SetLineColor(2);
   component_1_meas->SetLineStyle(2);
   component_1_meas->SetLineWidth(2);
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
   component_1_meas->Draw("EHISTSAME");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
