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
F0Up.push_back(-0.00619594);	FlUp.push_back(0.00952335);	FrUp.push_back(-0.0033274);
//// ctagUp
F0Up.push_back(-0.00173842);	FlUp.push_back(0.0017241);	FrUp.push_back(1.43148e-05);
//// JERUp
F0Up.push_back(-0.01065739);	FlUp.push_back(0.00488495);	FrUp.push_back(0.00577243);
//// JERUp
F0Up.push_back(-0.00252483);	FlUp.push_back(0.00518579);	FrUp.push_back(0.000339042-0.003);
//// lumiUp
F0Up.push_back(-0.00138741);	FlUp.push_back(0.00316922);	FrUp.push_back(-0.00178181);
//// massUp
F0Up.push_back(-0.00350665);	FlUp.push_back(0.00160064);	FrUp.push_back(0.00190601);
//// METUp
F0Up.push_back(0.00205748);	FlUp.push_back(-0.00125981);	FrUp.push_back(-0.000797674);
//// puUp
F0Up.push_back(-0.00142475);	FlUp.push_back(-0.000258559);	FrUp.push_back(0.00168331);
//// Q2Up
F0Up.push_back(-0.00329459);	FlUp.push_back(-0.00218254);	FrUp.push_back(0.00547713);
//// ttUp
F0Up.push_back(-0.00138748);	FlUp.push_back(0.00130482);	FrUp.push_back(8.2658e-05);
//// tUp
F0Up.push_back(-0.00130958);	FlUp.push_back(0.00137057);	FrUp.push_back(-6.09925e-05);
//// ewknormUp
F0Up.push_back(0.00313541);	FlUp.push_back(0.00502601);	FrUp.push_back(-0.00816142);
//// qcdnormUp
F0Up.push_back(0.0234312);	FlUp.push_back(-0.028048);	FrUp.push_back(+0.028048-0.0234312);
//// cwshapeUp
F0Up.push_back(0.00907096);	FlUp.push_back(-0.002201521);	FrUp.push_back(0.002201521-0.00907096);
//// bwshapeUp
F0Up.push_back(0.00183536);	FlUp.push_back(0.00191003);	FrUp.push_back(-0.00374539);
//// generatorUp
F0Up.push_back(-0.00815472);	FlUp.push_back(0.00717237);	FrUp.push_back(0.000982347);
std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;


//// btagDown
F0Down.push_back(0.0025045);	FlDown.push_back(-0.0057005);	FrDown.push_back(0.003196);
//// ctagDown
F0Down.push_back(-0.00173842);	FlDown.push_back(0.0017241);	FrDown.push_back(1.43148e-05);
//// JERDown
F0Down.push_back(0.00426125);	FlDown.push_back(-0.001538255);	FrDown.push_back(-0.00272299);
//// JERDown
F0Down.push_back(-0.00454238);	FlDown.push_back(0.00752857);	FrDown.push_back(-0.0029861892);
//// lumiDown
F0Down.push_back(-0.0019228);	FlDown.push_back(-4.2361e-05);	FrDown.push_back(0.00196516);
//// massDown
F0Down.push_back(0.00116793);	FlDown.push_back(-0.00294987);	FrDown.push_back(0.00178194);
//// METDown
F0Down.push_back(-0.0100765);	FlDown.push_back(0.0181471);	FrDown.push_back(-0.00807066);
//// puDown
F0Down.push_back(-0.00246819);	FlDown.push_back(0.00389928);	FrDown.push_back(-0.00143109);
//// Q2Down
F0Down.push_back(0.00965882);	FlDown.push_back(-0.0083619);	FrDown.push_back(-0.00129692);
//// ttDown
F0Down.push_back(-0.00241455);	FlDown.push_back(0.00228596);	FrDown.push_back(0.000128589);
//// tDown
F0Down.push_back(0.00133234);	FlDown.push_back(-0.00139488);	FrDown.push_back(6.2542e-05);
//// ewknormDown
F0Down.push_back(-0.00209825);	FlDown.push_back(-0.00488496);	FrDown.push_back(0.00798321);
//// qcdnormDown
F0Down.push_back(-0.0213646);	FlDown.push_back(-0.02662548);	FrDown.push_back(0.0213646+0.02662548);
//// cwshapeDown
F0Down.push_back(0.00734702);	FlDown.push_back(-0.0033355);	FrDown.push_back(-0.00301152-0.001);
//// bwshapeDown
F0Down.push_back(-0.00357715);	FlDown.push_back(0.00175403);	FrDown.push_back(0.00182312);
//// generatorDown
F0Down.push_back(-0.00815472);	FlDown.push_back(0.00717237);	FrDown.push_back(0.000982347);
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
