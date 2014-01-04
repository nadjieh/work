{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Sep 25 13:26:42 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",67,53,700,502);
   Canvas_1->Range(-0.625,-2.23125,0.625,20.08125);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *FPos = new TH1D("FPos","FPos",200,-0.5,0.5);
   FPos->SetBinContent(94,1);
   FPos->SetBinContent(95,3);
   FPos->SetBinContent(96,6);
   FPos->SetBinContent(97,4);
   FPos->SetBinContent(98,5);
   FPos->SetBinContent(99,17);
   FPos->SetBinContent(100,10);
   FPos->SetBinContent(101,7);
   FPos->SetBinContent(102,13);
   FPos->SetBinContent(103,9);
   FPos->SetBinContent(104,7);
   FPos->SetBinContent(105,8);
   FPos->SetBinContent(106,4);
   FPos->SetBinContent(107,1);
   FPos->SetBinContent(108,1);
   FPos->SetBinContent(110,1);
   FPos->SetEntries(97);
   
   TPaveStats *ptstats = new TPaveStats(0.7801724,0.7763713,0.9813218,0.9367089,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Entries = 97     ");
   text = ptstats->AddText("#chi^{2} / ndf = 11.77 / 13");
   text = ptstats->AddText("Constant =  10.4 #pm 1.4 ");
   text = ptstats->AddText("Mean     = 0.002193 #pm 0.001973 ");
   text = ptstats->AddText("Sigma    = 0.0167 #pm 0.0016 ");
   ptstats->SetOptStat(10);
   ptstats->SetOptFit(110);
   ptstats->Draw();
   FPos->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(FPos);
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","gaus",-0.5,0.5);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineColor(2);
   PrevFitTMP->SetLineWidth(2);
   PrevFitTMP->SetChisquare(11.76716);
   PrevFitTMP->SetNDF(13);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,10.40284);
   PrevFitTMP->SetParError(0,1.436935);
   PrevFitTMP->SetParLimits(0,0,0);
   PrevFitTMP->SetParameter(1,0.002193215);
   PrevFitTMP->SetParError(1,0.001973102);
   PrevFitTMP->SetParLimits(1,0,0);
   PrevFitTMP->SetParameter(2,0.01669696);
   PrevFitTMP->SetParError(2,0.001641791);
   PrevFitTMP->SetParLimits(2,0,0.158359);
   FPos->GetListOfFunctions()->Add(PrevFitTMP);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   FPos->SetLineColor(ci);
   FPos->GetXaxis()->SetLabelFont(42);
   FPos->GetXaxis()->SetLabelSize(0.035);
   FPos->GetXaxis()->SetTitleSize(0.035);
   FPos->GetXaxis()->SetTitleFont(42);
   FPos->GetYaxis()->SetLabelFont(42);
   FPos->GetYaxis()->SetLabelSize(0.035);
   FPos->GetYaxis()->SetTitleSize(0.035);
   FPos->GetYaxis()->SetTitleFont(42);
   FPos->GetZaxis()->SetLabelFont(42);
   FPos->GetZaxis()->SetLabelSize(0.035);
   FPos->GetZaxis()->SetTitleSize(0.035);
   FPos->GetZaxis()->SetTitleFont(42);
   FPos->Draw("");
   
   TPaveText *pt = new TPaveText(0.4483333,0.94,0.5516667,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("FPos");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
