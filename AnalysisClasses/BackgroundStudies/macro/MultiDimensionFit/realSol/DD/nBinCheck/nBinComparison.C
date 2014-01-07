{
	TGraph * def = new TGraph(2);
	def->SetPoint(0,9,-1);
	def->SetPoint(1,110,1);
	def->SetTitle("");

    double x[10] = {100, 90, 72, 60, 50, 40, 30, 25, 20, 10};
	double ex[10] = {0,0,0,0,0,0,0,0,0,0};

    double f0[10] = {0.759269, 0.77174, 0.77399, 0.792224, 0.795067, 0.812178, 0.830758, 0.817944, 0.813386, 0.844789};
	double ef0[10] = {0.0441946, 0.0457402, 0.0474224, 0.0481789, 0.0488611, 0.0500962, 0.0525806, 0.052781, 0.0533838, 0.0567039};

	TGraphErrors * gf0 = new TGraphErrors(10, x, f0, ex, ef0);
    gf0 ->SetTitle("F_{0}");
    gf0->SetMarkerStyle(20);
    gf0->SetMarkerColor(kRed);
    gf0->SetFillColor(kWhite);

	double fl[10] = {0.258515, 0.260546, 0.258795, 0.253523, 0.247188, 0.245544, 0.238884, 0.23899, 0.239052, 0.224821};
	double efl[10] = {0.031932, 0.0325563, 0.0328979, 0.0330179, 0.0330189, 0.0334285, 0.034132, 0.0339885, 0.0341401, 0.0352685};

	TGraphErrors * gfl = new TGraphErrors(10, x, fl, ex, efl);
    gfl->SetTitle("F_{L}");
    gfl->SetMarkerStyle(20);
    gfl->SetMarkerColor(kBlue);
    gfl->SetFillColor(kWhite);

	double fr[10] = {-0.0177839, -0.0322859, -0.0327846, -0.0457472, -0.0422543, -0.0577216, -0.0696419, -0.0569335, -0.0524385, -0.0696101};
	double efr[10] = {0.0211237, 0.0221233, 0.0235158, 0.0242154, 0.0246715, 0.025619, 0.027263, 0.0274039, 0.0278322, 0.0299191};

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
