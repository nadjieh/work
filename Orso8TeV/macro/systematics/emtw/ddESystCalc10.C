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

//// btagUp
F0Up.push_back(-0.000524361);	FlUp.push_back(0.00164543);	FrUp.push_back(-0.00112107);
//// ctagUp
F0Up.push_back(1.20046e-07);	FlUp.push_back(-1.29089e-07);	FrUp.push_back(9.04226e-09);
//// JERUp
F0Up.push_back(-0.0049272);	FlUp.push_back(0.00114029);	FrUp.push_back(0.00378692);
//// JESUp
F0Up.push_back(0.000675633);	FlUp.push_back(-0.00262265);	FrUp.push_back(0.00194702);	
//// lumiUp
F0Up.push_back(0.000580834);	FlUp.push_back(0.00127402);	FrUp.push_back(-0.00185486);
//// massUp
F0Up.push_back(-0.00129045);	FlUp.push_back(-0.000393498);	FrUp.push_back(0.00168395);
//// METUp
F0Up.push_back(-0.003459614);	FlUp.push_back(0.00560121);	FrUp.push_back(-0.0021416);
//// puUp
F0Up.push_back(0.000247925);	FlUp.push_back(-0.0018665);	FrUp.push_back(0.00161857);
//// Q2Up
F0Up.push_back(-0.00104894);	FlUp.push_back(-0.00399741);	FrUp.push_back(0.00504635);
//// ttUp
F0Up.push_back(0.000275265);	FlUp.push_back(-0.000361395);	FrUp.push_back(8.61301e-05);
//// tUp
F0Up.push_back(0.000136072);	FlUp.push_back(3.20645e-05);	FrUp.push_back(-0.000168137);
//// ewkUp
F0Up.push_back(0.00205216);	FlUp.push_back(0.00514036);	FrUp.push_back(-0.00719252);
//// qcdUp
F0Up.push_back(0.0104303);	FlUp.push_back(-0.0289257);	FrUp.push_back(0.0184954);
//// cUp
F0Up.push_back(0.00864069);	FlUp.push_back(-0.00179806);	FrUp.push_back(-0.00684264);
//// bUp
F0Up.push_back(0.00257584);	FlUp.push_back(0.000958657);	FrUp.push_back(-0.0035345);
//// genUp
F0Up.push_back(-0.00779259);	FlUp.push_back(0.00656892);	FrUp.push_back(0.00122367);



std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;

//// btagDown
F0Down.push_back(0.000513577);	FlDown.push_back(-0.00163491);	FrDown.push_back(0.00112134);
//// ctagDown
F0Down.push_back(1.20046e-07);	FlDown.push_back(-1.29089e-07);	FrDown.push_back(9.04226e-09);
//// JERDown
F0Down.push_back(0.00475005);	FlDown.push_back(0.0036233);	FrDown.push_back(-0.00837335);
//// JESDown
F0Down.push_back(-0.00157636);	FlDown.push_back(0.0075871);	FrDown.push_back(-0.00601074);
//// lumiDown
F0Down.push_back(-0.000716357);	FlDown.push_back(-0.0013605);	FrDown.push_back(0.00207686);
//// massDown
F0Down.push_back(0.00297218);	FlDown.push_back(-0.00458686);	FrDown.push_back(0.00161468);
//// METDown
F0Down.push_back(-0.003101826);	FlDown.push_back(0.00778856);	FrDown.push_back(-0.00489039);
//// puDown
F0Down.push_back(-0.000646858);	FlDown.push_back(0.00204767);	FrDown.push_back(-0.00140081);
//// Q2Down
F0Down.push_back(0.0110791);	FlDown.push_back(-0.00980519);	FrDown.push_back(-0.00127388);
//// ttDown
F0Down.push_back(-0.00462482);	FlDown.push_back(0.00445494);	FrDown.push_back(0.000169877);
//// tDown
F0Down.push_back(-0.000139743);	FlDown.push_back(-3.43041e-05);	FrDown.push_back(0.000174047);
//// ewkDown
F0Down.push_back(-0.00197788);	FlDown.push_back(-0.00496252);	FrDown.push_back(0.0069404);
//// qcdDown
F0Down.push_back(-0.0348436);	FlDown.push_back(-0.0282039);	FrDown.push_back(0.0630475);
//// cDown
F0Down.push_back(0.00886324);	FlDown.push_back(-0.00583534);	FrDown.push_back(-0.0030279);
//// bDown
F0Down.push_back(-0.00239567);	FlDown.push_back(-0.000907454);	FrDown.push_back(0.00330312);
//// genDown
F0Down.push_back(-0.00779259);	FlDown.push_back(0.00656892);	FrDown.push_back(0.00122367);


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
		if(names[i] == "m_{top}"){
			f0=f0/3.;
			fl=fl/3.;
			fr=fr/3.;
		}
		std::cout<<"|"<<names[i]<<"|\t"<<f0<<"|\t"<<fl<<"|\t"<<fr<<std::endl;
//		std::cout<<names[i]<<"&\t"<<f0<<"&\t"<<fl<<"&\t"<<fr<<"\\\\"<<std::endl;
//		cout<<"\\hline"<<endl;
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
//		std::cout<<" Sum &\t"<<sqrt(df0)<<"&\t"<<sqrt(dfl)<<"&\t"<<sqrt(dfr)<<std::endl;

}
