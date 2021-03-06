{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Thu Nov 21 12:03:19 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",434,76,700,502);
   Canvas_1->Range(-1.25,61092.8,1.25,177986);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *Default_allWcosTheta = new TH1D("Default_allWcosTheta","Default_allW: cos(#theta)",20,-1,1);
   Default_allWcosTheta->SetBinContent(1,79585.94);
   Default_allWcosTheta->SetBinContent(2,77803.6);
   Default_allWcosTheta->SetBinContent(3,87016.14);
   Default_allWcosTheta->SetBinContent(4,93294.32);
   Default_allWcosTheta->SetBinContent(5,100163.8);
   Default_allWcosTheta->SetBinContent(6,105713.6);
   Default_allWcosTheta->SetBinContent(7,107728.6);
   Default_allWcosTheta->SetBinContent(8,110256.7);
   Default_allWcosTheta->SetBinContent(9,114941.2);
   Default_allWcosTheta->SetBinContent(10,118403);
   Default_allWcosTheta->SetBinContent(11,121947.8);
   Default_allWcosTheta->SetBinContent(12,125560.2);
   Default_allWcosTheta->SetBinContent(13,129593);
   Default_allWcosTheta->SetBinContent(14,132807.8);
   Default_allWcosTheta->SetBinContent(15,134020.9);
   Default_allWcosTheta->SetBinContent(16,138179.5);
   Default_allWcosTheta->SetBinContent(17,141993.7);
   Default_allWcosTheta->SetBinContent(18,148222);
   Default_allWcosTheta->SetBinContent(19,156555.4);
   Default_allWcosTheta->SetBinContent(20,160709.3);
   Default_allWcosTheta->SetBinError(1,789.3459);
   Default_allWcosTheta->SetBinError(2,780.4535);
   Default_allWcosTheta->SetBinError(3,826.1181);
   Default_allWcosTheta->SetBinError(4,855.0619);
   Default_allWcosTheta->SetBinError(5,888.0855);
   Default_allWcosTheta->SetBinError(6,914.2934);
   Default_allWcosTheta->SetBinError(7,922.9847);
   Default_allWcosTheta->SetBinError(8,935.5798);
   Default_allWcosTheta->SetBinError(9,952.9151);
   Default_allWcosTheta->SetBinError(10,968.0281);
   Default_allWcosTheta->SetBinError(11,983.4795);
   Default_allWcosTheta->SetBinError(12,999.3029);
   Default_allWcosTheta->SetBinError(13,1016.55);
   Default_allWcosTheta->SetBinError(14,1028.707);
   Default_allWcosTheta->SetBinError(15,1033.174);
   Default_allWcosTheta->SetBinError(16,1049.637);
   Default_allWcosTheta->SetBinError(17,1064.824);
   Default_allWcosTheta->SetBinError(18,1088.677);
   Default_allWcosTheta->SetBinError(19,1120.68);
   Default_allWcosTheta->SetBinError(20,1134.342);
   Default_allWcosTheta->SetEntries(342865);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Default_allWcosTheta");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 342865 ");
   text = ptstats->AddText("Mean  = 0.1137");
   text = ptstats->AddText("RMS   = 0.5649");
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
   
   TPaveText *pt = new TPaveText(0.3276437,0.9342405,0.6723563,0.995,"blNDC");
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
