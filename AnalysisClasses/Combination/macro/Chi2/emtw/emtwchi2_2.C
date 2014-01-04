{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Oct  1 17:40:32 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",67,53,637,641);
   Canvas_1->Range(-1.25,-937.5001,1.25,8437.5);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *forBand = new TH1D("forBand","e_Chi2Syst_correlated_res3D",10,-1,1);
   forBand->SetBinContent(1,4580.609);
   forBand->SetBinContent(2,4792.502);
   forBand->SetBinContent(3,5437.128);
   forBand->SetBinContent(4,5604.878);
   forBand->SetBinContent(5,5595.203);
   forBand->SetBinContent(6,5504.675);
   forBand->SetBinContent(7,5325.75);
   forBand->SetBinContent(8,5315.026);
   forBand->SetBinContent(9,5532.927);
   forBand->SetBinContent(10,6818.123);
   forBand->SetBinError(1,40.64282);
   forBand->SetBinError(2,17.78622);
   forBand->SetBinError(3,52.91817);
   forBand->SetBinError(4,63.54919);
   forBand->SetBinError(5,88.23872);
   forBand->SetBinError(6,57.91226);
   forBand->SetBinError(7,64.29634);
   forBand->SetBinError(8,132.2432);
   forBand->SetBinError(9,201.4657);
   forBand->SetBinError(10,280.6772);
   forBand->SetMinimum(0);
   forBand->SetMaximum(7500);
   forBand->SetEntries(980903);
   
   TPaveStats *ptstats = new TPaveStats(0.6609195,0.335443,0.862069,0.4957806,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("forBand");
   text->SetTextSize(0.03687764);
   text = ptstats->AddText("Entries = 980903 ");
   text = ptstats->AddText("Mean  = 0.04399");
   text = ptstats->AddText("RMS   = 0.5779");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   forBand->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(forBand);
   forBand->SetFillColor(5);
   forBand->SetLineColor(5);
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
   
   TPaveText *pt = new TPaveText(0.2471839,0.9342405,0.7528161,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("e_Chi2Syst_correlated_res3D");
   pt->Draw();
   
   TH1D *e_Chi2Syst_correlated_data = new TH1D("e_Chi2Syst_correlated_data","Default_allW: cos(#theta)",10,-1,1);
   e_Chi2Syst_correlated_data->SetBinContent(1,4838);
   e_Chi2Syst_correlated_data->SetBinContent(2,4700);
   e_Chi2Syst_correlated_data->SetBinContent(3,5304);
   e_Chi2Syst_correlated_data->SetBinContent(4,5592);
   e_Chi2Syst_correlated_data->SetBinContent(5,5578);
   e_Chi2Syst_correlated_data->SetBinContent(6,5498);
   e_Chi2Syst_correlated_data->SetBinContent(7,5450);
   e_Chi2Syst_correlated_data->SetBinContent(8,5301);
   e_Chi2Syst_correlated_data->SetBinContent(9,5677);
   e_Chi2Syst_correlated_data->SetBinContent(10,6604);
   e_Chi2Syst_correlated_data->SetEntries(54542);
   
   ptstats = new TPaveStats(0.6522989,0.1434599,0.8534483,0.3037975,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("e_Chi2Syst_correlated_data");
   text->SetTextSize(0.03687764);
   text = ptstats->AddText("Entries = 54542  ");
   text = ptstats->AddText("Mean  = 0.04113");
   text = ptstats->AddText("RMS   = 0.5799");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   e_Chi2Syst_correlated_data->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(e_Chi2Syst_correlated_data);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   e_Chi2Syst_correlated_data->SetLineColor(ci);
   e_Chi2Syst_correlated_data->GetXaxis()->SetTitle("cos(#theta*)");
   e_Chi2Syst_correlated_data->GetXaxis()->SetLabelFont(42);
   e_Chi2Syst_correlated_data->GetXaxis()->SetLabelSize(0.035);
   e_Chi2Syst_correlated_data->GetXaxis()->SetTitleSize(0.035);
   e_Chi2Syst_correlated_data->GetXaxis()->SetTitleFont(42);
   e_Chi2Syst_correlated_data->GetYaxis()->SetLabelFont(42);
   e_Chi2Syst_correlated_data->GetYaxis()->SetLabelSize(0.035);
   e_Chi2Syst_correlated_data->GetYaxis()->SetTitleSize(0.035);
   e_Chi2Syst_correlated_data->GetYaxis()->SetTitleFont(42);
   e_Chi2Syst_correlated_data->GetZaxis()->SetLabelFont(42);
   e_Chi2Syst_correlated_data->GetZaxis()->SetLabelSize(0.035);
   e_Chi2Syst_correlated_data->GetZaxis()->SetTitleSize(0.035);
   e_Chi2Syst_correlated_data->GetZaxis()->SetTitleFont(42);
   e_Chi2Syst_correlated_data->Draw("sames");
	double chi = 0;
   for(int i =0; i<10; i++){
	chi+=pow((forBand->GetBinContent(i+1)-e_Chi2Syst_correlated_data->GetBinContent(i+1)),2)/
    (pow(forBand->GetBinError(i+1),2)+pow(e_Chi2Syst_correlated_data->GetBinError(i+1),2));
   }
	cout<<chi<<endl;
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
