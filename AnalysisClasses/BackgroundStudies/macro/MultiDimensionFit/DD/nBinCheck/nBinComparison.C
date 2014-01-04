{
	TGraph * def = new TGraph(2);
	def->SetPoint(0,9,-1);
	def->SetPoint(1,110,1);

    double x[5] = {100, 50, 25, 20, 10};
	double ex[5] = {0,0,0,0,0};

    double f0[5] = {0.68911, 0.703654, 0.716927, 0.727137, 0.722384};
	double ef0[5] = {0.0433257, 0.0463818, 0.0488122, 0.0493051, 0.0508874};

	TGraphErrors * gf0 = new TGraphErrors(5, x, f0, ex, ef0);


	double fl[5] = {0.321879, 0.317223, 0.31188, 0.306896, 0.308293};
	double efl[5] = {0.0300998, 0.0310553, 0.0320635, 0.032287, 0.0330198};

	TGraphErrors * gfl = new TGraphErrors(5, x, fl, ex, efl);

	double fr[5] = {-0.0109891, -0.0208771, -0.0288067, -0.0340324, -0.0306769};
	double efr[5] = {0.0196342, 0.0215906, 0.0228529, 0.0230565, 0.0239062};

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
