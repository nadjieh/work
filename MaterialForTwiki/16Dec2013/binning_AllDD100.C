{
//=========Macro generated from canvas: c1_n3/c1_n3
//=========  (Sun Jan 12 18:41:40 2014) by ROOT version5.32/00
   TCanvas *c1_n3 = new TCanvas("c1_n3", "c1_n3",0,0,700,500);
   c1_n3->Range(0,0,1,1);
   c1_n3->SetFillColor(0);
   c1_n3->SetBorderMode(0);
   c1_n3->SetBorderSize(2);
   c1_n3->SetGridy();
   c1_n3->SetFrameBorderMode(0);
   
   TH1F *f = new TH1F("f","",5,1.5,6.5);
   f->SetMinimum(-0.25);
   f->SetMaximum(1.1);
   f->SetStats(0);
   f->SetLineStyle(3);
   f->GetXaxis()->SetBinLabel(1,"muon");
   f->GetXaxis()->SetBinLabel(3,"e (MET)");
   f->GetXaxis()->SetBinLabel(5,"e (MTW)");
   f->GetXaxis()->SetLabelFont(42);
   f->GetXaxis()->SetLabelSize(0.07);
   f->GetXaxis()->SetTitleSize(0.035);
   f->GetXaxis()->SetTitleFont(42);
   f->GetYaxis()->SetTitle("W-helicities");
   f->GetYaxis()->CenterTitle(true);
   f->GetYaxis()->SetLabelFont(42);
   f->GetYaxis()->SetLabelSize(0.035);
   f->GetYaxis()->SetTitleSize(0.05);
   f->GetYaxis()->SetTitleFont(42);
   f->GetZaxis()->SetLabelFont(42);
   f->GetZaxis()->SetLabelSize(0.035);
   f->GetZaxis()->SetTitleSize(0.035);
   f->GetZaxis()->SetTitleFont(42);
   f->Draw("");
   
   TGraphErrors *gre = new TGraphErrors(3);
   gre->SetName("Mu");
   gre->SetTitle("Graph");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,2,0.68911);
   gre->SetPointError(0,0,0.0433257);
   gre->SetPoint(1,2,0.321879);
   gre->SetPointError(1,0,0.0300998);
   gre->SetPoint(2,2,-0.0109891);
   gre->SetPointError(2,0,0.0196342);
   gre->Draw("p");
   
   gre = new TGraphErrors(3);
   gre->SetName("E");
   gre->SetTitle("Graph");

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,4,0.725251);
   gre->SetPointError(0,0,0.064632);
   gre->SetPoint(1,4,0.245879);
   gre->SetPointError(1,0,0.0417117);
   gre->SetPoint(2,4,0.0289);
   gre->SetPointError(2,0,0.0321019);
   gre->Draw("p");
   
   gre = new TGraphErrors(3);
   gre->SetName("EM");
   gre->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,6,0.713921);
   gre->SetPointError(0,0,0.0628563);
   gre->SetPoint(1,6,0.298873);
   gre->SetPointError(1,0,0.0420037);
   gre->SetPoint(2,6,-0.0127941);
   gre->SetPointError(2,0,0.0292492);
   gre->Draw("p");
   c1_n3->Modified();
   c1_n3->cd();
   c1_n3->SetSelected(c1_n3);
}
