{
//=========Macro generated from canvas: c/c
//=========  (Sun Nov 17 20:02:17 2013) by ROOT version5.32/00
   TCanvas *c = new TCanvas("c", "c",665,70,604,628);
   c->Range(-1.275862,-0.01162791,1.022989,0.1046512);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetGridy();
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.01);
   c->SetTopMargin(0.04);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1D *Default_allWcosTheta__14__1 = new TH1D("Default_allWcosTheta__14__1","data",20,-1,1);
   Default_allWcosTheta__14__1->SetBinContent(1,0.03573506);
   Default_allWcosTheta__14__1->SetBinContent(2,0.03377093);
   Default_allWcosTheta__14__1->SetBinContent(3,0.03684509);
   Default_allWcosTheta__14__1->SetBinContent(4,0.04054022);
   Default_allWcosTheta__14__1->SetBinContent(5,0.04197326);
   Default_allWcosTheta__14__1->SetBinContent(6,0.04372496);
   Default_allWcosTheta__14__1->SetBinContent(7,0.04539045);
   Default_allWcosTheta__14__1->SetBinContent(8,0.04700931);
   Default_allWcosTheta__14__1->SetBinContent(9,0.04826207);
   Default_allWcosTheta__14__1->SetBinContent(10,0.04849606);
   Default_allWcosTheta__14__1->SetBinContent(11,0.04965696);
   Default_allWcosTheta__14__1->SetBinContent(12,0.050452);
   Default_allWcosTheta__14__1->SetBinContent(13,0.05209108);
   Default_allWcosTheta__14__1->SetBinContent(14,0.053016);
   Default_allWcosTheta__14__1->SetBinContent(15,0.05472402);
   Default_allWcosTheta__14__1->SetBinContent(16,0.05584183);
   Default_allWcosTheta__14__1->SetBinContent(17,0.05821304);
   Default_allWcosTheta__14__1->SetBinContent(18,0.06087822);
   Default_allWcosTheta__14__1->SetBinContent(19,0.06705353);
   Default_allWcosTheta__14__1->SetBinContent(20,0.07632593);
   Default_allWcosTheta__14__1->SetBinError(1,0.0002767207);
   Default_allWcosTheta__14__1->SetBinError(2,0.0002703494);
   Default_allWcosTheta__14__1->SetBinError(3,0.0002810248);
   Default_allWcosTheta__14__1->SetBinError(4,0.0002911077);
   Default_allWcosTheta__14__1->SetBinError(5,0.0002978034);
   Default_allWcosTheta__14__1->SetBinError(6,0.0003044643);
   Default_allWcosTheta__14__1->SetBinError(7,0.0003111463);
   Default_allWcosTheta__14__1->SetBinError(8,0.0003178069);
   Default_allWcosTheta__14__1->SetBinError(9,0.0003227192);
   Default_allWcosTheta__14__1->SetBinError(10,0.0003268487);
   Default_allWcosTheta__14__1->SetBinError(11,0.0003326747);
   Default_allWcosTheta__14__1->SetBinError(12,0.000337193);
   Default_allWcosTheta__14__1->SetBinError(13,0.000346426);
   Default_allWcosTheta__14__1->SetBinError(14,0.0003540382);
   Default_allWcosTheta__14__1->SetBinError(15,0.0003662945);
   Default_allWcosTheta__14__1->SetBinError(16,0.0003790169);
   Default_allWcosTheta__14__1->SetBinError(17,0.0003947407);
   Default_allWcosTheta__14__1->SetBinError(18,0.0004174214);
   Default_allWcosTheta__14__1->SetBinError(19,0.0004464247);
   Default_allWcosTheta__14__1->SetBinError(20,0.0004873205);
   Default_allWcosTheta__14__1->SetMinimum(0);
   Default_allWcosTheta__14__1->SetMaximum(0.1);
   Default_allWcosTheta__14__1->SetEntries(811346);
   Default_allWcosTheta__14__1->SetDirectory(0);
   Default_allWcosTheta__14__1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Default_allWcosTheta__14__1->SetLineColor(ci);
   Default_allWcosTheta__14__1->SetMarkerStyle(20);
   Default_allWcosTheta__14__1->GetXaxis()->SetTitle("cos(#theta*)");
   Default_allWcosTheta__14__1->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta__14__1->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__14__1->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__14__1->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta__14__1->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta__14__1->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__14__1->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__14__1->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta__14__1->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta__14__1->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__14__1->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__14__1->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta__14__1->Draw("");
   
   TPaveText *pt = new TPaveText(0.4375,0.94,0.5625,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("data");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
