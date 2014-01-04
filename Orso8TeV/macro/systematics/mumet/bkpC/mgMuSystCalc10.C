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
F0Up.push_back(-0.00278433);	FlUp.push_back(0.00372998);	FrUp.push_back(-0.000945642);
//// ctagUp
F0Up.push_back(2.37993e-07);	FlUp.push_back(-4.0842e-07);	FrUp.push_back(1.70427e-07);
//// JERUp
F0Up.push_back(-0.0012834);	FlUp.push_back(0.0016037);	FrUp.push_back(-0.0003203);
//// JESUp
F0Up.push_back(0.00500403);	FlUp.push_back(0.000247506);	FrUp.push_back(-0.00525154);
//// lumiUp
F0Up.push_back(-0.00263489);	FlUp.push_back(0.00377021);	FrUp.push_back(-0.00113532);
//// massUp
F0Up.push_back(-0.0180978);	FlUp.push_back(0.00953544);	FrUp.push_back(0.00856237);
//// METUp
F0Up.push_back(-0.00931881);	FlUp.push_back(0.00603234);	FrUp.push_back(0.00328647);
//// puUp
F0Up.push_back(0.00247348);	FlUp.push_back(-0.000883171);	FrUp.push_back(-0.0015903);
//// Q2Up
F0Up.push_back(0.0022225);	FlUp.push_back(-0.00127533);	FrUp.push_back(-0.000947163);
//// ttUp
F0Up.push_back(0.0014539);	FlUp.push_back(-0.00173237);	FrUp.push_back(0.000278476);
//// tUp
F0Up.push_back(-0.000961709);	FlUp.push_back(0.00102096);	FrUp.push_back(-5.92559e-05);
//// ewknormUp
F0Up.push_back(-0.00114278);	FlUp.push_back(0.00139461);	FrUp.push_back(-0.000251836);
//// ewknormUp
F0Up.push_back(0.00871091);	FlUp.push_back(-0.00649081);	FrUp.push_back(-0.0022201);
//// cwshapeUp
F0Up.push_back(-0.00698056);	FlUp.push_back(0.0076022);	FrUp.push_back(-0.000621631);
//// bwshapeUp
F0Up.push_back(-0.00172733);	FlUp.push_back(0.00330365);	FrUp.push_back(-0.00157632);
//// generatorUp
F0Up.push_back(-0.00541006);	FlUp.push_back(0.00442122);	FrUp.push_back(0.000988846);
std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;

//// btagDown
F0Down.push_back(0.00271153);	FlDown.push_back(-0.00362548);	FrDown.push_back(0.000913945);
//// ctagDown
F0Down.push_back(2.37993e-07);	FlDown.push_back(-4.0842e-07);	FrDown.push_back(1.70427e-07);
//// JERDown
F0Down.push_back(-0.000280029);	FlDown.push_back(0.00204523);	FrDown.push_back(-0.0017652);
//// JESDown
F0Down.push_back(0.00581789);	FlDown.push_back(-0.000322003);	FrDown.push_back(-0.00549588);
//// lumiDown
F0Down.push_back(0.00251483);	FlDown.push_back(-0.0036001);	FrDown.push_back(0.00108526);
//// massDown
F0Down.push_back(0.0243315);	FlDown.push_back(-0.0215568);	FrDown.push_back(-0.00277471);
//// METDown
F0Down.push_back(-0.00885732);	FlDown.push_back(0.00543839);	FrDown.push_back(0.00341893);
//// puDown
F0Down.push_back(-0.0025185);	FlDown.push_back(0.000981835);	FrDown.push_back(0.00153666);
//// Q2Down
F0Down.push_back(-0.00378631);	FlDown.push_back(-0.00320556);	FrDown.push_back(0.00699187);
//// ttDown
F0Down.push_back(-0.00158985);	FlDown.push_back(0.00187131);	FrDown.push_back(-0.000281464);
//// tDown
F0Down.push_back(0.000976994);	FlDown.push_back(-0.00104074);	FrDown.push_back(6.37439e-05);
//// ewknormDown
F0Down.push_back(0.00112465);	FlDown.push_back(-0.00137332);	FrDown.push_back(0.000248666);
//// ewknormDown
F0Down.push_back(-0.00830038);	FlDown.push_back(0.00618096);	FrDown.push_back(0.00211942);
//// cwshapeDown
F0Down.push_back(-0.00788832);	FlDown.push_back(0.00651669);	FrDown.push_back(0.00137164);
//// bwshapeDown
F0Down.push_back(0.00199127);	FlDown.push_back(-0.00174148);	FrDown.push_back(-0.000249786);
//// generatorDown
F0Down.push_back(-0.00541006);	FlDown.push_back(0.00442122);	FrDown.push_back(0.000988846);
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
