{
//=========Macro generated from canvas: c/c
//=========  (Fri Feb  7 17:25:49 2014) by ROOT version5.32/00
   TCanvas *c = new TCanvas("c", "c",141,111,604,628);
   c->Range(-1.275862,-0.008690592,1.022989,0.07821532);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.01);
   c->SetTopMargin(0.04);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1D *antiEtaFwDTrue_allWcosTheta__3__1 = new TH1D("antiEtaFwDTrue_allWcosTheta__3__1","W+jets",20,-1,1);
   antiEtaFwDTrue_allWcosTheta__3__1->SetBinContent(1,0.003316166);
   antiEtaFwDTrue_allWcosTheta__3__1->SetBinContent(2,0.01841528);
   antiEtaFwDTrue_allWcosTheta__3__1->SetBinContent(3,0.03100392);
   antiEtaFwDTrue_allWcosTheta__3__1->SetBinContent(4,0.03217575);
   antiEtaFwDTrue_allWcosTheta__3__1->SetBinContent(5,0.03985481);
   antiEtaFwDTrue_allWcosTheta__3__1->SetBinContent(6,0.04565148);
   antiEtaFwDTrue_allWcosTheta__3__1->SetBinContent(7,0.04158261);
   antiEtaFwDTrue_allWcosTheta__3__1->SetBinContent(8,0.04697454);
   antiEtaFwDTrue_allWcosTheta__3__1->SetBinContent(9,0.05335168);
   antiEtaFwDTrue_allWcosTheta__3__1->SetBinContent(10,0.05779558);
   antiEtaFwDTrue_allWcosTheta__3__1->SetBinContent(11,0.0608393);
   antiEtaFwDTrue_allWcosTheta__3__1->SetBinContent(12,0.05666727);
   antiEtaFwDTrue_allWcosTheta__3__1->SetBinContent(13,0.0578144);
   antiEtaFwDTrue_allWcosTheta__3__1->SetBinContent(14,0.06235729);
   antiEtaFwDTrue_allWcosTheta__3__1->SetBinContent(15,0.05766144);
   antiEtaFwDTrue_allWcosTheta__3__1->SetBinContent(16,0.06620707);
   antiEtaFwDTrue_allWcosTheta__3__1->SetBinContent(17,0.06428722);
   antiEtaFwDTrue_allWcosTheta__3__1->SetBinContent(18,0.06618639);
   antiEtaFwDTrue_allWcosTheta__3__1->SetBinContent(19,0.06667774);
   antiEtaFwDTrue_allWcosTheta__3__1->SetBinContent(20,0.07118008);
   antiEtaFwDTrue_allWcosTheta__3__1->SetEntries(4829);
   antiEtaFwDTrue_allWcosTheta__3__1->SetDirectory(0);
   antiEtaFwDTrue_allWcosTheta__3__1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#0033ff");
   antiEtaFwDTrue_allWcosTheta__3__1->SetFillColor(ci);

   ci = TColor::GetColor("#0033ff");
   antiEtaFwDTrue_allWcosTheta__3__1->SetLineColor(ci);
   antiEtaFwDTrue_allWcosTheta__3__1->GetXaxis()->SetTitle("cos(#theta*)");
   antiEtaFwDTrue_allWcosTheta__3__1->GetXaxis()->SetLabelFont(42);
   antiEtaFwDTrue_allWcosTheta__3__1->GetXaxis()->SetLabelSize(0.035);
   antiEtaFwDTrue_allWcosTheta__3__1->GetXaxis()->SetTitleSize(0.035);
   antiEtaFwDTrue_allWcosTheta__3__1->GetXaxis()->SetTitleFont(42);
   antiEtaFwDTrue_allWcosTheta__3__1->GetYaxis()->SetLabelFont(42);
   antiEtaFwDTrue_allWcosTheta__3__1->GetYaxis()->SetLabelSize(0.035);
   antiEtaFwDTrue_allWcosTheta__3__1->GetYaxis()->SetTitleSize(0.035);
   antiEtaFwDTrue_allWcosTheta__3__1->GetYaxis()->SetTitleFont(42);
   antiEtaFwDTrue_allWcosTheta__3__1->GetZaxis()->SetLabelFont(42);
   antiEtaFwDTrue_allWcosTheta__3__1->GetZaxis()->SetLabelSize(0.035);
   antiEtaFwDTrue_allWcosTheta__3__1->GetZaxis()->SetTitleSize(0.035);
   antiEtaFwDTrue_allWcosTheta__3__1->GetZaxis()->SetTitleFont(42);
   antiEtaFwDTrue_allWcosTheta__3__1->Draw("");
   
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
