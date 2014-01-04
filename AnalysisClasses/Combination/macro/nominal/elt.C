{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Aug  7 22:05:26 2013) by ROOT version5.32/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,700,500);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(4);
   graph->SetName("def");
   graph->SetTitle("");
   graph->SetFillColor(1);
   graph->SetPoint(0,0,1);
   graph->SetPoint(1,1,0);
   graph->SetPoint(2,1,1);
   graph->SetPoint(3,0,0);
   graph->Draw("ap");
   
   TEllipse *ellipse = new TEllipse(0.716711,0.292326,0.08065478,0.0162772,0,360,-40.77143);
   ellipse->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
