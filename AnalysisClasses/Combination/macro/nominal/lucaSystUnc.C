{
//X: F0
//Y: FL
	double corr = -0.911091;
	double centFL = -0.0659442;
	double centF0 = -0.0484678;
	double sigL = 0.038;
	double sig0 = 0.056; 
	double cov  = corr*sig0*sigL;
	//Defining the larger error
	bool isX = (sig0 > sigL);
	double elements[4] = {pow(sig0,2),cov,cov,pow(sigL,2)};
	TMatrixT<double> * p = new TMatrixT<double>(2,2);
	p->SetMatrixArray(elements);
    double det = p->Determinant();
    double sum = pow(sigL,2)+pow(sig0,2);
    double Delta = pow(sum,2) - 4*det;
	double root1 = (-sum + sqrt(Delta))/(-1*2);
	double root2 = (-sum - sqrt(Delta))/(-1*2);
	cout<<"rs: "<<sqrt(root1)<<"\t"<<sqrt(root2)<<endl;
	cout<<root1+root2<<"\t"<<sum<<endl;
	cout<<root1*root2<<"\t"<<det<<endl;
	double theta = 0.5*TMath::ATan((2*cov)/(pow(sig0,2)-pow(sigL,2)));
	cout<<180. * theta / (TMath::Pi)<<endl;
	//cout<<TMath::RadToDeg()<<endl;
	double max = fabs(root1);
	double min = fabs(root2);
	if(fabs(root1) < fabs(root2) ){
		min = fabs(root1);
		max = fabs(root2);
	}
    double rG = sqrt(sig0*sig0 + sigL*sigL);
//    TEllipse * el = new TEllipse(centF0, centFL, sqrt(max), sqrt(min), 0, 360, 1*TMath::RadToDeg()*theta);
    TEllipse * el = 0;
	if(isX)
    	el = new TEllipse(centF0, centFL, sqrt(max), sqrt(min), 0, 360, TMath::RadToDeg()*theta);
	else
    	el = new TEllipse(centF0, centFL, sqrt(min), sqrt(max), 0, 360, TMath::RadToDeg()*theta);
   TGraph *graph = new TGraph(4);
   graph->SetName("def");
   graph->SetTitle("");
   graph->SetFillColor(1);
   graph->SetPoint(0,-0.7,0.7);
   graph->SetPoint(1,0.7,-0.7);
   graph->SetPoint(2,0.7,0.7);
   graph->SetPoint(3,-0.7,-0.7);
	TCanvas c;
	c.cd();
	graph->Draw("ap");

	el->Draw("p");
	c.SaveAs("Lel_corr.C");

}
