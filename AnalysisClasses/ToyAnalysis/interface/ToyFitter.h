/* 
 * File:   LikelihoodFunction.h
 * Author: nadjieh
 *
 * Created on May 1, 2012, 7:06 PM
 */
#define F0 7.01915e-01 /* 8TeV */
#define FL 3.00488e-01 /* 8TeV */
//#define F0 0.6862069 /* SM */
//#define FL 0.3170087 /* SM */
//#define F0 7.04699e-01 /* 7TeV */
//#define FL 2.97751e-01 /* 7TeV */
#define FRFIXEDTOZERO
//#define FZFIXEDTO70
//#define FLFIXEDTO30
//#define GENBINCONTENTS
#ifndef LikelihoodFunction_H
#define	LikelihoodFunction_H
#include "TF1.h"
#include "TF2.h"
#include "TF3.h"
#include "TH1.h"
#include "TH2.h"
#include "TH3.h"
#include "TMath.h"
#include "TGraph.h"
#include "TCanvas.h"
#include "TRandom1.h"
#include "TVirtualFitter.h"
#include "TMinuit.h"
#include "TFitter.h"
#include "TROOT.h"
#include <string>
#include <iostream>
#include <sstream>
using namespace std;

Double_t CosTheta(double *x, double *par)
/*--------------------------------------------------------------------*/ {
    //par[0]: F01
    //par[1]: F-1
    //F+ = 1- F-i - F0i
    Double_t firstTerm1 = (1 - par[0] - par[1])*(1 + x[0])*(1 + x[0]);
    Double_t thirdTerm1 = par[0]*(1 - x[0] * x[0]);
    Double_t secondTerm1 = par[1]*(1 - x[0])*(1 - x[0]);
#if defined FRFIXEDTOZERO  && !defined FZFIXEDTO70 && !defined FLFIXEDTO30
    firstTerm1 = 0;
#endif /*FRFIXEDTOZERO*/
    Double_t First = (3.0 / 8.0)*(firstTerm1 + secondTerm1)+(3.0 / 4.0) * thirdTerm1;
    return First;
};

class WeightFunctionCreator {
public:

    //    WeightFunctionCreator(double std_f0 = F0, double std_fneg = FL) :

    WeightFunctionCreator(double std_f0 = F0, double std_fneg = FL) :
    f0Std(std_f0), f_Std(std_fneg) {
        func = new TF1("WeightFunctionCreator", CosTheta, -1, 1, 2);
        func->SetParameters(f0Std, f_Std);
    }

    ~WeightFunctionCreator() {
        delete func;
    }

    Double_t operator()(double * x, double * par) {
        func->SetParameters(f0Std, f_Std);
        //	cout<<"SM: "<< func->GetParameter(0)<<"  "<<func->GetParameter(1)<<endl;
        double stdVal = func->Eval(x[0]);
        func->SetParameters(par);
#if !defined FRFIXEDTOZERO  && !defined FZFIXEDTO70 && defined FLFIXEDTO30  
        func->FixParameter(1, FL);
#endif /*FZFIXEDTO30*/      
#if !defined FRFIXEDTOZERO  && defined FZFIXEDTO70 && !defined FLFIXEDTO30  
        func->FixParameter(0, F0);
#endif /*FZFIXEDTO30*/  
        //	cout<<func->GetParameter(0)<<"  "<<func->GetParameter(1)<<endl;
        double nonstdVal = func->Eval(x[0]);
        return ((double) nonstdVal / (double) stdVal);
    }

    static std::pair<TF1, WeightFunctionCreator*> getWeightFunction(string name, double std_f0 = F0, double std_fneg = FL) {
        WeightFunctionCreator * functor = new WeightFunctionCreator(std_f0, std_fneg); //F0, FL);
        //        WeightFunctionCreator * functor = new WeightFunctionCreator(F0, FL);
        TF1 ret(name.c_str(), functor, -1.0, 1.0, 2);

        ret.SetParName(0, "F0");
        ret.SetParName(1, "FNeg");
        ret.SetParameters(std_f0, std_fneg);
        //        ret.SetParLimits(0 , 0.0 , 1.0);
        //        ret.SetParLimits(1 , 0.0 , 1.0);
        return make_pair(ret, functor);
    }
private:
    TF1 * func;
    double f0Std;
    double f_Std;


};

class TwoDWeightFunctionCreator {
public:

    TwoDWeightFunctionCreator(double std_f0 = F0, double std_fneg = FL) :
    f0Std(std_f0), f_Std(std_fneg) {
        func = new TF1("TwoDWeightFunctionCreator", CosTheta, -1, 1, 2);
        func->SetParameters(f0Std, f_Std);
    }

    ~TwoDWeightFunctionCreator() {
        delete func;
    }

    Double_t operator()(double * x, double * par) {//, x length is 2
        func->SetParameters(f0Std, f_Std);
        //	cout<<"SM: "<< func->GetParameter(0)<<"  "<<func->GetParameter(1)<<endl;
        double stdVal = func->Eval(x[0]);
        func->SetParameters(par);
        //	cout<<func->GetParameter(0)<<"  "<<func->GetParameter(1)<<endl;
        double nonstdVal1 = func->Eval(x[0]);
        double nonstdVal2 = func->Eval(x[1]);

        return ((double) (nonstdVal1 * nonstdVal2) / (double) pow(stdVal, 2));
    }

    static std::pair<TF2, TwoDWeightFunctionCreator*> getWeightFunction(string name, double std_f0_1 = F0, double std_fneg_1 = FL) {
        TwoDWeightFunctionCreator * functor = new TwoDWeightFunctionCreator(F0, FL);
        TF2 ret(name.c_str(), functor, -1.0, 1.0, -1.0, 1.0, 2);
        ret.SetParName(0, "F0_1");
        ret.SetParName(1, "FNeg_1");
        ret.SetParameters(std_f0_1, std_fneg_1);

        return make_pair(ret, functor);
    }
private:
    TF1 * func;
    double f0Std;
    double f_Std;
};

class LikelihoodFunction {
public:

    LikelihoodFunction(string name, TH1* nonWtbSum, TH1* hData, TH1* WtbSum, double f0gen = F0, double fneggen = FL)
    : Name(name), bkg(nonWtbSum), data(hData), signal(WtbSum),
    WeightFunc(WeightFunctionCreator::getWeightFunction("WeightFunc" + name, f0gen, fneggen)) {

        data->Sumw2(); //cout<<"---"<<endl;
        bkg->Sumw2(); //cout<<"----"<<endl;
        signal->Sumw2(); //cout<<"-----"<<endl;
        signal2D = 0;
        signals2D.clear();
        signals3D.clear();
    }

    LikelihoodFunction(string name, TH1* nonWtbSum, TH1* hData, TH2* WtbSum, std::string mksure = "mksure",
            double f0gen = F0, double fneggen = FL) : Name(name), bkg(nonWtbSum), data(hData),
    signal2D(WtbSum), WeightFunc(WeightFunctionCreator::getWeightFunction("WeightFunc" + name, f0gen, fneggen)) {

        data->Sumw2(); //cout<<"---"<<endl;
        bkg->Sumw2(); //cout<<"----"<<endl;
        signal2D->Sumw2(); //cout<<"-----"<<endl;
        signal = 0;
        signals2D.clear();
        signals3D.clear();
    }

    LikelihoodFunction(string name, TH1* nonWtbSum, TH1* hData, std::vector<TH2*> WtbSum, double f0gen = F0,
            double fneggen = FL) : Name(name), bkg(nonWtbSum), data(hData),
    WeightFunc(WeightFunctionCreator::getWeightFunction("WeightFunc" + name, f0gen, fneggen)) {
        data->Sumw2(); //cout<<"---"<<endl;
        bkg->Sumw2(); //cout<<"----"<<endl;
        for (unsigned int p = 0; p < WtbSum.size(); p++) {
            //            cout<<"==== "<<WtbSum.at(p)->GetEntries()<<endl;

            WtbSum.at(p)->Sumw2();
            signals2D.push_back(WtbSum.at(p));
        }
        signal = 0;
        signal2D = 0;
        signals3D.clear();

    }

    LikelihoodFunction(string name, TH1* nonWtbSum, TH1* hData, std::vector<TH2*> restOfSignal,
            std::vector<TH3*> DiW, double f0gen = F0, double fneggen = FL)
    : Name(name), bkg(nonWtbSum), data(hData),
    WeightFunc(WeightFunctionCreator::getWeightFunction("WeightFunc" + name, f0gen, fneggen)),
    //    WeightFunc(WeightFunctionCreator::getWeightFunction("WeightFunc" + name, 0, 1)),
    //        WeightFuncTT(WeightFunctionCreator::getWeightFunction("WeightFuncTT" + name, 0, 1)) {
    WeightFuncTT(WeightFunctionCreator::getWeightFunction("WeightFuncTT" + name, 0.6918, 0.3073)) {
        data->Sumw2(); //cout<<"---"<<endl;
        bkg->Sumw2(); //cout<<"----"<<endl;
        for (unsigned int p = 0; p < DiW.size(); p++) {
            //            cout<<"==== "<<WtbSum.at(p)->GetEntries()<<endl;

            DiW.at(p)->Sumw2();
            signals3D.push_back(DiW.at(p));
        }
        for (unsigned int p = 0; p < restOfSignal.size(); p++) {
            //            cout<<"==== "<<WtbSum.at(p)->GetEntries()<<endl;

            restOfSignal.at(p)->Sumw2();
            signals2D.push_back(restOfSignal.at(p));
        }
        signal = 0;
        signal2D = 0;
    }

    ~LikelihoodFunction() {
    }

    virtual Double_t operator()(double * x, double * par = 0) {
        //        x[0] = f_0
        //        x[1] = f_Neg
        //        x[2] = rec_gen factor
        //        no parameter is needed
        //        cout<<"operator is called"<<endl;
        double LL = 0.0;
        int nbins = data->GetXaxis()->GetNbins();
        for (int i = 0; i < nbins; i++) {
            //            cout<<"------------ bin number "<<i+1<<endl;

            std::pair<double, double> numbers = this->getNdataNmc(i + 1, x[0], x[1], x[2]);
            //            cout<<"++++++++++ log LL calculator "<<i+1<<endl;
            LL += this->logLikelihood(numbers.first, numbers.second);
        }
        return LL;
    }

    static std::pair<TF3, LikelihoodFunction*> getLLFunction(string name, TH1* nonWtbSum, TH1* hData,
            TH1* WtbSum, bool is2D = false) {
        LikelihoodFunction * functor = 0;
        if (!is2D)
            functor = new LikelihoodFunction(name, nonWtbSum, hData, WtbSum);
        else
            functor = new LikelihoodFunction(name, nonWtbSum, hData, (TH2*) WtbSum, "");

        TF3 ret(name.c_str(), functor, 0.0, 1.0, 0.0, 0.1, 0.0, 2.0, 0, "LikelihoodFunction");
        ret.SetRange(0.0, 0.0, 0.000001, 1.0, 1.0, 2.0);

        return make_pair(ret, functor);
    }

    static std::pair<TF3, LikelihoodFunction*> getLLFunctionGeneralized(string name, TH1* nonWtbSum, TH1* hData,
            std::vector<TH2*> WtbSum) {
        LikelihoodFunction * functor = 0;
        functor = new LikelihoodFunction(name, nonWtbSum, hData, WtbSum);

        TF3 ret(name.c_str(), functor, 0.0, 1.0, 0.0, 0.1, 0.0, 2.0, 0, "LikelihoodFunctionGeneralized");
        ret.SetRange(0.0, 0.0, 0.000001, 1.0, 1.0, 2.0);

        return make_pair(ret, functor);
    }

    static std::pair<TF3, LikelihoodFunction*> getLLFunctionForBias(string name, TH1* nonWtbSum, TH1* hData,
            std::vector<TH2*> WtbSum, std::vector<TH3*> DiW) {
        LikelihoodFunction * functor = 0;
        functor = new LikelihoodFunction(name, nonWtbSum, hData, WtbSum, DiW);
        cout << "I am in bias Likelihood" << endl;

        TF3 ret(name.c_str(), functor, 0.0, 1.0, 0.0, 0.1, 0.0, 2.0, 0, "LikelihoodFunctionForBias");
        ret.SetRange(0.0, 0.0, 0.000001, 1.0, 1.0, 2.0);

        return make_pair(ret, functor);
    }

    int getNbinData() {
        return this->data->GetXaxis()->GetNbins();
    }

    int findNbinData(double input) {
        return this->data->GetXaxis()->FindBin(input);
    }

protected:
    string Name;
    TH1* bkg;
    TH1* data;
    TH1* signal;
    TH2* signal2D;
    std::pair<TF1, WeightFunctionCreator*> WeightFunc;
    std::pair<TF1, WeightFunctionCreator*> WeightFuncTT;
    //    std::pair<TF2, TwoDWeightFunctionCreator*> TwoDWeightFunc;
    std::vector<TH2*> signals2D;
    std::vector<TH3*> signals3D;

    double nSignalRW(double costheta, int bin, double f0 = F0, double f_ = FL, double rec_gen = 1.) {
        double nSignal = -100.;
        WeightFunc.first.SetParameters(f0, f_);
        WeightFuncTT.first.SetParameters(f0, f_);
        if (signal != 0 && signal2D == 0 && signals2D.size() == 0 && signals3D.size() == 0) {
            //            cout<<"In 1D: "<<endl;
            //            double weight = getWeight(costheta,f0,f_)*rec_gen;
            double weight = WeightFunc.first.Eval(costheta) * rec_gen;
            nSignal = weight * signal->GetBinContent(bin);
        } else if (signal == 0 && signal2D != 0 && signals2D.size() == 0 && signals3D.size() == 0) {
            //            cout<<"In semi-general: "<<endl;
            nSignal = 0;
            gROOT->cd();
            TH1* hithrecbin = this->signal2D->ProjectionX("_pX", bin, bin, "o");
            hithrecbin->Multiply(&(WeightFunc.first), rec_gen);
            nSignal = hithrecbin->Integral();
            if (hithrecbin != NULL)
                delete hithrecbin;
        } else if (signal == 0 && signal2D == 0 && signals2D.size() != 0 && signals3D.size() == 0) {
            //            cout<<"In general: "<<endl;
            nSignal = 0;
            gROOT->cd();
            TH1* hithrecbin = 0;
            stringstream s;
            for (unsigned int p = 0; p < signals2D.size(); p++) {
                s.str("");
                s << p << "_pX";
                //                cout<<"sample number "<<p+1<<endl;
                hithrecbin = signals2D.at(p)->ProjectionX(s.str().c_str(), bin, bin, "o");
                //                cout<<"In general: "<<hithrecbin->GetName()<<endl;
                hithrecbin->Multiply(&(WeightFunc.first), rec_gen);
                nSignal += hithrecbin->Integral();
                delete hithrecbin;
            }
        } else if (signal == 0 && signal2D == 0 && signals2D.size() != 0 && signals3D.size() != 0) {
            //            cout<<"In general: "<<endl;
            nSignal = 0;
            gROOT->cd();
            TH1* hithrecbin = 0;
            stringstream s;
            for (unsigned int p = 0; p < signals2D.size(); p++) {
                s.str("");
                s << p << "_pX";
                //                cout<<"sample number "<<p+1<<endl;
                hithrecbin = signals2D.at(p)->ProjectionX(s.str().c_str(), bin, bin, "o");
#ifdef GENBINCONTENTS
                int nEmptyBins = 0;
                for (int iGenBinTemp = 0; iGenBinTemp < hithrecbin->GetXaxis()->GetNbins(); iGenBinTemp++) {
                    if (hithrecbin->GetBinContent(iGenBinTemp + 1) == 0)
                        nEmptyBins++;
                }
                if (nEmptyBins != 0) {
                    //                    cout << "In Signal " << p << " there are " << nEmptyBins << " empty bins for 2D histogram" << endl;
                    cout << "emptyBin" << p << "->Fill(" << bin << ", " << nEmptyBins << ");" << endl;
                }
#endif /*GENBINCONTENTS*/
                hithrecbin->Multiply(&(WeightFunc.first), rec_gen);
                nSignal += hithrecbin->Integral();
                delete hithrecbin;
            }
            //            TH2* hithrecbin2D = 0;
            TH1* biasH = 0;
            for (unsigned int p = 0; p < signals3D.size(); p++) {
                s.str("");
                s << p << "_pZ";
                //                cout<<"sample number "<<p+1<<endl;
                TH1D * coefficients = new TH1D("coefficients", "coefficients",
                        signals3D.at(p)->GetXaxis()->GetNbins(), signals3D.at(p)->GetXaxis()->GetXmin(),
                        signals3D.at(p)->GetXaxis()->GetXmax());
                for (int genBin = 0; genBin < signals3D.at(p)->GetXaxis()->GetNbins(); genBin++) {
                    biasH = (TH1*) signals3D.at(p)->ProjectionZ(s.str().c_str(), genBin + 1, genBin + 1, bin, bin, "o");
#ifdef GENBINCONTENTS
                    int nEmptyBins = 0;
                    for (int iGenBinTemp = 0; iGenBinTemp < biasH->GetXaxis()->GetNbins(); iGenBinTemp++) {
                        if (biasH->GetBinContent(iGenBinTemp + 1) == 0)
                            nEmptyBins++;
                    }
                    if (nEmptyBins != 0) {
                        //                        cout << "In Signal " << p << " there are " << nEmptyBins << " empty bins for 3D histogram, second top" << endl;
                        cout << "emptyBinSecondTop" << p << "->Fill(" << bin << ", " << nEmptyBins << ");" << endl;
                    }
#endif /*GENBINCONTENTS*/
                    biasH->Multiply(&(WeightFunc.first), 1);
                    //                    biasH->Multiply(&(WeightFuncTT.first), 1);
                    coefficients->SetBinContent(genBin + 1, biasH->Integral());
                    delete biasH;
                }
                coefficients->Multiply(&(WeightFunc.first), rec_gen);
                //                coefficients->Multiply(&(WeightFuncTT.first), rec_gen);
                nSignal += (coefficients->Integral());
                delete coefficients;
            }
        }

        if (nSignal == -100.) {

            cout << "************** FATAL ERROR: nSignal is not set ...." << endl;
        }
        return nSignal;
    }
public:

    std::pair<double, double> getNdataNmc(int bin, double f0 = F0, double f_ = FL, double rec_gen = 1.) {
        int nbins = data->GetXaxis()->GetNbins();
        if (bin > nbins || nbins < 0) {
            cout << "No value for this cos(theta) bin" << endl;
            return make_pair(-100, -100);
        }
        double nData = data->GetBinContent(bin);
        double costheta = data->GetBinCenter(bin);
        double nSignal = nSignalRW(costheta, bin, f0, f_, rec_gen);
        double nMC = bkg->GetBinContent(bin) + nSignal;
        //        cout<<"****** "<<nData<<"\t"<<nMC<<endl;

        return make_pair(nData, nMC);
    }
protected:

    double getWeight(double costheta, double f0 = F0, double f_ = FL) {
        WeightFunc.first.SetParameters(f0, f_);

        return WeightFunc.first.Eval(costheta);
    }

    double logLikelihood(double nData, double nMC) {
        double x_mean = nMC;
        double x = nData;
        if (x_mean <= 0.0)
            return 0.0;
        if (x <= 0.0)
            return 0.0;
        double log_pow_1 = x * log(x_mean);
        double log_exp_1 = -x_mean;
        double log_factoral = x * log(x) - x + (log(x * (1 + 4 * x * (1 + 2 * x))) / 6) + log(M_PI) / 2;

        return log_factoral - log_exp_1 - log_pow_1;
    }

};

class ChiSquaredFunction {
public:

    ChiSquaredFunction(string name, TH1* nonWtbSum, TH1* hData, TH1* WtbSum, double f0gen = F0, double fneggen = FL)
    : Name(name), bkg(nonWtbSum), data(hData), signal(WtbSum),
    WeightFunc(WeightFunctionCreator::getWeightFunction("WeightFunc" + name, f0gen, fneggen)) {

        data->Sumw2();
        bkg->Sumw2();
        signal->Sumw2();
        signal2D = 0;
    }

    ChiSquaredFunction(string name, TH1* nonWtbSum, TH1* hData, TH2* WtbSum, std::string mksure = "", double f0gen = F0,
            double fneggen = FL) : Name(name), bkg(nonWtbSum), data(hData), signal2D(WtbSum),
    WeightFunc(WeightFunctionCreator::getWeightFunction("WeightFunc" + name, f0gen, fneggen)) {

        data->Sumw2();
        bkg->Sumw2();
        signal2D->Sumw2();
        signal = 0;
    }

    ~ChiSquaredFunction() {
    }

    Double_t operator()(double * x, double * par = 0) {
        //        x[0] = f_0
        //        x[1] = f_Neg
        //        x[2] = rec_gen factor
        //        no parameter is needed
        double chi2 = 0.0;
        int nbins = data->GetXaxis()->GetNbins();
        for (int i = 0; i < nbins; i++) {

            std::pair<double, pair<double, double> > numbers = this->getNdataNmc(i + 1, x[0], x[1], x[2]);
            double Data[2] = {numbers.first, sqrt(numbers.first)};
            double MC[2] = {numbers.second.first, numbers.second.second};
            chi2 += this->chiSquared(Data, MC);
        }
        return chi2;
    }

    static std::pair<TF3, ChiSquaredFunction *> getChiSquaredFunction(string name, TH1* nonWtbSum, TH1* hData, TH1* WtbSum) {
        ChiSquaredFunction * functor = new ChiSquaredFunction(name, nonWtbSum, hData, WtbSum);
        TF3 ret(name.c_str(), functor, 0.0, 1.0, 0.0, 0.1, 0.0, 2.0, 0, "ChiSquaredFunction");
        ret.SetRange(0.0, 0.0, 0.000001, 1.0, 1.0, 2.0);

        return make_pair(ret, functor);
    }
private:
    string Name;
    TH1* bkg;
    TH1* data;
    TH1* signal;
    TH2* signal2D;
    std::pair<TF1, WeightFunctionCreator*> WeightFunc;

    std::pair<double, std::pair<double, double> > getNdataNmc(int bin, double f0 = F0, double f_ = FL,
            double rec_gen = 1.) {
        int nbins = data->GetXaxis()->GetNbins();
        if (bin > nbins || nbins < 0) {
            cout << "No value for this cos(theta) bin" << endl;
            return make_pair(-100, make_pair(-100, -100));
        }
        double nData = data->GetBinContent(bin);
        double costheta = data->GetBinCenter(bin);
        double nSignal = -100.;
        double sigErr = -100.;
        if (signal2D == 0 && signal != 0) {
            double weight = getWeight(costheta, f0, f_) * rec_gen;
            nSignal = weight * signal->GetBinContent(bin);
            sigErr = weight * signal->GetBinError(bin);
        } else if (signal2D != 0 && signal == 0) {
            WeightFunc.first.SetParameters(f0, f_);
            gROOT->cd();
            TH1* hithrecbin = this->signal2D->ProjectionX("_pX", bin, bin, "o");
            //            cout<<"It was here!!!!"<<endl;
            hithrecbin->Sumw2();
            hithrecbin->Multiply(&(WeightFunc.first), rec_gen);
            nSignal = hithrecbin->Integral();
            sigErr = 0;
            for (int s = 0; s < hithrecbin->GetXaxis()->GetNbins(); s++) {
                sigErr += pow(hithrecbin->GetBinError(s + 1), 2);
            }
            sigErr = sqrt(sigErr) * rec_gen;
        }
        if (nSignal == -100. || sigErr == -100.)
            cout << "************** FATAL ERROR: nSignal or sigErr is not set ...." << endl;
        double nMC = bkg->GetBinContent(bin) + nSignal;
        double errMC = sqrt((sigErr * sigErr) + (bkg->GetBinError(bin) * bkg->GetBinError(bin)));

        return make_pair(nData, make_pair(nMC, errMC));
    }

    double getWeight(double costheta, double f0 = F0, double f_ = FL) {
        WeightFunc.first.SetParameters(f0, f_);

        return WeightFunc.first.Eval(costheta);
    }

    double chiSquared(double* Data, double* MC) { //[0]: value , [1]: uncertainty
        double x_mean = MC[0];
        double x = Data[0];
        if (x + x_mean < 0)
            return 0.0;
        double sigma = sqrt((MC[1] * MC[1]) + (Data[1] * Data[1]));

        return (x - x_mean)*(x - x_mean) / (2 * sigma * sigma);
    }
};

void GetMinimum(TF3 F, double * x, double * xerr, double & corr12, bool CalcError = true) {
    //    based on the documentation of TF3::GetMinimumXYZ from
    //    http://root.cern.ch/root/html532/src/TF3.cxx.html#QUjxjE
    //    F.Print("all");
    F.SetNpx(5);
    F.SetNpy(5);
    F.SetNpz(5);
    F.GetMinimumXYZ(x[0], x[1], x[2]);
    //    cout<<x[0]<<"\t"<<x[1]<<"\t"<<x[2]<<endl;
    if (!CalcError)
        return;
    //    go to minuit for the final minimization

    TVirtualFitter * minuit = TVirtualFitter::Fitter(&F, 3);
    minuit->Clear();
    minuit->SetFitMethod("F3Minimizer");
    double arg_list[10] = {-1, -1, -1, -1, -1, -1, -1, -1, -1, -1};
    int nNargs = 1;
    minuit->ExecuteCommand("SET PRINT", arg_list, nNargs);
    double xl = 0.0;
    double xu = 0.0;
    double yl = 0.0;
    double yu = 0.0;
    double zl = 0.0;
    double zu = 0.0;
    //    x[0] = 0.593245;
    minuit->SetParameter(0, "x", x[0], 0.1, xl, xu);
    //    minuit->FixParameter(0      );
    //    x[1] = FL;
    minuit->SetParameter(1, "y", x[1], 0.1, yl, yu);
    //    minuit->FixParameter(1      );
    //    x[2] = 0.925322;
    minuit->SetParameter(2, "z", x[2], 0.1, zl, zu);
    //    minuit->SetParameter(2, "z", 1, 0.1, zl , zu );
    //    minuit->FixParameter(2      );
    //    x[0] = 0.7;
    //    x[1] = 0.3;
    //    x[2] = 1.;
    for (int i = 0; i < 10; i++)
        arg_list[i] = 1.;
    Int_t fitResult = minuit->ExecuteCommand("MIGRAD", arg_list, 0);
    if (fitResult != 0) {
        cout << "Abnormal termination of minimization" << endl;
        x[0] = -1.0;
        x[1] = -1.0;
        x[2] = -1.0;
        delete minuit;
        return;
    }

    x[0] = minuit->GetParameter(0);
    x[1] = minuit->GetParameter(1);
    x[2] = minuit->GetParameter(2);

    double globcc = 0.0;
    minuit->GetErrors(0, xu, xl, xerr[0], globcc);
    minuit->GetErrors(1, yu, yl, xerr[1], globcc);
    minuit->GetErrors(2, zu, zl, xerr[2], globcc);
    corr12 = minuit->GetCovarianceMatrixElement(0, 1);
    //    TMinuit * myMinuit = ((TFitter*)TVirtualFitter::GetFitter())->GetMinuit();
    //    myMinuit->SetErrorDef(1);
    //    TCanvas myCan;
    //    myCan.cd();
    //    TGraph *gr12 = (TGraph*)myMinuit->Contour(40,0,1);
    //    gr12->Draw("alf");
    //    myCan.SaveAs("a.C");
    delete minuit;
}

TH1* MakeRandomHistogram(TH1* inHist, int nPE, int nDim = 1, bool isQCD = false, double multiplicant = 1) {
    TRandom seed;
    unsigned int mySeed = -10000;
    for (int i = 0; i < nPE; i++) {
        mySeed = seed.Uniform(999998);
    }
    TRandom s;
    s.SetSeed(mySeed);
    if (nDim == 1) {
        stringstream name;
        name << inHist->GetName() << "_1D_" << nPE;
        TH1* res = (TH1*) inHist->Clone(name.str().c_str());
        for (int iBin = 0; iBin < inHist->GetXaxis()->GetNbins(); iBin++) {
            double nBinNew = 0;
            if (isQCD)
                nBinNew = s.Gaus(multiplicant * inHist->GetBinContent(iBin + 1), multiplicant * inHist->GetBinContent(iBin + 1));
            else
                nBinNew = s.Gaus(multiplicant * inHist->GetBinContent(iBin + 1), multiplicant * inHist->GetBinError(iBin + 1));
            res->SetBinContent(iBin + 1, nBinNew);
        }
        return res;
    } else if (nDim == 2) {
        stringstream name;
        name << inHist->GetName() << "_2D_" << nPE;
        TH2* res = (TH2*) inHist->Clone(name.str().c_str());
        for (int iBin = 0; iBin < inHist->GetXaxis()->GetNbins(); iBin++) {
            for (int jBin = 0; jBin < inHist->GetYaxis()->GetNbins(); jBin++) {
                double nBinNew = s.Gaus(multiplicant * inHist->GetBinContent(iBin + 1, jBin + 1), inHist->GetBinError(iBin + 1, jBin + 1));
                res->SetBinContent(iBin + 1, jBin + 1, nBinNew);
            }
        }
        return res;
    } else if (nDim == 3) {
        stringstream name;
        name.str("");
        name << inHist->GetName() << "_3D_" << nPE;
        TH3* res = (TH3*) inHist->Clone(name.str().c_str());
        for (int iBin = 0; iBin < inHist->GetXaxis()->GetNbins(); iBin++) {
            for (int jBin = 0; jBin < inHist->GetYaxis()->GetNbins(); jBin++) {
                for (int kBin = 0; kBin < inHist->GetZaxis()->GetNbins(); kBin++) {
                    //                    cout<<"kBin: "<<kBin<<" "<<inHist->GetBinContent(iBin + 1, jBin + 1, kBin + 1)<<endl;
                    //                    cout<<"kBinEr: "<<kBin<<" "<<inHist->GetBinError(iBin + 1, jBin + 1, kBin + 1)<<endl;
                    double nBinNew = s.Gaus(multiplicant * inHist->GetBinContent(iBin + 1, jBin + 1, kBin + 1), inHist->GetBinError(iBin + 1, jBin + 1, kBin + 1));
                    res->SetBinContent(iBin + 1, jBin + 1, kBin + 1, nBinNew);
                }
            }
        }
        return res;
    }
    TH1* res = 0;
    return res;
}



#endif	/* LikelihoodFunction_H */

