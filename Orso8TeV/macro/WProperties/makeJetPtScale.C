{
	TFile *data = TFile::Open("TreesMu_WTemplateDefFormat_plots.root");
	TFile *mc = TFile::Open("TreesMu_WJets_plots.root");
	TH1D * hDataAll = (TH1D*)data->Get("WPropertiesReal/WPropertiesReal_topPt");
	TH1D * hMCAll = (TH1D*)mc->Get("WPropertiesReal/WPropertiesReal_topPt");
	hDataAll->Scale(1./hDataAll->Integral());
	hMCAll->Scale(1./hMCAll->Integral());
	hMCAll->Divide(hDataAll);
	hMCAll->SetName("Weight_topPt");
	/*TH1D * hDataReal = (TH1D*)data->Get("highTagPt");
	TH1D * hMCReal = (TH1D*)mc->Get("highTagPt");
	hDataReal->Scale(1./hDataReal->Integral());
	hMCReal->Scale(1./hMCReal->Integral());
	cout<<hMCReal->Integral()<<"\t"<<hDataReal->Integral()<<endl;
	hMCReal->Divide(hDataReal);
	hMCReal->SetName("Weight_highTagPt");*/
	TFile * f =  new TFile("TreesMu_WtopPt_plots.root","recreate");
	f->cd();
	hMCAll->Write();
	//hMCReal->Write();
	f->Save();
	f->Close();
}
