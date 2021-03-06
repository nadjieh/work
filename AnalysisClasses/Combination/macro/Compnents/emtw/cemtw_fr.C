{
//=========Macro generated from canvas: Canvas_1/c
//=========  (Tue Oct  1 17:11:16 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "c",68,82,600,604);
   Canvas_1->SetHighLightColor(2);
   Canvas_1->Range(-1.275862,-581.3954,1.022989,5232.558);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetLeftMargin(0.12);
   Canvas_1->SetRightMargin(0.01);
   Canvas_1->SetTopMargin(0.04);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *e_comb3_Components2_unfolded = new TH1D("e_comb3_Components2_unfolded","e_comb3_Components2SingleTopR",10,-1,1);
   e_comb3_Components2_unfolded->SetBinContent(1,573.5069);
   e_comb3_Components2_unfolded->SetBinContent(2,1459.869);
   e_comb3_Components2_unfolded->SetBinContent(3,2233.913);
   e_comb3_Components2_unfolded->SetBinContent(4,2752.921);
   e_comb3_Components2_unfolded->SetBinContent(5,3036.894);
   e_comb3_Components2_unfolded->SetBinContent(6,3196.31);
   e_comb3_Components2_unfolded->SetBinContent(7,2971.759);
   e_comb3_Components2_unfolded->SetBinContent(8,2447.204);
   e_comb3_Components2_unfolded->SetBinContent(9,1662.664);
   e_comb3_Components2_unfolded->SetBinContent(10,604.3513);
   e_comb3_Components2_unfolded->SetBinError(1,20.09515);
   e_comb3_Components2_unfolded->SetBinError(2,32.27941);
   e_comb3_Components2_unfolded->SetBinError(3,40.07615);
   e_comb3_Components2_unfolded->SetBinError(4,43.91676);
   e_comb3_Components2_unfolded->SetBinError(5,45.45645);
   e_comb3_Components2_unfolded->SetBinError(6,46.55851);
   e_comb3_Components2_unfolded->SetBinError(7,44.2836);
   e_comb3_Components2_unfolded->SetBinError(8,39.90271);
   e_comb3_Components2_unfolded->SetBinError(9,32.43301);
   e_comb3_Components2_unfolded->SetBinError(10,19.22441);
   e_comb3_Components2_unfolded->SetMinimum(0);
   e_comb3_Components2_unfolded->SetMaximum(5000);
   e_comb3_Components2_unfolded->SetEntries(20939);
   
   TPaveStats *ptstats = new TPaveStats(0.1677852,0.7361111,0.3691275,0.8958333,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("e_comb3_Components2_unfolded");
   text->SetTextSize(0.03673611);
   text = ptstats->AddText("Entries = 20939  ");
   text = ptstats->AddText("Mean  = 0.01709");
   text = ptstats->AddText("RMS   = 0.4492");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   e_comb3_Components2_unfolded->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(e_comb3_Components2_unfolded);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#6666cc");
   e_comb3_Components2_unfolded->SetLineColor(ci);
   e_comb3_Components2_unfolded->SetLineWidth(2);
   e_comb3_Components2_unfolded->GetXaxis()->SetTitle("cos(#theta_{l}*)");
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
   e_comb3_Components2_unfolded->Draw("");
   
   TPaveText *pt = new TPaveText(0.1661074,0.8246528,0.3372483,0.859375,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("e_comb3_Components2SingleTopR");
   pt->Draw();
   
   ptstats = new TPaveStats(0.1879195,0.765625,0.3892617,0.9253472,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("genSignal");
   text->SetTextSize(0.03673611);
   text = ptstats->AddText("Entries = 229809 ");
   text = ptstats->AddText("Mean  = 0.02772");
   text = ptstats->AddText("RMS   = 0.4497");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   ptstats = new TPaveStats(0.2785235,0.7430556,0.4798658,0.9027778,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("genSignal");
   text->SetTextSize(0.03673611);
   text = ptstats->AddText("Entries = 229809 ");
   text = ptstats->AddText("Mean  = 0.02772");
   text = ptstats->AddText("RMS   = 0.4497");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   TH1D *genSignal = new TH1D("genSignal","Default_allW: cos(#theta)",10,-1,1);
   genSignal->SetBinContent(1,542.9177);
   genSignal->SetBinContent(2,1436.394);
   genSignal->SetBinContent(3,2193.243);
   genSignal->SetBinContent(4,2750.222);
   genSignal->SetBinContent(5,3090.919);
   genSignal->SetBinContent(6,3193.526);
   genSignal->SetBinContent(7,3040.707);
   genSignal->SetBinContent(8,2516.767);
   genSignal->SetBinContent(9,1756.554);
   genSignal->SetBinContent(10,658.3411);
   genSignal->SetBinError(1,18.50227);
   genSignal->SetBinError(2,31.22065);
   genSignal->SetBinError(3,38.81437);
   genSignal->SetBinError(4,43.10006);
   genSignal->SetBinError(5,45.19815);
   genSignal->SetBinError(6,45.7306);
   genSignal->SetBinError(7,44.38019);
   genSignal->SetBinError(8,40.18998);
   genSignal->SetBinError(9,33.40265);
   genSignal->SetBinError(10,20.39917);
   genSignal->SetEntries(229809);
   
   ptstats = new TPaveStats(0.2785235,0.7430556,0.4798658,0.9027778,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("genSignal");
   text->SetTextSize(0.03673611);
   text = ptstats->AddText("Entries = 229809 ");
   text = ptstats->AddText("Mean  = 0.02772");
   text = ptstats->AddText("RMS   = 0.4497");
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
   
   ptstats = new TPaveStats(0.2332215,0.765625,0.4345638,0.9253472,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("component_2_meas");
   text->SetTextSize(0.03673611);
   text = ptstats->AddText("Entries = 22139  ");
   text = ptstats->AddText("Mean  = 0.3171");
   text = ptstats->AddText("RMS   = 0.3589");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   TH1D *component_2_meas = new TH1D("component_2_meas","e_comb3_Components2SingleTopR",10,-1,1);
   component_2_meas->SetBinContent(1,4.990309);
   component_2_meas->SetBinContent(2,112.5149);
   component_2_meas->SetBinContent(3,467.4966);
   component_2_meas->SetBinContent(4,1096.814);
   component_2_meas->SetBinContent(5,1931.613);
   component_2_meas->SetBinContent(6,2917.826);
   component_2_meas->SetBinContent(7,3623.946);
   component_2_meas->SetBinContent(8,3785.365);
   component_2_meas->SetBinContent(9,3137.048);
   component_2_meas->SetBinContent(10,1349.046);
   component_2_meas->SetBinError(1,0.1748558);
   component_2_meas->SetBinError(2,2.487836);
   component_2_meas->SetBinError(3,8.386836);
   component_2_meas->SetBinError(4,17.49724);
   component_2_meas->SetBinError(5,28.91253);
   component_2_meas->SetBinError(6,42.50203);
   component_2_meas->SetBinError(7,54.00214);
   component_2_meas->SetBinError(8,61.72199);
   component_2_meas->SetBinError(9,61.19329);
   component_2_meas->SetBinError(10,42.91314);
   component_2_meas->SetEntries(22138.65);
   
   ptstats = new TPaveStats(0.2332215,0.765625,0.4345638,0.9253472,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("component_2_meas");
   text->SetTextSize(0.03673611);
   text = ptstats->AddText("Entries = 22139  ");
   text = ptstats->AddText("Mean  = 0.3171");
   text = ptstats->AddText("RMS   = 0.3589");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   component_2_meas->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(component_2_meas);
   component_2_meas->SetLineColor(2);
   component_2_meas->SetLineStyle(2);
   component_2_meas->SetLineWidth(2);
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
   component_2_meas->Draw("EHISTSAME");
   
   TLegend *leg = new TLegend(0.1577181,0.7065972,0.5637584,0.9288194,NULL,"brNDC");
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
   entry=leg->AddEntry("NULL","F_{R} = 1, F_{L} = F_{0} = 0","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(2);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   leg->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
