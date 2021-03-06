{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Fri Nov 29 15:44:58 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",67,53,700,502);
   Canvas_1->Range(-24.77558,-0.01519789,225.1346,0.1348813);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *lptw_Lepton_Pt__1 = new TH1D("lptw_Lepton_Pt__1","2J0T reweighted",50,0,200);
   lptw_Lepton_Pt__1->SetBinContent(8,0.03651931);
   lptw_Lepton_Pt__1->SetBinContent(9,0.08047353);
   lptw_Lepton_Pt__1->SetBinContent(10,0.0852552);
   lptw_Lepton_Pt__1->SetBinContent(11,0.08773986);
   lptw_Lepton_Pt__1->SetBinContent(12,0.08301191);
   lptw_Lepton_Pt__1->SetBinContent(13,0.06655346);
   lptw_Lepton_Pt__1->SetBinContent(14,0.06305164);
   lptw_Lepton_Pt__1->SetBinContent(15,0.05745847);
   lptw_Lepton_Pt__1->SetBinContent(16,0.05112803);
   lptw_Lepton_Pt__1->SetBinContent(17,0.04787228);
   lptw_Lepton_Pt__1->SetBinContent(18,0.03802187);
   lptw_Lepton_Pt__1->SetBinContent(19,0.03101371);
   lptw_Lepton_Pt__1->SetBinContent(20,0.02781441);
   lptw_Lepton_Pt__1->SetBinContent(21,0.02550892);
   lptw_Lepton_Pt__1->SetBinContent(22,0.0251245);
   lptw_Lepton_Pt__1->SetBinContent(23,0.02154634);
   lptw_Lepton_Pt__1->SetBinContent(24,0.01930748);
   lptw_Lepton_Pt__1->SetBinContent(25,0.01447577);
   lptw_Lepton_Pt__1->SetBinContent(26,0.01517274);
   lptw_Lepton_Pt__1->SetBinContent(27,0.01323095);
   lptw_Lepton_Pt__1->SetBinContent(28,0.01287755);
   lptw_Lepton_Pt__1->SetBinContent(29,0.01152264);
   lptw_Lepton_Pt__1->SetBinContent(30,0.01169495);
   lptw_Lepton_Pt__1->SetBinContent(31,0.007982937);
   lptw_Lepton_Pt__1->SetBinContent(32,0.007694413);
   lptw_Lepton_Pt__1->SetBinContent(33,0.007259392);
   lptw_Lepton_Pt__1->SetBinContent(34,0.006307029);
   lptw_Lepton_Pt__1->SetBinContent(35,0.00526388);
   lptw_Lepton_Pt__1->SetBinContent(36,0.005105572);
   lptw_Lepton_Pt__1->SetBinContent(37,0.004191642);
   lptw_Lepton_Pt__1->SetBinContent(38,0.003973372);
   lptw_Lepton_Pt__1->SetBinContent(39,0.002982019);
   lptw_Lepton_Pt__1->SetBinContent(40,0.002026016);
   lptw_Lepton_Pt__1->SetBinContent(41,0.003335575);
   lptw_Lepton_Pt__1->SetBinContent(42,0.002069331);
   lptw_Lepton_Pt__1->SetBinContent(43,0.001792921);
   lptw_Lepton_Pt__1->SetBinContent(44,0.00373104);
   lptw_Lepton_Pt__1->SetBinContent(45,0.002248899);
   lptw_Lepton_Pt__1->SetBinContent(46,0.001762274);
   lptw_Lepton_Pt__1->SetBinContent(47,0.001508294);
   lptw_Lepton_Pt__1->SetBinContent(48,0.001372169);
   lptw_Lepton_Pt__1->SetBinContent(49,0.001700728);
   lptw_Lepton_Pt__1->SetBinContent(50,0.001316976);
   lptw_Lepton_Pt__1->SetBinContent(51,0.01374598);
   lptw_Lepton_Pt__1->SetMinimum(0);
   lptw_Lepton_Pt__1->SetMaximum(0.12);
   lptw_Lepton_Pt__1->SetEntries(607670);
   lptw_Lepton_Pt__1->SetDirectory(0);
   
   TPaveStats *ptstats = new TPaveStats(0.5431034,0.6308017,0.7442529,0.7911392,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("lptw_Lepton_Pt");
   text->SetTextSize(0.03687764);
   text = ptstats->AddText("Entries = 607670 ");
   text = ptstats->AddText("Mean  =  65.45");
   text = ptstats->AddText("RMS   =  31.96");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   lptw_Lepton_Pt__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(lptw_Lepton_Pt__1);
   lptw_Lepton_Pt__1->SetLineColor(2);
   lptw_Lepton_Pt__1->SetLineWidth(2);
   lptw_Lepton_Pt__1->GetXaxis()->SetTitle("P_{T}");
   lptw_Lepton_Pt__1->GetXaxis()->SetLabelFont(42);
   lptw_Lepton_Pt__1->GetXaxis()->SetLabelSize(0.035);
   lptw_Lepton_Pt__1->GetXaxis()->SetTitleSize(0.035);
   lptw_Lepton_Pt__1->GetXaxis()->SetTitleFont(42);
   lptw_Lepton_Pt__1->GetYaxis()->SetLabelFont(42);
   lptw_Lepton_Pt__1->GetYaxis()->SetLabelSize(0.035);
   lptw_Lepton_Pt__1->GetYaxis()->SetTitleSize(0.035);
   lptw_Lepton_Pt__1->GetYaxis()->SetTitleFont(42);
   lptw_Lepton_Pt__1->GetZaxis()->SetLabelFont(42);
   lptw_Lepton_Pt__1->GetZaxis()->SetLabelSize(0.035);
   lptw_Lepton_Pt__1->GetZaxis()->SetTitleSize(0.035);
   lptw_Lepton_Pt__1->GetZaxis()->SetTitleFont(42);
   lptw_Lepton_Pt__1->Draw("");
   
   TPaveText *pt = new TPaveText(0.5517241,0.6919831,0.8405172,0.7489451,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("2J0T reweighted");
   pt->Draw();
   
   TH1D *allW_Muon_Pt__2 = new TH1D("allW_Muon_Pt__2","2J0T pre-weight",50,0,200);
   allW_Muon_Pt__2->SetBinContent(8,0.04601709);
   allW_Muon_Pt__2->SetBinContent(9,0.09465802);
   allW_Muon_Pt__2->SetBinContent(10,0.09393519);
   allW_Muon_Pt__2->SetBinContent(11,0.09296552);
   allW_Muon_Pt__2->SetBinContent(12,0.0838055);
   allW_Muon_Pt__2->SetBinContent(13,0.07517809);
   allW_Muon_Pt__2->SetBinContent(14,0.06461083);
   allW_Muon_Pt__2->SetBinContent(15,0.05681147);
   allW_Muon_Pt__2->SetBinContent(16,0.05053715);
   allW_Muon_Pt__2->SetBinContent(17,0.0429575);
   allW_Muon_Pt__2->SetBinContent(18,0.03713166);
   allW_Muon_Pt__2->SetBinContent(19,0.03219941);
   allW_Muon_Pt__2->SetBinContent(20,0.028188);
   allW_Muon_Pt__2->SetBinContent(21,0.024835);
   allW_Muon_Pt__2->SetBinContent(22,0.02155287);
   allW_Muon_Pt__2->SetBinContent(23,0.01881757);
   allW_Muon_Pt__2->SetBinContent(24,0.01656943);
   allW_Muon_Pt__2->SetBinContent(25,0.01386073);
   allW_Muon_Pt__2->SetBinContent(26,0.01226004);
   allW_Muon_Pt__2->SetBinContent(27,0.0113625);
   allW_Muon_Pt__2->SetBinContent(28,0.009820755);
   allW_Muon_Pt__2->SetBinContent(29,0.008989583);
   allW_Muon_Pt__2->SetBinContent(30,0.007931534);
   allW_Muon_Pt__2->SetBinContent(31,0.006792241);
   allW_Muon_Pt__2->SetBinContent(32,0.00596457);
   allW_Muon_Pt__2->SetBinContent(33,0.005321085);
   allW_Muon_Pt__2->SetBinContent(34,0.004715416);
   allW_Muon_Pt__2->SetBinContent(35,0.004324562);
   allW_Muon_Pt__2->SetBinContent(36,0.003757544);
   allW_Muon_Pt__2->SetBinContent(37,0.003241254);
   allW_Muon_Pt__2->SetBinContent(38,0.002851551);
   allW_Muon_Pt__2->SetBinContent(39,0.002522808);
   allW_Muon_Pt__2->SetBinContent(40,0.002341341);
   allW_Muon_Pt__2->SetBinContent(41,0.002020355);
   allW_Muon_Pt__2->SetBinContent(42,0.001839025);
   allW_Muon_Pt__2->SetBinContent(43,0.001617933);
   allW_Muon_Pt__2->SetBinContent(44,0.0014451);
   allW_Muon_Pt__2->SetBinContent(45,0.001394939);
   allW_Muon_Pt__2->SetBinContent(46,0.001249924);
   allW_Muon_Pt__2->SetBinContent(47,0.001035411);
   allW_Muon_Pt__2->SetBinContent(48,0.0009478221);
   allW_Muon_Pt__2->SetBinContent(49,0.0008364606);
   allW_Muon_Pt__2->SetBinContent(50,0.0007852173);
   allW_Muon_Pt__2->SetBinContent(51,0.008529107);
   allW_Muon_Pt__2->SetBinError(8,0.0003255062);
   allW_Muon_Pt__2->SetBinError(9,0.0004658316);
   allW_Muon_Pt__2->SetBinError(10,0.0004606755);
   allW_Muon_Pt__2->SetBinError(11,0.0004690161);
   allW_Muon_Pt__2->SetBinError(12,0.0004435605);
   allW_Muon_Pt__2->SetBinError(13,0.0004219448);
   allW_Muon_Pt__2->SetBinError(14,0.0003913675);
   allW_Muon_Pt__2->SetBinError(15,0.0003623151);
   allW_Muon_Pt__2->SetBinError(16,0.0003472963);
   allW_Muon_Pt__2->SetBinError(17,0.0003184037);
   allW_Muon_Pt__2->SetBinError(18,0.0002940513);
   allW_Muon_Pt__2->SetBinError(19,0.000270473);
   allW_Muon_Pt__2->SetBinError(20,0.0002526898);
   allW_Muon_Pt__2->SetBinError(21,0.0002394732);
   allW_Muon_Pt__2->SetBinError(22,0.0002189509);
   allW_Muon_Pt__2->SetBinError(23,0.000207118);
   allW_Muon_Pt__2->SetBinError(24,0.0001912311);
   allW_Muon_Pt__2->SetBinError(25,0.0001754462);
   allW_Muon_Pt__2->SetBinError(26,0.0001644733);
   allW_Muon_Pt__2->SetBinError(27,0.000158647);
   allW_Muon_Pt__2->SetBinError(28,0.0001448309);
   allW_Muon_Pt__2->SetBinError(29,0.0001397689);
   allW_Muon_Pt__2->SetBinError(30,0.0001313839);
   allW_Muon_Pt__2->SetBinError(31,0.0001227045);
   allW_Muon_Pt__2->SetBinError(32,0.0001128465);
   allW_Muon_Pt__2->SetBinError(33,0.0001055608);
   allW_Muon_Pt__2->SetBinError(34,0.0001025521);
   allW_Muon_Pt__2->SetBinError(35,9.563204e-05);
   allW_Muon_Pt__2->SetBinError(36,9.176903e-05);
   allW_Muon_Pt__2->SetBinError(37,8.388303e-05);
   allW_Muon_Pt__2->SetBinError(38,7.862272e-05);
   allW_Muon_Pt__2->SetBinError(39,7.13687e-05);
   allW_Muon_Pt__2->SetBinError(40,6.914227e-05);
   allW_Muon_Pt__2->SetBinError(41,6.671062e-05);
   allW_Muon_Pt__2->SetBinError(42,6.144021e-05);
   allW_Muon_Pt__2->SetBinError(43,5.712379e-05);
   allW_Muon_Pt__2->SetBinError(44,5.515502e-05);
   allW_Muon_Pt__2->SetBinError(45,5.350707e-05);
   allW_Muon_Pt__2->SetBinError(46,5.10577e-05);
   allW_Muon_Pt__2->SetBinError(47,4.589991e-05);
   allW_Muon_Pt__2->SetBinError(48,4.338243e-05);
   allW_Muon_Pt__2->SetBinError(49,4.227793e-05);
   allW_Muon_Pt__2->SetBinError(50,4.034614e-05);
   allW_Muon_Pt__2->SetBinError(51,0.0001290022);
   allW_Muon_Pt__2->SetMinimum(0.07309754);
   allW_Muon_Pt__2->SetMaximum(0.09365304);
   allW_Muon_Pt__2->SetEntries(607670);
   allW_Muon_Pt__2->SetDirectory(0);
   
   ptstats = new TPaveStats(0.5775862,0.6350211,0.7787356,0.7953586,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("allW_Muon_Pt");
   text->SetTextSize(0.03687764);
   text = ptstats->AddText("Entries = 607670 ");
   text = ptstats->AddText("Mean  =  61.65");
   text = ptstats->AddText("RMS   =  29.28");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   allW_Muon_Pt__2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(allW_Muon_Pt__2);
   allW_Muon_Pt__2->SetLineColor(8);
   allW_Muon_Pt__2->SetMarkerStyle(24);
   allW_Muon_Pt__2->GetXaxis()->SetTitle("P_{T}");
   allW_Muon_Pt__2->GetXaxis()->SetLabelFont(42);
   allW_Muon_Pt__2->GetXaxis()->SetLabelSize(0.035);
   allW_Muon_Pt__2->GetXaxis()->SetTitleSize(0.035);
   allW_Muon_Pt__2->GetXaxis()->SetTitleFont(42);
   allW_Muon_Pt__2->GetYaxis()->SetLabelFont(42);
   allW_Muon_Pt__2->GetYaxis()->SetLabelSize(0.035);
   allW_Muon_Pt__2->GetYaxis()->SetTitleSize(0.035);
   allW_Muon_Pt__2->GetYaxis()->SetTitleFont(42);
   allW_Muon_Pt__2->GetZaxis()->SetLabelFont(42);
   allW_Muon_Pt__2->GetZaxis()->SetLabelSize(0.035);
   allW_Muon_Pt__2->GetZaxis()->SetTitleSize(0.035);
   allW_Muon_Pt__2->GetZaxis()->SetTitleFont(42);
   allW_Muon_Pt__2->Draw("sames");
   
   TH1D *allW_Muon_Pt__3 = new TH1D("allW_Muon_Pt__3","2J1T",50,0,200);
   allW_Muon_Pt__3->SetBinContent(8,0.03684851);
   allW_Muon_Pt__3->SetBinContent(9,0.08126712);
   allW_Muon_Pt__3->SetBinContent(10,0.08587112);
   allW_Muon_Pt__3->SetBinContent(11,0.08846798);
   allW_Muon_Pt__3->SetBinContent(12,0.08363395);
   allW_Muon_Pt__3->SetBinContent(13,0.0668849);
   allW_Muon_Pt__3->SetBinContent(14,0.06339796);
   allW_Muon_Pt__3->SetBinContent(15,0.0580089);
   allW_Muon_Pt__3->SetBinContent(16,0.05105948);
   allW_Muon_Pt__3->SetBinContent(17,0.04796816);
   allW_Muon_Pt__3->SetBinContent(18,0.03820638);
   allW_Muon_Pt__3->SetBinContent(19,0.03104634);
   allW_Muon_Pt__3->SetBinContent(20,0.02791589);
   allW_Muon_Pt__3->SetBinContent(21,0.02523611);
   allW_Muon_Pt__3->SetBinContent(22,0.02483628);
   allW_Muon_Pt__3->SetBinContent(23,0.02138936);
   allW_Muon_Pt__3->SetBinContent(24,0.01929263);
   allW_Muon_Pt__3->SetBinContent(25,0.01442156);
   allW_Muon_Pt__3->SetBinContent(26,0.01506763);
   allW_Muon_Pt__3->SetBinContent(27,0.01298723);
   allW_Muon_Pt__3->SetBinContent(28,0.01269547);
   allW_Muon_Pt__3->SetBinContent(29,0.01118639);
   allW_Muon_Pt__3->SetBinContent(30,0.0113241);
   allW_Muon_Pt__3->SetBinContent(31,0.007889254);
   allW_Muon_Pt__3->SetBinContent(32,0.007511423);
   allW_Muon_Pt__3->SetBinContent(33,0.007126251);
   allW_Muon_Pt__3->SetBinContent(34,0.006224868);
   allW_Muon_Pt__3->SetBinContent(35,0.00508851);
   allW_Muon_Pt__3->SetBinContent(36,0.004935152);
   allW_Muon_Pt__3->SetBinContent(37,0.004129649);
   allW_Muon_Pt__3->SetBinContent(38,0.003754984);
   allW_Muon_Pt__3->SetBinContent(39,0.002852124);
   allW_Muon_Pt__3->SetBinContent(40,0.001936596);
   allW_Muon_Pt__3->SetBinContent(41,0.003150106);
   allW_Muon_Pt__3->SetBinContent(42,0.00195236);
   allW_Muon_Pt__3->SetBinContent(43,0.001705345);
   allW_Muon_Pt__3->SetBinContent(44,0.003498728);
   allW_Muon_Pt__3->SetBinContent(45,0.002090241);
   allW_Muon_Pt__3->SetBinContent(46,0.001611652);
   allW_Muon_Pt__3->SetBinContent(47,0.001430271);
   allW_Muon_Pt__3->SetBinContent(48,0.001273167);
   allW_Muon_Pt__3->SetBinContent(49,0.001605218);
   allW_Muon_Pt__3->SetBinContent(50,0.001220649);
   allW_Muon_Pt__3->SetBinContent(51,0.01264784);
   allW_Muon_Pt__3->SetEntries(14217);
   allW_Muon_Pt__3->SetDirectory(0);
   
   ptstats = new TPaveStats(0.6278736,0.6329114,0.829023,0.7932489,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("allW_Muon_Pt");
   text->SetTextSize(0.03687764);
   text = ptstats->AddText("Entries = 14217  ");
   text = ptstats->AddText("Mean  =  65.02");
   text = ptstats->AddText("RMS   =  31.56");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   allW_Muon_Pt__3->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(allW_Muon_Pt__3);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   allW_Muon_Pt__3->SetLineColor(ci);
   allW_Muon_Pt__3->GetXaxis()->SetTitle("P_{T}");
   allW_Muon_Pt__3->GetXaxis()->SetLabelFont(42);
   allW_Muon_Pt__3->GetXaxis()->SetLabelSize(0.035);
   allW_Muon_Pt__3->GetXaxis()->SetTitleSize(0.035);
   allW_Muon_Pt__3->GetXaxis()->SetTitleFont(42);
   allW_Muon_Pt__3->GetYaxis()->SetLabelFont(42);
   allW_Muon_Pt__3->GetYaxis()->SetLabelSize(0.035);
   allW_Muon_Pt__3->GetYaxis()->SetTitleSize(0.035);
   allW_Muon_Pt__3->GetYaxis()->SetTitleFont(42);
   allW_Muon_Pt__3->GetZaxis()->SetLabelFont(42);
   allW_Muon_Pt__3->GetZaxis()->SetLabelSize(0.035);
   allW_Muon_Pt__3->GetZaxis()->SetTitleSize(0.035);
   allW_Muon_Pt__3->GetZaxis()->SetTitleFont(42);
   allW_Muon_Pt__3->Draw("sames");
   
   TLegend *leg = new TLegend(0.5100575,0.6075949,0.8893678,0.8185654,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("lptw_Lepton_Pt","2J0T reweighted","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("allW_Muon_Pt","2J0T pre-weight","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(8);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("allW_Muon_Pt","2J1T","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   leg->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
