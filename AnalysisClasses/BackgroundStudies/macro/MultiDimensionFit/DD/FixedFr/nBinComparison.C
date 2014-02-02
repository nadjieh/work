{
	TGraph * def = new TGraph(2);
	def->SetPoint(0,9,-1);
	def->SetPoint(1,110,1);
	def->SetTitle("");

    double x[10] = {100, 90, 72, 60, 50, 40, 30, 25, 20, 10};
	double ex[10] = {0,0,0,0,0,0,0,0,0,0};

    double f0[10] = {0.727383, 0.721713, 0.724119, 0.720415, 0.726812, 0.720126, 0.734856, 0.727398, 0.726981, 0.725606};
	double ef0[10] = {0.0506152, 0.0505611, 0.0507504, 0.0508747, 0.0510881, 0.0513828, 0.0518779, 0.0527092, 0.0532503, 0.0560877};

	TGraphErrors * gf0 = new TGraphErrors(10, x, f0, ex, ef0);
    gf0 ->SetTitle("F_{0}");
    gf0->SetMarkerStyle(20);
    gf0->SetMarkerColor(kRed);
    gf0->SetFillColor(kWhite);

	double fl[10] = {0.30476, 0.309537, 0.307645, 0.310291, 0.306602, 0.310125, 0.302252, 0.306614, 0.306405, 0.30586};
	double efl[10] = {0.0320741, 0.0320416, 0.0321375, 0.0322005, 0.0323015, 0.032468, 0.0327125, 0.0331814, 0.0334233, 0.0349143};

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
