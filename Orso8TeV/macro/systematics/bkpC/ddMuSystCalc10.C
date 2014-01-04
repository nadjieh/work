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
F0Up.push_back(-0.000936541);	FlUp.push_back(0.001227);	FrUp.push_back(-0.00029046);
//// ctagUp
F0Up.push_back(3.09549e-07);	FlUp.push_back(4.382e-07);	FrUp.push_back(-7.47749e-07);
//// JERUp
F0Up.push_back(0.0072363);	FlUp.push_back(-0.00609273);	FrUp.push_back(-0.00114357);
//// JERUp
F0Up.push_back(0.0117687);	FlUp.push_back(-0.00949517);	FrUp.push_back(-0.00227356);
//// lumiUp
F0Up.push_back(-0.000344652);	FlUp.push_back(0.000833046);	FrUp.push_back(-0.000488394);
//// massUp
F0Up.push_back(0.000629999);	FlUp.push_back(-0.00221185);	FrUp.push_back(0.00158185);
//// METUp
F0Up.push_back(0.00268447);	FlUp.push_back(-0.00180519);	FrUp.push_back(-0.000879284);
//// puUp
F0Up.push_back(0.00172798);	FlUp.push_back(-0.00123227);	FrUp.push_back(-0.000495704);
//// Q2Up
F0Up.push_back(0.0079913);	FlUp.push_back(-0.0103792);	FrUp.push_back(0.00238789);
//// ttUp
F0Up.push_back(0.00246484);	FlUp.push_back(-0.00239301);	FrUp.push_back(-7.18353e-05);
//// tUp
F0Up.push_back(-0.00143364);	FlUp.push_back(0.00146941);	FrUp.push_back(-3.57708e-05);
//// ewknormUp
F0Up.push_back(-0.00110376);	FlUp.push_back(0.00237376);	FrUp.push_back(-0.00127);
//// ewknormUp
F0Up.push_back(-0.000394779);	FlUp.push_back(0.00419584);	FrUp.push_back(-0.00380106);
//// cwshapeUp
F0Up.push_back(-0.00256801);	FlUp.push_back(0.00425548);	FrUp.push_back(-0.00168747);
//// bwshapeUp
F0Up.push_back(-0.000976928);	FlUp.push_back(0.00174713);	FrUp.push_back(-0.0007702);
//// generatorUp
F0Up.push_back(-0.00499949);	FlUp.push_back(0.00410556);	FrUp.push_back(0.000893928);
std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;

//// btagDown
F0Down.push_back(0.000933218);	FlDown.push_back(-0.00122255);	FrDown.push_back(0.000289337);
//// ctagDown
F0Down.push_back(3.09549e-07);	FlDown.push_back(4.382e-07);	FrDown.push_back(-7.47749e-07);
//// JERDown
F0Down.push_back(-9.51676e-05);	FlDown.push_back(0.00131568);	FrDown.push_back(-0.00122051);
//// JERDown
F0Down.push_back(-0.0023151);	FlDown.push_back(0.00394995);	FrDown.push_back(-0.00163485);
//// lumiDown
F0Down.push_back(0.00034265);	FlDown.push_back(-0.000825288);	FrDown.push_back(0.000482638);
//// massDown
F0Down.push_back(-0.00118821);	FlDown.push_back(-0.000782897);	FrDown.push_back(0.00197111);
//// METDown
F0Down.push_back(-0.00401109);	FlDown.push_back(0.00505704);	FrDown.push_back(-0.00104596);
//// puDown
F0Down.push_back(-0.00142796);	FlDown.push_back(0.00105756);	FrDown.push_back(0.000370396);
//// Q2Down
F0Down.push_back(0.00867106);	FlDown.push_back(-0.00942553);	FrDown.push_back(0.000754471);
//// ttDown
F0Down.push_back(-0.00268051);	FlDown.push_back(0.00259949);	FrDown.push_back(8.10144e-05);
//// tDown
F0Down.push_back(0.0014607);	FlDown.push_back(-0.00149769);	FrDown.push_back(3.69887e-05);
//// ewknormDown
F0Down.push_back(0.00108872);	FlDown.push_back(-0.00233763);	FrDown.push_back(0.00124891);
//// ewknormDown
F0Down.push_back(0.000387221);	FlDown.push_back(-0.00409948);	FrDown.push_back(0.00371226);
//// cwshapeDown
F0Down.push_back(-0.00178964);	FlDown.push_back(0.00256753);	FrDown.push_back(-0.000777881);
//// bwshapeDown
F0Down.push_back(0.00120525);	FlDown.push_back(-0.0021523);	FrDown.push_back(0.000947057);
//// generatorDown
F0Down.push_back(-0.00499949);	FlDown.push_back(0.00410556);	FrDown.push_back(0.000893928);
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
