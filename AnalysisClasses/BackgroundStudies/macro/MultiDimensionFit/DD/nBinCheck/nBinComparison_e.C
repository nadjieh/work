{
	TGraph * def = new TGraph(2);
	def->SetPoint(0,9,-1);
	def->SetPoint(1,110,1);

    double x[5] = {100, 50, 25, 20, 10};
	double ex[5] = {0,0,0,0,0};

    double f0[5] = {0.725251, 0.693341, 0.691069, 0.67876, 0.648717};
	double ef0[5] = {0.064632, 0.0724043, 0.0751807, 0.076222, 0.079309};

	TGraphErrors * gf0 = new TGraphErrors(5, x, f0, ex, ef0);


	double fl[5] = {0.245879, 0.259473, 0.261968, 0.272424, 0.283083};
	double efl[5] = {0.0417117, 0.0439836, 0.0449002, 0.0453041, 0.0462797};

	TGraphErrors * gfl = new TGraphErrors(5, x, fl, ex, efl);

	double fr[5] = {0.0288703, 0.0471862, 0.0469633, 0.0488156, 0.0682};
	double efr[5] = {0.0321019, 0.0372202, 0.0390461, 0.0396828, 0.0417572};

	TGraphErrors * gfr = new TGraphErrors(5, x, fr, ex, efr);

	TCanvas *c1 = new TCanvas("c1", "c1",0,0,700,500);
    c1->SetHighLightColor(2);
    c1->Range(0,0,1,1);
    c1->SetFillColor(0);
    c1->SetBorderMode(0);
    c1->SetBorderSize(2);
    c1->SetFrameBorderMode(0);
	
	def->Draw("ap");
    gf0->Draw("p");
    gfl->Draw("p");
    gfr->Draw("p");

}
