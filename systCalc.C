
{
    double FLUP[13] =   {-0.003, -0.01, -0.013, -0.009, 0.0, -0.002, 0., 0.011, 0., 0.002, -0.009, -0.01, -0.009};
    double F0UP[13] =   {-0.002, 0.0, 0.004, 0.017, 0.002, 0.007, 0., -0.009, 0., 0.009, 0.012, 0.011, 0.014};
    double FLDown[13] = {0.009, 0.006, -0.013, 0.004, -0.009, -0.006, 0., -0.006, 0., 0.009, 0.009, 0.006, -0.01};
    double F0Down[13] = {-0.0097, -0.006, -0.002, -0.011, 0.01, 0.006, 0.0, 0.015, 0.0, 0.002, -0.014, -0.009, 0.009};
    std::vector<string> strVc;
    strVc.push_back("JES");
    strVc.push_back("JER");
    strVc.push_back("unclustered energy");
    strVc.push_back("pileup");
    strVc.push_back("b-flavored scale factor");
    strVc.push_back("non-b-flavored scale factor");
    strVc.push_back("single-top generator");
    strVc.push_back("$\\rm Q^{2}$ scale");
    strVc.push_back("$\\rm m_{top}$");
    strVc.push_back("PDF");
    strVc.push_back("$\\rm t\\bar{t}$ normalization");
//    strVc.push_back("QCD shape");
    strVc.push_back("W+jets shape");
    strVc.push_back("integrated luminosity");
    double sumFLUP = 0;
    double sumF0UP = 0;

    std::cout.setf(std::ios::fixed);
    std::cout.precision(3);
    for (int i = 0; i < 13; i++) {
        double avgF0_ = (fabs(F0UP[i])+fabs(F0Down[i]))/2.;
        double avgFL_ = (fabs(FLUP[i])+fabs(FLDown[i]))/2.;
        if(i == 11){
            cout<<"QCD shape&\t0.002&\t0.002\\"<<"\\"<<endl;
            cout<<"\\hline"<<endl;            
        }
        cout<<strVc[i]<<"&\t"<<avgFL_<<"&\t"<<avgF0_<<"\\"<<"\\"<<endl;
        cout<<"\\hline"<<endl;
        sumFLUP += (avgFL_ * avgFL_);
        sumF0UP += (avgF0_ * avgF0_);
    }
	double flUp = sumFLUP - (0.016*0.016);
	double f0Up = sumF0UP - (0.0016);
    sumFLUP = sqrt(sumFLUP);
    sumF0UP = sqrt(sumF0UP);
    cout<<"\\hline"<<endl;
    cout << "total systematic uncertainty (w/o generator, QCD)&"<<sqrt(flUp)<<"&"<<sqrt(f0Up)<<"	\\"<<"\\"<<endl;
    cout<<"\\hline"<<endl;
    cout << "total systematic uncertainty (w/o QCD)&"<<sumFLUP<<"&"<<sumF0UP<<"	\\"<<"\\"<<endl;
    cout<<"\\hline"<<endl;
//    cout << "F0 w/o QCD: " << sumF0UP << endl;
//    cout << "FL w/o QCD: " << sumFLUP << endl;

    cout << "total systematic uncertainty &"<<sqrt((sumFLUP * sumFLUP)+(0.002 * 0.002))<<"&"<<sqrt((sumF0UP * sumF0UP)+(0.002*0.002))<<"	\\"<<"\\"<<endl;
//    cout << "F0 QCD: " << sqrt((sumF0UP * sumF0UP)+(0.0036)) << endl;
//    cout << "FL QCD: " << sqrt((sumFLUP * sumFLUP)+(0.04 * 0.04)) << endl;
}


