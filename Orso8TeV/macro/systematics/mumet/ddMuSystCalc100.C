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
F0Up.push_back(-0.000800369);	FlUp.push_back(0.000780388);	FrUp.push_back(1.99804e-05);
//// ctagUp
F0Up.push_back(3.47833e-07);	FlUp.push_back(1.74681e-07);	FrUp.push_back(-5.22514e-07);
//// JERUp
F0Up.push_back(0.00122319);	FlUp.push_back(-0.000773122);	FrUp.push_back(-0.000450071);
//// JERUp
F0Up.push_back(0.00151025);	FlUp.push_back(-0.0012766);	FrUp.push_back(-0.000233644);
//// lumiUp
F0Up.push_back(-5.90139e-05);	FlUp.push_back(5.33248e-05);	FrUp.push_back(5.68915e-06);
//// massUp
F0Up.push_back(-0.00031978);	FlUp.push_back(0.00087087);	FrUp.push_back(-5.5109e-04);
//// METUp
F0Up.push_back(-0.00371333);	FlUp.push_back(0.00302443);	FrUp.push_back(0.000688898);
//// puUp
F0Up.push_back(-8.46306e-05);	FlUp.push_back(0.000106581);	FrUp.push_back(-2.19504e-05);
//// Q2Up
F0Up.push_back(0.003179923);	FlUp.push_back(-0.0040562661);	FrUp.push_back(8.763431e-04);
//// ttUp
F0Up.push_back(0.00169085);	FlUp.push_back(-0.00171461);	FrUp.push_back(2.37594e-05);
//// tUp
F0Up.push_back(-0.000950551);	FlUp.push_back(0.000951247);	FrUp.push_back(-6.95602e-07);
//// ewknormUp
F0Up.push_back(-0.00112963);	FlUp.push_back(0.00116168);	FrUp.push_back(-3.20512e-05);
//// ewknormUp
F0Up.push_back(0.00181226);	FlUp.push_back(-0.00446536);	FrUp.push_back(2.65312e-03);
//// cwshapeUp
F0Up.push_back(-0.00351045);	FlUp.push_back(0.00294913);	FrUp.push_back(-0.001438684);
//// bwshapeUp
F0Up.push_back(-0.00255953);	FlUp.push_back(0.00279614);	FrUp.push_back(-0.000236617);
//// generatorUp
F0Up.push_back(-0.00779925);	FlUp.push_back(0.00657208);	FrUp.push_back(1.22717e-03);

std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;

//// btagDown
F0Down.push_back(0.000797462);	FlDown.push_back(-0.000776342);	FrDown.push_back(-2.112e-05);
//// ctagDown
F0Down.push_back(3.47833e-07);	FlDown.push_back(1.74681e-07);	FrDown.push_back(-5.22514e-07);
//// JERDown
F0Down.push_back(-0.00375635);	FlDown.push_back(0.00374168);	FrDown.push_back(1.46696e-05);
//// JERDown
F0Down.push_back(-0.00663006);	FlDown.push_back(0.00653179);	FrDown.push_back(9.82632e-05);
//// lumiDown
F0Down.push_back(5.8242e-05);	FlDown.push_back(-5.15972e-05);	FrDown.push_back(-6.6448e-06);
//// massDown
F0Down.push_back(0.0079237);	FlDown.push_back(-0.0004988);	FrDown.push_back(-7.4249e-03);
//// METDown
F0Down.push_back(-0.00516721);	FlDown.push_back(0.0045578);	FrDown.push_back(0.000609408);
//// puDown
F0Down.push_back(3.51765e-05);	FlDown.push_back(-4.13637e-05);	FrDown.push_back(6.18722e-06);
//// Q2Down
F0Down.push_back(0.00460701);	FlDown.push_back(-0.00755018);	FrDown.push_back(2.94317e-03);
//// ttDown
F0Down.push_back(-0.00182609);	FlDown.push_back(0.00185098);	FrDown.push_back(-2.48872e-05);
//// tDown
F0Down.push_back(0.000969598);	FlDown.push_back(-0.00096932);	FrDown.push_back(-2.78093e-07);
//// ewknormDown
F0Down.push_back(0.00111834);	FlDown.push_back(-0.00114922);	FrDown.push_back(3.08806e-05);
//// ewknormDown
F0Down.push_back(-0.00153664);	FlDown.push_back(0.0042014);	FrDown.push_back(-2.66476e-03);
//// cwshapeDown
F0Down.push_back(-0.00228085);	FlDown.push_back(0.00146049);	FrDown.push_back(-0.001179641);
//// bwshapeDown
F0Down.push_back(0.0024717);	FlDown.push_back(-0.0026932);	FrDown.push_back(0.000221493);
//// generatorDown
F0Down.push_back(-0.00779925);	FlDown.push_back(0.00657208);	FrDown.push_back(1.22717e-03);

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
