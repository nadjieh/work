/* 
 * File:   WHelicityComponents.h
 * Author: nadjieh
 *
 * Created on September 28, 2013, 1:54 PM
 */

#ifndef WHELICITYCOMPONENTS_H
#define	WHELICITYCOMPONENTS_H
#include "UsefullStructsForCombination.h"
#include <string>
#include <sstream>
#include <iostream>
#include "TH1.h"
#include "TH2.h"
#include "TH3.h"
#include "TF1.h"
#include "TFile.h"
#include "../../ToyAnalysis/interface/ToyFitter.h"
using namespace std;

class WHelicityComponents {
public:

    WHelicityComponents(string Name, std::vector<double> pars, WTempForCombination3D hists, int Dim, TH1D* R = 0) : name(Name),
    F0_(pars[0]), FL_(pars[1]), topnorm(pars[2]), nW(pars[3]), dim(Dim), ToptoSingletopRatio(R),
    WeightFunc(WeightFunctionCreator::getWeightFunction("WeightFunc" + name, pars[0], pars[1])) {
        cout << "Ratio: " << ToptoSingletopRatio << endl;
        this->SetHistograms(hists);
        this->MakeRMatrix();
        this->MakeSubtractedHist();
        this->MakeUnfoldedHistogram();
        this->MakeSingleTopGenHist();
        this->MakeTopGenHist();
    };

    virtual ~WHelicityComponents() {
    };

    TH2D* GetRMatrix() {
        return matrix;
    }

    TH2D* GetSingleTopMatrix() {
        return singletopMatrix;
    }

    TH3D* GetTopMatrix() {
        return topMatrix;
    }

    TH1* GetTopUnfolded() {
        return topUnfHist;
    }

    TH1* GetSingletopUnfolded() {
        return singleTopUnfHist;
    }

    TH1* GetSubtractedHist() {
        return subtracted;
    }

    TH1* GetUnfoldedHistogram() {
        return unfHist;
    }

    TH1* GetComponent(int comp) {//0: F0; 1: FL; 2: FR;
        double pars[2];
        switch (comp) {
            case 0:
                pars[0] = 1;
                pars[1] = 0;
                break;
            case 1:
                pars[0] = 0;
                pars[1] = 1;
                break;
            case 2:
                pars[0] = 0;
                pars[1] = 0;
                break;
        }
        stringstream s;
        s << "component_" << comp;
        TF1 * f = new TF1(s.str().c_str(), CosTheta, -1, 1, 2);
        f->SetParameter(0, pars[0]);
        f->SetParameter(1, pars[1]);
        s << "_meas";
        TF1 * fMeas = new TF1(s.str().c_str(), CosTheta, -1, 1, 2);
        fMeas->SetParameter(0, F0_);
        fMeas->SetParameter(1, FL_);
        TH1D* ret = (TH1D*) unfHist->Clone(s.str().c_str());
        ret->Divide(fMeas);
        ret->Multiply(f);
        delete f;
        delete fMeas;
        return ret;
    }

    TH1* GetSingleTopComponent(int comp) {//0: F0; 1: FL; 2: FR;
        double pars[2];
        switch (comp) {
            case 0:
                pars[0] = 1;
                pars[1] = 0;
                break;
            case 1:
                pars[0] = 0;
                pars[1] = 1;
                break;
            case 2:
                pars[0] = 0;
                pars[1] = 0;
                break;
        }
        stringstream s;
        s << "SingletopComponent_" << comp;
        TF1 * f = new TF1(s.str().c_str(), CosTheta, -1, 1, 2);
        f->SetParameter(0, pars[0]);
        f->SetParameter(1, pars[1]);
        s << "_meas";
        TF1 * fMeas = new TF1(s.str().c_str(), CosTheta, -1, 1, 2);
        fMeas->SetParameter(0, F0_);
        fMeas->SetParameter(1, FL_);
        TH1D* ret = (TH1D*) singleTopUnfHist->Clone(s.str().c_str());
        ret->Divide(fMeas);
        ret->Multiply(f);
        delete f;
        delete fMeas;
        return ret;
    }

    TH1* GetTopComponent(int comp) {//0: F0; 1: FL; 2: FR;
        double pars[2];
        switch (comp) {
            case 0:
                pars[0] = 1;
                pars[1] = 0;
                break;
            case 1:
                pars[0] = 0;
                pars[1] = 1;
                break;
            case 2:
                pars[0] = 0;
                pars[1] = 0;
                break;
        }
        stringstream s;
        s << "TopComponent_" << comp;
        TF1 * f = new TF1(s.str().c_str(), CosTheta, -1, 1, 2);
        f->SetParameter(0, pars[0]);
        f->SetParameter(1, pars[1]);
        s << "_meas";
        TF1 * fMeas = new TF1(s.str().c_str(), CosTheta, -1, 1, 2);
        fMeas->SetParameter(0, F0_);
        fMeas->SetParameter(1, FL_);
        TH1D* ret = (TH1D*) topUnfHist->Clone(s.str().c_str());
        ret->Divide(fMeas);
        ret->Multiply(f);
        delete f;
        delete fMeas;
        return ret;
    }

    TF1 * GetCosThetaAfterFit() {
        TF1 * fMeas = new TF1("FuncAfterFit", CosTheta, -1, 1, 2);
        fMeas->SetParameter(0, F0_);
        fMeas->SetParameter(1, FL_);
        return fMeas;
    }

    TH1 * GetBackground() {
        TH1D* h = (TH1D*) inputs.rest.nonRWs->Clone("backgrounds");
        h->Add(inputs.Wtemplate);
        return h;
    }

    TH1 * GetGenSignal() {
        return genSignal;
    }

    string GetName() {
        return name;
    }

private:

    void SetHistograms(WTempForCombination3D myinput) {
        myinput.rest.data->Sumw2();
        inputs.rest.data = (TH1*) myinput.rest.data->Clone(string(name + "_data").c_str());
        inputs.rest.name = name + "_" + myinput.rest.name;
        inputs.rest.nonRWs = (TH1*) myinput.rest.nonRWs->Clone(string(name + "_bkg").c_str());
        stringstream s;
        for (unsigned int i = 0; i < myinput.rest.signalIID.size(); i++) {
            inputs.rest.signalIID.push_back((TH2*) myinput.rest.signalIID[i]->Clone(string(name + "_2D").c_str()));
            s.str("");
            s << "_" << i + 1 << endl;
            if (i == 0)
                genSignal = inputs.rest.signalIID[i]->ProjectionX("genSignal");
            else
                genSignal->Add(inputs.rest.signalIID[i]->ProjectionX(string("genSignal2D"+s.str()).c_str()));
        }
        genSignal->Rebin(1000);
        cout << genSignal->Integral() << endl;
        for (unsigned int i = 0; i < myinput.rest.signalIIID.size(); i++) {
            inputs.rest.signalIIID.push_back((TH3*) myinput.rest.signalIIID[i]->Clone(string(name + "_3D").c_str()));
            s.str("");
            s << "_" << i + 1 << endl;
            genSignal->Add(inputs.rest.signalIIID[i]->ProjectionX(string("genSignal3D"+s.str()).c_str()));
        }
        cout << genSignal->Integral() << endl;
        inputs.Wtemplate = myinput.Wtemplate;
        inputs.Wtemplate->Scale(nW / (inputs.Wtemplate->Integral()));
        this->MakeSubtractedHist();
    }

    void MakeRMatrix() {
        TH2D * ret = new TH2D(string(name + "_SingleTopR").c_str(), string(name + "SingleTopR").c_str(), inputs.rest.signalIID[0]->GetXaxis()->GetNbins(),
                inputs.rest.signalIID[0]->GetXaxis()->GetXmin(), inputs.rest.signalIID[0]->GetXaxis()->GetXmax(),
                inputs.rest.signalIID[0]->GetYaxis()->GetNbins(), inputs.rest.signalIID[0]->GetYaxis()->GetXmin(),
                inputs.rest.signalIID[0]->GetYaxis()->GetXmax());
        ret->RebinX(1000);
        singletopMatrix = new TH2D(string(name + "SingleTopROrig").c_str(), string(name + "SingleTopROrig").c_str(), inputs.rest.signalIID[0]->GetXaxis()->GetNbins(),
                inputs.rest.signalIID[0]->GetXaxis()->GetXmin(), inputs.rest.signalIID[0]->GetXaxis()->GetXmax(),
                inputs.rest.signalIID[0]->GetYaxis()->GetNbins(), inputs.rest.signalIID[0]->GetYaxis()->GetXmin(),
                inputs.rest.signalIID[0]->GetYaxis()->GetXmax());

        for (unsigned int i = 0; i < inputs.rest.signalIID.size(); i++) {
            TH2D* tmp2D = (TH2D*) inputs.rest.signalIID[i]->Clone("tmp");
            tmp2D->RebinX(1000);
            ret->Add(tmp2D);
            delete tmp2D;
            singletopMatrix->Add(inputs.rest.signalIID[i]);
        }
        topMatrix = new TH3D(string(name + "_TopPairROrig").c_str(), string(name + "_TopPairROrig").c_str(), inputs.rest.signalIIID[0]->GetXaxis()->GetNbins(),
                inputs.rest.signalIIID[0]->GetXaxis()->GetXmin(), inputs.rest.signalIIID[0]->GetXaxis()->GetXmax(),
                inputs.rest.signalIIID[0]->GetYaxis()->GetNbins(), inputs.rest.signalIIID[0]->GetYaxis()->GetXmin(),
                inputs.rest.signalIIID[0]->GetYaxis()->GetXmax(), inputs.rest.signalIIID[0]->GetZaxis()->GetNbins(),
                inputs.rest.signalIIID[0]->GetZaxis()->GetXmin(), inputs.rest.signalIIID[0]->GetZaxis()->GetXmax());
        for (unsigned int i = 0; i < inputs.rest.signalIIID.size(); i++) {
            topMatrix->Add(inputs.rest.signalIIID[i]);
        }
        if (dim == 2) {
            for (unsigned int i = 0; i < inputs.rest.signalIIID.size(); i++) {
                ret->Add(inputs.rest.signalIIID[i]->Project3D("yx"));
            }
        } else if (dim == 3) {
            TH3D * ret3 = new TH3D(string(name + "_TopPairR").c_str(), string(name + "_TopPairR").c_str(), inputs.rest.signalIIID[0]->GetXaxis()->GetNbins(),
                    inputs.rest.signalIIID[0]->GetXaxis()->GetXmin(), inputs.rest.signalIIID[0]->GetXaxis()->GetXmax(),
                    inputs.rest.signalIIID[0]->GetYaxis()->GetNbins(), inputs.rest.signalIIID[0]->GetYaxis()->GetXmin(),
                    inputs.rest.signalIIID[0]->GetYaxis()->GetXmax(), inputs.rest.signalIIID[0]->GetZaxis()->GetNbins(),
                    inputs.rest.signalIIID[0]->GetZaxis()->GetXmin(), inputs.rest.signalIIID[0]->GetZaxis()->GetXmax());
            for (unsigned int i = 0; i < inputs.rest.signalIIID.size(); i++) {
                ret3->Add(inputs.rest.signalIIID[i]);
            }
            TH2D * tmp2D = new TH2D("tmpRecGen", "tmpRecGen", topMatrix->GetXaxis()->GetNbins(),
                    topMatrix->GetXaxis()->GetXmin(), topMatrix->GetXaxis()->GetXmax(),
                    topMatrix->GetYaxis()->GetNbins(), topMatrix->GetYaxis()->GetXmin(),
                    topMatrix->GetYaxis()->GetXmax());
            for (int i = 0; i < ret3->GetYaxis()->GetNbins(); i++) {
                for (int j = 0; j < ret3->GetXaxis()->GetNbins(); j++) {
                    TH1D * h1D = ret3->ProjectionZ("myZ", j + 1, j + 1, i + 1, i + 1, "o");
                    h1D->Multiply(&(WeightFunc.first), 1);
                    tmp2D->SetBinContent(j + 1, i + 1, h1D->Integral());
                    delete h1D;
                }
            }
            ret->Add(tmp2D);
            delete tmp2D;
        }
        matrix = (TH2D*) ret->Clone(string(name + "_matrix").c_str());
        delete ret;
    }

    void MakeSubtractedHist() {
        TH1D* tmp = (TH1D*) inputs.rest.data->Clone("subtracted");
        for (int p = 0; p < tmp->GetXaxis()->GetNbins(); p++)
            tmp->SetBinContent(p + 1, 0.);
        for (int i = 0; i < tmp->GetXaxis()->GetNbins(); i++) {
            tmp->SetBinContent(i + 1, inputs.rest.data->GetBinContent(i + 1)
                    - inputs.Wtemplate->GetBinContent(i + 1) - inputs.rest.nonRWs->GetBinContent(i + 1));
            if (tmp->GetBinContent(i + 1) < 0) {
                cout << "FATAL ERROR: Negative bin content!!" << subtracted->GetBinContent(i + 1) << endl;
                return;
            }
        }
        subtracted = (TH1D*) tmp->Clone(string(name + "_subtracted").c_str());
        subtracted->SetEntries((int) subtracted->Integral());
        delete tmp;
    }

    void MakeUnfoldedHistogram() {
        TH1D* ret = 0;
        for (int i = 0; i < subtracted->GetXaxis()->GetNbins(); i++) {
            double n = subtracted->GetBinContent(i + 1);
            if (ret == 0) {
                ret = matrix->ProjectionX("unfolded", i + 1, i + 1, "o");
                ret->Scale(n / ret->Integral());
            } else {
                stringstream p;
                p << "unfolded_" << i + 1;
                TH1D* tmp = matrix->ProjectionX(p.str().c_str(), i + 1, i + 1, "o");
                tmp->Scale(n / tmp->Integral());
                ret->Add(tmp);
                delete tmp;
            }
        }
        unfHist = (TH1D*) ret->Clone(string(name + "_unfolded").c_str());
        unfHist->SetEntries((int) unfHist->Integral());
        delete ret;
    }

    void MakeSingleTopGenHist() {
        if (subtracted == NULL) {
            cout << "Set Suntracted first" << endl;
            singleTopUnfHist = 0;
            return;
        } else if (ToptoSingletopRatio == NULL) {
            cout << "Set Ratio first" << endl;
            singleTopUnfHist = 0;
            return;
        } else if (singletopMatrix == NULL) {
            cout << "Set SingleTopMatrix2D first" << endl;
            singleTopUnfHist = 0;
            return;
        }
        singleTopUnfHist = new TH1D(string(name + "_singleTopUnfolded").c_str(), string(name + "_singleTopUnfolded").c_str(),
                singletopMatrix->GetXaxis()->GetNbins(), singletopMatrix->GetXaxis()->GetXmin(), singletopMatrix->GetXaxis()->GetXmax());
        if (subtracted->GetXaxis()->GetNbins() != singletopMatrix->GetYaxis()->GetNbins()) {
            cout << "Bin mismatch for singletop: subtracted" << endl;
            return;
        }
        if (ToptoSingletopRatio->GetXaxis()->GetNbins() != singletopMatrix->GetYaxis()->GetNbins()) {
            cout << "Bin mismatch for singletop: Ratio" << endl;
            return;
        }
        for (int i = 0; i < subtracted->GetXaxis()->GetNbins(); i++) {
            /*
             * If top/stop = a
             * If binContent of subtracted = N
             * Nstop = (1/1+a)N
             * Ntop = (a/1+a)N             
             */
            double r = ToptoSingletopRatio->GetBinContent(i + 1);
            double nstop = subtracted->GetBinContent(i + 1) / (1 + r);
            TH1D * gen = singletopMatrix->ProjectionX("tmp", i + 1, i + 1, "o");
            gen->Scale(nstop / gen->Integral());
            singleTopUnfHist->Add(gen);
            delete gen;
        }
    }

    void MakeTopGenHist() {
        if (subtracted == NULL) {
            cout << "Set Suntracted first" << endl;
            topUnfHist = 0;
            return;
        } else if (ToptoSingletopRatio == NULL) {
            cout << "Set Ratio first" << endl;
            topUnfHist = 0;
            return;
        } else if (topMatrix == NULL) {
            cout << "Set topMatrix3D first" << endl;
            topUnfHist = 0;
            return;
        } else if (singletopMatrix == NULL) {
            cout << "Set singletopMatrix2D first" << endl;
            topUnfHist = 0;
            return;
        }
        topUnfHist = new TH1D(string(name + "_topUnfolded").c_str(), string(name + "_topUnfolded").c_str(),
                topMatrix->GetXaxis()->GetNbins(), topMatrix->GetXaxis()->GetXmin(), topMatrix->GetXaxis()->GetXmax());
        if (subtracted->GetXaxis()->GetNbins() != topMatrix->GetYaxis()->GetNbins()) {
            cout << "Bin mismatch for top: subtracted" << endl;
            return;
        }
        if (ToptoSingletopRatio->GetXaxis()->GetNbins() != topMatrix->GetYaxis()->GetNbins()) {
            cout << "Bin mismatch for top: Ratio" << endl;
            return;
        }
        TH2D * tmp2D = new TH2D("tmpRecGen", "tmpRecGen", topMatrix->GetXaxis()->GetNbins(),
                topMatrix->GetXaxis()->GetXmin(), topMatrix->GetXaxis()->GetXmax(),
                topMatrix->GetYaxis()->GetNbins(), topMatrix->GetYaxis()->GetXmin(),
                topMatrix->GetYaxis()->GetXmax());
        if (dim == 2) {
            tmp2D = (TH2D*) topMatrix->Project3D("yx");
        } else if (dim == 3) {
            for (int i = 0; i < subtracted->GetXaxis()->GetNbins(); i++) {
                for (int j = 0; j < topMatrix->GetXaxis()->GetNbins(); j++) {
                    TH1 * biasH = (TH1*) topMatrix->ProjectionZ("tmp", j + 1, j + 1, i + 1, i + 1, "o");
                    biasH->Multiply(&(WeightFunc.first), 1);
                    tmp2D->SetBinContent(j + 1, i + 1, biasH->Integral());
                    delete biasH;
                }
            }
        }
        for (int i = 0; i < subtracted->GetXaxis()->GetNbins(); i++) {
            /*
             * If top/stop = a
             * If binContent of subtracted = N
             * Nstop = (1/1+a)N
             * Ntop = (a/1+a)N             
             */
            double r = ToptoSingletopRatio->GetBinContent(i + 1);
            double nstop = r * subtracted->GetBinContent(i + 1) / (1 + r);
            TH1D * gen = tmp2D->ProjectionX("tmp", i + 1, i + 1, "o");
            gen->Scale(nstop / gen->Integral());
            topUnfHist->Add(gen);
            delete gen;
        }
    }

    WTempForCombination3D inputs;
    TH1D* subtracted;
    TH2D* matrix;
    TH1D* unfHist;
    TH1D* singleTopUnfHist;
    TH1D* topUnfHist;
    TH1D* ToptoSingletopRatio;
    TH2D* singletopMatrix;
    TH3D* topMatrix;
    TH1D* genSignal;
    std::string name;
    double F0_;
    double FL_;
    double topnorm;
    double nW;
    int dim;
    std::pair<TF1, WeightFunctionCreator*> WeightFunc;
};

#endif	/* WHELICITYCOMPONENTS_H */

