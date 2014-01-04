{
//=========Macro generated from canvas: Canvas_1_n2/Canvas_1_n2
//=========  (Sun Sep 29 16:38:48 2013) by ROOT version5.32/00
   TCanvas *Canvas_1_n2 = new TCanvas("Canvas_1_n2", "Canvas_1_n2",0,0,700,500);
   Canvas_1_n2->Range(0,0,1,1);
   Canvas_1_n2->SetFillColor(0);
   Canvas_1_n2->SetBorderMode(0);
   Canvas_1_n2->SetBorderSize(2);
   Canvas_1_n2->SetFrameBorderMode(0);
   
   TH1D *u = new TH1D("u","e_2_Components2SingleTopR",10,-1,1);
   u->SetBinContent(1,5.353135);
   u->SetBinContent(2,112.3361);
   u->SetBinContent(3,432.7071);
   u->SetBinContent(4,1010.304);
   u->SetBinContent(5,1820.329);
   u->SetBinContent(6,2785.815);
   u->SetBinContent(7,3777.342);
   u->SetBinContent(8,4619.335);
   u->SetBinContent(9,5388.98);
   u->SetBinContent(10,5806.6);
   u->SetBinError(1,0.1761464);
   u->SetBinError(2,2.280458);
   u->SetBinError(3,7.146672);
   u->SetBinError(4,15.008);
   u->SetBinError(5,26.00001);
   u->SetBinError(6,40.84471);
   u->SetBinError(7,60.25007);
   u->SetBinError(8,86.28341);
   u->SetBinError(9,130.0871);
   u->SetBinError(10,250.2872);
   u->SetEntries(7114.315);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   u->SetLineColor(ci);
   u->GetXaxis()->SetLabelFont(42);
   u->GetXaxis()->SetLabelSize(0.035);
   u->GetXaxis()->SetTitleSize(0.035);
   u->GetXaxis()->SetTitleFont(42);
   u->GetYaxis()->SetLabelFont(42);
   u->GetYaxis()->SetLabelSize(0.035);
   u->GetYaxis()->SetTitleSize(0.035);
   u->GetYaxis()->SetTitleFont(42);
   u->GetZaxis()->SetLabelFont(42);
   u->GetZaxis()->SetLabelSize(0.035);
   u->GetZaxis()->SetTitleSize(0.035);
   u->GetZaxis()->SetTitleFont(42);
   u->Draw("");
   Canvas_1_n2->Modified();
   Canvas_1_n2->cd();
   Canvas_1_n2->SetSelected(Canvas_1_n2);
}
