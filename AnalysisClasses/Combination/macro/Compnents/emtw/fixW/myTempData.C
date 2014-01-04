{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Mon Oct 21 11:57:33 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",67,53,700,502);
   Canvas_1->Range(-1.25,-1250,1.25,11250);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *forBand = new TH1D("forBand","e_Chi2Syst_uncorrelated_res3D",10,-1,1);
   forBand->SetBinContent(1,4592.445);
   forBand->SetBinContent(2,4805.674);
   forBand->SetBinContent(3,5443.185);
   forBand->SetBinContent(4,5611.496);
   forBand->SetBinContent(5,5593.518);
   forBand->SetBinContent(6,5506.991);
   forBand->SetBinContent(7,5328.235);
   forBand->SetBinContent(8,5319.463);
   forBand->SetBinContent(9,5536.784);
   forBand->SetBinContent(10,6813.035);
   forBand->SetBinError(1,43.29038);
   forBand->SetBinError(2,76.77925);
   forBand->SetBinError(3,112.3454);
   forBand->SetBinError(4,96.93832);
   forBand->SetBinError(5,95.02288);
   forBand->SetBinError(6,46.92971);
   forBand->SetBinError(7,34.89722);
   forBand->SetBinError(8,106.6243);
   forBand->SetBinError(9,183.0853);
   forBand->SetBinError(10,269.3574);
   forBand->SetMinimum(0);
   forBand->SetMaximum(10000);
   forBand->SetEntries(980903);
   
   TPaveStats *ptstats = new TPaveStats(0.1350575,0.8037975,0.3362069,0.964135,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("forBand");
   text->SetTextSize(0.03687764);
   text = ptstats->AddText("Entries = 980903 ");
   text = ptstats->AddText("Mean  = 0.0435");
   text = ptstats->AddText("RMS   = 0.5779");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   forBand->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(forBand);
   forBand->SetFillColor(5);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   forBand->SetLineColor(ci);
   forBand->GetXaxis()->SetLabelFont(42);
   forBand->GetXaxis()->SetLabelSize(0.035);
   forBand->GetXaxis()->SetTitleSize(0.035);
   forBand->GetXaxis()->SetTitleFont(42);
   forBand->GetYaxis()->SetLabelFont(42);
   forBand->GetYaxis()->SetLabelSize(0.035);
   forBand->GetYaxis()->SetTitleSize(0.035);
   forBand->GetYaxis()->SetTitleFont(42);
   forBand->GetZaxis()->SetLabelFont(42);
   forBand->GetZaxis()->SetLabelSize(0.035);
   forBand->GetZaxis()->SetTitleSize(0.035);
   forBand->GetZaxis()->SetTitleFont(42);
   forBand->Draw("E2");
   
   TPaveText *pt = new TPaveText(0.2263506,0.9342405,0.7736494,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("e_Chi2Syst_uncorrelated_res3D");
   pt->Draw();
   
   TH1D *e_Chi2Syst_uncorrelated_data = new TH1D("e_Chi2Syst_uncorrelated_data","Default_allW: cos(#theta)",10,-1,1);
   e_Chi2Syst_uncorrelated_data->SetBinContent(1,4838);
   e_Chi2Syst_uncorrelated_data->SetBinContent(2,4700);
   e_Chi2Syst_uncorrelated_data->SetBinContent(3,5304);
   e_Chi2Syst_uncorrelated_data->SetBinContent(4,5592);
   e_Chi2Syst_uncorrelated_data->SetBinContent(5,5578);
   e_Chi2Syst_uncorrelated_data->SetBinContent(6,5498);
   e_Chi2Syst_uncorrelated_data->SetBinContent(7,5450);
   e_Chi2Syst_uncorrelated_data->SetBinContent(8,5301);
   e_Chi2Syst_uncorrelated_data->SetBinContent(9,5677);
   e_Chi2Syst_uncorrelated_data->SetBinContent(10,6604);
   e_Chi2Syst_uncorrelated_data->SetEntries(54542);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("e_Chi2Syst_uncorrelated_data");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 54542  ");
   text = ptstats->AddText("Mean  = 0.04113");
   text = ptstats->AddText("RMS   = 0.5799");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   e_Chi2Syst_uncorrelated_data->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(e_Chi2Syst_uncorrelated_data);

   ci = TColor::GetColor("#000099");
   e_Chi2Syst_uncorrelated_data->SetLineColor(ci);
   e_Chi2Syst_uncorrelated_data->SetMarkerStyle(20);
   e_Chi2Syst_uncorrelated_data->GetXaxis()->SetTitle("cos(#theta*)");
   e_Chi2Syst_uncorrelated_data->GetXaxis()->SetLabelFont(42);
   e_Chi2Syst_uncorrelated_data->GetXaxis()->SetLabelSize(0.035);
   e_Chi2Syst_uncorrelated_data->GetXaxis()->SetTitleSize(0.035);
   e_Chi2Syst_uncorrelated_data->GetXaxis()->SetTitleFont(42);
   e_Chi2Syst_uncorrelated_data->GetYaxis()->SetLabelFont(42);
   e_Chi2Syst_uncorrelated_data->GetYaxis()->SetLabelSize(0.035);
   e_Chi2Syst_uncorrelated_data->GetYaxis()->SetTitleSize(0.035);
   e_Chi2Syst_uncorrelated_data->GetYaxis()->SetTitleFont(42);
   e_Chi2Syst_uncorrelated_data->GetZaxis()->SetLabelFont(42);
   e_Chi2Syst_uncorrelated_data->GetZaxis()->SetLabelSize(0.035);
   e_Chi2Syst_uncorrelated_data->GetZaxis()->SetTitleSize(0.035);
   e_Chi2Syst_uncorrelated_data->GetZaxis()->SetTitleFont(42);
   e_Chi2Syst_uncorrelated_data->Draw("ESAME");
   for(int i = 0; i < e_Chi2Syst_uncorrelated_data->GetXaxis()->GetNbins(); i++)
	cout<<e_Chi2Syst_uncorrelated_data->GetBinContent(i+1) - forBand->GetBinContent(i+1)<<endl;
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
