{
std::vector<double> F0Up;
std::vector<double> FlUp;
std::vector<double> FrUp;
std::vector<std::string> names;
names.push_back("b-tag");
names.push_back("mis-tag");
names.push_back("JER");
names.push_back("JES");
names.push_back("luminosity");
names.push_back("$\\rm m_{top}$");
names.push_back("Unclust. Energy");
names.push_back("pile up");
names.push_back("$\\rm Q^{2}$ scale");
names.push_back("$t\\bar{t}$ norm.");
names.push_back("single-top norm.");
names.push_back("EWK norm.");
names.push_back("QCD norm.");
names.push_back("Wshape (c-flavor)");
names.push_back("Wshape (b-flavor)");
//names.push_back("PDF");
names.push_back("CompHep");
/*names.push_back("MC stat.");
names.push_back("Anom. $V_R$");
names.push_back("Anom. $g_L$");
names.push_back("SM W-helicity Ref.");*/

//// btagUp
F0Up.push_back(-0.00106404);	FlUp.push_back(0.000836168);	FrUp.push_back(0.000227872);
//// ctagUp
F0Up.push_back(2.83711e-07);	FlUp.push_back(-8.18023e-08);	FrUp.push_back(-2.01909e-07);
//// JERUp
F0Up.push_back(-0.000394696);	FlUp.push_back(-0.000106428);	FrUp.push_back(0.000501124);
//// JERUp
F0Up.push_back(0.00338662);	FlUp.push_back(-0.00167529);	FrUp.push_back(-0.00171133);
//// lumiUp
F0Up.push_back(-0.00020452);	FlUp.push_back(4.60546e-05);	FrUp.push_back(0.000158466);
//// massUp
F0Up.push_back(-0.019066);	FlUp.push_back(0.00912461);	FrUp.push_back(0.00994142);
//// METUp
F0Up.push_back(-0.00638959);	FlUp.push_back(0.00359763);	FrUp.push_back(0.00279196);
//// puUp
F0Up.push_back(0.000987478);	FlUp.push_back(-7.60913e-05);	FrUp.push_back(-0.000911387);
//// Q2Up
F0Up.push_back(0.00288839);	FlUp.push_back(-0.00162463);	FrUp.push_back(-0.00126376);
//// ttUp
F0Up.push_back(0.00133449);	FlUp.push_back(-0.00170231);	FrUp.push_back(0.000367823);
//// tUp
F0Up.push_back(-0.000850607);	FlUp.push_back(0.000945563);	FrUp.push_back(-9.49553e-05);
//// ewknormUp
F0Up.push_back(-0.000997276);	FlUp.push_back(0.00115856);	FrUp.push_back(-0.000161283);
//// ewknormUp
F0Up.push_back(0.00909001);	FlUp.push_back(-0.0071578);	FrUp.push_back(-0.00193222);
//// cwshapeUp
F0Up.push_back(-0.00815366);	FlUp.push_back(0.00779672);	FrUp.push_back(0.000356937);
//// bwshapeUp
F0Up.push_back(-0.00241116);	FlUp.push_back(0.00292972);	FrUp.push_back(-0.000518556);
//// generatorUp
F0Up.push_back(-0.00517591);	FlUp.push_back(0.00417926);	FrUp.push_back(0.000996654);

std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;

//// btagDown
F0Down.push_back(0.00106233);	FlDown.push_back(-0.000834239);	FrDown.push_back(-0.000228089);
//// ctagDown
F0Down.push_back(2.83711e-07);	FlDown.push_back(-8.18023e-08);	FrDown.push_back(-2.01909e-07);
//// JERDown
F0Down.push_back(-0.00272086);	FlDown.push_back(0.00347471);	FrDown.push_back(-0.000753846);
//// JERDown
F0Down.push_back(0.000355208);	FlDown.push_back(0.00428114);	FrDown.push_back(-0.00463634);
//// lumiDown
F0Down.push_back(0.000202686);	FlDown.push_back(-4.56235e-05);	FrDown.push_back(-0.000157062);
//// massDown
F0Down.push_back(0.0230945);	FlDown.push_back(-0.0206004);	FrDown.push_back(-0.00249413);
//// METDown
F0Down.push_back(-0.00698441);	FlDown.push_back(0.00500767);	FrDown.push_back(0.00197674);
//// puDown
F0Down.push_back(-0.000665729);	FlDown.push_back(3.30697e-05);	FrDown.push_back(0.000632659);
//// Q2Down
F0Down.push_back(-0.00550965);	FlDown.push_back(-0.00296228);	FrDown.push_back(0.00847194);
//// ttDown
F0Down.push_back(-0.00145861);	FlDown.push_back(0.00183382);	FrDown.push_back(-0.000375212);
//// tDown
F0Down.push_back(0.000866903);	FlDown.push_back(-0.000965193);	FrDown.push_back(9.82894e-05);
//// ewknormDown
F0Down.push_back(0.000981877);	FlDown.push_back(-0.00114041);	FrDown.push_back(0.000158534);
//// ewknormDown
F0Down.push_back(-0.00866235);	FlDown.push_back(0.00681793);	FrDown.push_back(0.00184442);
//// cwshapeDown
F0Down.push_back(-0.00855779);	FlDown.push_back(0.00655977);	FrDown.push_back(0.00199801);
//// bwshapeDown
F0Down.push_back(0.00228266);	FlDown.push_back(-0.00277209);	FrDown.push_back(0.000489428);
//// generatorDown
F0Down.push_back(-0.00517591);	FlDown.push_back(0.00417926);	FrDown.push_back(0.000996654);
cout<<F0Down.size()<<"\t"<<F0Up.size()<<"\t"<<names.size()<<endl;
std::cout.setf(std::ios::fixed);
std::cout.precision(3);
	std::vector<double> F0Sum;
	std::vector<double> FlSum;
	std::vector<double> FrSum;
	cout<<"|\t"<<"|\t\\Delta F_0|\t\\Delta F_L|\t\\Delta F_R"<<endl;
	for(unsigned int i = 0; i<F0Up.size(); i++){
		double f0 = (fabs(F0Up[i])+fabs(F0Down[i]))/2.;
		double fl = (fabs(FlUp[i])+fabs(FlDown[i]))/2.;
		double fr = (fabs(FrUp[i])+fabs(FrDown[i]))/2.;
		if(names[i] == "$\\rm m_{top}$"){
			f0=f0/3.;
			fl=fl/3.;
			fr=fr/3.;
		}
		std::cout<<"|"<<names[i]<<"|\t"<<f0<<"|\t"<<fl<<"|\t"<<fr<<std::endl;
		F0Sum.push_back(f0);
		FlSum.push_back(fl);
		FrSum.push_back(fr);
	}
	double df0 = 0;
	double dfl = 0;
	double dfr = 0;
	for(unsigned int i = 0; i<F0Up.size(); i++){
		df0 += pow(F0Sum[i],2);
		dfl += pow(FlSum[i],2);
		dfr += pow(FrSum[i],2);
	}
		std::cout<<"| Sum |\t"<<sqrt(df0)<<"|\t"<<sqrt(dfl)<<"|\t"<<sqrt(dfr)<<std::endl;

}
