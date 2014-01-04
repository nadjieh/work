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
F0Up.push_back(-0.0107782);	FlUp.push_back(0.0110082);	FrUp.push_back(-0.000230041);
//// ctagUp
F0Up.push_back(-0.00167806);	FlUp.push_back(0.00168575);	FrUp.push_back(-7.68593e-06);
//// JERUp
F0Up.push_back(-0.00125824);	FlUp.push_back(0.0015728);	FrUp.push_back(-0.00031456);
//// JERUp
F0Up.push_back(-0.00143689);	FlUp.push_back(0.0024579);	FrUp.push_back(-0.001021);
//// lumiUp
F0Up.push_back(-0.00382634);	FlUp.push_back(0.00399798);	FrUp.push_back(-0.000171635);
//// massUp
F0Up.push_back(-0.0018531);	FlUp.push_back(0.00188868);	FrUp.push_back(-3.55808e-05);
//// METUp
F0Up.push_back(-0.0012111);	FlUp.push_back(0.0013253);	FrUp.push_back(-0.0001142);
//// puUp
F0Up.push_back(0.00160901);	FlUp.push_back(-0.00166316);	FrUp.push_back(5.41533e-05);
//// Q2Up
F0Up.push_back(0.00299034);	FlUp.push_back(-0.0036894);	FrUp.push_back(0.000699061);
//// ttUp
F0Up.push_back(-0.00121357);	FlUp.push_back(0.0012183);	FrUp.push_back(-4.72378e-06);
//// tUp
F0Up.push_back(-0.00136645);	FlUp.push_back(0.00138747);	FrUp.push_back(-2.10261e-05);
//// ewknormUp
F0Up.push_back(-0.0073316);	FlUp.push_back(0.00789936);	FrUp.push_back(-0.000567756);
//// qcdnormUp
F0Up.push_back(-0.0209489);	FlUp.push_back(0.0236889);	FrUp.push_back(-0.00273997);
//// cwshapeUp
F0Up.push_back(-0.00351527);	FlUp.push_back(0.00399528);	FrUp.push_back(-0.000480018);
//// bwshapeUp
F0Up.push_back(-0.00366313);	FlUp.push_back(0.00424368);	FrUp.push_back(-0.000580553);
//// generatorUp
F0Up.push_back(-0.00433814);	FlUp.push_back(0.00426288);	FrUp.push_back(7.5256e-05);
std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;

//// btagDown
F0Down.push_back(0.00697923);	FlDown.push_back(-0.00718626);	FrDown.push_back(0.000207034);
//// ctagDown
F0Down.push_back(-0.00167806);	FlDown.push_back(0.00168575);	FrDown.push_back(-7.68593e-06);
//// JERDown
F0Down.push_back(0.000581479);	FlDown.push_back(-5.21013e-05);	FrDown.push_back(-0.000529378);
//// JERDown
F0Down.push_back(-0.00296728);	FlDown.push_back(0.00414089);	FrDown.push_back(-0.00117361);
//// lumiDown
F0Down.push_back(0.000908174);	FlDown.push_back(-0.00108011);	FrDown.push_back(0.000171938);
//// massDown
F0Down.push_back(0.00257894);	FlDown.push_back(-0.00290858);	FrDown.push_back(0.000329637);
//// METDown
F0Down.push_back(-0.019035);	FlDown.push_back(0.0195231);	FrDown.push_back(-0.000488128);
//// puDown
F0Down.push_back(-0.00506915);	FlDown.push_back(0.0050948);	FrDown.push_back(-2.56508e-05);
//// Q2Down
F0Down.push_back(0.00803716);	FlDown.push_back(-0.00754688);	FrDown.push_back(-0.00049028);
//// ttDown
F0Down.push_back(-0.00607227);	FlDown.push_back(0.00609943);	FrDown.push_back(-2.716e-05);
//// tDown
F0Down.push_back(0.00138771);	FlDown.push_back(-0.00141136);	FrDown.push_back(2.36437e-05);
//// ewknormDown
F0Down.push_back(0.007184);	FlDown.push_back(-0.00774563);	FrDown.push_back(0.00056163);
//// qcdnormDown
F0Down.push_back(0.0185912);	FlDown.push_back(-0.0210847);	FrDown.push_back(0.00249353);
//// cwshapeDown
F0Down.push_back(-0.000475601);	FlDown.push_back(0.000688093);	FrDown.push_back(-0.000212492);
//// bwshapeDown
F0Down.push_back(1.19227e-05);	FlDown.push_back(0.000386413);	FrDown.push_back(-0.000398336);
//// generatorDown
F0Down.push_back(-0.00433814);	FlDown.push_back(0.00426288);	FrDown.push_back(7.5256e-05);
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
