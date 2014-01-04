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
F0Up.push_back(-0.00294293);	FlUp.push_back(0.00427552);	FrUp.push_back(-0.00133259);
//// ctagUp
F0Up.push_back(1.03767e-07);	FlUp.push_back(-2.04403e-07);	FrUp.push_back(1.00636e-07);
//// JERUp
F0Up.push_back(-0.00441924);	FlUp.push_back(0.002625);	FrUp.push_back(0.00179424);
//// JERUp
F0Up.push_back(-0.00293015);	FlUp.push_back(0.00616398);	FrUp.push_back(-0.00323383);
//// lumiUp
F0Up.push_back(-0.000427094);	FlUp.push_back(0.000409859);	FrUp.push_back(1.72351e-05);
//// massUp
F0Up.push_back(-0.00535018);	FlUp.push_back(0.00109584);	FrUp.push_back(0.00425435);
//// METUp
F0Up.push_back(-0.00937314);	FlUp.push_back(0.00942787);	FrUp.push_back(0.00937314-0.00942787);
//// puUp
F0Up.push_back(0.00359059);	FlUp.push_back(-0.00168805);	FrUp.push_back(-0.00190254);
//// Q2Up
F0Up.push_back(0.00167645);	FlUp.push_back(-0.0102768);	FrUp.push_back(0.00860032);
//// ttUp
F0Up.push_back(0.00120014);	FlUp.push_back(-0.00151546);	FrUp.push_back(0.000315327);
//// tUp
F0Up.push_back(-0.000982218);	FlUp.push_back(0.00102794);	FrUp.push_back(-4.57244e-05);
//// ewknormUp
F0Up.push_back(-0.000499851);	FlUp.push_back(0.00157003);	FrUp.push_back(-0.00107018);
//// ewknormUp
F0Up.push_back(0.0030238);	FlUp.push_back(0.0047767);	FrUp.push_back(-0.0047767-0.0030238);
//// cwshapeUp
F0Up.push_back(0.00685663);	FlUp.push_back(0.0050397);	FrUp.push_back(-0.0118963);
//// bwshapeUp
F0Up.push_back(0.00376);	FlUp.push_back(0.00219811);	FrUp.push_back(-0.00595811);
//// generatorUp
F0Up.push_back(-0.0118431);	FlUp.push_back(0.00787412);	FrUp.push_back(0.003969);
std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;


//// btagDown
F0Down.push_back(0.00286031);	FlDown.push_back(-0.00414612);	FrDown.push_back(0.00128581);
//// ctagDown
F0Down.push_back(1.03767e-07);	FlDown.push_back(-2.04403e-07);	FrDown.push_back(1.00636e-07);
//// JERDown
F0Down.push_back(-0.00562224);	FlDown.push_back(-0.000576074);	FrDown.push_back(0.00619831);
//// JERDown
F0Down.push_back(0.00391321);	FlDown.push_back(-0.00437526);	FrDown.push_back(0.000462049);
//// lumiDown
F0Down.push_back(0.000298257);	FlDown.push_back(-0.000545142);	FrDown.push_back(0.000246885);
//// massDown
F0Down.push_back(0.000219725);	FlDown.push_back(-0.0013687);	FrDown.push_back(0.00114897);
//// METDown
F0Down.push_back(0.002983258);	FlDown.push_back(-0.00867678);	FrDown.push_back(0.00867678-0.002983258);
//// puDown
F0Down.push_back(-0.00340478);	FlDown.push_back(0.00144946);	FrDown.push_back(0.00195532);
//// Q2Down
F0Down.push_back(0.00533934);	FlDown.push_back(-0.00624903);	FrDown.push_back(0.000909696);
//// ttDown
F0Down.push_back(-0.00133153);	FlDown.push_back(0.00165145);	FrDown.push_back(-0.000319921);
//// tDown
F0Down.push_back(0.000992961);	FlDown.push_back(-0.00104393);	FrDown.push_back(5.09731e-05);
//// ewknormDown
F0Down.push_back(0.000488902);	FlDown.push_back(-0.00154503);	FrDown.push_back(0.00105613);
//// ewknormDown
F0Down.push_back(-0.002934072);	FlDown.push_back(-0.00424486);	FrDown.push_back(0.00424486+0.002934072);
//// cwshapeDown
F0Down.push_back(0.00679119);	FlDown.push_back(0.001586);	FrDown.push_back(-0.00837718);
//// bwshapeDown
F0Down.push_back(0.00100674);	FlDown.push_back(-0.00422621);	FrDown.push_back(0.00321947);
//// generatorDown
F0Down.push_back(-0.0118431);	FlDown.push_back(0.00787412);	FrDown.push_back(0.003969);
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
