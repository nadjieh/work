{
	TFile *data = TFile::Open("TreesMu_WTemplateDefFormat_plots.root");
	TFile *mc = TFile::Open("TreesMu_WJets_plots.root");
	
	TDirectory * hDataAll = (TDirectory*)data->Get("WProperties");
	TDirectory * hMCAll = (TDirectory*)mc->Get("WProperties");
	
	TDirectory * hDataReal = (TDirectory*)data->Get("WPropertiesReal");
	TDirectory * hMCReal = (TDirectory*)mc->Get("WPropertiesReal");
	
	TList * lDataAll = hDataAll->GetListOfKeys();
	TList * lMCAll = hMCAll->GetListOfKeys();
	
	TList * lDataReal = hDataReal->GetListOfKeys();
	TList * lMCReal = hMCReal->GetListOfKeys();
	
	for(int i = 0; i < lDataAll->GetSize(); i++){
		TH1D * h1 = (TH1D*)hDataAll->Get(lDataAll->At(i)->GetName());
		TH1D * h2 = (TH1D*)hMCAll->Get(lMCAll->At(i)->GetName());
		h2->SetLineColor(kGreen);
		TCanvas c;
		h2->DrawNormalized();
		h1->DrawNormalized("sames");
		TString a = h2->GetName();
		c.SaveAs(a + ".C");
		c.SaveAs(a + ".gif");
	}
	
	for(int i = 0; i < lDataReal->GetSize(); i++){
		TH1D * h1 = (TH1D*)hDataReal->Get(lDataReal->At(i)->GetName());
		TH1D * h2 = (TH1D*)hMCReal->Get(lMCReal->At(i)->GetName());
		h2->SetLineColor(kGreen);
		TCanvas c;
		h2->DrawNormalized();
		h1->DrawNormalized("sames");
		TString a = h2->GetName();
  	c.SaveAs(a + ".gif");
		c.SaveAs(a + ".C");
	}

}
