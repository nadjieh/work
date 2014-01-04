{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Sep 25 12:35:40 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",67,53,700,502);
   Canvas_1->Range(-0.625,-2.8875,0.625,25.9875);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *FNeg = new TH1D("FNeg","FNeg",80,-0.5,0.5);
   FNeg->SetBinContent(36,1);
   FNeg->SetBinContent(37,1);
   FNeg->SetBinContent(38,3);
   FNeg->SetBinContent(39,10);
   FNeg->SetBinContent(40,22);
   FNeg->SetBinContent(41,17);
   FNeg->SetBinContent(42,21);
   FNeg->SetBinContent(43,12);
   FNeg->SetBinContent(44,10);
   FNeg->SetBinContent(45,2);
   FNeg->SetBinContent(46,1);
   FNeg->SetEntries(100);
   
   TPaveStats *ptstats = new TPaveStats(0.6795977,0.721519,0.8807471,0.8818565,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Entries = 100    ");
   text = ptstats->AddText("Constant = 21.02 #pm 2.67 ");
   text = ptstats->AddText("Mean     = 0.01013 #pm 0.00236 ");
   text = ptstats->AddText("Sigma    = 0.02265 #pm 0.00174 ");
   ptstats->SetOptStat(10);
   ptstats->SetOptFit(10);
   ptstats->Draw();
   FNeg->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(FNeg);
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","gaus",-0.5,0.5);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineColor(2);
   PrevFitTMP->SetLineWidth(2);
   PrevFitTMP->SetChisquare(4.770406);
   PrevFitTMP->SetNDF(8);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,21.02065);
   PrevFitTMP->SetParError(0,2.666528);
   PrevFitTMP->SetParLimits(0,0,0);
   PrevFitTMP->SetParameter(1,0.01013259);
   PrevFitTMP->SetParError(1,0.002363904);
   PrevFitTMP->SetParLimits(1,0,0);
   PrevFitTMP->SetParameter(2,0.02264685);
   PrevFitTMP->SetParError(2,0.001736098);
   PrevFitTMP->SetParLimits(2,0,0.2298641);
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
