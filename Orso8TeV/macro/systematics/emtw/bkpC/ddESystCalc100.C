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
F0Up.push_back(-0.00206636);	FlUp.push_back(0.0021705);	FrUp.push_back(-0.000104133);
//// ctagUp
F0Up.push_back(3.71579e-07);	FlUp.push_back(-3.10125e-07);	FrUp.push_back(-6.14541e-08);
//// JERUp
F0Up.push_back(0.00049455);	FlUp.push_back(-0.000711996);	FrUp.push_back(0.000217446);
//// JERUp
F0Up.push_back(0.00446757);	FlUp.push_back(-0.00389725);	FrUp.push_back(-0.000570315);
//// lumiUp
F0Up.push_back(-0.00197944);	FlUp.push_back(0.00215158);	FrUp.push_back(-0.000172135);
//// massUp
F0Up.push_back(-5.76057e-06);	FlUp.push_back(-3.95593e-05);	FrUp.push_back(4.53198e-05);
//// METUp
F0Up.push_back(-0.000934854);	FlUp.push_back(0.000932477);	FrUp.push_back(2.37733e-06);
//// puUp
F0Up.push_back(0.00318025);	FlUp.push_back(-0.00321018);	FrUp.push_back(2.99347e-05);
//// Q2Up
F0Up.push_back(0.0052199);	FlUp.push_back(-0.00573775);	FrUp.push_back(0.00051785);
//// ttUp
F0Up.push_back(0.000420183);	FlUp.push_back(-0.000425782);	FrUp.push_back(5.59966e-06);
//// tUp
F0Up.push_back(-0.000153498);	FlUp.push_back(0.000180706);	FrUp.push_back(-2.72087e-05);
//// ewknormUp
F0Up.push_back(3.69662e-07);	FlUp.push_back(-3.08046e-07);	FrUp.push_back(-6.16161e-08);
//// qcdnormUp
F0Up.push_back(-0.0225277);	FlUp.push_back(0.0257308);	FrUp.push_back(-0.00320315);
//// cwshapeUp
F0Up.push_back(-0.00215098);	FlUp.push_back(0.00207271);	FrUp.push_back(7.82708e-05);
//// bwshapeUp
F0Up.push_back(-0.00197128);	FlUp.push_back(0.00205466);	FrUp.push_back(-8.33822e-05);
//// generatorUp
F0Up.push_back(-0.00426857);	FlUp.push_back(0.00419966);	FrUp.push_back(6.89139e-05);
std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;

//// btagDown
F0Down.push_back(0.00205599);	FlDown.push_back(-0.00216072);	FrDown.push_back(0.000104728);
//// ctagDown
F0Down.push_back(3.71579e-07);	FlDown.push_back(-3.10125e-07);	FrDown.push_back(-6.14541e-08);
//// JERDown
F0Down.push_back(-0.000757236);	FlDown.push_back(0.000761002);	FrDown.push_back(-3.76584e-06);
//// JERDown
F0Down.push_back(-0.00350915);	FlDown.push_back(0.00362877);	FrDown.push_back(-0.000119617);
//// lumiDown
F0Down.push_back(0.00223208);	FlDown.push_back(-0.00243027);	FrDown.push_back(0.000198192);
//// massDown
F0Down.push_back(0.00450913);	FlDown.push_back(-0.00471832);	FrDown.push_back(0.000209183);
//// METDown
F0Down.push_back(-0.00510178);	FlDown.push_back(0.00512122);	FrDown.push_back(-1.94322e-05);
//// puDown
F0Down.push_back(-0.00327645);	FlDown.push_back(0.00326265);	FrDown.push_back(1.37959e-05);
//// Q2Down
F0Down.push_back(0.00934635);	FlDown.push_back(-0.00898967);	FrDown.push_back(-0.000356677);
//// ttDown
F0Down.push_back(-0.0043177);	FlDown.push_back(0.00431343);	FrDown.push_back(4.2722e-06);
//// tDown
F0Down.push_back(0.000158082);	FlDown.push_back(-0.00018621);	FrDown.push_back(2.81287e-05);
//// ewknormDown
F0Down.push_back(3.69662e-07);	FlDown.push_back(-3.08046e-07);	FrDown.push_back(-6.16161e-08);
//// ewknormDown
F0Down.push_back(0.0192848);	FlDown.push_back(-0.0220691);	FrDown.push_back(0.00278437);
//// cwshapeDown
F0Down.push_back(0.000980939);	FlDown.push_back(-0.00135122);	FrDown.push_back(0.000370279);
//// bwshapeDown
F0Down.push_back(0.00195376);	FlDown.push_back(-0.00203068);	FrDown.push_back(7.69223e-05);
//// generatorDown
F0Down.push_back(-0.00426857);	FlDown.push_back(0.00419966);	FrDown.push_back(6.89139e-05);

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
