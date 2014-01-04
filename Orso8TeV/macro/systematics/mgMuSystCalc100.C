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
F0Up.push_back(-0.00624948);	FlUp.push_back(0.00639051);	FrUp.push_back(-0.000141025);
//// ctagUp
F0Up.push_back(-5.48254e-08);	FlUp.push_back(2.48712e-07);	FrUp.push_back(-1.93886e-07);
//// JERUp
F0Up.push_back(0.00839851);	FlUp.push_back(-0.00856137);	FrUp.push_back(0.000162863);
//// JERUp
F0Up.push_back(0.01012138);	FlUp.push_back(-0.00817885);	FrUp.push_back(-1.94253e-03);
//// lumiUp
F0Up.push_back(-0.00120184);	FlUp.push_back(0.00122704);	FrUp.push_back(-2.52057e-05);
//// massUp
F0Up.push_back(0.00349371);	FlUp.push_back(-0.00347217);	FrUp.push_back(-2.1542e-05);
//// METUp
F0Up.push_back(-0.0034416);	FlUp.push_back(0.00719194);	FrUp.push_back(0.004249659);
//// puUp
F0Up.push_back(0.00339006);	FlUp.push_back(-0.00320923);	FrUp.push_back(-0.000180836);
//// Q2Up
F0Up.push_back(0.0113083);	FlUp.push_back(-0.0115703);	FrUp.push_back(0.000262055);
//// ttUp
F0Up.push_back(0.00241942);	FlUp.push_back(-0.00240472);	FrUp.push_back(-1.46992e-05);
//// tUp
F0Up.push_back(-0.00155677);	FlUp.push_back(0.00155495);	FrUp.push_back(1.82039e-06);
//// ewknormUp
F0Up.push_back(-0.0032326);	FlUp.push_back(0.00329709);	FrUp.push_back(-6.44902e-05);
//// ewknormUp
F0Up.push_back(-0.00938677);	FlUp.push_back(0.01873236);	FrUp.push_back(-9.34559e-03);
//// cwshapeUp
F0Up.push_back(-0.00432019);	FlUp.push_back(0.00450067);	FrUp.push_back(-0.000180476);
//// bwshapeUp
F0Up.push_back(-0.00226128);	FlUp.push_back(0.00242625);	FrUp.push_back(-0.000164965);
//// generatorUp
F0Up.push_back(-0.00376092);	FlUp.push_back(0.00365771);	FrUp.push_back(0.000103202);
std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;

//// btagDown
F0Down.push_back(0.00603616);	FlDown.push_back(-0.00617259);	FrDown.push_back(0.000136427);
//// ctagDown
F0Down.push_back(-5.48254e-08);	FlDown.push_back(2.48712e-07);	FrDown.push_back(-1.93886e-07);
//// JERDown
F0Down.push_back(-0.00395489);	FlDown.push_back(0.00438668);	FrDown.push_back(-0.000431787);
//// JERDown
F0Down.push_back(-0.00632356);	FlDown.push_back(0.00543668);	FrDown.push_back(8.86878e-04);
//// lumiDown
F0Down.push_back(0.00119314);	FlDown.push_back(-0.0012179);	FrDown.push_back(2.476e-05);
//// massDown
F0Down.push_back(-0.00082717);	FlDown.push_back(0.000636358);	FrDown.push_back(0.000190812);
//// METDown
F0Down.push_back(-0.00840867);	FlDown.push_back(0.01238066);	FrDown.push_back(0.0040280098);
//// puDown
F0Down.push_back(-0.00342244);	FlDown.push_back(0.00324505);	FrDown.push_back(0.00017739);
//// Q2Down
F0Down.push_back(0.00944813);	FlDown.push_back(-0.00943101);	FrDown.push_back(-1.71218e-05);
//// ttDown
F0Down.push_back(-0.0026289);	FlDown.push_back(0.00261289);	FrDown.push_back(1.60133e-05);
//// tDown
F0Down.push_back(0.00158797);	FlDown.push_back(-0.00158608);	FrDown.push_back(-1.89307e-06);
//// ewknormDown
F0Down.push_back(0.00319412);	FlDown.push_back(-0.00325805);	FrDown.push_back(6.39262e-05);
//// ewknormDown
F0Down.push_back(0.00925173);	FlDown.push_back(-0.01859268);	FrDown.push_back(9.34095e-03);
//// cwshapeDown
F0Down.push_back(-0.00239891);	FlDown.push_back(0.00254445);	FrDown.push_back(-0.000145544);
//// bwshapeDown
F0Down.push_back(0.00186958);	FlDown.push_back(-0.00175562);	FrDown.push_back(-0.000113956);
//// generatorDown
F0Down.push_back(-0.00376092);	FlDown.push_back(0.00365771);	FrDown.push_back(0.000103202);
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
