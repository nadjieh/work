{
//=========Macro generated from canvas: c1_n4/c1_n4
//=========  (Sun Jan 12 18:41:40 2014) by ROOT version5.32/00
   TCanvas *c1_n4 = new TCanvas("c1_n4", "c1_n4",0,0,700,500);
   c1_n4->Range(0,0,1,1);
   c1_n4->SetFillColor(0);
   c1_n4->SetBorderMode(0);
   c1_n4->SetBorderSize(2);
   c1_n4->SetGridy();
   c1_n4->SetFrameBorderMode(0);
   
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
   gre->SetPoint(0,2,0.761674);
   gre->SetPointError(0,0,0.0446499);
   gre->SetPoint(1,2,0.258842);
   gre->SetPointError(1,0,0.0323287);
   gre->SetPoint(2,2,-0.0205151);
   gre->SetPointError(2,0,0.021327);
   gre->Draw("p");
   
   gre = new TGraphErrors(3);
   gre->SetName("E");
   gre->SetTitle("Graph");

   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,4,0.879713);
   gre->SetPointError(0,0,0.109298);
   gre->SetPoint(1,4,0.190246);
   gre->SetPointError(1,0,0.0563053);
   gre->SetPoint(2,4,-0.0699588);
   gre->SetPointError(2,0,0.0660335);
   gre->Draw("p");
   
   gre = new TGraphErrors(3);
   gre->SetName("EM");
   gre->SetTitle("Graph");

   ci = TColor::GetColor("#00ff00");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(20);
   gre->SetPoint(0,6,0.893946);
   gre->SetPointError(0,0,0.0880071);
   gre->SetPoint(1,6,0.183754);
   gre->SetPointError(1,0,0.0576065);
   gre->SetPoint(2,6,-0.077701);
   gre->SetPointError(2,0,0.0424455);
   gre->Draw("p");
   c1_n4->Modified();
   c1_n4->cd();
   c1_n4->SetSelected(c1_n4);
}
