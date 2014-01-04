{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Wed Oct 30 12:36:28 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",242,85,700,504);
   Canvas_1->Range(-0.5944954,-2.003937,4.513761,2.993438);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetGridy();
   Canvas_1->SetLeftMargin(0.1163793);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH2D *cont_feed = new TH2D("cont_feed","",4,0,4,4,-1.5,2.5);
   cont_feed->SetBinContent(7,6);//
   cont_feed->SetBinContent(13,7);//
   cont_feed->SetBinContent(14,1);//
   cont_feed->SetBinContent(16,1);//
   cont_feed->SetBinContent(22,2);//
   //cont_feed->SetBinContent(23,2);//
   cont_feed->SetBinContent(25,5);//
   cont_feed->SetBinContent(27,2);
   cont_feed->SetBinContent(28,1);//
//   cont_feed->SetBinContent(29,2);
   cont_feed->SetEntries(25);
   
   TPaveStats *ptstats = new TPaveStats(0.5272989,0.3151261,0.6968391,0.4726891,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("cont_feed");
   text->SetTextSize(0.01610644);
   text = ptstats->AddText("Entries = 25     ");
   text = ptstats->AddText("Mean x = 0.7381");
   text = ptstats->AddText("Mean y =  0.381");
   text = ptstats->AddText("RMS x = 0.6098");
   text = ptstats->AddText("RMS y =  1.214");
   text = ptstats->AddText("       0|      0|      0
");
   text = ptstats->AddText("       0|     21|      4
");
   text = ptstats->AddText("       0|      0|      0
");
   ptstats->SetOptStat(101111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   cont_feed->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(cont_feed);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   cont_feed->SetLineColor(ci);
   cont_feed->SetMarkerColor(2);
   cont_feed->SetMarkerSize(1.6);
   cont_feed->GetXaxis()->SetTitle("contribution");
   cont_feed->GetXaxis()->SetBinLabel(1,"None");
   cont_feed->GetXaxis()->SetBinLabel(2,"Coffee");
   cont_feed->GetXaxis()->SetBinLabel(3,"System");
   cont_feed->GetXaxis()->SetBinLabel(4,"Both");
   cont_feed->GetXaxis()->SetLabelColor(4);
   cont_feed->GetXaxis()->SetLabelFont(42);
   cont_feed->GetXaxis()->SetLabelSize(0.05);
   cont_feed->GetXaxis()->SetTitleSize(0.035);
   cont_feed->GetXaxis()->SetTitleFont(42);
   cont_feed->GetYaxis()->SetTitle("feed");
   cont_feed->GetYaxis()->SetBinLabel(1,"negative");
   cont_feed->GetYaxis()->SetBinLabel(2,"positive");
   cont_feed->GetYaxis()->SetBinLabel(3,"v. positive");
   cont_feed->GetYaxis()->SetBinLabel(4,"occ. user");
   cont_feed->GetYaxis()->SetLabelColor(4);
   cont_feed->GetYaxis()->SetLabelFont(42);
   cont_feed->GetYaxis()->SetLabelSize(0.05);
   cont_feed->GetYaxis()->SetTitleSize(0.035);
   cont_feed->GetYaxis()->SetTitleFont(42);
   cont_feed->GetZaxis()->SetLabelFont(42);
   cont_feed->GetZaxis()->SetLabelSize(0.035);
   cont_feed->GetZaxis()->SetTitleSize(0.035);
   cont_feed->GetZaxis()->SetTitleFont(42);
   cont_feed->Draw("TEXT ");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
