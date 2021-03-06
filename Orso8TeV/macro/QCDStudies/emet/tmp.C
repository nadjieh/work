{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Oct 27 17:40:10 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",67,53,700,502);
   Canvas_1->Range(-1.25,-0.01634426,1.25,0.1470983);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *Default_DefcosTheta__1 = new TH1D("Default_DefcosTheta__1","Default_Def: cos(#theta)",100,-1,1);
   Default_DefcosTheta__1->SetBinContent(2,0.02631579);
   Default_DefcosTheta__1->SetBinContent(3,0.05263158);
   Default_DefcosTheta__1->SetBinContent(5,0.02631579);
   Default_DefcosTheta__1->SetBinContent(13,0.02631579);
   Default_DefcosTheta__1->SetBinContent(17,0.02631579);
   Default_DefcosTheta__1->SetBinContent(21,0.02631579);
   Default_DefcosTheta__1->SetBinContent(25,0.05263158);
   Default_DefcosTheta__1->SetBinContent(26,0.02631579);
   Default_DefcosTheta__1->SetBinContent(31,0.02631579);
   Default_DefcosTheta__1->SetBinContent(36,0.02631579);
   Default_DefcosTheta__1->SetBinContent(43,0.02631579);
   Default_DefcosTheta__1->SetBinContent(46,0.02631579);
   Default_DefcosTheta__1->SetBinContent(47,0.02631579);
   Default_DefcosTheta__1->SetBinContent(48,0.02631579);
   Default_DefcosTheta__1->SetBinContent(54,0.02631579);
   Default_DefcosTheta__1->SetBinContent(60,0.02631579);
   Default_DefcosTheta__1->SetBinContent(64,0.02631579);
   Default_DefcosTheta__1->SetBinContent(69,0.02631579);
   Default_DefcosTheta__1->SetBinContent(75,0.07894737);
   Default_DefcosTheta__1->SetBinContent(76,0.02631579);
   Default_DefcosTheta__1->SetBinContent(78,0.02631579);
   Default_DefcosTheta__1->SetBinContent(82,0.02631579);
   Default_DefcosTheta__1->SetBinContent(83,0.05263158);
   Default_DefcosTheta__1->SetBinContent(85,0.02631579);
   Default_DefcosTheta__1->SetBinContent(87,0.02631579);
   Default_DefcosTheta__1->SetBinContent(92,0.02631579);
   Default_DefcosTheta__1->SetBinContent(93,0.02631579);
   Default_DefcosTheta__1->SetBinContent(94,0.02631579);
   Default_DefcosTheta__1->SetBinContent(95,0.05263158);
   Default_DefcosTheta__1->SetBinContent(96,0.02631579);
   Default_DefcosTheta__1->SetBinContent(99,0.02631579);
   Default_DefcosTheta__1->SetBinContent(100,0.02631579);
   Default_DefcosTheta__1->SetBinError(2,0.02631579);
   Default_DefcosTheta__1->SetBinError(3,0.03721615);
   Default_DefcosTheta__1->SetBinError(5,0.02631579);
   Default_DefcosTheta__1->SetBinError(13,0.02631579);
   Default_DefcosTheta__1->SetBinError(17,0.02631579);
   Default_DefcosTheta__1->SetBinError(21,0.02631579);
   Default_DefcosTheta__1->SetBinError(25,0.03721615);
   Default_DefcosTheta__1->SetBinError(26,0.02631579);
   Default_DefcosTheta__1->SetBinError(31,0.02631579);
   Default_DefcosTheta__1->SetBinError(36,0.02631579);
   Default_DefcosTheta__1->SetBinError(43,0.02631579);
   Default_DefcosTheta__1->SetBinError(46,0.02631579);
   Default_DefcosTheta__1->SetBinError(47,0.02631579);
   Default_DefcosTheta__1->SetBinError(48,0.02631579);
   Default_DefcosTheta__1->SetBinError(54,0.02631579);
   Default_DefcosTheta__1->SetBinError(60,0.02631579);
   Default_DefcosTheta__1->SetBinError(64,0.02631579);
   Default_DefcosTheta__1->SetBinError(69,0.02631579);
   Default_DefcosTheta__1->SetBinError(75,0.04558028);
   Default_DefcosTheta__1->SetBinError(76,0.02631579);
   Default_DefcosTheta__1->SetBinError(78,0.02631579);
   Default_DefcosTheta__1->SetBinError(82,0.02631579);
   Default_DefcosTheta__1->SetBinError(83,0.03721615);
   Default_DefcosTheta__1->SetBinError(85,0.02631579);
   Default_DefcosTheta__1->SetBinError(87,0.02631579);
   Default_DefcosTheta__1->SetBinError(92,0.02631579);
   Default_DefcosTheta__1->SetBinError(93,0.02631579);
   Default_DefcosTheta__1->SetBinError(94,0.02631579);
   Default_DefcosTheta__1->SetBinError(95,0.03721615);
   Default_DefcosTheta__1->SetBinError(96,0.02631579);
   Default_DefcosTheta__1->SetBinError(99,0.02631579);
   Default_DefcosTheta__1->SetBinError(100,0.02631579);
   Default_DefcosTheta__1->SetEntries(38);
   Default_DefcosTheta__1->SetDirectory(0);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Default_DefcosTheta");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 38     ");
   text = ptstats->AddText("Mean  =  0.149");
   text = ptstats->AddText("RMS   = 0.6382");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   Default_DefcosTheta__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(Default_DefcosTheta__1);
   Default_DefcosTheta__1->SetLineColor(2);
   Default_DefcosTheta__1->GetXaxis()->SetTitle("cos(#theta*)");
   Default_DefcosTheta__1->GetXaxis()->SetLabelFont(42);
   Default_DefcosTheta__1->GetXaxis()->SetLabelSize(0.035);
   Default_DefcosTheta__1->GetXaxis()->SetTitleSize(0.035);
   Default_DefcosTheta__1->GetXaxis()->SetTitleFont(42);
   Default_DefcosTheta__1->GetYaxis()->SetLabelFont(42);
   Default_DefcosTheta__1->GetYaxis()->SetLabelSize(0.035);
   Default_DefcosTheta__1->GetYaxis()->SetTitleSize(0.035);
   Default_DefcosTheta__1->GetYaxis()->SetTitleFont(42);
   Default_DefcosTheta__1->GetZaxis()->SetLabelFont(42);
   Default_DefcosTheta__1->GetZaxis()->SetLabelSize(0.035);
   Default_DefcosTheta__1->GetZaxis()->SetTitleSize(0.035);
   Default_DefcosTheta__1->GetZaxis()->SetTitleFont(42);
   Default_DefcosTheta__1->Draw("");
   
   TPaveText *pt = new TPaveText(0.3348276,0.9342405,0.6651724,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("Default_Def: cos(#theta)");
   pt->Draw();
   
   TH1D *Default_DefcosTheta__2 = new TH1D("Default_DefcosTheta__2","Default_Def: cos(#theta)",100,-1,1);
   Default_DefcosTheta__2->SetBinContent(7,0.009090909);
   Default_DefcosTheta__2->SetBinContent(10,0.01818182);
   Default_DefcosTheta__2->SetBinContent(11,0.009090909);
   Default_DefcosTheta__2->SetBinContent(15,0.01818182);
   Default_DefcosTheta__2->SetBinContent(17,0.01818182);
   Default_DefcosTheta__2->SetBinContent(18,0.009090909);
   Default_DefcosTheta__2->SetBinContent(22,0.009090909);
   Default_DefcosTheta__2->SetBinContent(23,0.01818182);
   Default_DefcosTheta__2->SetBinContent(26,0.01818182);
   Default_DefcosTheta__2->SetBinContent(29,0.009090909);
   Default_DefcosTheta__2->SetBinContent(30,0.01818182);
   Default_DefcosTheta__2->SetBinContent(31,0.009090909);
   Default_DefcosTheta__2->SetBinContent(33,0.009090909);
   Default_DefcosTheta__2->SetBinContent(34,0.02727273);
   Default_DefcosTheta__2->SetBinContent(37,0.009090909);
   Default_DefcosTheta__2->SetBinContent(38,0.009090909);
   Default_DefcosTheta__2->SetBinContent(39,0.009090909);
   Default_DefcosTheta__2->SetBinContent(40,0.009090909);
   Default_DefcosTheta__2->SetBinContent(41,0.009090909);
   Default_DefcosTheta__2->SetBinContent(42,0.009090909);
   Default_DefcosTheta__2->SetBinContent(43,0.009090909);
   Default_DefcosTheta__2->SetBinContent(44,0.009090909);
   Default_DefcosTheta__2->SetBinContent(45,0.01818182);
   Default_DefcosTheta__2->SetBinContent(46,0.01818182);
   Default_DefcosTheta__2->SetBinContent(47,0.009090909);
   Default_DefcosTheta__2->SetBinContent(48,0.009090909);
   Default_DefcosTheta__2->SetBinContent(49,0.009090909);
   Default_DefcosTheta__2->SetBinContent(50,0.009090909);
   Default_DefcosTheta__2->SetBinContent(51,0.01818182);
   Default_DefcosTheta__2->SetBinContent(52,0.009090909);
   Default_DefcosTheta__2->SetBinContent(53,0.009090909);
   Default_DefcosTheta__2->SetBinContent(54,0.009090909);
   Default_DefcosTheta__2->SetBinContent(56,0.009090909);
   Default_DefcosTheta__2->SetBinContent(57,0.009090909);
   Default_DefcosTheta__2->SetBinContent(58,0.009090909);
   Default_DefcosTheta__2->SetBinContent(59,0.01818182);
   Default_DefcosTheta__2->SetBinContent(61,0.009090909);
   Default_DefcosTheta__2->SetBinContent(63,0.03636364);
   Default_DefcosTheta__2->SetBinContent(65,0.01818182);
   Default_DefcosTheta__2->SetBinContent(66,0.03636364);
   Default_DefcosTheta__2->SetBinContent(69,0.02727273);
   Default_DefcosTheta__2->SetBinContent(70,0.009090909);
   Default_DefcosTheta__2->SetBinContent(71,0.01818182);
   Default_DefcosTheta__2->SetBinContent(73,0.01818182);
   Default_DefcosTheta__2->SetBinContent(74,0.04545455);
   Default_DefcosTheta__2->SetBinContent(75,0.009090909);
   Default_DefcosTheta__2->SetBinContent(76,0.01818182);
   Default_DefcosTheta__2->SetBinContent(77,0.009090909);
   Default_DefcosTheta__2->SetBinContent(78,0.009090909);
   Default_DefcosTheta__2->SetBinContent(79,0.009090909);
   Default_DefcosTheta__2->SetBinContent(80,0.009090909);
   Default_DefcosTheta__2->SetBinContent(81,0.02727273);
   Default_DefcosTheta__2->SetBinContent(83,0.009090909);
   Default_DefcosTheta__2->SetBinContent(84,0.01818182);
   Default_DefcosTheta__2->SetBinContent(85,0.02727273);
   Default_DefcosTheta__2->SetBinContent(87,0.009090909);
   Default_DefcosTheta__2->SetBinContent(88,0.02727273);
   Default_DefcosTheta__2->SetBinContent(89,0.03636364);
   Default_DefcosTheta__2->SetBinContent(91,0.009090909);
   Default_DefcosTheta__2->SetBinContent(92,0.009090909);
   Default_DefcosTheta__2->SetBinContent(93,0.009090909);
   Default_DefcosTheta__2->SetBinContent(94,0.02727273);
   Default_DefcosTheta__2->SetBinContent(95,0.009090909);
   Default_DefcosTheta__2->SetBinContent(96,0.009090909);
   Default_DefcosTheta__2->SetBinContent(97,0.01818182);
   Default_DefcosTheta__2->SetBinContent(98,0.009090909);
   Default_DefcosTheta__2->SetBinContent(99,0.01818182);
   Default_DefcosTheta__2->SetBinContent(100,0.009090909);
   Default_DefcosTheta__2->SetBinError(7,0.009090909);
   Default_DefcosTheta__2->SetBinError(10,0.01285649);
   Default_DefcosTheta__2->SetBinError(11,0.009090909);
   Default_DefcosTheta__2->SetBinError(15,0.01285649);
   Default_DefcosTheta__2->SetBinError(17,0.01285649);
   Default_DefcosTheta__2->SetBinError(18,0.009090909);
   Default_DefcosTheta__2->SetBinError(22,0.009090909);
   Default_DefcosTheta__2->SetBinError(23,0.01285649);
   Default_DefcosTheta__2->SetBinError(26,0.01285649);
   Default_DefcosTheta__2->SetBinError(29,0.009090909);
   Default_DefcosTheta__2->SetBinError(30,0.01285649);
   Default_DefcosTheta__2->SetBinError(31,0.009090909);
   Default_DefcosTheta__2->SetBinError(33,0.009090909);
   Default_DefcosTheta__2->SetBinError(34,0.01574592);
   Default_DefcosTheta__2->SetBinError(37,0.009090909);
   Default_DefcosTheta__2->SetBinError(38,0.009090909);
   Default_DefcosTheta__2->SetBinError(39,0.009090909);
   Default_DefcosTheta__2->SetBinError(40,0.009090909);
   Default_DefcosTheta__2->SetBinError(41,0.009090909);
   Default_DefcosTheta__2->SetBinError(42,0.009090909);
   Default_DefcosTheta__2->SetBinError(43,0.009090909);
   Default_DefcosTheta__2->SetBinError(44,0.009090909);
   Default_DefcosTheta__2->SetBinError(45,0.01285649);
   Default_DefcosTheta__2->SetBinError(46,0.01285649);
   Default_DefcosTheta__2->SetBinError(47,0.009090909);
   Default_DefcosTheta__2->SetBinError(48,0.009090909);
   Default_DefcosTheta__2->SetBinError(49,0.009090909);
   Default_DefcosTheta__2->SetBinError(50,0.009090909);
   Default_DefcosTheta__2->SetBinError(51,0.01285649);
   Default_DefcosTheta__2->SetBinError(52,0.009090909);
   Default_DefcosTheta__2->SetBinError(53,0.009090909);
   Default_DefcosTheta__2->SetBinError(54,0.009090909);
   Default_DefcosTheta__2->SetBinError(56,0.009090909);
   Default_DefcosTheta__2->SetBinError(57,0.009090909);
   Default_DefcosTheta__2->SetBinError(58,0.009090909);
   Default_DefcosTheta__2->SetBinError(59,0.01285649);
   Default_DefcosTheta__2->SetBinError(61,0.009090909);
   Default_DefcosTheta__2->SetBinError(63,0.01818182);
   Default_DefcosTheta__2->SetBinError(65,0.01285649);
   Default_DefcosTheta__2->SetBinError(66,0.01818182);
   Default_DefcosTheta__2->SetBinError(69,0.01574592);
   Default_DefcosTheta__2->SetBinError(70,0.009090909);
   Default_DefcosTheta__2->SetBinError(71,0.01285649);
   Default_DefcosTheta__2->SetBinError(73,0.01285649);
   Default_DefcosTheta__2->SetBinError(74,0.02032789);
   Default_DefcosTheta__2->SetBinError(75,0.009090909);
   Default_DefcosTheta__2->SetBinError(76,0.01285649);
   Default_DefcosTheta__2->SetBinError(77,0.009090909);
   Default_DefcosTheta__2->SetBinError(78,0.009090909);
   Default_DefcosTheta__2->SetBinError(79,0.009090909);
   Default_DefcosTheta__2->SetBinError(80,0.009090909);
   Default_DefcosTheta__2->SetBinError(81,0.01574592);
   Default_DefcosTheta__2->SetBinError(83,0.009090909);
   Default_DefcosTheta__2->SetBinError(84,0.01285649);
   Default_DefcosTheta__2->SetBinError(85,0.01574592);
   Default_DefcosTheta__2->SetBinError(87,0.009090909);
   Default_DefcosTheta__2->SetBinError(88,0.01574592);
   Default_DefcosTheta__2->SetBinError(89,0.01818182);
   Default_DefcosTheta__2->SetBinError(91,0.009090909);
   Default_DefcosTheta__2->SetBinError(92,0.009090909);
   Default_DefcosTheta__2->SetBinError(93,0.009090909);
   Default_DefcosTheta__2->SetBinError(94,0.01574592);
   Default_DefcosTheta__2->SetBinError(95,0.009090909);
   Default_DefcosTheta__2->SetBinError(96,0.009090909);
   Default_DefcosTheta__2->SetBinError(97,0.01285649);
   Default_DefcosTheta__2->SetBinError(98,0.009090909);
   Default_DefcosTheta__2->SetBinError(99,0.01285649);
   Default_DefcosTheta__2->SetBinError(100,0.009090909);
   Default_DefcosTheta__2->SetEntries(110);
   Default_DefcosTheta__2->SetDirectory(0);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("Default_DefcosTheta");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 110    ");
   text = ptstats->AddText("Mean  = 0.2125");
   text = ptstats->AddText("RMS   = 0.5064");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   Default_DefcosTheta__2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(Default_DefcosTheta__2);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Default_DefcosTheta__2->SetLineColor(ci);
   Default_DefcosTheta__2->GetXaxis()->SetTitle("cos(#theta*)");
   Default_DefcosTheta__2->GetXaxis()->SetLabelFont(42);
   Default_DefcosTheta__2->GetXaxis()->SetLabelSize(0.035);
   Default_DefcosTheta__2->GetXaxis()->SetTitleSize(0.035);
   Default_DefcosTheta__2->GetXaxis()->SetTitleFont(42);
   Default_DefcosTheta__2->GetYaxis()->SetLabelFont(42);
   Default_DefcosTheta__2->GetYaxis()->SetLabelSize(0.035);
   Default_DefcosTheta__2->GetYaxis()->SetTitleSize(0.035);
   Default_DefcosTheta__2->GetYaxis()->SetTitleFont(42);
   Default_DefcosTheta__2->GetZaxis()->SetLabelFont(42);
   Default_DefcosTheta__2->GetZaxis()->SetLabelSize(0.035);
   Default_DefcosTheta__2->GetZaxis()->SetTitleSize(0.035);
   Default_DefcosTheta__2->GetZaxis()->SetTitleFont(42);
   Default_DefcosTheta__2->Draw("sames");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
