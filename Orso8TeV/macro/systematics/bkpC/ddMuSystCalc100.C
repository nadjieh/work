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
names.push_back("SM W-helicity Ref.");
*/
//// btagUp
F0Up.push_back(-0.00139398);	FlUp.push_back(0.00140518);	FrUp.push_back(-1.11969e-05);
//// ctagUp
F0Up.push_back(4.28576e-07);	FlUp.push_back(1.04323e-07);	FrUp.push_back(-5.32899e-07);
//// JERUp
F0Up.push_back(0.00508915);	FlUp.push_back(-0.0049987);	FrUp.push_back(-9.04532e-05);
//// JERUp
F0Up.push_back(0.00819505);	FlUp.push_back(-0.00780599);	FrUp.push_back(-0.000389061);
//// lumiUp
F0Up.push_back(-0.00110888);	FlUp.push_back(0.00113064);	FrUp.push_back(-2.17648e-05);
//// massUp
F0Up.push_back(0.00345053);	FlUp.push_back(-0.00344069);	FrUp.push_back(-9.83366e-06);
//// METUp
F0Up.push_back(0.000388631);	FlUp.push_back(-0.000434432);	FrUp.push_back(4.58013e-05);
//// puUp
F0Up.push_back(0.0011174);	FlUp.push_back(-0.00106313);	FrUp.push_back(-5.4268e-05);
//// Q2Up
F0Up.push_back(0.0109776);	FlUp.push_back(-0.011356);	FrUp.push_back(0.000378422);
//// ttUp
F0Up.push_back(0.00234843);	FlUp.push_back(-0.00233876);	FrUp.push_back(-9.66782e-06);
//// tUp
F0Up.push_back(-0.00148908);	FlUp.push_back(0.00149259);	FrUp.push_back(-3.50762e-06);
//// ewknormUp
F0Up.push_back(-0.00305611);	FlUp.push_back(0.00311443);	FrUp.push_back(-5.83234e-05);
//// ewknormUp
F0Up.push_back(-0.00606007);	FlUp.push_back(0.00639812);	FrUp.push_back(-0.000338047);
//// cwshapeUp
F0Up.push_back(-0.00488517);	FlUp.push_back(0.00491267);	FrUp.push_back(-2.75039e-05);
//// bwshapeUp
F0Up.push_back(-0.00206426);	FlUp.push_back(0.00208032);	FrUp.push_back(-1.60594e-05);
//// generatorUp
F0Up.push_back(-0.00360309);	FlUp.push_back(0.00349633);	FrUp.push_back(0.000106758);
std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;

//// btagDown
F0Down.push_back(0.00139155);	FlDown.push_back(-0.00140172);	FrDown.push_back(1.01666e-05);
//// ctagDown
F0Down.push_back(4.28576e-07);	FlDown.push_back(1.04323e-07);	FrDown.push_back(-5.32899e-07);
//// JERDown
F0Down.push_back(-0.00204865);	FlDown.push_back(0.00232166);	FrDown.push_back(-0.000273005);
//// JERDown
F0Down.push_back(-0.00519594);	FlDown.push_back(0.00528976);	FrDown.push_back(-9.38196e-05);
//// lumiDown
F0Down.push_back(0.00110257);	FlDown.push_back(-0.00112317);	FrDown.push_back(2.06054e-05);
//// massDown
F0Down.push_back(-0.000787162);	FlDown.push_back(0.000524581);	FrDown.push_back(0.000262581);
//// METDown
F0Down.push_back(-0.00595191);	FlDown.push_back(0.00581337);	FrDown.push_back(0.000138547);
//// puDown
F0Down.push_back(-0.00101541);	FlDown.push_back(0.000976575);	FrDown.push_back(3.88305e-05);
//// Q2Down
F0Down.push_back(0.00923658);	FlDown.push_back(-0.00922386);	FrDown.push_back(-1.27204e-05);
//// ttDown
F0Down.push_back(-0.00254955);	FlDown.push_back(0.00253974);	FrDown.push_back(9.80975e-06);
//// tDown
F0Down.push_back(0.00151941);	FlDown.push_back(-0.00152215);	FrDown.push_back(2.74231e-06);
//// ewknormDown
F0Down.push_back(0.00302041);	FlDown.push_back(-0.00307742);	FrDown.push_back(5.7016e-05);
//// ewknormDown
F0Down.push_back(0.00593175);	FlDown.push_back(-0.00626449);	FrDown.push_back(0.00033274);
//// cwshapeDown
F0Down.push_back(-0.00287261);	FlDown.push_back(0.00286764);	FrDown.push_back(4.97926e-06);
//// bwshapeDown
F0Down.push_back(0.00264477);	FlDown.push_back(-0.00267365);	FrDown.push_back(2.88803e-05);
//// generatorDown
F0Down.push_back(-0.00360309);	FlDown.push_back(0.00349633);	FrDown.push_back(0.000106758);

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
