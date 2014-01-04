{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Sep 25 12:34:10 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",67,53,700,502);
   Canvas_1->Range(-0.625,-3.4125,0.625,30.7125);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *F0 = new TH1D("F0","F0",50,-0.5,0.5);
   F0->SetBinContent(19,1);
   F0->SetBinContent(20,2);
   F0->SetBinContent(21,8);
   F0->SetBinContent(22,9);
   F0->SetBinContent(23,26);
   F0->SetBinContent(24,15);
   F0->SetBinContent(25,22);
   F0->SetBinContent(26,11);
   F0->SetBinContent(27,3);
   F0->SetBinContent(28,3);
   F0->SetEntries(100);
   
   TPaveStats *ptstats = new TPaveStats(0.6810345,0.7236287,0.8821839,0.8839662,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Entries = 100    ");
   text = ptstats->AddText("#chi^{2} / ndf = 8.822 / 7");
   text = ptstats->AddText("Constant =  19.8 #pm 2.7 ");
   text = ptstats->AddText("Mean     = -0.03316 #pm 0.00399 ");
   text = ptstats->AddText("Sigma    = 0.03701 #pm 0.00337 ");
   ptstats->SetOptStat(10);
   ptstats->SetOptFit(110);
   ptstats->Draw();
   F0->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(F0);
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","gaus",-0.5,0.5);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineColor(2);
   PrevFitTMP->SetLineWidth(2);
   PrevFitTMP->SetChisquare(8.822089);
   PrevFitTMP->SetNDF(7);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,19.79988);
   PrevFitTMP->SetParError(0,2.681025);
   PrevFitTMP->SetParLimits(0,0,0);
   PrevFitTMP->SetParameter(1,-0.03316336);
   PrevFitTMP->SetParError(1,0.003993726);
   PrevFitTMP->SetParLimits(1,0,0);
   PrevFitTMP->SetParameter(2,0.03700509);
   PrevFitTMP->SetParError(2,0.003367104);
   PrevFitTMP->SetParLimits(2,0,0.3481207);
   F0->GetListOfFunctions()->Add(PrevFitTMP);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   F0->SetLineColor(ci);
   F0->GetXaxis()->SetLabelFont(42);
   F0->GetXaxis()->SetLabelSize(0.035);
   F0->GetXaxis()->SetTitleSize(0.035);
   F0->GetXaxis()->SetTitleFont(42);
   F0->GetYaxis()->SetLabelFont(42);
   F0->GetYaxis()->SetLabelSize(0.035);
   F0->GetYaxis()->SetTitleSize(0.035);
   F0->GetYaxis()->SetTitleFont(42);
   F0->GetZaxis()->SetLabelFont(42);
   F0->GetZaxis()->SetLabelSize(0.035);
   F0->GetZaxis()->SetTitleSize(0.035);
   F0->GetZaxis()->SetTitleFont(42);
   F0->Draw("");
   
   TPaveText *pt = new TPaveText(0.4706034,0.94,0.5293966,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("F0");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
