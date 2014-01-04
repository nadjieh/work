{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec 11 02:56:36 2013) by ROOT version5.32/00
   TCanvas *c = new TCanvas("c", "c",501,67,604,700);
   c->Range(-1.024125,-0.9858494,0.8435798,0.8726447);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.02333333);
   c->SetTopMargin(0.03908795);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(2);
   graph->SetName("Graph1");
   graph->SetTitle("Graph1");
   graph->SetFillColor(1);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(29);
   graph->SetPoint(0,-1.000000015,1.002100855);
   graph->SetPoint(1,1.000000015,-0.9957983342);
   
   TH1F *Graph_Graph_Graph_Graph1111 = new TH1F("Graph_Graph_Graph_Graph1111","Graph1",100,-1.2,1.2);
   Graph_Graph_Graph_Graph1111->SetMinimum(-0.09941445);
   Graph_Graph_Graph_Graph1111->SetMaximum(0.1037945);
   Graph_Graph_Graph_Graph1111->SetDirectory(0);
   Graph_Graph_Graph_Graph1111->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph1111->SetLineColor(ci);
   Graph_Graph_Graph_Graph1111->GetXaxis()->SetTitle("\deltaF_{0}");
   Graph_Graph_Graph_Graph1111->GetXaxis()->SetRange(46,53);
   Graph_Graph_Graph_Graph1111->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph1111->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1111->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph1111->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph1111->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph_Graph_Graph1111->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph1111->GetYaxis()->SetTitle("\deltaF_{L}");
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
   
   TEllipse *ellipse = new TEllipse(-0.02520646,-0.006033836,0.07445601,0.01379486,0,360,-33.41987);
   ellipse->SetFillColor(2);
   ellipse->SetLineColor(2);
   ellipse->Draw();
   
   graph = new TGraph(1);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,-0.0248981,-0.00639523);
   
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
   
   ellipse = new TEllipse(-0.02520646,-0.006033836,0.03033393,0.04138459,0,360,28.18408);
   ellipse->SetFillStyle(0);

   ci = TColor::GetColor("#006600");
   ellipse->SetLineColor(ci);
   ellipse->SetLineWidth(2);
   ellipse->Draw();
   
   ellipse = new TEllipse(-0.02520646,-0.006033836,0.08445242,0.03607887,0,360,-36.72469);
   ellipse->SetFillStyle(0);
   ellipse->SetLineWidth(2);
   ellipse->Draw();
   
   TPaveText *pt = new TPaveText(0.4310345,0.9390756,0.5675287,0.9957983,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextColor(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Graph1");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
