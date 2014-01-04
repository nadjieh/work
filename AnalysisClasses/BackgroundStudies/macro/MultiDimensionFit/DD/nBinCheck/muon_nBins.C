{
//=========Macro generated from canvas: c1/c1
//=========  (Sat Jan  4 17:25:22 2014) by ROOT version5.32/00
   TCanvas *c1 = new TCanvas("c1", "c1",231,104,700,502);
   c1->SetHighLightColor(2);
   c1->Range(-14.87774,-0.6907752,135.1934,1.19313);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(2);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerColor(0);
   graph->SetPoint(0,8.929848376,-1.000000015);
   graph->SetPoint(1,109.8759706,1.000000015);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0,120.1);
   Graph_Graph1->SetMinimum(-0.5);
   Graph_Graph1->SetMaximum(1.006329);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("N_{bins} of reconstructed cos(\theta_{l}*)");
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("ap");
   
   TGraphErrors *gre = new TGraphErrors(5);
   gre->SetName("Graph");
   gre->SetTitle("F_{0}");
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,100,0.68911);
   gre->SetPointError(0,0,0.0433257);
   gre->SetPoint(1,50,0.703654);
   gre->SetPointError(1,0,0.0463818);
   gre->SetPoint(2,25,0.716927);
   gre->SetPointError(2,0,0.0488122);
   gre->SetPoint(3,20,0.727137);
   gre->SetPointError(3,0,0.0493051);
   gre->SetPoint(4,9.792636,0.7219062);
   gre->SetPointError(4,0,0.0508874);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","F_{0}",100,1,109);
   Graph_Graph1->SetMinimum(0.6327185);
   Graph_Graph1->SetMaximum(0.7895079);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("Graph");
   gre->SetTitle("F_{L}");
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,99.95392,0.3246675);
   gre->SetPointError(0,0,0.0300998);
   gre->SetPoint(1,49.91225,0.3206951);
   gre->SetPointError(1,0,0.0310553);
   gre->SetPoint(2,24.89141,0.3127504);
   gre->SetPointError(2,0,0.0320635);
   gre->SetPoint(3,19.93039,0.308778);
   gre->SetPointError(3,0,0.032287);
   gre->SetPoint(4,10.43973,0.3048056);
   gre->SetPointError(4,0,0.0330198);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","F_{L}",100,1,109);
   Graph_Graph2->SetMinimum(0.266872);
   Graph_Graph2->SetMaximum(0.3597158);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph2);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(5);
   gre->SetName("Graph");
   gre->SetTitle("F_{R}");
   gre->SetMarkerColor(3);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,100.1696,-0.005040596);
   gre->SetPointError(0,0,0.0196342);
   gre->SetPoint(1,50.12795,-0.01298537);
   gre->SetPointError(1,0,0.0215906);
   gre->SetPoint(2,25.10711,-0.02093014);
   gre->SetPointError(2,0,0.0228529);
   gre->SetPoint(3,20.14608,-0.02887492);
   gre->SetPointError(3,0,0.0230565);
   gre->SetPoint(4,10.00833,-0.02490253);
   gre->SetPointError(4,0,0.0239062);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","F_{R}",100,1,109);
   Graph_Graph3->SetMinimum(-0.0636623);
   Graph_Graph3->SetMaximum(0.0152185);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph3);
   
   gre->Draw("p");
   
   TPaveText *pt = new TPaveText(0.4396552,0.9388186,0.558908,0.9957806,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextColor(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Graph");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.137931,0.1434599,0.4295977,0.2637131,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("Graph","F_{0}","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph","F_{L}","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Graph","F_{R}","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(3);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
