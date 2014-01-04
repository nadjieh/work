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
names.push_back("PDF");
names.push_back("CompHep");
names.push_back("MC stat.");
names.push_back("Anom. $V_R$");
names.push_back("Anom. $g_L$");
names.push_back("SM W-helicity Ref.");

//// btagUp
F0Up.push_back(-0.00103098);	FlUp.push_back(0.00105894);	FrUp.push_back(-2.79561e-05);
//// ctagUp
F0Up.push_back(4.12963e-07);	FlUp.push_back(1.97095e-07);	FrUp.push_back(-6.10058e-07);
//// JERUp
F0Up.push_back(0.00315683);	FlUp.push_back(-0.00310761);	FrUp.push_back(-4.92151e-05);
//// JESUp
F0Up.push_back(0.00425635);	FlUp.push_back(-0.00127082);	FrUp.push_back(-0.00298553);
//// lumiUp
F0Up.push_back(-0.00024205);	FlUp.push_back(0.000339772);	FrUp.push_back(-9.77214e-05);
//// massUp
F0Up.push_back(-0.00539379);	FlUp.push_back(0.000859728);	FrUp.push_back(0.00453406);
//// METUp
F0Up.push_back(0.002891425);	FlUp.push_back(-0.00460556);	FrUp.push_back(0.001714139);
//// puUp
F0Up.push_back(0.0024278);	FlUp.push_back(-0.00152153);	FrUp.push_back(-0.000906269);
//// Q2Up
F0Up.push_back(0.00074099);	FlUp.push_back(-0.0101813);	FrUp.push_back(0.00944033);
//// ttUp
F0Up.push_back(0.00115374);	FlUp.push_back(-0.00151448);	FrUp.push_back(0.000360745);
//// tUp
F0Up.push_back(-0.000922754);	FlUp.push_back(0.000985266);	FrUp.push_back(-6.25123e-05);
//// ewkUp
F0Up.push_back(-0.000402193);	FlUp.push_back(0.00142753);	FrUp.push_back(-0.00102534);
//// qcdUp
F0Up.push_back(0.000895017);	FlUp.push_back(-0.00184138);	FrUp.push_back(0.000946363);
//// bUp
F0Up.push_back(0.00505638);	FlUp.push_back(0.00122341);	FrUp.push_back(-0.00627978);
//// cUp
F0Up.push_back(0.00742951);	FlUp.push_back(0.00454152);	FrUp.push_back(-0.011971);
//// PDFUp
F0Up.push_back(0.00598875);	FlUp.push_back(0.00410436);	FrUp.push_back(0.00123243);
//// genUp
F0Up.push_back(-0.0118718);	FlUp.push_back(0.00768509);	FrUp.push_back(0.00418666);
//// MCstatUp
//F0Up.push_back(0.038);	FlUp.push_back(-0.016);	FrUp.push_back(-0.018);
F0Up.push_back(-0.003);	FlUp.push_back(-0.009);	FrUp.push_back(0.012);
//// twbUp
//F0Up.push_back(0.032);	FlUp.push_back( 0.038);	FrUp.push_back( 0.002);
//// VR
F0Up.push_back(0);	FlUp.push_back( 0.054*0.283083);	FrUp.push_back( 0.0682 * (0.9716-1));
//// gR
F0Up.push_back(0);	FlUp.push_back(0);	FrUp.push_back( 0.0682*(0.9601-1));
//// FrefUp
F0Up.push_back(0.645333-0.648717);	FlUp.push_back(0.286904-0.283083);	FrUp.push_back(0.067763-0.0682);
std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;

//// btagDown
F0Down.push_back(0.00103107);	FlDown.push_back(-0.0010563);	FrDown.push_back(2.52257e-05);
//// ctagDown
F0Down.push_back(4.12963e-07);	FlDown.push_back(1.97095e-07);	FrDown.push_back(-6.10058e-07);
//// JERDown
F0Down.push_back(-0.000937254);	FlDown.push_back(-0.0011742);	FrDown.push_back(0.00211145);
//// JESDown
F0Down.push_back(-0.000350051);	FlDown.push_back(-0.000574051);	FrDown.push_back(0.000924102);
//// lumiDown
F0Down.push_back(-0.00024205);	FlDown.push_back(0.000339772);	FrDown.push_back(-9.77214e-05);
//// massDown
F0Down.push_back(0.0118883);	FlDown.push_back(-0.0147516);	FrDown.push_back(0.00286326);
//// METDown
F0Down.push_back(0.00492592);	FlDown.push_back(-0.00663516);	FrDown.push_back(0.001709237);
//// puDown
F0Down.push_back(-0.00264034);	FlDown.push_back(0.00148581);	FrDown.push_back(0.00115453);
//// Q2Down
F0Down.push_back(0.00514913);	FlDown.push_back(-0.00622579);	FrDown.push_back(0.00107666);
//// ttDown
F0Down.push_back(-0.0012744);	FlDown.push_back(0.00164407);	FrDown.push_back(-0.000369669);
//// tDown
F0Down.push_back(0.000936342);	FlDown.push_back(-0.00100154);	FrDown.push_back(6.51978e-05);
//// ewkDown
F0Down.push_back(0.00039696);	FlDown.push_back(-0.00140575);	FrDown.push_back(0.00100879);
//// qcdDown
F0Down.push_back(-0.00215163);	FlDown.push_back(-0.0101765);	FrDown.push_back(0.0123281);
//// bDown
F0Down.push_back(0.00327584);	FlDown.push_back(-0.00578426);	FrDown.push_back(0.00250842);
//// cDown
F0Down.push_back(0.00766158);	FlDown.push_back(0.000925594);	FrDown.push_back(-0.00858717);
//// PDFDown
F0Down.push_back(0.00483414);	FlDown.push_back(0.00504921);	FrDown.push_back(0.0012184);
//// genDown
F0Down.push_back(-0.0118718);	FlDown.push_back(0.00768509);	FrDown.push_back(0.00418666);
//// MCstatDown
//F0Down.push_back(0.038);	FlDown.push_back(-0.016);	FrDown.push_back(-0.018);
F0Down.push_back(-0.003);	FlDown.push_back(-0.009);	FrDown.push_back(0.012);
//// twbDown
//F0Down.push_back(0.032);	FlDown.push_back( 0.038);	FrDown.push_back( 0.002);
//// VR
F0Down.push_back(0);	FlDown.push_back( 0.054*0.283083);	FrDown.push_back( 0.0682 * (0.9716-1));
//// gR
F0Down.push_back(0);	FlDown.push_back(0);	FrDown.push_back( 0.0682*(0.9601-1));
//// FrefDown
F0Down.push_back(0.645333-0.648717);	FlDown.push_back(0.286904-0.283083);	FrDown.push_back(0.067763-0.0682);
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
