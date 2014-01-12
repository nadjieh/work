{
//=========Macro generated from canvas: c1/c1
//=========  (Sun Jan 12 18:41:40 2014) by ROOT version5.32/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,700,500);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetGridy();
   c1->SetFrameBorderMode(0);
   
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
   gre->SetTitle("muon");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,2,0.72238);
   gre->SetPointError(0,0,0.0508874);
   gre->SetPoint(1,2,0.308293);
   gre->SetPointError(1,0,0.0330198);
   gre->SetPoint(2,2,-0.0306769);
   gre->SetPointError(2,0,0.0239062);
   gre->Draw("p");
   
   gre = new TGraphErrors(3);
   gre->SetName("E");
   gre->SetTitle("e (MET)");

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,4,0.648717);
   gre->SetPointError(0,0,0.079309);
   gre->SetPoint(1,4,0.283083);
   gre->SetPointError(1,0,0.046279);
   gre->SetPoint(2,4,0.0682);
   gre->SetPointError(2,0,0.0417572);
   gre->Draw("p");
   
   gre = new TGraphErrors(3);
   gre->SetName("EM");
   gre->SetTitle("e (MTW)");

   ci = TColor::GetColor("#00ff00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,6,0.676909);
   gre->SetPointError(0,0,0.0772704);
   gre->SetPoint(1,6,0.314307);
   gre->SetPointError(1,0,0.0544271);
   gre->SetPoint(2,6,0.00878328);
   gre->SetPointError(2,0,0.034482);
   gre->Draw("p");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
