{
	TFile *data = TFile::Open("TreesMu_WTemplateDefFormat_plots.root");
	TFile *mc = TFile::Open("TreesMu_WJets_plots.root");
	TH1D * hDataAll = (TH1D*)data->Get("hWEtaAll");
	TH1D * hMCAll = (TH1D*)mc->Get("hWEtaAll");
	hDataAll->Scale(1./hDataAll->Integral());
	hMCAll->Scale(1./hMCAll->Integral());
	hMCAll->Divide(hDataAll);
	hMCAll->SetName("Weight_WEtaAll");
	TH1D * hDataReal = (TH1D*)data->Get("hWEtaReal");
	TH1D * hMCReal = (TH1D*)mc->Get("hWEtaReal");
	hDataReal->Scale(1./hDataReal->Integral());
	hMCReal->Scale(1./hMCReal->Integral());
	cout<<hMCReal->Integral()<<"\t"<<hDataReal->Integral()<<endl;
	hMCReal->Divide(hDataReal);
	hMCReal->SetName("Weight_WEtaReal");
	TFile * f =  new TFile("TreesMu_WEta_plots.root","recreate");
	f->cd();
	hMCAll->Write();
	hMCReal->Write();
	f->Save();
	f->Close();
}
