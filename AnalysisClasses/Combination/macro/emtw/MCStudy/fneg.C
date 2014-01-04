{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Sep 25 13:25:21 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",67,53,700,502);
   Canvas_1->Range(-0.625,-1.44375,0.625,12.99375);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *FNeg = new TH1D("FNeg","FNeg",250,-0.5,0.5);
   FNeg->SetBinContent(115,3);
   FNeg->SetBinContent(116,2);
   FNeg->SetBinContent(117,1);
   FNeg->SetBinContent(118,5);
   FNeg->SetBinContent(119,3);
   FNeg->SetBinContent(120,5);
   FNeg->SetBinContent(121,2);
   FNeg->SetBinContent(122,11);
   FNeg->SetBinContent(123,4);
   FNeg->SetBinContent(124,5);
   FNeg->SetBinContent(125,7);
   FNeg->SetBinContent(126,10);
   FNeg->SetBinContent(127,9);
   FNeg->SetBinContent(128,4);
   FNeg->SetBinContent(129,5);
   FNeg->SetBinContent(130,2);
   FNeg->SetBinContent(131,3);
   FNeg->SetBinContent(132,3);
   FNeg->SetBinContent(133,4);
   FNeg->SetBinContent(134,6);
   FNeg->SetBinContent(136,2);
   FNeg->SetBinContent(137,1);
   FNeg->SetEntries(97);
   
   TPaveStats *ptstats = new TPaveStats(0.7801724,0.778481,0.9813218,0.9388186,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Entries = 97     ");
   text = ptstats->AddText("#chi^{2} / ndf =    20 / 19");
   text = ptstats->AddText("Constant = 5.238 #pm 0.849 ");
   text = ptstats->AddText("Mean     = 0.001003 #pm 0.003739 ");
   text = ptstats->AddText("Sigma    = 0.02606 #pm 0.00466 ");
   ptstats->SetOptStat(10);
   ptstats->SetOptFit(110);
   ptstats->Draw();
   FNeg->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(FNeg);
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","gaus",-0.5,0.5);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineColor(2);
   PrevFitTMP->SetLineWidth(2);
   PrevFitTMP->SetChisquare(20.00154);
   PrevFitTMP->SetNDF(19);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,5.238108);
   PrevFitTMP->SetParError(0,0.8486366);
   PrevFitTMP->SetParLimits(0,0,0);
   PrevFitTMP->SetParameter(1,0.001002917);
   PrevFitTMP->SetParError(1,0.003738983);
   PrevFitTMP->SetParLimits(1,0,0);
   PrevFitTMP->SetParameter(2,0.02605771);
   PrevFitTMP->SetParError(2,0.004662462);
   PrevFitTMP->SetParLimits(2,0,0.3302493);
   FNeg->GetListOfFunctions()->Add(PrevFitTMP);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   FNeg->SetLineColor(ci);
   FNeg->GetXaxis()->SetLabelFont(42);
   FNeg->GetXaxis()->SetLabelSize(0.035);
   FNeg->GetXaxis()->SetTitleSize(0.035);
   FNeg->GetXaxis()->SetTitleFont(42);
   FNeg->GetYaxis()->SetLabelFont(42);
   FNeg->GetYaxis()->SetLabelSize(0.035);
   FNeg->GetYaxis()->SetTitleSize(0.035);
   FNeg->GetYaxis()->SetTitleFont(42);
   FNeg->GetZaxis()->SetLabelFont(42);
   FNeg->GetZaxis()->SetLabelSize(0.035);
   FNeg->GetZaxis()->SetTitleSize(0.035);
   FNeg->GetZaxis()->SetTitleFont(42);
   FNeg->Draw("");
   
   TPaveText *pt = new TPaveText(0.4476149,0.9342405,0.5523851,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("FNeg");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
