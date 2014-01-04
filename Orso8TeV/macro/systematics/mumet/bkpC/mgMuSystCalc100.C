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
F0Up.push_back(-0.0037636);	FlUp.push_back(0.00381013);	FrUp.push_back(-4.65245e-05);
//// ctagUp
F0Up.push_back(1.96011e-07);	FlUp.push_back(2.01397e-07);	FrUp.push_back(-3.97408e-07);
//// JERUp
F0Up.push_back(-0.00112696);	FlUp.push_back(0.00145129);	FrUp.push_back(-0.000324325);
//// JESUp
F0Up.push_back(0.00103663);	FlUp.push_back(0.00103236);	FrUp.push_back(-0.00206899);
//// lumiUp
F0Up.push_back(-0.00381245);	FlUp.push_back(0.00387854);	FrUp.push_back(-6.60911e-05);
//// massUp
F0Up.push_back(-0.00924682);	FlUp.push_back(0.00729926);	FrUp.push_back(0.00194756);
//// METUp
F0Up.push_back(-0.00491594);	FlUp.push_back(0.00521924);	FrUp.push_back(-0.000303299);
//// puUp
F0Up.push_back(0.000611981);	FlUp.push_back(-0.000480977);	FrUp.push_back(-0.000131004);
//// Q2Up
F0Up.push_back(-0.00039622);	FlUp.push_back(0.000218374);	FrUp.push_back(0.000177846);
//// ttUp
F0Up.push_back(0.00176544);	FlUp.push_back(-0.00177984);	FrUp.push_back(1.44027e-05);
//// tUp
F0Up.push_back(-0.00103792);	FlUp.push_back(0.00103541);	FrUp.push_back(2.50906e-06);
//// ewknormUp
F0Up.push_back(-0.00133712);	FlUp.push_back(0.00137823);	FrUp.push_back(-4.11096e-05);
//// ewknormUp
F0Up.push_back(0.00621898);	FlUp.push_back(-0.00587936);	FrUp.push_back(-0.000339621);
//// cwshapeUp
F0Up.push_back(-0.00434043);	FlUp.push_back(0.00568424);	FrUp.push_back(-0.00134381);
//// bwshapeUp
F0Up.push_back(-0.0012241);	FlUp.push_back(0.00223957);	FrUp.push_back(-0.00101548);
//// generatorUp
F0Up.push_back(-0.0040235);	FlUp.push_back(0.00383041);	FrUp.push_back(0.000193098);
std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;

//// btagDown
F0Down.push_back(0.0036621);	FlDown.push_back(-0.00370696);	FrDown.push_back(4.48588e-05);
//// ctagDown
F0Down.push_back(1.96011e-07);	FlDown.push_back(2.01397e-07);	FrDown.push_back(-3.97408e-07);
//// JERDown
F0Down.push_back(-0.00359686);	FlDown.push_back(0.00406092);	FrDown.push_back(-0.000464058);
//// JESDown
F0Down.push_back(-0.0025484);	FlDown.push_back(0.00302241);	FrDown.push_back(-0.000474015);
//// lumiDown
F0Down.push_back(0.00364883);	FlDown.push_back(-0.00371204);	FrDown.push_back(6.32118e-05);
//// massDown
F0Down.push_back(0.0177746);	FlDown.push_back(-0.0174173);	FrDown.push_back(-0.000357287);
//// METDown
F0Down.push_back(-0.00725205);	FlDown.push_back(0.0058696);	FrDown.push_back(0.00138245);
//// puDown
F0Down.push_back(-0.00076108);	FlDown.push_back(0.000613177);	FrDown.push_back(0.000147903);
//// Q2Down
F0Down.push_back(0.00233031);	FlDown.push_back(-0.00384066);	FrDown.push_back(0.00151036);
//// ttDown
F0Down.push_back(-0.00190884);	FlDown.push_back(0.00192347);	FrDown.push_back(-1.46294e-05);
//// tDown
F0Down.push_back(0.00106088);	FlDown.push_back(-0.00105791);	FrDown.push_back(-2.96686e-06);
//// ewknormDown
F0Down.push_back(0.00132499);	FlDown.push_back(-0.00136509);	FrDown.push_back(4.00986e-05);
//// ewknormDown
F0Down.push_back(-0.00596664);	FlDown.push_back(0.00563922);	FrDown.push_back(0.000327418);
//// cwshapeDown
F0Down.push_back(-0.00323153);	FlDown.push_back(0.00422323);	FrDown.push_back(-0.000991701);
//// bwshapeDown
F0Down.push_back(0.00302501);	FlDown.push_back(-0.00268519);	FrDown.push_back(-0.000339824);
//// generatorDown
F0Down.push_back(-0.0040235);	FlDown.push_back(0.00383041);	FrDown.push_back(0.000193098);
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
