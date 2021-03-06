{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sat Aug  3 17:06:34 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",325,100,363,327);
   Canvas_1->Range(-1.243056,3274.588,1.25,38881.02);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *Default_allWcosTheta = new TH1D("Default_allWcosTheta","Default_allW: cos(#theta)",20,-1,1);
   Default_allWcosTheta->SetBinContent(1,20794.16);
   Default_allWcosTheta->SetBinContent(2,20798.74);
   Default_allWcosTheta->SetBinContent(3,24909.83);
   Default_allWcosTheta->SetBinContent(4,28786.23);
   Default_allWcosTheta->SetBinContent(5,30985.02);
   Default_allWcosTheta->SetBinContent(6,32486.45);
   Default_allWcosTheta->SetBinContent(7,33218.69);
   Default_allWcosTheta->SetBinContent(8,33476.64);
   Default_allWcosTheta->SetBinContent(9,33116.77);
   Default_allWcosTheta->SetBinContent(10,32394.64);
   Default_allWcosTheta->SetBinContent(11,30928.92);
   Default_allWcosTheta->SetBinContent(12,29599.86);
   Default_allWcosTheta->SetBinContent(13,27523.22);
   Default_allWcosTheta->SetBinContent(14,25351.21);
   Default_allWcosTheta->SetBinContent(15,22478.78);
   Default_allWcosTheta->SetBinContent(16,18627.8);
   Default_allWcosTheta->SetBinContent(17,14767.09);
   Default_allWcosTheta->SetBinContent(18,12022.73);
   Default_allWcosTheta->SetBinContent(19,10044.44);
   Default_allWcosTheta->SetBinContent(20,8629.225);
   Default_allWcosTheta->SetBinContent(21,1.18443);
   Default_allWcosTheta->SetBinError(1,271.813);
   Default_allWcosTheta->SetBinError(2,226.9736);
   Default_allWcosTheta->SetBinError(3,268.902);
   Default_allWcosTheta->SetBinError(4,340.2934);
   Default_allWcosTheta->SetBinError(5,388.248);
   Default_allWcosTheta->SetBinError(6,421.9651);
   Default_allWcosTheta->SetBinError(7,458.8055);
   Default_allWcosTheta->SetBinError(8,502.6176);
   Default_allWcosTheta->SetBinError(9,538.4772);
   Default_allWcosTheta->SetBinError(10,554.9269);
   Default_allWcosTheta->SetBinError(11,556.6648);
   Default_allWcosTheta->SetBinError(12,573.2909);
   Default_allWcosTheta->SetBinError(13,586.3905);
   Default_allWcosTheta->SetBinError(14,601.3836);
   Default_allWcosTheta->SetBinError(15,587.1743);
   Default_allWcosTheta->SetBinError(16,505.9178);
   Default_allWcosTheta->SetBinError(17,405.1395);
   Default_allWcosTheta->SetBinError(18,359.7955);
   Default_allWcosTheta->SetBinError(19,359.9955);
   Default_allWcosTheta->SetBinError(20,406.3436);
   Default_allWcosTheta->SetBinError(21,0.8102073);
   Default_allWcosTheta->SetEntries(1309424);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Default_allWcosTheta");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 1309424");
   text = ptstats->AddText("Mean  = -0.1137");
   text = ptstats->AddText("RMS   = 0.4956");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   Default_allWcosTheta->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(Default_allWcosTheta);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Default_allWcosTheta->SetLineColor(ci);
   Default_allWcosTheta->GetXaxis()->SetTitle("cos(#theta*)");
   Default_allWcosTheta->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta->Draw("");
   
   TPaveText *pt = new TPaveText(0.2796936,0.9351869,0.7203064,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("Default_allW: cos(#theta)");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
