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
F0Up.push_back(-0.0038959);	FlUp.push_back(0.00556482);	FrUp.push_back(-0.00166892);
//// ctagUp
F0Up.push_back(-1.15385e-07);	FlUp.push_back(-3.55087e-07);	FrUp.push_back(4.70472e-07);
//// JERUp
F0Up.push_back(0.0102631);	FlUp.push_back(-0.0114047);	FrUp.push_back(0.0011416);
//// JERUp
F0Up.push_back(0.0143935);	FlUp.push_back(-0.01052498);	FrUp.push_back(0.01052498-0.0143935);
//// lumiUp
F0Up.push_back(-0.00045192);	FlUp.push_back(0.00094653);	FrUp.push_back(-0.00049461);
//// massUp
F0Up.push_back(0.0009848);	FlUp.push_back(-0.00235303);	FrUp.push_back(0.00136823);
//// METUp
F0Up.push_back(0.008012);	FlUp.push_back(-0.00394848);	FrUp.push_back(0.00394848-0.008012);
//// puUp
F0Up.push_back(0.00334467);	FlUp.push_back(-0.00303128);	FrUp.push_back(-0.00031339);
//// Q2Up
F0Up.push_back(0.00820824);	FlUp.push_back(-0.0103946);	FrUp.push_back(0.00218637);
//// ttUp
F0Up.push_back(0.00254948);	FlUp.push_back(-0.00245547);	FrUp.push_back(-9.40035e-05);
//// tUp
F0Up.push_back(-0.00151945);	FlUp.push_back(0.00153455);	FrUp.push_back(-1.50963e-05);
//// ewknormUp
F0Up.push_back(-0.00130424);	FlUp.push_back(0.00258523);	FrUp.push_back(-0.001281);
//// ewknormUp
F0Up.push_back(-0.00870203);	FlUp.push_back(0.01851308);	FrUp.push_back(-0.01851308+0.00870203);
//// cwshapeUp
F0Up.push_back(-0.000149478);	FlUp.push_back(0.00289288);	FrUp.push_back(-0.0027434);
//// bwshapeUp
F0Up.push_back(0.000538615);	FlUp.push_back(0.00123493);	FrUp.push_back(-0.00177354);
//// generatorUp
F0Up.push_back(-0.00516941);	FlUp.push_back(0.00427013);	FrUp.push_back(0.00089928);
std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;

//// btagDown
F0Down.push_back(0.00376533);	FlDown.push_back(-0.00537858);	FrDown.push_back(0.00161325);
//// ctagDown
F0Down.push_back(-1.15385e-07);	FlDown.push_back(-3.55087e-07);	FrDown.push_back(4.70472e-07);
//// JERDown
F0Down.push_back(0.00328105);	FlDown.push_back(-0.00128094);	FrDown.push_back(-0.00200012);
//// JERDown
F0Down.push_back(0.0045459);	FlDown.push_back(-0.00272564);	FrDown.push_back(0.00272564-0.0045459);
//// lumiDown
F0Down.push_back(0.000446817);	FlDown.push_back(-0.000938709);	FrDown.push_back(0.000491892);
//// massDown
F0Down.push_back(-0.0010903);	FlDown.push_back(-0.000758249);	FrDown.push_back(0.00184855);
//// METDown
F0Down.push_back(-0.00666259);	FlDown.push_back(0.00780047);	FrDown.push_back(0.00666259-0.00780047);
//// puDown
F0Down.push_back(-0.00303599);	FlDown.push_back(0.00285508);	FrDown.push_back(0.000180905);
//// Q2Down
F0Down.push_back(0.00913467);	FlDown.push_back(-0.00971137);	FrDown.push_back(0.0005767);
//// ttDown
F0Down.push_back(-0.00277631);	FlDown.push_back(0.00266839);	FrDown.push_back(0.000107915);
//// tDown
F0Down.push_back(0.00154684);	FlDown.push_back(-0.00156564);	FrDown.push_back(1.8791e-05);
//// ewknormDown
F0Down.push_back(0.00128454);	FlDown.push_back(-0.00254755);	FrDown.push_back(0.00126301);
//// ewknormDown
F0Down.push_back(0.008685678);	FlDown.push_back(-0.01841089);	FrDown.push_back(0.01841089-0.008685678);
//// cwshapeDown
F0Down.push_back(0.000333069);	FlDown.push_back(0.00146036);	FrDown.push_back(-0.00179342);
//// bwshapeDown
F0Down.push_back(0.00164679);	FlDown.push_back(-0.00168106);	FrDown.push_back(3.4265e-05);
//// generatorDown
F0Down.push_back(-0.00516941);	FlDown.push_back(0.00427013);	FrDown.push_back(0.00089928);
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
