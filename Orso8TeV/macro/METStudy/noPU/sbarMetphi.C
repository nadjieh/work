{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Aug 11 15:43:51 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",325,100,363,327);
   Canvas_1->Range(-4,1610.363,4,2488.229);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *hMetPhi = new TH1D("hMetPhi","before correction",20,-3.2,3.2);
   hMetPhi->SetBinContent(1,1759);
   hMetPhi->SetBinContent(2,2332);
   hMetPhi->SetBinContent(3,2303);
   hMetPhi->SetBinContent(4,2333);
   hMetPhi->SetBinContent(5,2322);
   hMetPhi->SetBinContent(6,2367);
   hMetPhi->SetBinContent(7,2321);
   hMetPhi->SetBinContent(8,2309);
   hMetPhi->SetBinContent(9,2350);
   hMetPhi->SetBinContent(10,2256);
   hMetPhi->SetBinContent(11,2209);
   hMetPhi->SetBinContent(12,2087);
   hMetPhi->SetBinContent(13,2086);
   hMetPhi->SetBinContent(14,1985);
   hMetPhi->SetBinContent(15,1956);
   hMetPhi->SetBinContent(16,2027);
   hMetPhi->SetBinContent(17,1921);
   hMetPhi->SetBinContent(18,2045);
   hMetPhi->SetBinContent(19,2028);
   hMetPhi->SetBinContent(20,1730);
   hMetPhi->SetEntries(42726);
   
   TPaveStats *ptstats = new TPaveStats(0.2423398,0.211838,0.4401114,0.3738318,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("hMetPhi");
   text->SetTextSize(0.03725857);
   text = ptstats->AddText("Entries = 42726  ");
   text = ptstats->AddText("Mean  = -0.09804");
   text = ptstats->AddText("RMS   =  1.804");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hMetPhi->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hMetPhi);
   hMetPhi->SetLineColor(2);
   hMetPhi->GetXaxis()->SetLabelFont(42);
   hMetPhi->GetXaxis()->SetLabelSize(0.035);
   hMetPhi->GetXaxis()->SetTitleSize(0.035);
   hMetPhi->GetXaxis()->SetTitleFont(42);
   hMetPhi->GetYaxis()->SetLabelFont(42);
   hMetPhi->GetYaxis()->SetLabelSize(0.035);
   hMetPhi->GetYaxis()->SetTitleSize(0.035);
   hMetPhi->GetYaxis()->SetTitleFont(42);
   hMetPhi->GetZaxis()->SetLabelFont(42);
   hMetPhi->GetZaxis()->SetLabelSize(0.035);
   hMetPhi->GetZaxis()->SetTitleSize(0.035);
   hMetPhi->GetZaxis()->SetTitleFont(42);
   hMetPhi->Draw("");
   
   TH1D *hMetPhi = new TH1D("hMetPhi","after correction",20,-3.2,3.2);
   hMetPhi->SetBinContent(1,1700);
   hMetPhi->SetBinContent(2,2227);
   hMetPhi->SetBinContent(3,2168);
   hMetPhi->SetBinContent(4,2175);
   hMetPhi->SetBinContent(5,2182);
   hMetPhi->SetBinContent(6,2242);
   hMetPhi->SetBinContent(7,2248);
   hMetPhi->SetBinContent(8,2225);
   hMetPhi->SetBinContent(9,2368);
   hMetPhi->SetBinContent(10,2324);
   hMetPhi->SetBinContent(11,2286);
   hMetPhi->SetBinContent(12,2222);
   hMetPhi->SetBinContent(13,2227);
   hMetPhi->SetBinContent(14,2127);
   hMetPhi->SetBinContent(15,2122);
   hMetPhi->SetBinContent(16,2102);
   hMetPhi->SetBinContent(17,2020);
   hMetPhi->SetBinContent(18,2004);
   hMetPhi->SetBinContent(19,2055);
   hMetPhi->SetBinContent(20,1702);
   hMetPhi->SetEntries(42726);
   
   ptstats = new TPaveStats(0.2590529,0.1869159,0.4568245,0.3489097,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("hMetPhi");
   text->SetTextSize(0.03725857);
   text = ptstats->AddText("Entries = 42726  ");
   text = ptstats->AddText("Mean  = -0.03998");
   text = ptstats->AddText("RMS   =  1.789");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   hMetPhi->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(hMetPhi);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   hMetPhi->SetLineColor(ci);
   hMetPhi->GetXaxis()->SetLabelFont(42);
   hMetPhi->GetXaxis()->SetLabelSize(0.035);
   hMetPhi->GetXaxis()->SetTitleSize(0.035);
   hMetPhi->GetXaxis()->SetTitleFont(42);
   hMetPhi->GetYaxis()->SetLabelFont(42);
   hMetPhi->GetYaxis()->SetLabelSize(0.035);
   hMetPhi->GetYaxis()->SetTitleSize(0.035);
   hMetPhi->GetYaxis()->SetTitleFont(42);
   hMetPhi->GetZaxis()->SetLabelFont(42);
   hMetPhi->GetZaxis()->SetLabelSize(0.035);
   hMetPhi->GetZaxis()->SetTitleSize(0.035);
   hMetPhi->GetZaxis()->SetTitleFont(42);
   hMetPhi->Draw("sames");
   
   TPaveText *pt = new TPaveText(0.2089136,0.2554517,0.5961003,0.3115265,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("before correction");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.2172702,0.1869159,0.5961003,0.3956386,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hMetPhi","before correction","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("hMetPhi","after correction","lpf");
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
