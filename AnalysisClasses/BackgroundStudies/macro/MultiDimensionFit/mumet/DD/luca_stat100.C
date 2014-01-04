{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Dec 11 02:35:59 2013) by ROOT version5.32/00
   TCanvas *c1 = new TCanvas("c1", "c1",72,198,700,506);
   c1->Range(-0.096,-0.06691303,0.144,0.0891191);
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
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph111111 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph111111","Graph1",100,-1.2,1.2);
   Graph_Graph_Graph_Graph_Graph_Graph111111->SetMinimum(-0.05130982);
   Graph_Graph_Graph_Graph_Graph_Graph111111->SetMaximum(0.07351589);
   Graph_Graph_Graph_Graph_Graph_Graph111111->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph111111->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph111111->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph111111->GetXaxis()->SetTitle("F_{0}");
   Graph_Graph_Graph_Graph_Graph_Graph111111->GetXaxis()->SetRange(48,55);
   Graph_Graph_Graph_Graph_Graph_Graph111111->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph111111->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph111111->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph111111->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph_Graph_Graph111111->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph_Graph_Graph_Graph_Graph111111->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph111111->GetYaxis()->SetTitle("F_{L}");
   Graph_Graph_Graph_Graph_Graph_Graph111111->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph_Graph_Graph111111->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph111111->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph111111->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph_Graph_Graph111111->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph111111->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph111111->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph111111->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph111111->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph111111);
   
   graph->Draw("ap");
   
   TEllipse *ellipse = new TEllipse(0.0250273,0.0159374,0.07544334,0.01510569,0,360,-31.74588);
   ellipse->SetFillColor(2);
   ellipse->SetLineColor(2);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.02468966,0.01599944,0.00862069,0.02611417,0,360,42.31562);

   ci = TColor::GetColor("#006600");
   ellipse->SetFillColor(ci);
   ellipse->SetFillStyle(0);

   ci = TColor::GetColor("#006600");
   ellipse->SetLineColor(ci);
   ellipse->SetLineWidth(2);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.02468966,0.01599944,0.07931035,0.01860634,0,360,-33.29706);
   ellipse->SetFillStyle(0);
   ellipse->SetLineWidth(2);
   ellipse->Draw();
   
   graph = new TGraph(1);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,0.0250273,0.0159374);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph_Graph122222 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph_Graph122222","Graph",100,-0.0687324,0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph122222->SetMinimum(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph122222->SetMaximum(0.0065912);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph122222->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph122222->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph_Graph122222->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph122222->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph122222->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph122222->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph122222->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph122222->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph122222->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph122222->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph122222->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph122222->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph122222->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph122222->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph_Graph122222->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph_Graph122222);
   
   graph->Draw("p");
   
   graph = new TGraph(1);
   graph->SetName("Graph2");
   graph->SetTitle("Graph2");
   graph->SetFillColor(1);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(29);
   graph->SetPoint(0,0,0);
   
   TH1F *Graph_Graph_Graph_Graph_Graph_Graph233333 = new TH1F("Graph_Graph_Graph_Graph_Graph_Graph233333","Graph2",100,0,1.1);
   Graph_Graph_Graph_Graph_Graph_Graph233333->SetMinimum(0);
   Graph_Graph_Graph_Graph_Graph_Graph233333->SetMaximum(1.1);
   Graph_Graph_Graph_Graph_Graph_Graph233333->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph_Graph233333->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph_Graph233333->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph_Graph233333->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph233333->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph233333->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph233333->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph233333->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph233333->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph233333->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph233333->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph233333->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph_Graph233333->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph233333->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph_Graph233333->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph_Graph_Graph233333);
   
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
