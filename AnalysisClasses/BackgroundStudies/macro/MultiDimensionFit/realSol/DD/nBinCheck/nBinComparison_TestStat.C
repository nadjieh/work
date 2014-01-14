{
	TGraph * def = new TGraph(2);
	def->SetPoint(0,9,-1);
	def->SetPoint(1,110,1);
	def->SetTitle("");

    double x[10] = {100, 90, 72, 60, 50, 40, 30, 25, 20, 10};
	double ex[10] = {0,0,0,0,0,0,0,0,0,0};

    double f0[10] = {0.773416, 0.766857, 0.816229, 0.763057, 0.792578, 0.759646, 0.804319, 0.795386, 0.791609, 0.786833};
	double ef0[10] = {0.0509919, 0.0600758, 0.0614863, 0.0648528, 0.0565104, 0.0684252, 0.0704445, 0.0603283, 0.0645267, 0.0702234};

	TGraphErrors * gf0 = new TGraphErrors(10, x, f0, ex, ef0);
    gf0 ->SetTitle("F_{0}");
    gf0->SetMarkerStyle(20);
    gf0->SetMarkerColor(kRed);
    gf0->SetFillColor(kWhite);

	double fl[10] = {0.246809, 0.252485, 0.225408, 0.255474, 0.24, 0.256736, 0.233225, 0.239241, 0.23942, 0.239074};
	double efl[10] = {0.0379514, 0.0433916, 0.0438054, 0.0452512, 0.0395616, 0.0466873, 0.0477186, 0.0408646, 0.0422819, 0.0446035};

	TGraphErrors * gfl = new TGraphErrors(10, x, fl, ex, efl);
    gfl->SetTitle("F_{L}");
    gfl->SetMarkerStyle(20);
    gfl->SetMarkerColor(kBlue);
    gfl->SetFillColor(kWhite);

	double fr[10] = {-0.0202247, -0.0193415, -0.0416372, -0.0185301, -0.0325774, -0.0163827, -0.0375435, -0.0346266, -0.031029, -0.0259069};
	double efr[10] = {0.0203708, 0.0223467, 0.0233083, 0.0252218, 0.0243027, 0.0272267, 0.0280513, 0.026682, 0.0292663, 0.032422};

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
