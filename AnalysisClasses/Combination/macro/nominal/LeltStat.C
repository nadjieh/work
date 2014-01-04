{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Oct  1 13:43:26 2013) by ROOT version5.32/00
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
   graph->SetPoint(0,-0.7,0.7);
   graph->SetPoint(1,0.7,-0.7);
   graph->SetPoint(2,0.7,0.7);
   graph->SetPoint(3,-0.7,-0.7);
   graph->Draw("ap");
   
   TEllipse *ellipse = new TEllipse(-0.0484678,-0.0659442,0.1078568,0.02034488,0,360,-29.9191);
   ellipse->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
