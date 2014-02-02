{
	TGraph * def = new TGraph(2);
	def->SetPoint(0,9,-1);
	def->SetPoint(1,110,1);
	def->SetTitle("");

    double x[10] = {100, 90, 72, 60, 50, 40, 30, 25, 20, 10};
	double ex[10] = {0,0,0,0,0,0,0,0,0,0};

    double f0[10] = {0.797235, 0.807977, 0.806717, 0.806497, 0.796599, 0.807846, 0.808908, 0.79647, 0.804169, 0.804598};
	double ef0[10] = {0.0468567, 0.0466775, 0.0468881, 0.0470243, 0.0471929, 0.0471176, 0.047237, 0.0475171, 0.0472731, 0.0482329};

	TGraphErrors * gf0 = new TGraphErrors(10, x, f0, ex, ef0);
    gf0 ->SetTitle("F_{0}");
    gf0->SetMarkerStyle(20);
    gf0->SetMarkerColor(kRed);
    gf0->SetFillColor(kWhite);

	double fl[10] = {0.258822, 0.26638, 0.265083, 0.266627, 0.2614, 0.265774, 0.266497, 0.262261, 0.259022, 0.255632};
	double efl[10] = {0.0292365, 0.0291813, 0.029274, 0.0293187, 0.0293063, 0.0292869, 0.0293695, 0.0293784, 0.0292795, 0.0297677};

	TGraphErrors * gfl = new TGraphErrors(10, x, fl, ex, efl);
    gfl->SetTitle("F_{L}");
    gfl->SetMarkerStyle(20);
    gfl->SetMarkerColor(kBlue);
    gfl->SetFillColor(kWhite);

	double fr[10] = {0,0,0,0,0,0,0,0,0,0};
	double efr[10] = {0,0,0,0,0,0,0,0,0,0};

	TGraphErrors * gfr = new TGraphErrors(10, x, fr, ex, efr);
    gfr->SetTitle("F_{R}");
    gfr->SetMarkerStyle(20);
    gfr->SetMarkerColor(kGreen);
    gfr->SetFillColor(kWhite);



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
