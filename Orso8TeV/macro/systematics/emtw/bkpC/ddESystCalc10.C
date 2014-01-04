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
F0Up.push_back(-0.000524361);	FlUp.push_back(0.00164543);	FrUp.push_back(-0.00112107);
//// ctagUp
F0Up.push_back(1.20046e-07);	FlUp.push_back(-1.29089e-07);	FrUp.push_back(9.04226e-09);
//// JERUp
F0Up.push_back(-0.0051102);	FlUp.push_back(0.00151529);	FrUp.push_back(0.00359492);
//// JERUp
F0Up.push_back(0.000492633);	FlUp.push_back(-0.00224765);	FrUp.push_back(0.00175502);
//// lumiUp
F0Up.push_back(0.000580834);	FlUp.push_back(0.00127402);	FrUp.push_back(-0.00185486);
//// massUp
F0Up.push_back(-0.00129045);	FlUp.push_back(-0.000393498);	FrUp.push_back(0.00168395);
//// METUp
F0Up.push_back(-0.00615061);	FlUp.push_back(0.00294221);	FrUp.push_back(0.0032084);
//// puUp
F0Up.push_back(0.000247925);	FlUp.push_back(-0.0018665);	FrUp.push_back(0.00161857);
//// Q2Up
F0Up.push_back(-0.00104894);	FlUp.push_back(-0.00399741);	FrUp.push_back(0.00504635);
//// ttUp
F0Up.push_back(0.000275265);	FlUp.push_back(-0.000361395);	FrUp.push_back(8.61301e-05);
//// tUp
F0Up.push_back(0.000136072);	FlUp.push_back(3.20645e-05);	FrUp.push_back(-0.000168137);
//// ewknormUp
F0Up.push_back(1.20695e-07);	FlUp.push_back(-1.27926e-07);	FrUp.push_back(7.23068e-09);
//// qcdnormUp
F0Up.push_back(0.02863);	FlUp.push_back(0.00238164);	FrUp.push_back(-0.0310116);
//// cwshapeUp
F0Up.push_back(0.0071636);	FlUp.push_back(-0.0014174);	FrUp.push_back(-0.0057462);
//// bwshapeUp
F0Up.push_back(0.00287318);	FlUp.push_back(0.000176558);	FrUp.push_back(-0.00304973);
//// generatorUp
F0Up.push_back(-0.00605374);	FlUp.push_back(0.00506279);	FrUp.push_back(0.000990942);
std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;

//// btagDown
F0Down.push_back(0.000513577);	FlDown.push_back(-0.00163491);	FrDown.push_back(0.00112134);
//// ctagDown
F0Down.push_back(1.20046e-07);	FlDown.push_back(-1.29089e-07);	FrDown.push_back(9.04226e-09);
//// JERDown
F0Down.push_back(-0.000940945);	FlDown.push_back(0.0009643);	FrDown.push_back(-2.33543e-05);
//// JERDown
F0Down.push_back(-0.00726736);	FlDown.push_back(0.0049281);	FrDown.push_back(0.00233926);
//// lumiDown
F0Down.push_back(-0.000716357);	FlDown.push_back(-0.0013605);	FrDown.push_back(0.00207686);
//// massDown
F0Down.push_back(0.00297218);	FlDown.push_back(-0.00458686);	FrDown.push_back(0.00161468);
//// METDown
F0Down.push_back(-0.00558917);	FlDown.push_back(0.00512956);	FrDown.push_back(0.000459613);
//// puDown
F0Down.push_back(-0.000646858);	FlDown.push_back(0.00204767);	FrDown.push_back(-0.00140081);
//// Q2Down
F0Down.push_back(0.0110791);	FlDown.push_back(-0.00980519);	FrDown.push_back(-0.00127388);
//// ttDown
F0Down.push_back(-0.00462482);	FlDown.push_back(0.00445494);	FrDown.push_back(0.000169877);
//// tDown
F0Down.push_back(-0.000139743);	FlDown.push_back(-3.43041e-05);	FrDown.push_back(0.000174047);
//// ewknormDown
F0Down.push_back(1.20695e-07);	FlDown.push_back(-1.27926e-07);	FrDown.push_back(7.23068e-09);
//// ewknormDown
F0Down.push_back(-0.0236182);	FlDown.push_back(-0.00207693);	FrDown.push_back(0.0256951);
//// cwshapeDown
F0Down.push_back(0.00536198);	FlDown.push_back(-0.00304592);	FrDown.push_back(-0.00231606);
//// bwshapeDown
F0Down.push_back(-0.00267362);	FlDown.push_back(-0.000172291);	FrDown.push_back(0.00284591);
//// generatorDown
F0Down.push_back(-0.00605374);	FlDown.push_back(0.00506279);	FrDown.push_back(0.000990942);
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
