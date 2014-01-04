{
//=========Macro generated from canvas: c1/c1
//=========  (Sat Jan  4 18:00:18 2014) by ROOT version5.32/00
   TCanvas *c1 = new TCanvas("c1", "c1",347,53,700,502);
   c1->SetHighLightColor(2);
   c1->Range(-14.87774,-0.3556328,135.1934,1.156241);
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
   graph->SetPoint(0,9,-1);
   graph->SetPoint(1,110,1);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0,120.1);
   Graph_Graph1->SetMinimum(-0.2025316);
   Graph_Graph1->SetMaximum(1.006329);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetTitle("N_{bins} of reconstructed cos(#theta_{l}*)");
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
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
   gre->SetFillColor(1);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,99.83178,0.7256438);
   gre->SetPointError(0,0,0.064632);
   gre->SetPoint(1,49.80808,0.6937477);
   gre->SetPointError(1,0,0.0724043);
   gre->SetPoint(2,24.79623,0.6937477);
   gre->SetPointError(2,0,0.0751807);
   gre->SetPoint(3,19.83698,0.6809893);
   gre->SetPointError(3,0,0.076222);
   gre->SetPoint(4,9.918492,0.6490932);
   gre->SetPointError(4,0,0.079309);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","F_{0}",100,1,109);
   Graph_Graph1->SetMinimum(0.5473605);
   Graph_Graph1->SetMaximum(0.8119305);
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
   gre->SetFillColor(1);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,99.83178,0.2472028);
   gre->SetPointError(0,0,0.0417117);
   gre->SetPoint(1,49.80808,0.2599613);
   gre->SetPointError(1,0,0.0439836);
   gre->SetPoint(2,24.79623,0.2631509);
   gre->SetPointError(2,0,0.0449002);
   gre->SetPoint(3,19.83698,0.2727197);
   gre->SetPointError(3,0,0.0453041);
   gre->SetPoint(4,9.918492,0.2854781);
   gre->SetPointError(4,0,0.0462797);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","F_{L}",100,1,109);
   Graph_Graph2->SetMinimum(0.1916478);
   Graph_Graph2->SetMaximum(0.3418822);
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
   gre->SetFillColor(1);
   gre->SetMarkerColor(8);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,100,0.0288703);
   gre->SetPointError(0,0,0.0321019);
   gre->SetPoint(1,50,0.0471862);
   gre->SetPointError(1,0,0.0372202);
   gre->SetPoint(2,25,0.0469633);
   gre->SetPointError(2,0,0.0390461);
   gre->SetPoint(3,20,0.0488156);
   gre->SetPointError(3,0,0.0396828);
   gre->SetPoint(4,9.918492,0.06858488);
   gre->SetPointError(4,0,0.0417572);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","F_{R}",100,1,109);
   Graph_Graph3->SetMinimum(-0.01455048);
   Graph_Graph3->SetMaximum(0.1212761);
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
   pt->SetLineColor(0);
   pt->SetTextColor(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Graph");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
