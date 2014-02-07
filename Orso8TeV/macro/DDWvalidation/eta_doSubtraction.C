{
	int n = 5;
	bool noStat = true;
	TFile * data = TFile::Open("V15Eta/forAdding/TreesMu_Data_plots.root");
  TFile * w = TFile::Open("V15Eta/forAdding/TreesMu_WJets_plots.root");
	TFile * tt = TFile::Open("V15Eta/forAdding/TreesMu_TTBar_RW.root");
	
	TH1D * ttAntiEtaTrue = (TH1D*)tt->Get("antiEtaFwDTrue_allW/antiEtaFwDTrue_allWcosTheta");
	TH2D * ttAntiEtaTrue2D = (TH2D*)tt->Get("antiEtaFwDTrue_allW/antiEtaFwDTrue_allWcosTheta2D");
	ttAntiEtaTrue->Add((TH1D*)ttAntiEtaTrue2D->ProjectionY());
	ttAntiEtaTrue->SetLineColor(kRed);
	ttAntiEtaTrue->Rebin(n);
	if(noStat)
		ttAntiEtaTrue->SetStats(kFALSE);
	
	TH1D * ttAntiEta = (TH1D*)tt->Get("antiEtaFwD_allW/antiEtaFwD_allWcosTheta");
	TH2D * ttAntiEta2D = (TH2D*)tt->Get("antiEtaFwD_allW/antiEtaFwD_allWcosTheta2D");
	ttAntiEta->Add((TH1D*)ttAntiEta2D->ProjectionY());
	ttAntiEta->SetLineColor(kRed);
	ttAntiEta->Rebin(n);
	if(noStat)
		ttAntiEta->SetStats(kFALSE);	
	
	TH1D * dataAntiEta = (TH1D*)data->Get("antiEtaFwD_allW/antiEtaFwD_allWcosTheta");
	dataAntiEta->Rebin(n);
	if(noStat)
		dataAntiEta->SetStats(kFALSE);	
	
	TH1D * dataAntiEtaTrue = (TH1D*)data->Get("antiEtaFwDTrue_allW/antiEtaFwDTrue_allWcosTheta");
	dataAntiEtaTrue->Rebin(n);
	if(noStat)
		dataAntiEtaTrue->SetStats(kFALSE);	
	
	TH1D * wDefaultTrue = (TH1D*)w->Get("DefaultTrue_allW/DefaultTrue_allWcosTheta");
	wDefaultTrue->SetLineColor(kGreen);
	wDefaultTrue->Rebin(n);
	if(noStat)
		wDefaultTrue->SetStats(kFALSE);	
	
	TH1D * wDefault = (TH1D*)w->Get("Default_allW/Default_allWcosTheta");
	wDefault->SetLineColor(kGreen);
	wDefault->Rebin(n);
	if(noStat)
		wDefault->SetStats(kFALSE);	
		
	TH1D * wAntiEtaTrue = (TH1D*)w->Get("antiEtaFwDTrue_allW/antiEtaFwDTrue_allWcosTheta");
	wAntiEtaTrue->SetLineColor(kBlue);
	wAntiEtaTrue->Rebin(n);
	if(noStat)
		wAntiEtaTrue->SetStats(kFALSE);		
		
	TH1D * wAntiEta = (TH1D*)w->Get("antiEtaFwD_allW/antiEtaFwD_allWcosTheta");
	wAntiEta->SetLineColor(kBlue);
	wAntiEta->Rebin(n);
	if(noStat)
		wAntiEta->SetStats(kFALSE);		
			
	TH1D * wEtaTrue = (TH1D*)w->Get("EtaFwDTrue_allW/EtaFwDTrue_allWcosTheta");
	wEtaTrue->SetLineColor(kRed);
	wEtaTrue->Rebin(n);
	if(noStat)
		wEtaTrue->SetStats(kFALSE);
	
	TH1D * wEta = (TH1D*)w->Get("EtaFwD_allW/EtaFwD_allWcosTheta");
	wEta->SetLineColor(kRed);
	wEta->Rebin(n);
	if(noStat)
		wEta->SetStats(kFALSE);	
	
	TCanvas c0;
	wDefault->DrawNormalized();
	wEta->DrawNormalized("sames");
	wAntiEta->DrawNormalized("sames");
	c0.SaveAs("ShapeComparisons/wEta.C");	
	
	TCanvas c00;
	wDefaultTrue->DrawNormalized();
	wEtaTrue->DrawNormalized("sames");
	wAntiEtaTrue->DrawNormalized("sames");
	c00.SaveAs("ShapeComparisons/wEtaTrue.C");	
	
	TCanvas c;
	wDefault->DrawNormalized();
	ttAntiEta->DrawNormalized("sames");
	dataAntiEta->DrawNormalized("sames");
	c.SaveAs("ShapeComparisons/Eta.C");
	
	TCanvas c1;
	wDefaultTrue->DrawNormalized();
	ttAntiEtaTrue->DrawNormalized("sames");
	dataAntiEtaTrue->DrawNormalized("sames");
	c1.SaveAs("ShapeComparisons/EtaTrue.C");
	
	ttAntiEta->Scale(-1.);
	ttAntiEtaTrue->Scale(-1.);
	
	TH1D * dataBkpAntiEta = (TH1D*)dataAntiEta->Clone();
	TH1D * dataBkpAntiEtaTrue = (TH1D*)dataAntiEtaTrue->Clone();
	
	dataBkpAntiEta->Add(ttAntiEta);
	dataBkpAntiEtaTrue->Add(ttAntiEtaTrue);
	
	TCanvas c2;
	wDefault->DrawNormalized();
	dataBkpAntiEta->DrawNormalized("sames");
	c2.SaveAs("ShapeComparisons/sub_Eta.C");
	
	TCanvas c3;
	wDefaultTrue->DrawNormalized();
	dataBkpAntiEtaTrue->DrawNormalized("sames");
	c3.SaveAs("ShapeComparisons/sub_EtaTrue.C");
	
}
