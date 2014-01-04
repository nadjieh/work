#include "TH1.h"
#include "TF1.h"
#include "TCanvas.h"
#include "TString.h"
#include "TFile.h"
#include <sstream>
Double_t CosTheta(double *x, double *par)
/*--------------------------------------------------------------------*/ {
    //par[0]: F01
    //par[1]: F-1
    //F+ = 1- F-i - F0i
    Double_t firstTerm1 = (1 - par[0] - par[1])*(1 + x[0])*(1 + x[0]);
    Double_t secondTerm1 = par[1]*(1 - x[0])*(1 - x[0]);
    Double_t thirdTerm1 = par[0]*(1 - x[0] * x[0]);
    Double_t First = (3.0 / 8.0)*(firstTerm1 + secondTerm1)+(3.0 / 4.0) * thirdTerm1;
    return First;
}

TH1D* doTest(TH1D * t, double f0, double fl, TString name){
	stringstream s;
	s <<"F_{0} = "<<f0<<", F_{L} = "<<fl<<", F_{R} = "<<1-f0-fl;
	TH1D * u = (TH1D*)t->Clone(name);
    u->SetTitle(s.str().c_str());
	TF1 * f1 = new TF1("f1",CosTheta, -1.,1.,2 );
	f1->SetParameter(0,0);
	f1->SetParameter(1,0);
	TF1 * f2 = new TF1("f2",CosTheta, -1.,1.,2 );
	f2->SetParameter(0,f0);
	f2->SetParameter(1,fl);
	u->Divide(f2);
	u->Multiply(f1);
	delete f1;
	delete f2;
	return u;
}

void doAll(TH1D * h, TString name){
    double f0_ = 0.7;
    double fl_ = 0.3;
	TCanvas c;
	for(double i = -0.07; i < 0.08; i+=0.01){
		double fl = fl_ + i;
		stringstream d;
		d <<name <<"_"<<(int)(i/0.01);
		TH1D * u = doTest(h, f0_, fl, d.str().c_str());
		u->SetLineColor(kGreen + (int)(i/0.01));
		if(i == -0.07)
			u->Draw();
		else
			u->Draw("sames");
    }
	c.SaveAs(name+".C");


}
