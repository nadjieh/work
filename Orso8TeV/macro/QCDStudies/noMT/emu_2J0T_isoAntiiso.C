{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Nov 26 17:04:50 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",283,118,700,532);
   Canvas_1->Range(-1.25,-0.0375,1.25,0.3375);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *Default_DefcosTheta__1__1__1 = new TH1D("Default_DefcosTheta__1__1__1","anti-isolated: mu+jets",20,-1,1);
   Default_DefcosTheta__1__1__1->SetBinContent(1,0.0003074164);
   Default_DefcosTheta__1__1__1->SetBinContent(2,0.01145894);
   Default_DefcosTheta__1__1__1->SetBinContent(3,0.01783015);
   Default_DefcosTheta__1__1__1->SetBinContent(4,0.03811963);
   Default_DefcosTheta__1__1__1->SetBinContent(5,0.04273087);
   Default_DefcosTheta__1__1__1->SetBinContent(6,0.04857178);
   Default_DefcosTheta__1__1__1->SetBinContent(7,0.04611245);
   Default_DefcosTheta__1__1__1->SetBinContent(8,0.05487381);
   Default_DefcosTheta__1__1__1->SetBinContent(9,0.04857178);
   Default_DefcosTheta__1__1__1->SetBinContent(10,0.05149223);
   Default_DefcosTheta__1__1__1->SetBinContent(11,0.05733315);
   Default_DefcosTheta__1__1__1->SetBinContent(12,0.05472011);
   Default_DefcosTheta__1__1__1->SetBinContent(13,0.05933135);
   Default_DefcosTheta__1__1__1->SetBinContent(14,0.06179068);
   Default_DefcosTheta__1__1__1->SetBinContent(15,0.05963877);
   Default_DefcosTheta__1__1__1->SetBinContent(16,0.06532597);
   Default_DefcosTheta__1__1__1->SetBinContent(17,0.07024464);
   Default_DefcosTheta__1__1__1->SetBinContent(18,0.06332777);
   Default_DefcosTheta__1__1__1->SetBinContent(19,0.06872292);
   Default_DefcosTheta__1__1__1->SetBinContent(20,0.07949556);
   Default_DefcosTheta__1__1__1->SetBinError(1,0.0002173762);
   Default_DefcosTheta__1__1__1->SetBinError(2,0.0005542027);
   Default_DefcosTheta__1__1__1->SetBinError(3,0.001655487);
   Default_DefcosTheta__1__1__1->SetBinError(4,0.002420599);
   Default_DefcosTheta__1__1__1->SetBinError(5,0.002562828);
   Default_DefcosTheta__1__1__1->SetBinError(6,0.002732377);
   Default_DefcosTheta__1__1__1->SetBinError(7,0.002662304);
   Default_DefcosTheta__1__1__1->SetBinError(8,0.002904231);
   Default_DefcosTheta__1__1__1->SetBinError(9,0.002732377);
   Default_DefcosTheta__1__1__1->SetBinError(10,0.002813322);
   Default_DefcosTheta__1__1__1->SetBinError(11,0.002968598);
   Default_DefcosTheta__1__1__1->SetBinError(12,0.00290016);
   Default_DefcosTheta__1__1__1->SetBinError(13,0.003019886);
   Default_DefcosTheta__1__1__1->SetBinError(14,0.003081839);
   Default_DefcosTheta__1__1__1->SetBinError(15,0.0030277);
   Default_DefcosTheta__1__1__1->SetBinError(16,0.003168775);
   Default_DefcosTheta__1__1__1->SetBinError(17,0.003285905);
   Default_DefcosTheta__1__1__1->SetBinError(18,0.003119935);
   Default_DefcosTheta__1__1__1->SetBinError(19,0.002766747);
   Default_DefcosTheta__1__1__1->SetBinError(20,0.002879722);
   Default_DefcosTheta__1__1__1->SetMinimum(0);
   Default_DefcosTheta__1__1__1->SetMaximum(0.3);
   Default_DefcosTheta__1__1__1->SetEntries(6155);
   Default_DefcosTheta__1__1__1->SetDirectory(0);
   
   TPaveStats *ptstats = new TPaveStats(0.1465517,0.7268908,0.3477011,0.8865546,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Default_DefcosTheta__1__1");
   text->SetTextSize(0.03672269);
   text = ptstats->AddText("Entries = 6155   ");
   text = ptstats->AddText("Mean  = 0.2041");
   text = ptstats->AddText("RMS   = 0.5072");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   Default_DefcosTheta__1__1__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(Default_DefcosTheta__1__1__1);
   Default_DefcosTheta__1__1__1->SetLineColor(2);
   Default_DefcosTheta__1__1__1->SetLineWidth(2);
   Default_DefcosTheta__1__1__1->GetXaxis()->SetTitle("cos(#theta*)");
   Default_DefcosTheta__1__1__1->GetXaxis()->SetLabelFont(42);
   Default_DefcosTheta__1__1__1->GetXaxis()->SetLabelSize(0.035);
   Default_DefcosTheta__1__1__1->GetXaxis()->SetTitleSize(0.035);
   Default_DefcosTheta__1__1__1->GetXaxis()->SetTitleFont(42);
   Default_DefcosTheta__1__1__1->GetYaxis()->SetLabelFont(42);
   Default_DefcosTheta__1__1__1->GetYaxis()->SetLabelSize(0.035);
   Default_DefcosTheta__1__1__1->GetYaxis()->SetTitleSize(0.035);
   Default_DefcosTheta__1__1__1->GetYaxis()->SetTitleFont(42);
   Default_DefcosTheta__1__1__1->GetZaxis()->SetLabelFont(42);
   Default_DefcosTheta__1__1__1->GetZaxis()->SetLabelSize(0.035);
   Default_DefcosTheta__1__1__1->GetZaxis()->SetTitleSize(0.035);
   Default_DefcosTheta__1__1__1->GetZaxis()->SetTitleFont(42);
   Default_DefcosTheta__1__1__1->Draw("");
   
   ptstats = new TPaveStats(0.1436782,0.7289916,0.3448276,0.8886555,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("Default_DefcosTheta");
   text->SetTextSize(0.03672269);
   text = ptstats->AddText("Entries = 281    ");
   text = ptstats->AddText("Mean  = 0.1806");
   text = ptstats->AddText("RMS   = 0.5033");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   ptstats = new TPaveStats(0.1436782,0.7289916,0.3448276,0.8886555,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000066");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("Entries = 2003   ");
   text = ptstats->AddText("Mean  = 0.4959");
   text = ptstats->AddText("RMS   = 0.4742");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   TH1D *Default_DefcosTheta__4__2__2 = new TH1D("Default_DefcosTheta__4__2__2","anti-isolated: e+jets",20,-1,1);
   Default_DefcosTheta__4__2__2->SetBinContent(1,0.009995002);
   Default_DefcosTheta__4__2__2->SetBinContent(2,0.0129935);
   Default_DefcosTheta__4__2__2->SetBinContent(3,0.0129935);
   Default_DefcosTheta__4__2__2->SetBinContent(4,0.007996002);
   Default_DefcosTheta__4__2__2->SetBinContent(5,0.01349325);
   Default_DefcosTheta__4__2__2->SetBinContent(6,0.0149925);
   Default_DefcosTheta__4__2__2->SetBinContent(7,0.01449275);
   Default_DefcosTheta__4__2__2->SetBinContent(8,0.02098951);
   Default_DefcosTheta__4__2__2->SetBinContent(9,0.02398801);
   Default_DefcosTheta__4__2__2->SetBinContent(10,0.02698651);
   Default_DefcosTheta__4__2__2->SetBinContent(11,0.02698651);
   Default_DefcosTheta__4__2__2->SetBinContent(12,0.02498751);
   Default_DefcosTheta__4__2__2->SetBinContent(13,0.04897551);
   Default_DefcosTheta__4__2__2->SetBinContent(14,0.05247376);
   Default_DefcosTheta__4__2__2->SetBinContent(15,0.07246377);
   Default_DefcosTheta__4__2__2->SetBinContent(16,0.08045977);
   Default_DefcosTheta__4__2__2->SetBinContent(17,0.07396302);
   Default_DefcosTheta__4__2__2->SetBinContent(18,0.115942);
   Default_DefcosTheta__4__2__2->SetBinContent(19,0.143928);
   Default_DefcosTheta__4__2__2->SetBinContent(20,0.2008996);
   Default_DefcosTheta__4__2__2->SetBinContent(21,0.0009995002);
   Default_DefcosTheta__4__2__2->SetBinError(1,0.002234951);
   Default_DefcosTheta__4__2__2->SetBinError(2,0.002548236);
   Default_DefcosTheta__4__2__2->SetBinError(3,0.002548236);
   Default_DefcosTheta__4__2__2->SetBinError(4,0.001999);
   Default_DefcosTheta__4__2__2->SetBinError(5,0.002596778);
   Default_DefcosTheta__4__2__2->SetBinError(6,0.002737244);
   Default_DefcosTheta__4__2__2->SetBinError(7,0.002691237);
   Default_DefcosTheta__4__2__2->SetBinError(8,0.003238751);
   Default_DefcosTheta__4__2__2->SetBinError(9,0.00346237);
   Default_DefcosTheta__4__2__2->SetBinError(10,0.003672398);
   Default_DefcosTheta__4__2__2->SetBinError(11,0.003672398);
   Default_DefcosTheta__4__2__2->SetBinError(12,0.003533767);
   Default_DefcosTheta__4__2__2->SetBinError(13,0.004947274);
   Default_DefcosTheta__4__2__2->SetBinError(14,0.005120915);
   Default_DefcosTheta__4__2__2->SetBinError(15,0.006017788);
   Default_DefcosTheta__4__2__2->SetBinError(16,0.006341118);
   Default_DefcosTheta__4__2__2->SetBinError(17,0.006079723);
   Default_DefcosTheta__4__2__2->SetBinError(18,0.007611967);
   Default_DefcosTheta__4__2__2->SetBinError(19,0.008481041);
   Default_DefcosTheta__4__2__2->SetBinError(20,0.01001996);
   Default_DefcosTheta__4__2__2->SetBinError(21,0.0007067534);
   Default_DefcosTheta__4__2__2->SetEntries(2003);
   Default_DefcosTheta__4__2__2->SetDirectory(0);
   
   ptstats = new TPaveStats(0.1436782,0.7289916,0.3448276,0.8886555,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);

   ci = TColor::GetColor("#000066");
   ptstats->SetTextColor(ci);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("Entries = 2003   ");
   text = ptstats->AddText("Mean  = 0.4959");
   text = ptstats->AddText("RMS   = 0.4742");
   ptstats->SetOptStat(1110);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   Default_DefcosTheta__4__2__2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(Default_DefcosTheta__4__2__2);

   ci = TColor::GetColor("#000099");
   Default_DefcosTheta__4__2__2->SetLineColor(ci);
   Default_DefcosTheta__4__2__2->SetLineWidth(2);
   Default_DefcosTheta__4__2__2->GetXaxis()->SetTitle("cos(#theta*)");
   Default_DefcosTheta__4__2__2->GetXaxis()->SetLabelFont(42);
   Default_DefcosTheta__4__2__2->GetXaxis()->SetLabelSize(0.035);
   Default_DefcosTheta__4__2__2->GetXaxis()->SetTitleSize(0.035);
   Default_DefcosTheta__4__2__2->GetXaxis()->SetTitleFont(42);
   Default_DefcosTheta__4__2__2->GetYaxis()->SetLabelFont(42);
   Default_DefcosTheta__4__2__2->GetYaxis()->SetLabelSize(0.035);
   Default_DefcosTheta__4__2__2->GetYaxis()->SetTitleSize(0.035);
   Default_DefcosTheta__4__2__2->GetYaxis()->SetTitleFont(42);
   Default_DefcosTheta__4__2__2->GetZaxis()->SetLabelFont(42);
   Default_DefcosTheta__4__2__2->GetZaxis()->SetLabelSize(0.035);
   Default_DefcosTheta__4__2__2->GetZaxis()->SetTitleSize(0.035);
   Default_DefcosTheta__4__2__2->GetZaxis()->SetTitleFont(42);
   Default_DefcosTheta__4__2__2->Draw("sames");
   
   TPaveText *pt = new TPaveText(0.1350575,0.7289916,0.5100575,0.7836134,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("anti-isolated: mu+jets");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.1264368,0.5210084,0.5301724,0.8907563,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Default_DefcosTheta__1__1","anti-isolated: mu+jets","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Default_DefcosTheta__4__2","anti-isolated: e+jets","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   leg->Draw();
      tex = new TLatex(-0.8979885,0.2776261,"2J0T");
   tex->SetTextColor(8);
   tex->SetLineColor(8);
   tex->SetLineWidth(2);
   tex->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
   Canvas_1->ToggleToolBar();
}
