{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Sep 25 13:24:04 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",67,53,700,502);
   Canvas_1->Range(-0.625,-1.3125,0.625,11.8125);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *F0 = new TH1D("F0","F0",125,-0.5,0.5);
   F0->SetBinContent(54,2);
   F0->SetBinContent(55,1);
   F0->SetBinContent(56,4);
   F0->SetBinContent(57,5);
   F0->SetBinContent(58,8);
   F0->SetBinContent(59,4);
   F0->SetBinContent(60,3);
   F0->SetBinContent(61,8);
   F0->SetBinContent(62,10);
   F0->SetBinContent(63,9);
   F0->SetBinContent(64,10);
   F0->SetBinContent(65,6);
   F0->SetBinContent(66,6);
   F0->SetBinContent(67,4);
   F0->SetBinContent(68,10);
   F0->SetBinContent(69,4);
   F0->SetBinContent(70,1);
   F0->SetBinContent(71,2);
   F0->SetEntries(97);
   
   TPaveStats *ptstats = new TPaveStats(0.7787356,0.7763713,0.9798851,0.9367089,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Entries = 97     ");
   text = ptstats->AddText("#chi^{2} / ndf = 15.11 / 15");
   text = ptstats->AddText("Constant = 7.633 #pm 1.128 ");
   text = ptstats->AddText("Mean     = -0.0009682 #pm 0.0045534 ");
   text = ptstats->AddText("Sigma    = 0.03585 #pm 0.00450 ");
   ptstats->SetOptStat(10);
   ptstats->SetOptFit(111);
   ptstats->Draw();
   F0->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(F0);
   
   TF1 *PrevFitTMP = new TF1("PrevFitTMP","gaus",-0.5,0.5);
   PrevFitTMP->SetFillColor(19);
   PrevFitTMP->SetFillStyle(0);
   PrevFitTMP->SetLineColor(2);
   PrevFitTMP->SetLineWidth(2);
   PrevFitTMP->SetChisquare(15.11212);
   PrevFitTMP->SetNDF(15);
   PrevFitTMP->GetXaxis()->SetLabelFont(42);
   PrevFitTMP->GetXaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetXaxis()->SetTitleFont(42);
   PrevFitTMP->GetYaxis()->SetLabelFont(42);
   PrevFitTMP->GetYaxis()->SetLabelSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleSize(0.035);
   PrevFitTMP->GetYaxis()->SetTitleFont(42);
   PrevFitTMP->SetParameter(0,7.632839);
   PrevFitTMP->SetParError(0,1.12751);
   PrevFitTMP->SetParLimits(0,0,0);
   PrevFitTMP->SetParameter(1,-0.0009681906);
   PrevFitTMP->SetParError(1,0.004553358);
   PrevFitTMP->SetParLimits(1,0,0);
   PrevFitTMP->SetParameter(2,0.03584968);
   PrevFitTMP->SetParError(2,0.004504368);
   PrevFitTMP->SetParLimits(2,0,0.3302493);
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
