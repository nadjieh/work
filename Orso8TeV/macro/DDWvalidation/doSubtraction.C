{
	TFile * data = TFile::Open("TreesMu_Data_plots.root");
  TFile * w = TFile::Open("TreesMu_WJets_plots.root");
	TFile * tt = TFile::Open("TreesMu_TTBar_RW.root");
	
	TH1D * ttAntiEta = (TH1D*)tt->Get("antiEtaFwDTrue_allW/antiEtaFwDTrue_allWcosTheta");
	TH2D * ttAntiEta2D = (TH2D*)tt->Get("antiEtaFwDTrue_allW/antiEtaFwDTrue_allWcosTheta2D");
	ttAntiEta->Add((TH1D*)ttAntiEta2D->ProjectionY());
	ttAntiEta->SetLineColor(kRed);
	
	TH1D * ttMtop = (TH1D*)tt->Get("MtopOutWindowTrue_allW/MtopOutWindowTrue_allWcosTheta");
	TH2D * ttMtop2D = (TH2D*)tt->Get("MtopOutWindowTrue_allW/MtopOutWindowTrue_allWcosTheta2D");
	ttMtop->Add((TH1D*)ttMtop2D->ProjectionY());
	ttMtop->SetLineColor(kRed);
	
	TH1D * dataMtop = (TH1D*)data->Get("MtopOutWindowTrue_allW/MtopOutWindowTrue_allWcosTheta");
	TH1D * dataAntiEta = (TH1D*)data->Get("antiEtaFwDTrue_allW/antiEtaFwDTrue_allWcosTheta");
	
	TH1D * wDefault = (TH1D*)w->Get("DefaultTrue_allW/DefaultTrue_allWcosTheta");
	wDefault->SetLineColor(kGreen);
	
	TCanvas c;
	wDefault->DrawNormalized();
	ttMtop->DrawNormalized("sames");
	dataMtop->DrawNormalized("sames");
	c.SaveAs("ShapeComparisons/true_outWindow.C");
	
	TCanvas c1;
	wDefault->DrawNormalized();
	ttAntiEta->DrawNormalized("sames");
	dataAntiEta->DrawNormalized("sames");
	c1.SaveAs("ShapeComparisons/true_central_Eta.C");
	
	ttMtop->Scale(-1.);
	ttAntiEta->Scale(-1.);
	
	TH1D * dataBkpMtop = (TH1D*)dataMtop->Clone();
	TH1D * dataBkpAntiEta = (TH1D*)dataAntiEta->Clone();
	
	dataBkpMtop->Add(ttMtop);
	dataBkpAntiEta->Add(ttAntiEta);
	
	TCanvas c2;
	wDefault->DrawNormalized();
	dataBkpMtop->DrawNormalized("sames");
	c2.SaveAs("ShapeComparisons/sub_true_outWindow.C");
	
	TCanvas c3;
	wDefault->DrawNormalized();
	dataBkpAntiEta->DrawNormalized("sames");
	c3.SaveAs("ShapeComparisons/sub_true_central_Eta.C");
	
}
