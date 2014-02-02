{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Jan 28 13:55:46 2014) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",67,53,700,502);
   Canvas_1->Range(-0.75,-2.23125,1.75,20.08125);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *FZero = new TH1D("FZero","FZero",200,-0.5,1.5);
   FZero->SetBinContent(109,1);
   FZero->SetBinContent(110,2);
   FZero->SetBinContent(111,3);
   FZero->SetBinContent(112,5);
   FZero->SetBinContent(113,17);
   FZero->SetBinContent(114,8);
   FZero->SetBinContent(115,17);
   FZero->SetBinContent(116,16);
   FZero->SetBinContent(117,9);
   FZero->SetBinContent(118,11);
   FZero->SetBinContent(119,4);
   FZero->SetBinContent(120,6);
   FZero->SetBinContent(121,1);
   FZero->SetEntries(100);
   
   TPaveStats *ptstats = new TPaveStats(0.683908,0.6962025,0.8936782,0.8902954,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("FZero");
   text->SetTextSize(0.03571308);
   text = ptstats->AddText("Entries = 100    ");
   text = ptstats->AddText("Mean  = 0.6479");
   text = ptstats->AddText("RMS   = 0.02518");
   text = ptstats->AddText("#chi^{2} / ndf = 10.55 / 10");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(100);
   ptstats->Draw();
   FZero->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(FZero);
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","gaus",-0.5,1.5);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineColor(2);
   PrevFitTMP->SetLineWidth(2);
   PrevFitTMP->SetChisquare(10.54662);
   PrevFitTMP->SetNDF(10);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,13.72491);
   PrevFitTMP->SetParError(0,1.866927);
   PrevFitTMP->SetParLimits(0,0,0);
   PrevFitTMP->SetParameter(1,0.6487876);
   PrevFitTMP->SetParError(1,0.002934684);
   PrevFitTMP->SetParLimits(1,0,0);
   PrevFitTMP->SetParameter(2,0.02637438);
   PrevFitTMP->SetParError(2,0.002497597);
   PrevFitTMP->SetParLimits(2,0,0.2521441);
   FZero->GetListOfFunctions()->Add(PrevFitTMP);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   FZero->SetLineColor(ci);
   FZero->GetXaxis()->SetLabelFont(42);
   FZero->GetXaxis()->SetLabelSize(0.035);
   FZero->GetXaxis()->SetTitleSize(0.035);
   FZero->GetXaxis()->SetTitleFont(42);
   FZero->GetYaxis()->SetLabelFont(42);
   FZero->GetYaxis()->SetLabelSize(0.035);
   FZero->GetYaxis()->SetTitleSize(0.035);
   FZero->GetYaxis()->SetTitleFont(42);
   FZero->GetZaxis()->SetLabelFont(42);
   FZero->GetZaxis()->SetLabelSize(0.035);
   FZero->GetZaxis()->SetTitleSize(0.035);
   FZero->GetZaxis()->SetTitleFont(42);
   FZero->Draw("");
   
   TPaveText *pt = new TPaveText(0.4425862,0.94,0.5574138,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("FZero");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
