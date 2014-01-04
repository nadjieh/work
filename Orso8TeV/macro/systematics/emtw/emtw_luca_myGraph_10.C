{
//=========Macro generated from canvas: c/c
//=========  (Tue Oct  1 14:56:07 2013) by ROOT version5.32/00
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
   
   TGraph *graph = new TGraph(4);
   graph->SetName("frame");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetPoint(0,0.7,0);
   graph->SetPoint(1,-0.7,0.7);
   graph->SetPoint(2,-0.7,0);
   graph->SetPoint(3,0.7,0.7);
   
   TH1F *Graph_Graph_Graph_frame111 = new TH1F("Graph_Graph_Graph_frame111","Graph",100,-0.8,0.8);
   Graph_Graph_Graph_frame111->SetMinimum(-0.8);
   Graph_Graph_Graph_frame111->SetMaximum(0.8);
   Graph_Graph_Graph_frame111->SetDirectory(0);
   Graph_Graph_Graph_frame111->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_frame111->SetLineColor(ci);
   Graph_Graph_Graph_frame111->GetXaxis()->SetTitle("#deltaF_{0}");
   Graph_Graph_Graph_frame111->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_frame111->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_frame111->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_frame111->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_frame111->GetXaxis()->SetTitleOffset(0.92);
   Graph_Graph_Graph_frame111->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_frame111->GetYaxis()->SetTitle("#deltaF_{L}");
   Graph_Graph_Graph_frame111->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_frame111->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_frame111->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_frame111->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_frame111->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_frame111->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_frame111->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_frame111->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_frame111->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_frame111);
   
   graph->Draw("ap");
   
   TEllipse *ellipse = new TEllipse(-0.0454797,0.00601688,0.09285837,0.01768011,0,360,-34.38509);

   ci = TColor::GetColor("#ff0000");
   ellipse->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   ellipse->SetLineColor(ci);
   ellipse->Draw();
   
   TGraphErrors *gre = new TGraphErrors(1);
   gre->SetName("SM");
   gre->SetTitle("SM @ NNLO in QCD");
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(29);
   gre->SetMarkerSize(1.2);
   gre->SetPoint(0,1.275586e-10,0.004000724);
   gre->SetPointError(0,0.007844743,0.006830813);
   
   TH1F *Graph_Graph_Graph_SM111 = new TH1F("Graph_Graph_Graph_SM111","SM @ NNLO in QCD",100,0.6774963,0.6963237);
   Graph_Graph_Graph_SM111->SetMinimum(0.3082552);
   Graph_Graph_Graph_SM111->SetMaximum(0.3246492);
   Graph_Graph_Graph_SM111->SetDirectory(0);
   Graph_Graph_Graph_SM111->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_SM111->SetLineColor(ci);
   Graph_Graph_Graph_SM111->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_SM111->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_SM111->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_SM111->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_SM111->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_SM111->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_SM111->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_SM111->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_SM111->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_SM111->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_SM111->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_SM111->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_SM111);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(1);
   gre->SetName("meas");
   gre->SetTitle("CMS preliminary, 19.8 fb^{-1} @ #sqrt{s} = 8 TeV");
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,-0.0454797,0.00601688);
   gre->SetPointError(0,0,0);
   
   TH1F *Graph_Graph_Graph_meas222 = new TH1F("Graph_Graph_Graph_meas222","CMS preliminary, 19.8 fb^{-1} @ #sqrt{s} = 8 TeV",100,0.606233,1.806233);
   Graph_Graph_Graph_meas222->SetMinimum(0.225878);
   Graph_Graph_Graph_meas222->SetMaximum(1.425878);
   Graph_Graph_Graph_meas222->SetDirectory(0);
   Graph_Graph_Graph_meas222->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_meas222->SetLineColor(ci);
   Graph_Graph_Graph_meas222->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_meas222->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_meas222->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_meas222->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_meas222->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_meas222->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_meas222->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_meas222->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_meas222->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_meas222->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_meas222->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_meas222->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph_Graph_meas222);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.51,0.6764706,0.8766667,0.9509804,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetTextSize(0.03135313);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("meas","CMS preliminary,","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("NULL","19.8 fb^{-1} data, #sqrt{s} = 8 TeV","lpf");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("NULL","#pm #sigma Statistical Unc.","lpf");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("NULL","Systematic Unc.","lf");

   ci = TColor::GetColor("#006600");
   entry->SetLineColor(ci);
   entry->SetLineStyle(3);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("NULL","Total Unc.","lf");

   ci = TColor::GetColor("#33cc33");
   entry->SetLineColor(ci);
   entry->SetLineStyle(9);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("SM","Expected difference","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(29);
   entry->SetMarkerSize(1.2);
   leg->Draw();
   
   ellipse = new TEllipse(-0.0454797,0.00601688,0.02808508,0.04325789,0,360,27.08872);
   ellipse->SetFillStyle(0);

   ci = TColor::GetColor("#006600");
   ellipse->SetLineColor(ci);
   ellipse->SetLineStyle(3);
   ellipse->SetLineWidth(2);
   ellipse->Draw();
   
   ellipse = new TEllipse(-0.0454797,0.00601688,0.1013418,0.03640206,0,360,-37.29933);
   ellipse->SetFillStyle(0);

   ci = TColor::GetColor("#33cc33");
   ellipse->SetLineColor(ci);
   ellipse->SetLineStyle(9);
   ellipse->Draw();
   
   TPaveText *pt = new TPaveText(0.74,0.1895425,0.91,0.248366,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextColor(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Graph");
   pt->Draw();
  
// ------------>Primitives in pad: c_1
   TPad *c_1 = new TPad("c_1", "newpad",0.4983333,0.8664495,0.595,0.9006515);
   c_1->Draw();
   c_1->cd();
   c_1->Range(0,0,1,1);
   c_1->SetFillColor(0);
   c_1->SetBorderMode(0);
   c_1->SetBorderSize(2);
   c_1->SetFrameBorderMode(0);
   c_1->Modified();
   c->cd();
   c->Modified();
   c->cd();
   c->SetSelected(c);
   c->ToggleToolBar();
}
