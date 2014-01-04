{
//=========Macro generated from canvas: c/c
//=========  (Mon Feb 25 12:06:56 2013) by ROOT version5.32/00

   	double W = 600;
	double H = 600;
	TCanvas * c = new TCanvas("c", "c", W, H);
	c->SetWindowSize(W + (W - c->GetWw()), H + (H - c->GetWh()));
	c->SetFillColor(0);
	c->SetRightMargin(0.01); 
	c->SetLeftMargin(0.12); 
	c->SetTopMargin(0.04); 
	c->SetBottomMargin(0.1); 
	c->cd();
   TGraph *graph = new TGraph(4);
   graph->SetName("Graph");
   graph->SetTitle("");
   graph->SetFillColor(1);
   graph->SetPoint(0,-1,0);
   graph->SetPoint(1,1,0);
   graph->SetPoint(2,1,2);
   graph->SetPoint(3,-1,2);
   
   TH1F *g1 = new TH1F("g1","",100,-0.30,0.34);
   g1->SetMinimum(0);
   g1->SetMaximum(1.4);
   g1->SetDirectory(0);
   g1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   g1->SetLineColor(ci);
   g1->GetXaxis()->SetTitle("F_{R}");
   g1->GetXaxis()->SetRange(9,92);
   g1->GetXaxis()->CenterTitle(true);
   g1->GetXaxis()->SetLabelFont(42);
   g1->GetXaxis()->SetLabelSize(0.03);
   g1->GetXaxis()->SetTitleSize(0.05);
   g1->GetXaxis()->SetTickLength(0.02);
   g1->GetXaxis()->SetTitleOffset(0.88);
   g1->GetXaxis()->SetTitleFont(42);
   g1->GetYaxis()->SetLabelColor(0);
   g1->GetYaxis()->SetLabelFont(42);
   g1->GetYaxis()->SetLabelSize(0.035);
   g1->GetYaxis()->SetTitleSize(0.035);
   g1->GetYaxis()->SetTickLength(0);
   g1->GetYaxis()->SetTitleFont(42);
   g1->GetZaxis()->SetLabelFont(42);
   g1->GetZaxis()->SetLabelSize(0.035);
   g1->GetZaxis()->SetTitleSize(0.035);
   g1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(g1);   
   graph->Draw("ap");

   //http://arxiv.org/pdf/1005.2625v1.pdf
   double SMerr = sqrt(pow(0.00103,2)+pow(0.00023,2));
   TPave *pave = new TPave(-SMerr,0.0004947949,SMerr,1.398318,0,"br");
   pave->SetFillColor(4);
   pave->SetFillStyle(3001);
   pave->Draw();

/*   double combStat = 0.057;
   double combSyst = 0.027;
   double combCent = -0.006;*/

   double combStat = 0.021;
   double combSyst = 0.019;
   double combCent = -0.009;
   pave = new TPave(combCent-combSyst,0.1,combCent+combSyst,0.12,0,"br");
   pave->SetFillColor(5);
   pave->Draw();

/*   double EStat = 0.072;
   double ESyst = 0.020;
   double ECent = 0.005;*/

   double EStat = 0.042;
   double ESyst = 0.023;
   double ECent = 0.068;
   pave = new TPave(ECent-ESyst,0.3,ECent+ESyst,0.32,0,"br");
   pave->SetFillColor(5);
   pave->Draw();
   
   double SStat = 0.024;
   double SSyst = 0.034;
   double SCent = -0.030;
   pave = new TPave(SCent-SSyst,0.5,SCent+SSyst,0.52,0,"br");
   pave->SetFillColor(5);
   pave->Draw();

   //http://prd.aps.org/abstract/PRD/v83/i3/e032009
   double D0Syst = 0.034;
   double D0Stat = 0.041;
   double D0Cent = 0.023;
   pave = new TPave(D0Cent-D0Syst,0.7,D0Cent+D0Syst,0.72,0,"br");
   pave->SetFillColor(5);
   pave->Draw();

   //http://arxiv.org/abs/1211.4523
   double CDFStat = 0.044;
   double CDFSyst = 0.058;
   double CDFCent = -0.045;
   pave = new TPave(CDFCent-CDFSyst,0.9,CDFCent+CDFSyst,0.92,0,"br");
   pave->SetFillColor(5);
   pave->Draw();

   //http://cds.cern.ch/record/1423370?ln=en
   double CMSStat = 0.035;
   double CMSSyst = 0.044;
   double CMSCent = 0.040;
   pave = new TPave(CMSCent-CMSSyst,1.3,CMSCent+CMSSyst,1.32,0,"br");
   pave = new TPave(-0.003093719,1.3,0.08487468,1.32,0,"br");
   pave->SetFillColor(5);
   pave->Draw();

   //http://arxiv.org/abs/1205.2484
   double ATLASTot = 0.05;
   double ATLASCent = 0.01;

   //combination
   TGraphErrors *gre = new TGraphErrors(1);
   gre->SetName("GraphC");
   gre->SetTitle("Combination");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,combCent,0.11);
   gre->SetPointError(0,combStat,0);
   gre->Draw("p");
   
   //8TeV
   gre = new TGraphErrors(1);
   gre->SetName("Graph");
   gre->SetTitle("5.3 fb^{-1} CMS data, #sqrt{s} = 8 TeV");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,ECent,0.31);
   gre->SetPointError(0,EStat,0);
   gre->Draw("p");

   //7TeV
   gre = new TGraphErrors(1);
   gre->SetName("Graph");
   gre->SetTitle("1.14 fb^{-1} CMS data, #sqrt{s} = 7 TeV");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,SCent,0.51);
   gre->SetPointError(0,SStat,0);  
   gre->Draw("p");

   //D0   
   gre = new TGraphErrors(1);
   gre->SetName("Graph");
   gre->SetTitle("D0 measurement");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,D0Cent,0.71);
   gre->SetPointError(0,D0Stat,0);
   gre->Draw("p");
   
   //CDF
   gre = new TGraphErrors(1);
   gre->SetName("Graph");
   gre->SetTitle("CDF measurement");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,CDFCent,0.91);
   gre->SetPointError(0,CDFStat,0);
   gre->Draw("p");

   //ATLAS
   gre = new TGraphErrors(1);
   gre->SetName("ATLAS");
   gre->SetTitle("ATLAS measurement (1.04 fb^{-1} @ 7 TeV)");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,ATLASCent,1.11);
   gre->SetPointError(0,ATLASTot,0);
   gre->Draw("p");
   
   //CMS
   gre = new TGraphErrors(1);
   gre->SetName("CMS");
   gre->SetTitle("CMS measurement (#mu + jets, 2.2 fb^{-1} @ 7 TeV)");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,CMSCent,1.31);
   gre->SetPointError(0,CMSStat,0);
   gre->Draw("p");   

   TLegend *leg = new TLegend(0.1433333,0.7333333,0.4733333,0.9383333,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.02752293);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(0);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);

   TLegendEntry *entry=leg->AddEntry("NULL","SM at NNLO in QCD","lpf");
   entry->SetFillColor(4);
   entry->SetFillStyle(3001);
   entry->SetLineColor(4);
   entry->SetLineStyle(3);
   entry->SetLineWidth(0);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("NULL","Phys.Rev.D81(2010)","lpf");
   entry->SetFillStyle(3001);
   entry->SetLineColor(0);
   entry->SetLineStyle(3);
   entry->SetLineWidth(0);
   entry->SetMarkerColor(0);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("NULL","Statistical Unc.","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("NULL","Systematic Unc.","lpf");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(5);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("NULL","Total Unc.","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   leg->Draw();

   TLatex *   tex = new TLatex(0.09,1.299357,"CMS (#mu+jets, 2.2 fb^{-1} #sqrt{s} = 7 TeV)");
   tex->SetTextSize(0.02140673);
   tex->SetLineWidth(2);
   tex->Draw();

   tex = new TLatex(0.09,1.101435,"ATLAS (1.04 fb^{-1} #sqrt{s} = 7 TeV)");
   tex->SetTextSize(0.02140673);
   tex->SetLineWidth(2);
   tex->Draw();

   tex = new TLatex(0.09,0.9010391,"CDF full Run II (arXiv:1211.4523)");
   tex->SetTextSize(0.02140673);
   tex->SetLineWidth(2);
   tex->Draw();

   tex = new TLatex(0.09,0.6981692,"D0 (PRD 83, 032009(2011))");
   tex->SetTextSize(0.02140673);
   tex->SetLineWidth(2);
   tex->Draw();

   tex = new TLatex(0.085,0.5051954,"CMS preliminary (#mu+jets,");
   ci = TColor::GetColor("#006600");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.0212766);
   tex->SetLineWidth(2);
   tex->Draw();
   tex = new TLatex(0.085,0.2454231," 19.8 fb^{-1} #sqrt{s} = 8 TeV)");
   ci = TColor::GetColor("#006600");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.0212766);
   tex->SetLineWidth(2);
   tex->Draw();

   tex = new TLatex(0.085,0.2998516,"CMS preliminary (e+jets,");
   ci = TColor::GetColor("#006600");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.0212766);
   tex->SetLineWidth(2);
   tex->Draw();
   tex = new TLatex(0.085,0.4458189," 19.8 fb^{-1} #sqrt{s} = 8 TeV)");
   ci = TColor::GetColor("#006600");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.0212766);
   tex->SetLineWidth(2);
   tex->Draw();

   tex = new TLatex(0.085,0.1206193,"CMS preliminary (combination,");
   ci = TColor::GetColor("#006600");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.0212766);
   tex->SetLineWidth(2);
   tex->Draw();
   tex = new TLatex(0.085,0.06976743," 19.8 fb^{-1} #sqrt{s} = 8 TeV)");
   ci = TColor::GetColor("#006600");
   tex->SetTextColor(ci);
   tex->SetTextSize(0.0212766);
   tex->SetLineWidth(2);
   tex->Draw();

   c->Modified();
   c->cd();
   c->SetSelected(c);
   c->ToggleToolBar();
}
