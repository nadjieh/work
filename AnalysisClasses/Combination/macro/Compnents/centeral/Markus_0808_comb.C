{
//=========Macro generated from canvas: Canvas_1/c
//=========  (Sun Oct 20 17:56:39 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "c",511,53,600,714);
   Canvas_1->SetHighLightColor(2);
   Canvas_1->Range(-1.28131,-223.9698,1.015414,4392.638);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetLeftMargin(0.1224832);
   Canvas_1->SetRightMargin(0.006711409);
   Canvas_1->SetTopMargin(0.04029851);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *e_comb3_Components2_unfolded__1__1 = new TH1D("e_comb3_Components2_unfolded__1__1","e_comb3_Components2SingleTopR",10,-1,1);
   e_comb3_Components2_unfolded__1__1->SetBinContent(1,728.5464);
   e_comb3_Components2_unfolded__1__1->SetBinContent(2,1989.561);
   e_comb3_Components2_unfolded__1__1->SetBinContent(3,3011.049);
   e_comb3_Components2_unfolded__1__1->SetBinContent(4,3701.834);
   e_comb3_Components2_unfolded__1__1->SetBinContent(5,3961.306);
   e_comb3_Components2_unfolded__1__1->SetBinContent(6,3780.824);
   e_comb3_Components2_unfolded__1__1->SetBinContent(7,3201.629);
   e_comb3_Components2_unfolded__1__1->SetBinContent(8,2328.194);
   e_comb3_Components2_unfolded__1__1->SetBinContent(9,1392.962);
   e_comb3_Components2_unfolded__1__1->SetBinContent(10,436.4144);
   e_comb3_Components2_unfolded__1__1->SetBinError(1,23.8611);
   e_comb3_Components2_unfolded__1__1->SetBinError(2,40.19089);
   e_comb3_Components2_unfolded__1__1->SetBinError(3,49.47254);
   e_comb3_Components2_unfolded__1__1->SetBinError(4,54.70804);
   e_comb3_Components2_unfolded__1__1->SetBinError(5,56.29409);
   e_comb3_Components2_unfolded__1__1->SetBinError(6,55.14917);
   e_comb3_Components2_unfolded__1__1->SetBinError(7,50.81051);
   e_comb3_Components2_unfolded__1__1->SetBinError(8,43.27692);
   e_comb3_Components2_unfolded__1__1->SetBinError(9,33.46638);
   e_comb3_Components2_unfolded__1__1->SetBinError(10,18.72771);
   e_comb3_Components2_unfolded__1__1->SetEntries(24532);
   e_comb3_Components2_unfolded__1__1->SetDirectory(0);
   
   TPaveStats *ptstats = new TPaveStats(0.9463087,0.7755102,0.9798658,0.8061224,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("e_comb3_Components2_unfolded__1");
   text->SetTextSize(0.007040816);
   text = ptstats->AddText("Entries = 24532  ");
   text = ptstats->AddText("Mean  = -0.04851");
   text = ptstats->AddText("RMS   = 0.4319");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   e_comb3_Components2_unfolded__1__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(e_comb3_Components2_unfolded__1__1);
   e_comb3_Components2_unfolded__1__1->SetLineColor(9);
   e_comb3_Components2_unfolded__1__1->SetLineWidth(2);
   e_comb3_Components2_unfolded__1__1->GetXaxis()->SetTitle("cos(#theta_{l}*)");
   e_comb3_Components2_unfolded__1__1->GetXaxis()->SetLabelFont(42);
   e_comb3_Components2_unfolded__1__1->GetXaxis()->SetLabelSize(0.035);
   e_comb3_Components2_unfolded__1__1->GetXaxis()->SetTitleSize(0.035);
   e_comb3_Components2_unfolded__1__1->GetXaxis()->SetTitleFont(42);
   e_comb3_Components2_unfolded__1__1->GetYaxis()->SetLabelFont(42);
   e_comb3_Components2_unfolded__1__1->GetYaxis()->SetLabelSize(0.035);
   e_comb3_Components2_unfolded__1__1->GetYaxis()->SetTitleSize(0.035);
   e_comb3_Components2_unfolded__1__1->GetYaxis()->SetTitleFont(42);
   e_comb3_Components2_unfolded__1__1->GetZaxis()->SetLabelFont(42);
   e_comb3_Components2_unfolded__1__1->GetZaxis()->SetLabelSize(0.035);
   e_comb3_Components2_unfolded__1__1->GetZaxis()->SetTitleSize(0.035);
   e_comb3_Components2_unfolded__1__1->GetZaxis()->SetTitleFont(42);
   e_comb3_Components2_unfolded__1__1->Draw("");
   
   TPaveText *pt = new TPaveText(0.7718121,0.9012158,0.8053691,0.9620061,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("e_comb3_Components2SingleTopR");
   pt->Draw();
   
   ptstats = new TPaveStats(0.9463087,0.7755102,0.9798658,0.8046647,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("genSignal__2");
   text->SetTextSize(0.006705539);
   text = ptstats->AddText("Entries = 238320 ");
   text = ptstats->AddText("Mean  = -0.05317");
   text = ptstats->AddText("RMS   = 0.4314");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   TH1D *genSignal__2__2 = new TH1D("genSignal__2__2","Default_allW: cos(#theta)",10,-1,1);
   genSignal__2__2->SetBinContent(1,721.0416);
   genSignal__2__2->SetBinContent(2,2005.328);
   genSignal__2__2->SetBinContent(3,3024.541);
   genSignal__2__2->SetBinContent(4,3694.813);
   genSignal__2__2->SetBinContent(5,3934.294);
   genSignal__2__2->SetBinContent(6,3722.056);
   genSignal__2__2->SetBinContent(7,3133.455);
   genSignal__2__2->SetBinContent(8,2272.474);
   genSignal__2__2->SetBinContent(9,1352.166);
   genSignal__2__2->SetBinContent(10,422.8552);
   genSignal__2__2->SetBinError(1,23.73226);
   genSignal__2__2->SetBinError(2,40.61899);
   genSignal__2__2->SetBinError(3,49.87807);
   genSignal__2__2->SetBinError(4,54.81126);
   genSignal__2__2->SetBinError(5,56.11966);
   genSignal__2__2->SetBinError(6,54.53872);
   genSignal__2__2->SetBinError(7,49.9857);
   genSignal__2__2->SetBinError(8,42.46811);
   genSignal__2__2->SetBinError(9,32.67692);
   genSignal__2__2->SetBinError(10,18.24703);
   genSignal__2__2->SetEntries(238319.9);
   genSignal__2__2->SetDirectory(0);
   
   ptstats = new TPaveStats(0.9463087,0.7755102,0.9798658,0.8046647,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("genSignal__2");
   text->SetTextSize(0.006705539);
   text = ptstats->AddText("Entries = 238320 ");
   text = ptstats->AddText("Mean  = -0.05317");
   text = ptstats->AddText("RMS   = 0.4314");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   genSignal__2__2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(genSignal__2__2);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffcc66");
   genSignal__2__2->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc66");
   genSignal__2__2->SetMarkerColor(ci);
   genSignal__2__2->SetMarkerStyle(22);
   genSignal__2__2->GetXaxis()->SetTitle(" cos(#theta)_{gen}");
   genSignal__2__2->GetXaxis()->SetLabelFont(42);
   genSignal__2__2->GetXaxis()->SetLabelSize(0.035);
   genSignal__2__2->GetXaxis()->SetTitleSize(0.035);
   genSignal__2__2->GetXaxis()->SetTitleFont(42);
   genSignal__2__2->GetYaxis()->SetLabelFont(42);
   genSignal__2__2->GetYaxis()->SetLabelSize(0.035);
   genSignal__2__2->GetYaxis()->SetTitleSize(0.035);
   genSignal__2__2->GetYaxis()->SetTitleFont(42);
   genSignal__2__2->GetZaxis()->SetLabelFont(42);
   genSignal__2__2->GetZaxis()->SetLabelSize(0.035);
   genSignal__2__2->GetZaxis()->SetTitleSize(0.035);
   genSignal__2__2->GetZaxis()->SetTitleFont(42);
   genSignal__2__2->Draw("sames");
   
   ptstats = new TPaveStats(0.9362416,0.7755102,0.9798658,0.8046647,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("e_comb3_Components2_subtracted");
   text->SetTextSize(0.006705539);
   text = ptstats->AddText("Entries = 24532  ");
   text = ptstats->AddText("Mean  = -0.2062");
   text = ptstats->AddText("RMS   =  0.477");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   TH1D *e_comb3_Components2_subtracted = new TH1D("e_comb3_Components2_subtracted","Default_allW: cos(#theta)",10,-1,1);
   e_comb3_Components2_subtracted->SetBinContent(1,3009.154);
   e_comb3_Components2_subtracted->SetBinContent(2,2893.115);
   e_comb3_Components2_subtracted->SetBinContent(3,3538.152);
   e_comb3_Components2_subtracted->SetBinContent(4,3643.539);
   e_comb3_Components2_subtracted->SetBinContent(5,3267.646);
   e_comb3_Components2_subtracted->SetBinContent(6,3010.93);
   e_comb3_Components2_subtracted->SetBinContent(7,2232.482);
   e_comb3_Components2_subtracted->SetBinContent(8,1420.7);
   e_comb3_Components2_subtracted->SetBinContent(9,908.1939);
   e_comb3_Components2_subtracted->SetBinContent(10,608.4074);
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
   e_comb3_Components2_subtracted->SetEntries(24532);
   
   ptstats = new TPaveStats(0.9362416,0.7755102,0.9798658,0.8046647,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("e_comb3_Components2_subtracted");
   text->SetTextSize(0.006705539);
   text = ptstats->AddText("Entries = 24532  ");
   text = ptstats->AddText("Mean  = -0.2062");
   text = ptstats->AddText("RMS   =  0.477");
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
   
   ptstats = new TPaveStats(0.9446309,0.7755102,0.9798658,0.8046647,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("signal");
   text->SetTextSize(0.006705539);
   text = ptstats->AddText("Entries = 10     ");
   text = ptstats->AddText("Mean  = -0.2149");
   text = ptstats->AddText("RMS   =  0.471");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   TH1D *signal = new TH1D("signal","tmpCombinedID",10,-1,1);
   signal->SetBinContent(1,2902.959);
   signal->SetBinContent(2,3066.551);
   signal->SetBinContent(3,3561.843);
   signal->SetBinContent(4,3671.027);
   signal->SetBinContent(5,3373.544);
   signal->SetBinContent(6,2837.739);
   signal->SetBinContent(7,2163.428);
   signal->SetBinContent(8,1446.254);
   signal->SetBinContent(9,853.7196);
   signal->SetBinContent(10,531.9014);
   signal->SetEntries(10);
   
   ptstats = new TPaveStats(0.9446309,0.7755102,0.9798658,0.8046647,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("signal");
   text->SetTextSize(0.006705539);
   text = ptstats->AddText("Entries = 10     ");
   text = ptstats->AddText("Mean  = -0.2149");
   text = ptstats->AddText("RMS   =  0.471");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   signal->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(signal);
   signal->SetLineColor(30);
   signal->SetLineWidth(2);
   signal->GetXaxis()->SetLabelFont(42);
   signal->GetXaxis()->SetLabelSize(0.035);
   signal->GetXaxis()->SetTitleSize(0.035);
   signal->GetXaxis()->SetTitleFont(42);
   signal->GetYaxis()->SetLabelFont(42);
   signal->GetYaxis()->SetLabelSize(0.035);
   signal->GetYaxis()->SetTitleSize(0.035);
   signal->GetYaxis()->SetTitleFont(42);
   signal->GetZaxis()->SetLabelFont(42);
   signal->GetZaxis()->SetLabelSize(0.035);
   signal->GetZaxis()->SetTitleSize(0.035);
   signal->GetZaxis()->SetTitleFont(42);
   signal->Draw("sames");
   
   TLegend *leg = new TLegend(0.3120805,0.1336634,0.7181208,0.3564356,NULL,"brNDC");
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
   entry=leg->AddEntry("NULL","Signal gen-info","lpf");
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
   leg->Draw();
  
// ------------>Primitives in pad: Canvas_1_1
   TPad *Canvas_1_1 = new TPad("Canvas_1_1", "newpad",0.8842282,0.7142857,0.9865772,0.8343465);
   Canvas_1_1->Draw();
   Canvas_1_1->cd();
   Canvas_1_1->Range(0,0,1,1);
   Canvas_1_1->SetFillColor(0);
   Canvas_1_1->SetBorderMode(0);
   Canvas_1_1->SetBorderSize(2);
   Canvas_1_1->SetFrameBorderMode(0);
   Canvas_1_1->Modified();
   Canvas_1->cd();
  
// ------------>Primitives in pad: Canvas_1_2
   Canvas_1_2 = new TPad("Canvas_1_2", "newpad",0.7583893,0.9133739,0.8087248,0.9361702);
   Canvas_1_2->Draw();
   Canvas_1_2->cd();
   Canvas_1_2->Range(0,0,1,1);
   Canvas_1_2->SetFillColor(0);
   Canvas_1_2->SetBorderMode(0);
   Canvas_1_2->SetBorderSize(2);
   Canvas_1_2->SetFrameBorderMode(0);
   Canvas_1_2->Modified();
   Canvas_1->cd();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
   Canvas_1->ToggleToolBar();
}
