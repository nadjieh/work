//#include "ACcalculator.C"
#include "TH2.h"
#include "TFile.h"
#include "TF1.h"
#include "TCanvas.h"
#include "/home/nadjieh/work/AnalysisClasses/ToyAnalysis/interface/FitValidator.h"
double myfneg(double* x, double* par){double  X[4] = {1, 0, x[0], 0}; return FNeg(X,par);}
double myfpos(double* x, double* par){double  X[4] = {1, 0, x[0], 0}; return FR(X,par);}
double myfzero(double* x, double* par){double  X[4] = {1, 0, x[0], 0}; return FZero(X,par);}


void plot(){
	int nFStep = 100;
	TH2D * fR = new TH2D("FR","F_{R}",100,0.,1.,100,0,0.2);
	TH2D * fL = new TH2D("fL","F_{L}",100,0,1.,100,0,1.);
	TH2D * f0 = new TH2D("f0","F_{0}",100,0,1.,100,0.5,1.);
	//Coefficients Q = GetFs(1,0,0,0,172.5);
	//cout<< Q.n <<" "<< Q.m <<" "<< Q.k <<endl;
	for(int i = 0; i < nFStep; i++){
		double gL = ((float(i)) / (float) nFStep); 
		double vl = 1; 
		Coefficients c = GetFs(vl,0,gL,0,172.5, 80.39,4.8); 
		cout<<"FL: "<<c.m<<",\tF0: "<<c.n<<",\tFR: "<<c.k<<"\tgL: "<<gL<<"\tSumF: "<<c.m+c.n+c.k<<endl; 
		f0->Fill(gL,c.n);
		fL->Fill(gL,c.m); 
		fR->Fill(gL,c.k);
		TFile * f = new TFile("WHel-VL1-gLvar.root","recreate");
		f->cd();
		f0->Write();
		fL->Write();
		fR->Write();
		f->Save();
		f->Close();
	}
};

/*
void plotFL(){
    double par[3] = {172.5, 80.39, 4.8};
	TF1 * f = new TF1("fneg",myfneg,0,1,3);
	f->SetParameters(par);
	TF1 * f2 = new TF1("fpos",myfpos,0,1,3);
	f2->SetParameters(par);
	TF1 * f3 = new TF1("fzero",myfzero,0,1,3);
	f3->SetParameters(par);
	TFile * file = new TFile("FL_gL.root","recreate");
	file->cd();
	
	f->Write();
	f2->Write();
	f3->Write();
	file->Close();
}*/
/*
void plotFR(){

}

void plotFZ(){

}*/
//VR = 0.55: FL = 0.22, FR = 0.0711659, F0 = 0.706695
