{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Sun Oct 20 17:48:02 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",67,53,700,502);
   Canvas_1->Range(-1.5,-181.3864,3.5,5052.556);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   //Double_t xAxis1[21] = {-1, -0.8, -0.6, -0.4, -0.2, 0, 0.2, 0.4, 0.6, 0.8, 1, 1.2, 1.4, 1.6, 1.8, 2, 2.2, 2.4, 2.6, 2.8, 3}; 
   
   TH1D *signal = new TH1D("signal","tmpCombinedID",10,-1.,1.);
   signal->SetBinContent(1,2902.959);
   signal->SetBinContent(2,3066.551);
   signal->SetBinContent(3,3561.843);
   signal->SetBinContent(4,3671.027);
   signal->SetBinContent(5,3373.544);
   signal->SetBinContent(6,2837.739);
   signal->SetBinContent(7,2163.428);
   signal->SetBinContent(8,1446.254);
   signal->SetBinContent(9,853.7196);
   signal->SetBinContent(10,531.9014);
   signal->SetEntries(10);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("signal");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 20     ");
   text = ptstats->AddText("Mean  = 0.6683");
   text = ptstats->AddText("RMS   =  1.057");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   signal->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(signal);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   signal->SetLineColor(ci);
   signal->GetXaxis()->SetLabelFont(42);
   signal->GetXaxis()->SetLabelSize(0.035);
   signal->GetXaxis()->SetTitleSize(0.035);
   signal->GetXaxis()->SetTitleFont(42);
   signal->GetYaxis()->SetLabelFont(42);
   signal->GetYaxis()->SetLabelSize(0.035);
   signal->GetYaxis()->SetTitleSize(0.035);
   signal->GetYaxis()->SetTitleFont(42);
   signal->GetZaxis()->SetLabelFont(42);
   signal->GetZaxis()->SetLabelSize(0.035);
   signal->GetZaxis()->SetTitleSize(0.035);
   signal->GetZaxis()->SetTitleFont(42);
   signal->Draw("");
   
   TPaveText *pt = new TPaveText(0.3570977,0.9367722,0.6429023,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("tmpCombinedID");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
