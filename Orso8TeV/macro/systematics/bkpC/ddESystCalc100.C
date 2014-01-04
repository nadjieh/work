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
F0Up.push_back(-0.00107656);	FlUp.push_back(0.00107327);	FrUp.push_back(3.28648e-06);
//// ctagUp
F0Up.push_back(-4.79314e-07);	FlUp.push_back(-4.33437e-07);	FrUp.push_back(9.1275e-07);
//// JERUp
F0Up.push_back(0.00167737);	FlUp.push_back(-0.00269904);	FrUp.push_back(0.00102168);
//// JERUp
F0Up.push_back(0.000234523);	FlUp.push_back(-0.000775388);	FrUp.push_back(0.000540865);
//// lumiUp
F0Up.push_back(-0.000508089);	FlUp.push_back(0.000507862);	FrUp.push_back(2.27877e-07);
//// massUp
F0Up.push_back(-0.00147738);	FlUp.push_back(0.00128356);	FrUp.push_back(0.000193817);
//// METUp
F0Up.push_back(0.000650892);	FlUp.push_back(-0.00118708);	FrUp.push_back(0.00053619);
//// puUp
F0Up.push_back(0.00141679);	FlUp.push_back(-0.00139882);	FrUp.push_back(-1.79737e-05);
//// Q2Up
F0Up.push_back(0.0093273);	FlUp.push_back(-0.0106061);	FrUp.push_back(0.00127885);
//// ttUp
F0Up.push_back(0.00715078);	FlUp.push_back(-0.00737282);	FrUp.push_back(0.00022204);
//// tUp
F0Up.push_back(-0.00098771);	FlUp.push_back(0.000993331);	FrUp.push_back(-5.62015e-06);
//// ewknormUp
F0Up.push_back(-0.00155193);	FlUp.push_back(0.00166879);	FrUp.push_back(-0.000116857);
//// ewknormUp
F0Up.push_back(-0.00600365);	FlUp.push_back(0.00664876);	FrUp.push_back(-0.000645102);
//// cwshapeUp
F0Up.push_back(-0.00769511);	FlUp.push_back(0.00842977);	FrUp.push_back(-0.000734657);
//// bwshapeUp
F0Up.push_back(-0.00374594);	FlUp.push_back(0.00411298);	FrUp.push_back(-0.000367046);
//// generatorUp
F0Up.push_back(-0.00603563);	FlUp.push_back(0.00628581);	FrUp.push_back(-0.000250173);
std::vector<double> F0Down;
std::vector<double> FlDown;
std::vector<double> FrDown;

//// btagDown
F0Down.push_back(0.00107154);	FlDown.push_back(-0.00107097);	FrDown.push_back(-5.77412e-07);
//// ctagDown
F0Down.push_back(-4.79314e-07);	FlDown.push_back(-4.33437e-07);	FrDown.push_back(9.1275e-07);
//// JERDown
F0Down.push_back(0.00120752);	FlDown.push_back(-0.00199346);	FrDown.push_back(0.000785948);
//// JERDown
F0Down.push_back(-0.000256964);	FlDown.push_back(-0.000448383);	FrDown.push_back(0.000705347);
//// lumiDown
F0Down.push_back(0.000403563);	FlDown.push_back(-0.000432365);	FrDown.push_back(2.88018e-05);
//// massDown
F0Down.push_back(0.00130918);	FlDown.push_back(-0.00145391);	FrDown.push_back(0.000144726);
//// METDown
F0Down.push_back(0.00348819);	FlDown.push_back(-0.00355564);	FrDown.push_back(6.74549e-05);
//// puDown
F0Down.push_back(-0.00131229);	FlDown.push_back(0.0012771);	FrDown.push_back(3.51845e-05);
//// Q2Down
F0Down.push_back(0.00453403);	FlDown.push_back(-0.00585404);	FrDown.push_back(0.00132);
//// ttDown
F0Down.push_back(0.00451104);	FlDown.push_back(-0.00467232);	FrDown.push_back(0.000161279);
//// tDown
F0Down.push_back(0.00100183);	FlDown.push_back(-0.00100955);	FrDown.push_back(7.72179e-06);
//// ewknormDown
F0Down.push_back(0.00154222);	FlDown.push_back(-0.00166132);	FrDown.push_back(0.000119092);
//// ewknormDown
F0Down.push_back(0.00547096);	FlDown.push_back(-0.00609159);	FrDown.push_back(0.000620634);
//// cwshapeDown
F0Down.push_back(-0.00393963);	FlDown.push_back(0.00431853);	FrDown.push_back(-0.000378907);
//// bwshapeDown
F0Down.push_back(0.0045297);	FlDown.push_back(-0.0049145);	FrDown.push_back(0.0003848);
//// generatorDown
F0Down.push_back(-0.00603563);	FlDown.push_back(0.00628581);	FrDown.push_back(-0.000250173);

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
