{
//=========Macro generated from canvas: Canvas_1/c
//=========  (Mon Nov 11 19:04:20 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "c",443,129,600,632);
   Canvas_1->SetHighLightColor(2);
   Canvas_1->Range(-1.275862,-1436.217,1.022989,12612.14);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetLeftMargin(0.12);
   Canvas_1->SetRightMargin(0.01);
   Canvas_1->SetTopMargin(0.04);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *e_comb3_Components2_unfolded__1__3__5__1 = new TH1D("e_comb3_Components2_unfolded__1__3__5__1","",10,-1,1);
   e_comb3_Components2_unfolded__1__3__5__1->SetBinContent(1,580.5911);
   e_comb3_Components2_unfolded__1__3__5__1->SetBinContent(2,1454.019);
   e_comb3_Components2_unfolded__1__3__5__1->SetBinContent(3,2192.396);
   e_comb3_Components2_unfolded__1__3__5__1->SetBinContent(4,2749.505);
   e_comb3_Components2_unfolded__1__3__5__1->SetBinContent(5,3088.524);
   e_comb3_Components2_unfolded__1__3__5__1->SetBinContent(6,3172.356);
   e_comb3_Components2_unfolded__1__3__5__1->SetBinContent(7,2990.687);
   e_comb3_Components2_unfolded__1__3__5__1->SetBinContent(8,2438.001);
   e_comb3_Components2_unfolded__1__3__5__1->SetBinContent(9,1668.324);
   e_comb3_Components2_unfolded__1__3__5__1->SetBinContent(10,606.2884);
   e_comb3_Components2_unfolded__1__3__5__1->SetBinError(1,20.36314);
   e_comb3_Components2_unfolded__1__3__5__1->SetBinError(2,32.48923);
   e_comb3_Components2_unfolded__1__3__5__1->SetBinError(3,39.88482);
   e_comb3_Components2_unfolded__1__3__5__1->SetBinError(4,44.25266);
   e_comb3_Components2_unfolded__1__3__5__1->SetBinError(5,46.37319);
   e_comb3_Components2_unfolded__1__3__5__1->SetBinError(6,46.68986);
   e_comb3_Components2_unfolded__1__3__5__1->SetBinError(7,44.88151);
   e_comb3_Components2_unfolded__1__3__5__1->SetBinError(8,40.12301);
   e_comb3_Components2_unfolded__1__3__5__1->SetBinError(9,32.77651);
   e_comb3_Components2_unfolded__1__3__5__1->SetBinError(10,19.46213);
   e_comb3_Components2_unfolded__1__3__5__1->SetMinimum(-31.38087);
   e_comb3_Components2_unfolded__1__3__5__1->SetMaximum(12050.21);
   e_comb3_Components2_unfolded__1__3__5__1->SetEntries(20940);
   e_comb3_Components2_unfolded__1__3__5__1->SetDirectory(0);
   
   TPaveStats *ptstats = new TPaveStats(0.4152299,0.7761506,0.6163793,0.9351464,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("e_comb3_Components2_unfolded__1__3__5");
   text->SetTextSize(0.03656903);
   text = ptstats->AddText("Entries = 20940  ");
   text = ptstats->AddText("Mean  = 0.01799");
   text = ptstats->AddText("RMS   =  0.449");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   e_comb3_Components2_unfolded__1__3__5__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(e_comb3_Components2_unfolded__1__3__5__1);
   e_comb3_Components2_unfolded__1__3__5__1->SetLineColor(9);
   e_comb3_Components2_unfolded__1__3__5__1->SetLineWidth(3);
   e_comb3_Components2_unfolded__1__3__5__1->GetXaxis()->SetTitle("cos(#theta_{l}*)");
   e_comb3_Components2_unfolded__1__3__5__1->GetXaxis()->SetLabelFont(42);
   e_comb3_Components2_unfolded__1__3__5__1->GetXaxis()->SetLabelSize(0.035);
   e_comb3_Components2_unfolded__1__3__5__1->GetXaxis()->SetTitleSize(0.035);
   e_comb3_Components2_unfolded__1__3__5__1->GetXaxis()->SetTitleFont(42);
   e_comb3_Components2_unfolded__1__3__5__1->GetYaxis()->SetLabelFont(42);
   e_comb3_Components2_unfolded__1__3__5__1->GetYaxis()->SetLabelSize(0.035);
   e_comb3_Components2_unfolded__1__3__5__1->GetYaxis()->SetTitleSize(0.035);
   e_comb3_Components2_unfolded__1__3__5__1->GetYaxis()->SetTitleFont(42);
   e_comb3_Components2_unfolded__1__3__5__1->GetZaxis()->SetLabelFont(42);
   e_comb3_Components2_unfolded__1__3__5__1->GetZaxis()->SetLabelSize(0.035);
   e_comb3_Components2_unfolded__1__3__5__1->GetZaxis()->SetTitleSize(0.035);
   e_comb3_Components2_unfolded__1__3__5__1->GetZaxis()->SetTitleFont(42);
   e_comb3_Components2_unfolded__1__3__5__1->Draw("");
   
   ptstats = new TPaveStats(0.3606322,0.751046,0.5617816,0.9100418,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("genSignal__2");
   text->SetTextSize(0.03656903);
   text = ptstats->AddText("Entries = 229809 ");
   text = ptstats->AddText("Mean  = 0.02772");
   text = ptstats->AddText("RMS   = 0.4497");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   ptstats = new TPaveStats(0.3775168,0.8085809,0.5788591,0.8415842,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("genSignal__2__4");
   text->SetTextSize(0.007590759);
   text = ptstats->AddText("Entries = 229809 ");
   text = ptstats->AddText("Mean  = 0.02772");
   text = ptstats->AddText("RMS   = 0.4497");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   ptstats = new TPaveStats(0.3775168,0.8085809,0.5788591,0.8415842,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("genSignal__2__4__6");
   text->SetTextSize(0.007590759);
   text = ptstats->AddText("Entries = 229809 ");
   text = ptstats->AddText("Mean  = 0.02772");
   text = ptstats->AddText("RMS   = 0.4497");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   TH1D *genSignal__2__4__6__2 = new TH1D("genSignal__2__4__6__2","Default_allW: cos(#theta)",10,-1,1);
   genSignal__2__4__6__2->SetBinContent(1,542.9177);
   genSignal__2__4__6__2->SetBinContent(2,1436.394);
   genSignal__2__4__6__2->SetBinContent(3,2193.243);
   genSignal__2__4__6__2->SetBinContent(4,2750.222);
   genSignal__2__4__6__2->SetBinContent(5,3090.919);
   genSignal__2__4__6__2->SetBinContent(6,3193.526);
   genSignal__2__4__6__2->SetBinContent(7,3040.707);
   genSignal__2__4__6__2->SetBinContent(8,2516.767);
   genSignal__2__4__6__2->SetBinContent(9,1756.554);
   genSignal__2__4__6__2->SetBinContent(10,658.3411);
   genSignal__2__4__6__2->SetBinError(1,18.50227);
   genSignal__2__4__6__2->SetBinError(2,31.22065);
   genSignal__2__4__6__2->SetBinError(3,38.81437);
   genSignal__2__4__6__2->SetBinError(4,43.10006);
   genSignal__2__4__6__2->SetBinError(5,45.19815);
   genSignal__2__4__6__2->SetBinError(6,45.7306);
   genSignal__2__4__6__2->SetBinError(7,44.38019);
   genSignal__2__4__6__2->SetBinError(8,40.18998);
   genSignal__2__4__6__2->SetBinError(9,33.40265);
   genSignal__2__4__6__2->SetBinError(10,20.39917);
   genSignal__2__4__6__2->SetMinimum(-31.38087);
   genSignal__2__4__6__2->SetMaximum(12050.21);
   genSignal__2__4__6__2->SetEntries(229809);
   genSignal__2__4__6__2->SetDirectory(0);
   
   ptstats = new TPaveStats(0.3775168,0.8085809,0.5788591,0.8415842,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("genSignal__2__4__6");
   text->SetTextSize(0.007590759);
   text = ptstats->AddText("Entries = 229809 ");
   text = ptstats->AddText("Mean  = 0.02772");
   text = ptstats->AddText("RMS   = 0.4497");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   genSignal__2__4__6__2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(genSignal__2__4__6__2);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffcc66");
   genSignal__2__4__6__2->SetLineColor(ci);
   genSignal__2__4__6__2->SetLineWidth(2);

   ci = TColor::GetColor("#ffcc66");
   genSignal__2__4__6__2->SetMarkerColor(ci);
   genSignal__2__4__6__2->SetMarkerStyle(22);
   genSignal__2__4__6__2->GetXaxis()->SetTitle(" cos(#theta)_{gen}");
   genSignal__2__4__6__2->GetXaxis()->SetLabelFont(42);
   genSignal__2__4__6__2->GetXaxis()->SetLabelSize(0.035);
   genSignal__2__4__6__2->GetXaxis()->SetTitleSize(0.035);
   genSignal__2__4__6__2->GetXaxis()->SetTitleFont(42);
   genSignal__2__4__6__2->GetYaxis()->SetLabelFont(42);
   genSignal__2__4__6__2->GetYaxis()->SetLabelSize(0.035);
   genSignal__2__4__6__2->GetYaxis()->SetTitleSize(0.035);
   genSignal__2__4__6__2->GetYaxis()->SetTitleFont(42);
   genSignal__2__4__6__2->GetZaxis()->SetLabelFont(42);
   genSignal__2__4__6__2->GetZaxis()->SetLabelSize(0.035);
   genSignal__2__4__6__2->GetZaxis()->SetTitleSize(0.035);
   genSignal__2__4__6__2->GetZaxis()->SetTitleFont(42);
   genSignal__2__4__6__2->Draw("sames");
   
   ptstats = new TPaveStats(0.3850575,0.7615063,0.5862069,0.9205021,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID");
   text->SetTextSize(0.03656903);
   text = ptstats->AddText("Entries = 10     ");
   text = ptstats->AddText("Mean  = -0.03019");
   text = ptstats->AddText("RMS   = 0.5337");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   ptstats = new TPaveStats(0.4066092,0.7635983,0.6077586,0.9225941,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID");
   text->SetTextSize(0.03656903);
   text = ptstats->AddText("Entries = 10     ");
   text = ptstats->AddText("Mean  = -0.03019");
   text = ptstats->AddText("RMS   = 0.5337");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   ptstats = new TPaveStats(0.4066092,0.7635983,0.6077586,0.9225941,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID");
   text->SetTextSize(0.03656903);
   text = ptstats->AddText("Entries = 10     ");
   text = ptstats->AddText("Mean  = -0.03019");
   text = ptstats->AddText("RMS   = 0.5337");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   Double_t xAxis1[11] = {-1, -0.8, -0.6, -0.4, -0.2, 0, 0.2, 0.4, 0.6, 0.8, 1}; 
   
   TH1D *CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID = new TH1D("CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID","tmpCombinedID",10, xAxis1);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetBinContent(1,1721.897);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetBinContent(2,2003.166);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetBinContent(3,2398.688);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetBinContent(4,2563.051);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetBinContent(5,2527.905);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetBinContent(6,2404.493);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetBinContent(7,2233.09);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetBinContent(8,1976.715);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetBinContent(9,1731.625);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetBinContent(10,1404.651);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetMinimum(-31.38087);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetMaximum(12050.21);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetEntries(10);
   
   ptstats = new TPaveStats(0.4066092,0.7635983,0.6077586,0.9225941,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID");
   text->SetTextSize(0.03656903);
   text = ptstats->AddText("Entries = 10     ");
   text = ptstats->AddText("Mean  = -0.03019");
   text = ptstats->AddText("RMS   = 0.5337");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetLineColor(30);
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->SetLineWidth(3);
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
   CombinedChi2Syst_uncorrelated_7TeV_comb_signaltmpCombinedID->Draw("sames");
   
   ptstats = new TPaveStats(0.3477011,0.7803347,0.5488506,0.9393305,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("e_comb3_Components2_subtracted");
   text->SetTextSize(0.03656903);
   text = ptstats->AddText("Entries = 20940  ");
   text = ptstats->AddText("Mean  = -0.04902");
   text = ptstats->AddText("RMS   = 0.5245");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   ptstats = new TPaveStats(0.3333333,0.7782427,0.5344828,0.9372385,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("e_comb3_Components2_subtracted");
   text->SetTextSize(0.03656903);
   text = ptstats->AddText("Entries = 20940  ");
   text = ptstats->AddText("Mean  = -0.04902");
   text = ptstats->AddText("RMS   = 0.5245");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   ptstats = new TPaveStats(0.3333333,0.7782427,0.5344828,0.9372385,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("e_comb3_Components2_subtracted");
   text->SetTextSize(0.03656903);
   text = ptstats->AddText("Entries = 20940  ");
   text = ptstats->AddText("Mean  = -0.04902");
   text = ptstats->AddText("RMS   = 0.5245");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   TH1D *e_comb3_Components2_subtracted = new TH1D("e_comb3_Components2_subtracted","Default_allW: cos(#theta)",10,-1,1);
   e_comb3_Components2_subtracted->SetBinContent(1,1840.885);
   e_comb3_Components2_subtracted->SetBinContent(2,1936.343);
   e_comb3_Components2_subtracted->SetBinContent(3,2333.263);
   e_comb3_Components2_subtracted->SetBinContent(4,2612.635);
   e_comb3_Components2_subtracted->SetBinContent(5,2582.631);
   e_comb3_Components2_subtracted->SetBinContent(6,2431.221);
   e_comb3_Components2_subtracted->SetBinContent(7,2357.242);
   e_comb3_Components2_subtracted->SetBinContent(8,1909.785);
   e_comb3_Components2_subtracted->SetBinContent(9,1769.066);
   e_comb3_Components2_subtracted->SetBinContent(10,1167.622);
   e_comb3_Components2_subtracted->SetBinError(1,69.55573);
   e_comb3_Components2_subtracted->SetBinError(2,68.55655);
   e_comb3_Components2_subtracted->SetBinError(3,72.82857);
   e_comb3_Components2_subtracted->SetBinError(4,74.77968);
   e_comb3_Components2_subtracted->SetBinError(5,74.68601);
   e_comb3_Components2_subtracted->SetBinError(6,74.1485);
   e_comb3_Components2_subtracted->SetBinError(7,73.82412);
   e_comb3_Components2_subtracted->SetBinError(8,72.80797);
   e_comb3_Components2_subtracted->SetBinError(9,75.34587);
   e_comb3_Components2_subtracted->SetBinError(10,81.265);
   e_comb3_Components2_subtracted->SetMinimum(-31.38087);
   e_comb3_Components2_subtracted->SetMaximum(12050.21);
   e_comb3_Components2_subtracted->SetEntries(20940);
   
   ptstats = new TPaveStats(0.3333333,0.7782427,0.5344828,0.9372385,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("e_comb3_Components2_subtracted");
   text->SetTextSize(0.03656903);
   text = ptstats->AddText("Entries = 20940  ");
   text = ptstats->AddText("Mean  = -0.04902");
   text = ptstats->AddText("RMS   = 0.5245");
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
   
   ptstats = new TPaveStats(0.4382184,0.7656904,0.6393678,0.9246862,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("component_2_meas");
   text->SetTextSize(0.03656903);
   text = ptstats->AddText("Entries = 6593   ");
   text = ptstats->AddText("Mean  =  0.568");
   text = ptstats->AddText("RMS   = 0.3488");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   TH1D *component_2_meas = new TH1D("component_2_meas","e_comb3_Components2SingleTopR",10,-1,1);
   component_2_meas->SetBinContent(1,4.157853);
   component_2_meas->SetBinContent(2,80.70968);
   component_2_meas->SetBinContent(3,311.9374);
   component_2_meas->SetBinContent(4,747.0455);
   component_2_meas->SetBinContent(5,1421.026);
   component_2_meas->SetBinContent(6,2357.526);
   component_2_meas->SetBinContent(7,3593.229);
   component_2_meas->SetBinContent(8,5006.489);
   component_2_meas->SetBinContent(9,6933.101);
   component_2_meas->SetBinContent(10,10632.56);
   component_2_meas->SetBinError(1,0.1458289);
   component_2_meas->SetBinError(2,1.803412);
   component_2_meas->SetBinError(3,5.674872);
   component_2_meas->SetBinError(4,12.02353);
   component_2_meas->SetBinError(5,21.33625);
   component_2_meas->SetBinError(6,34.69742);
   component_2_meas->SetBinError(7,53.92391);
   component_2_meas->SetBinError(8,82.39351);
   component_2_meas->SetBinError(9,136.2103);
   component_2_meas->SetBinError(10,341.3101);
   component_2_meas->SetMinimum(-31.38087);
   component_2_meas->SetMaximum(12050.21);
   component_2_meas->SetEntries(6593.264);
   
   ptstats = new TPaveStats(0.4382184,0.7656904,0.6393678,0.9246862,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("component_2_meas");
   text->SetTextSize(0.03656903);
   text = ptstats->AddText("Entries = 6593   ");
   text = ptstats->AddText("Mean  =  0.568");
   text = ptstats->AddText("RMS   = 0.3488");
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
   component_2_meas->Draw("sames");
   
   TLegend *leg = new TLegend(0.2583893,0.7244224,0.6644295,0.9471947,NULL,"brNDC");
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
   entry=leg->AddEntry("NULL","F_{R} = 1, F_{0} = F_{L} = 0","lpf");
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
