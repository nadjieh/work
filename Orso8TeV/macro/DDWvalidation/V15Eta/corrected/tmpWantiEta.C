{
//=========Macro generated from canvas: c/c
//=========  (Fri Feb  7 17:01:39 2014) by ROOT version5.32/00
   TCanvas *c = new TCanvas("c", "c",141,111,604,628);
   c->Range(-1.275862,0.01917856,1.022989,0.07516959);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.01);
   c->SetTopMargin(0.04);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1D *antiEtaFwD_allWcosTheta__59 = new TH1D("antiEtaFwD_allWcosTheta__59","W+jets",20,-1,1);
   antiEtaFwD_allWcosTheta__59->SetBinContent(1,0.02696144);
   antiEtaFwD_allWcosTheta__59->SetBinContent(2,0.0306337);
   antiEtaFwD_allWcosTheta__59->SetBinContent(3,0.035728);
   antiEtaFwD_allWcosTheta__59->SetBinContent(4,0.03407405);
   antiEtaFwD_allWcosTheta__59->SetBinContent(5,0.04385161);
   antiEtaFwD_allWcosTheta__59->SetBinContent(6,0.04698703);
   antiEtaFwD_allWcosTheta__59->SetBinContent(7,0.04254066);
   antiEtaFwD_allWcosTheta__59->SetBinContent(8,0.04423554);
   antiEtaFwD_allWcosTheta__59->SetBinContent(9,0.05197807);
   antiEtaFwD_allWcosTheta__59->SetBinContent(10,0.05281978);
   antiEtaFwD_allWcosTheta__59->SetBinContent(11,0.05600854);
   antiEtaFwD_allWcosTheta__59->SetBinContent(12,0.05274914);
   antiEtaFwD_allWcosTheta__59->SetBinContent(13,0.05135499);
   antiEtaFwD_allWcosTheta__59->SetBinContent(14,0.05797046);
   antiEtaFwD_allWcosTheta__59->SetBinContent(15,0.05487402);
   antiEtaFwD_allWcosTheta__59->SetBinContent(16,0.06342813);
   antiEtaFwD_allWcosTheta__59->SetBinContent(17,0.05833146);
   antiEtaFwD_allWcosTheta__59->SetBinContent(18,0.0634306);
   antiEtaFwD_allWcosTheta__59->SetBinContent(19,0.0614058);
   antiEtaFwD_allWcosTheta__59->SetBinContent(20,0.07063698);
   antiEtaFwD_allWcosTheta__59->SetEntries(8695);
   antiEtaFwD_allWcosTheta__59->SetDirectory(0);
   antiEtaFwD_allWcosTheta__59->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#0033ff");
   antiEtaFwD_allWcosTheta__59->SetFillColor(ci);

   ci = TColor::GetColor("#0033ff");
   antiEtaFwD_allWcosTheta__59->SetLineColor(ci);
   antiEtaFwD_allWcosTheta__59->GetXaxis()->SetTitle("cos(#theta*)");
   antiEtaFwD_allWcosTheta__59->GetXaxis()->SetLabelFont(42);
   antiEtaFwD_allWcosTheta__59->GetXaxis()->SetLabelSize(0.035);
   antiEtaFwD_allWcosTheta__59->GetXaxis()->SetTitleSize(0.035);
   antiEtaFwD_allWcosTheta__59->GetXaxis()->SetTitleFont(42);
   antiEtaFwD_allWcosTheta__59->GetYaxis()->SetLabelFont(42);
   antiEtaFwD_allWcosTheta__59->GetYaxis()->SetLabelSize(0.035);
   antiEtaFwD_allWcosTheta__59->GetYaxis()->SetTitleSize(0.035);
   antiEtaFwD_allWcosTheta__59->GetYaxis()->SetTitleFont(42);
   antiEtaFwD_allWcosTheta__59->GetZaxis()->SetLabelFont(42);
   antiEtaFwD_allWcosTheta__59->GetZaxis()->SetLabelSize(0.035);
   antiEtaFwD_allWcosTheta__59->GetZaxis()->SetTitleSize(0.035);
   antiEtaFwD_allWcosTheta__59->GetZaxis()->SetTitleFont(42);
   antiEtaFwD_allWcosTheta__59->Draw("");
   
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
