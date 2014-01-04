{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Dec  8 12:17:26 2013) by ROOT version5.32/00
   TCanvas *c1 = new TCanvas("c1", "c1",70,140,700,504);
   c1->Range(-0.081,-0.2310327,0.249,0.08135834);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridx();
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(2);
   graph->SetName("Graph1");
   graph->SetTitle("Graph1");
   graph->SetFillColor(1);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(29);
   graph->SetPoint(0,-1.000000015,1.002100855);
   graph->SetPoint(1,1.000000015,-0.9957983342);
   
   TH1F *Graph_Graph_Graph_Graph1111 = new TH1F("Graph_Graph_Graph_Graph1111","Graph1",100,-1.2,1.2);
   Graph_Graph_Graph_Graph1111->SetMinimum(-0.1997936);
   Graph_Graph_Graph_Graph1111->SetMaximum(0.05011924);
   Graph_Graph_Graph_Graph1111->SetDirectory(0);
   Graph_Graph_Graph_Graph1111->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph1111->SetLineColor(ci);
   Graph_Graph_Graph_Graph1111->GetXaxis()->SetTitle("F_{0}");
   Graph_Graph_Graph_Graph1111->GetXaxis()->SetRange(49,59);
   Graph_Graph_Graph_Graph1111->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph1111->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1111->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph1111->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph1111->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph_Graph_Graph1111->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph1111->GetYaxis()->SetTitle("F_{L}");
   Graph_Graph_Graph_Graph1111->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph1111->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1111->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph1111->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph1111->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph1111->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1111->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph1111->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph1111->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph1111);
   
   graph->Draw("ap");
   
   TEllipse *ellipse = new TEllipse(-0.00164114,0.00519845,0.07678737,0.01533739,0,360,-31.81735);
   ellipse->SetFillColor(2);
   ellipse->SetLineColor(2);
   ellipse->Draw();
   
   graph = new TGraph(1);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,-0.00164114,0.00519845);
   
   TH1F *Graph_Graph_Graph_Graph_Graph1222 = new TH1F("Graph_Graph_Graph_Graph_Graph1222","Graph",100,-0.0687324,0);
   Graph_Graph_Graph_Graph_Graph1222->SetMinimum(0);
   Graph_Graph_Graph_Graph_Graph1222->SetMaximum(0.0065912);
   Graph_Graph_Graph_Graph_Graph1222->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph1222->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph1222->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph1222->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph1222->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph1222->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph1222->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph1222->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph1222->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph1222->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph1222->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph1222->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph1222->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph1222->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph1222->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph_Graph1222);
   
   graph->Draw("p");
   
   graph = new TGraph(1);
   graph->SetName("Graph2");
   graph->SetTitle("Graph2");
   graph->SetFillColor(1);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(29);
   graph->SetPoint(0,0,0);
   
   TH1F *Graph_Graph_Graph_Graph2333 = new TH1F("Graph_Graph_Graph_Graph2333","Graph2",100,0,1.1);
   Graph_Graph_Graph_Graph2333->SetMinimum(0);
   Graph_Graph_Graph_Graph2333->SetMaximum(1.1);
   Graph_Graph_Graph_Graph2333->SetDirectory(0);
   Graph_Graph_Graph_Graph2333->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph2333->SetLineColor(ci);
   Graph_Graph_Graph_Graph2333->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph2333->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph2333->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph2333->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph2333->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph2333->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph2333->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph2333->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph2333->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph2333->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph2333->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph2333->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph2333);
   
   graph->Draw("p");
   
   TPaveText *pt = new TPaveText(0.4310345,0.9390756,0.5675287,0.9957983,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextColor(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Graph1");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
