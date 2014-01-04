{
//X: F0
//Y: FL
	double corr = -0.920202;
	double centFL = 0.292326;
	double centF0 = 0.716711;
	double sigL = sqrt(pow(0.047,2)+pow(0.0267805,2));
	double sig0 = sqrt(pow(0.045,2)+pow(0.0426491,2));
	cout<<sigL<<"\t"<<sig0<<endl;
	//Defining the larger error
	bool isX = (sig0 > sigL);
	double cov  = corr*sig0*sigL;

	double elements[4] = {pow(sig0,2),cov,cov,pow(sigL,2)};
	TMatrixT<double> * p = new TMatrixT<double>(2,2);
	p->SetMatrixArray(elements);
    double det = p->Determinant();
    double sum = pow(sigL,2)+pow(sig0,2);
    double Delta = pow(sum,2) - 4*det;
	double root1 = (-sum + sqrt(Delta))/(-1*2);
	double root2 = (-sum - sqrt(Delta))/(-1*2);
	cout<<"roots: "<<root1<<"\t"<<root2<<endl;
	cout<<"rs: "<<sqrt(root1)<<"\t"<<sqrt(root2)<<endl;
	cout<<sqrt(root1)<<"\t"<<sqrt(root2)<<endl;
	cout<<root1+root2<<"\t"<<sum<<endl;
	cout<<root1*root2<<"\t"<<det<<endl;

	double theta = 0.5*TMath::ATan((2*cov)/(pow(sig0,2)-pow(sigL,2)));
	cout<<180. * theta / (TMath::Pi)<<endl;
	cout<<TMath::RadToDeg()<<endl;
	double max = fabs(root1);
	double min = fabs(root2);
	if(fabs(root1) < fabs(root2) ){
		min = fabs(root1);
		max = fabs(root2);
	}
    double rG = sqrt(sig0*sig0 + sigL*sigL);
    TEllipse * el = 0;
	if(isX)
    	el = new TEllipse(centF0, centFL, sqrt(max), sqrt(min), 0, 360, TMath::RadToDeg()*theta);
	else
    	el = new TEllipse(centF0, centFL, sqrt(min), sqrt(max), 0, 360, TMath::RadToDeg()*theta);
   TGraph *graph = new TGraph(4);
   graph->SetName("def");
   graph->SetTitle("");
   graph->SetFillColor(1);
   graph->SetPoint(0,0,1);
   graph->SetPoint(1,1,0);
   graph->SetPoint(2,1,1);
   graph->SetPoint(3,0,0);
	TCanvas c;
	c.cd();
	graph->Draw("ap");

	el->Draw("p");
	c.SaveAs("elt.C");

}
