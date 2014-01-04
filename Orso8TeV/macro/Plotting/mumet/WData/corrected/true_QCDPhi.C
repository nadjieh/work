{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Dec 11 11:43:56 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",339,82,700,504);
   Canvas_1->Range(-1.25,-20.63222,1.25,187.0378);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *DefaultTrue_allWcosTheta__1 = new TH1D("DefaultTrue_allWcosTheta__1","DefaultTrue_allW: cos(#theta)",20,-1,1);
   DefaultTrue_allWcosTheta__1->SetBinContent(1,97.11726);
   DefaultTrue_allWcosTheta__1->SetBinContent(2,102.6668);
   DefaultTrue_allWcosTheta__1->SetBinContent(3,91.56771);
   DefaultTrue_allWcosTheta__1->SetBinContent(4,102.6668);
   DefaultTrue_allWcosTheta__1->SetBinContent(5,138.7389);
   DefaultTrue_allWcosTheta__1->SetBinContent(6,99.89204);
   DefaultTrue_allWcosTheta__1->SetBinContent(7,88.79293);
   DefaultTrue_allWcosTheta__1->SetBinContent(8,80.46859);
   DefaultTrue_allWcosTheta__1->SetBinContent(9,55.49558);
   DefaultTrue_allWcosTheta__1->SetBinContent(10,74.91903);
   DefaultTrue_allWcosTheta__1->SetBinContent(11,74.91903);
   DefaultTrue_allWcosTheta__1->SetBinContent(12,63.81992);
   DefaultTrue_allWcosTheta__1->SetBinContent(13,36.07213);
   DefaultTrue_allWcosTheta__1->SetBinContent(14,49.94602);
   DefaultTrue_allWcosTheta__1->SetBinContent(15,52.7208);
   DefaultTrue_allWcosTheta__1->SetBinContent(16,30.52257);
   DefaultTrue_allWcosTheta__1->SetBinContent(17,16.64867);
   DefaultTrue_allWcosTheta__1->SetBinContent(18,24.97301);
   DefaultTrue_allWcosTheta__1->SetBinContent(19,22.19823);
   DefaultTrue_allWcosTheta__1->SetBinContent(20,13.87389);
   DefaultTrue_allWcosTheta__1->SetEntries(475);
   
   TPaveStats *ptstats = new TPaveStats(0.6925287,0.7163866,0.8936782,0.8781513,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("DefaultTrue_allWcosTheta__1");
   text->SetTextSize(0.02976471);
   text = ptstats->AddText("Entries = 475    ");
   text = ptstats->AddText("Mean  = -0.2713");
   text = ptstats->AddText("RMS   = 0.4918");
   text = ptstats->AddText("Integral =   1318");
   ptstats->SetOptStat(1001111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   DefaultTrue_allWcosTheta__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(DefaultTrue_allWcosTheta__1);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   DefaultTrue_allWcosTheta__1->SetLineColor(ci);
   DefaultTrue_allWcosTheta__1->GetXaxis()->SetTitle("cos(#theta*)");
   DefaultTrue_allWcosTheta__1->GetXaxis()->SetLabelFont(42);
   DefaultTrue_allWcosTheta__1->GetXaxis()->SetLabelSize(0.035);
   DefaultTrue_allWcosTheta__1->GetXaxis()->SetTitleSize(0.035);
   DefaultTrue_allWcosTheta__1->GetXaxis()->SetTitleFont(42);
   DefaultTrue_allWcosTheta__1->GetYaxis()->SetLabelFont(42);
   DefaultTrue_allWcosTheta__1->GetYaxis()->SetLabelSize(0.035);
   DefaultTrue_allWcosTheta__1->GetYaxis()->SetTitleSize(0.035);
   DefaultTrue_allWcosTheta__1->GetYaxis()->SetTitleFont(42);
   DefaultTrue_allWcosTheta__1->GetZaxis()->SetLabelFont(42);
   DefaultTrue_allWcosTheta__1->GetZaxis()->SetLabelSize(0.035);
   DefaultTrue_allWcosTheta__1->GetZaxis()->SetTitleSize(0.035);
   DefaultTrue_allWcosTheta__1->GetZaxis()->SetTitleFont(42);
   DefaultTrue_allWcosTheta__1->Draw("");
   
   TPaveText *pt = new TPaveText(0.2910057,0.9342405,0.7089943,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("DefaultTrue_allW: cos(#theta)");
   pt->Draw();
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
