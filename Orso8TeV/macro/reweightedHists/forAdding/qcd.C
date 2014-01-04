{
//=========Macro generated from canvas: c/c
//=========  (Tue Nov 19 15:40:55 2013) by ROOT version5.32/00
   TCanvas *c = new TCanvas("c", "c",441,113,604,630);
   c->Range(-1.275862,-0.01415861,1.022989,0.1255706);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.01);
   c->SetTopMargin(0.03986711);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1D *DefaultTrue_allWcosTheta__1__1 = new TH1D("DefaultTrue_allWcosTheta__1__1","QCD",20,-1,1);
   DefaultTrue_allWcosTheta__1__1->SetBinContent(1,0.02302282);
   DefaultTrue_allWcosTheta__1__1->SetBinContent(2,0.03080996);
   DefaultTrue_allWcosTheta__1__1->SetBinContent(3,0.04299851);
   DefaultTrue_allWcosTheta__1__1->SetBinContent(4,0.04439681);
   DefaultTrue_allWcosTheta__1__1->SetBinContent(5,0.06026566);
   DefaultTrue_allWcosTheta__1__1->SetBinContent(6,0.06872993);
   DefaultTrue_allWcosTheta__1__1->SetBinContent(7,0.06737564);
   DefaultTrue_allWcosTheta__1__1->SetBinContent(8,0.07448563);
   DefaultTrue_allWcosTheta__1__1->SetBinContent(9,0.07279278);
   DefaultTrue_allWcosTheta__1__1->SetBinContent(10,0.06534422);
   DefaultTrue_allWcosTheta__1__1->SetBinContent(11,0.0690685);
   DefaultTrue_allWcosTheta__1__1->SetBinContent(12,0.06448425);
   DefaultTrue_allWcosTheta__1__1->SetBinContent(13,0.06635993);
   DefaultTrue_allWcosTheta__1__1->SetBinContent(14,0.05417135);
   DefaultTrue_allWcosTheta__1__1->SetBinContent(15,0.05349421);
   DefaultTrue_allWcosTheta__1__1->SetBinContent(16,0.04943136);
   DefaultTrue_allWcosTheta__1__1->SetBinContent(17,0.03419567);
   DefaultTrue_allWcosTheta__1__1->SetBinContent(18,0.02810139);
   DefaultTrue_allWcosTheta__1__1->SetBinContent(19,0.01760569);
   DefaultTrue_allWcosTheta__1__1->SetBinContent(20,0.0128657);
   DefaultTrue_allWcosTheta__1__1->SetMinimum(0);
   DefaultTrue_allWcosTheta__1__1->SetMaximum(0.12);
   DefaultTrue_allWcosTheta__1__1->SetEntries(2951);
   DefaultTrue_allWcosTheta__1__1->SetDirectory(0);
   DefaultTrue_allWcosTheta__1__1->SetStats(0);
   DefaultTrue_allWcosTheta__1__1->SetFillColor(17);
   DefaultTrue_allWcosTheta__1__1->SetLineColor(17);
   DefaultTrue_allWcosTheta__1__1->GetXaxis()->SetTitle("cos(#theta*)");
   DefaultTrue_allWcosTheta__1__1->GetXaxis()->SetLabelFont(42);
   DefaultTrue_allWcosTheta__1__1->GetXaxis()->SetLabelSize(0.035);
   DefaultTrue_allWcosTheta__1__1->GetXaxis()->SetTitleSize(0.035);
   DefaultTrue_allWcosTheta__1__1->GetXaxis()->SetTitleFont(42);
   DefaultTrue_allWcosTheta__1__1->GetYaxis()->SetLabelFont(42);
   DefaultTrue_allWcosTheta__1__1->GetYaxis()->SetLabelSize(0.035);
   DefaultTrue_allWcosTheta__1__1->GetYaxis()->SetTitleSize(0.035);
   DefaultTrue_allWcosTheta__1__1->GetYaxis()->SetTitleFont(42);
   DefaultTrue_allWcosTheta__1__1->GetZaxis()->SetLabelFont(42);
   DefaultTrue_allWcosTheta__1__1->GetZaxis()->SetLabelSize(0.035);
   DefaultTrue_allWcosTheta__1__1->GetZaxis()->SetTitleSize(0.035);
   DefaultTrue_allWcosTheta__1__1->GetZaxis()->SetTitleFont(42);
   DefaultTrue_allWcosTheta__1__1->Draw("");
   
   TPaveText *pt = new TPaveText(0.4333333,0.94,0.5666667,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("QCD");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
