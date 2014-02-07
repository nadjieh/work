{
//=========Macro generated from canvas: c/c
//=========  (Fri Feb  7 17:48:38 2014) by ROOT version5.32/00
   TCanvas *c = new TCanvas("c", "c",637,127,604,628);
   c->Range(-1.275862,0.0005299193,1.022989,0.07406997);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.01);
   c->SetTopMargin(0.04);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1D *EtaFwDTrue_allWcosTheta__17 = new TH1D("EtaFwDTrue_allWcosTheta__17","W+jets",20,-1,1);
   EtaFwDTrue_allWcosTheta__17->SetBinContent(1,0.01075215);
   EtaFwDTrue_allWcosTheta__17->SetBinContent(2,0.02678263);
   EtaFwDTrue_allWcosTheta__17->SetBinContent(3,0.03656044);
   EtaFwDTrue_allWcosTheta__17->SetBinContent(4,0.04032162);
   EtaFwDTrue_allWcosTheta__17->SetBinContent(5,0.04422137);
   EtaFwDTrue_allWcosTheta__17->SetBinContent(6,0.05344287);
   EtaFwDTrue_allWcosTheta__17->SetBinContent(7,0.05297146);
   EtaFwDTrue_allWcosTheta__17->SetBinContent(8,0.04783429);
   EtaFwDTrue_allWcosTheta__17->SetBinContent(9,0.0599254);
   EtaFwDTrue_allWcosTheta__17->SetBinContent(10,0.06497223);
   EtaFwDTrue_allWcosTheta__17->SetBinContent(11,0.04723106);
   EtaFwDTrue_allWcosTheta__17->SetBinContent(12,0.05162265);
   EtaFwDTrue_allWcosTheta__17->SetBinContent(13,0.05842932);
   EtaFwDTrue_allWcosTheta__17->SetBinContent(14,0.0550564);
   EtaFwDTrue_allWcosTheta__17->SetBinContent(15,0.0548776);
   EtaFwDTrue_allWcosTheta__17->SetBinContent(16,0.05755079);
   EtaFwDTrue_allWcosTheta__17->SetBinContent(17,0.06811673);
   EtaFwDTrue_allWcosTheta__17->SetBinContent(18,0.05564422);
   EtaFwDTrue_allWcosTheta__17->SetBinContent(19,0.05780345);
   EtaFwDTrue_allWcosTheta__17->SetBinContent(20,0.05588332);
   EtaFwDTrue_allWcosTheta__17->SetEntries(4014);
   EtaFwDTrue_allWcosTheta__17->SetDirectory(0);
   EtaFwDTrue_allWcosTheta__17->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#0033ff");
   EtaFwDTrue_allWcosTheta__17->SetFillColor(ci);

   ci = TColor::GetColor("#0033ff");
   EtaFwDTrue_allWcosTheta__17->SetLineColor(ci);
   EtaFwDTrue_allWcosTheta__17->GetXaxis()->SetTitle("cos(#theta*)");
   EtaFwDTrue_allWcosTheta__17->GetXaxis()->SetLabelFont(42);
   EtaFwDTrue_allWcosTheta__17->GetXaxis()->SetLabelSize(0.035);
   EtaFwDTrue_allWcosTheta__17->GetXaxis()->SetTitleSize(0.035);
   EtaFwDTrue_allWcosTheta__17->GetXaxis()->SetTitleFont(42);
   EtaFwDTrue_allWcosTheta__17->GetYaxis()->SetLabelFont(42);
   EtaFwDTrue_allWcosTheta__17->GetYaxis()->SetLabelSize(0.035);
   EtaFwDTrue_allWcosTheta__17->GetYaxis()->SetTitleSize(0.035);
   EtaFwDTrue_allWcosTheta__17->GetYaxis()->SetTitleFont(42);
   EtaFwDTrue_allWcosTheta__17->GetZaxis()->SetLabelFont(42);
   EtaFwDTrue_allWcosTheta__17->GetZaxis()->SetLabelSize(0.035);
   EtaFwDTrue_allWcosTheta__17->GetZaxis()->SetTitleSize(0.035);
   EtaFwDTrue_allWcosTheta__17->GetZaxis()->SetTitleFont(42);
   EtaFwDTrue_allWcosTheta__17->Draw("");
   
   TPaveText *pt = new TPaveText(0.4066667,0.9351993,0.5933333,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("W+jets");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
