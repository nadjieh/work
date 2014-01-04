/* 
 * File:   TWBiasChecker.h
 * Author: nadjieh
 *
 * Created on June 11, 2013, 10:02 PM
 */

#ifndef TWBIASCHECKER_H
#define	TWBIASCHECKER_H
#include "TwoDLinearityChecker.h"

class TWElectronSignalSampleInfo {// should be changed ....
public:

    TWElectronSignalSampleInfo() {

        Xsections["w"] = 31314;
        Xsections["dy"] = 3048;
        Xsections["t"] = 41.9;
        Xsections["tbar"] = 22.6;
        Xsections["tWHadL"] = (0.58 * 2);
        Xsections["tWbarHadL"] = (0.58 * 2);
        Xsections["tWLpL"] = (0.097 * 2);
        Xsections["tWbarLpL"] = (0.097 * 2);
        Xsections["tWTauL"] = (0.097 * 2);
        Xsections["tWbarLMu"] = (0.097 * 2);
        Xsections["tWRest"] = (7.3 * 2);
        Xsections["tWbarRest"] = (7.3 * 2);
        Xsections["ttdiL"] = 2.04;
        Xsections["ttLpL"] = 4.07;
        Xsections["ttLtau"] = 4.07;
        Xsections["ttLhad"] = 24.4;
        Xsections["ttrest"] = 130.42;
        Xsections["s"] = 3.19;
        Xsections["sbar"] = 1.44;

        N0["w"] = 75748221;
        N0["dy"] = 30459503;
        N0["t"] = 41.9;
        N0["tbar"] = 22.6;
        N0["tWHadL"] = (0.58 * 2);
        N0["tWbarHadL"] = (0.58 * 2);
        N0["tWLpL"] = (0.097 * 2);
        N0["tWbarLpL"] = (0.097 * 2);
        N0["tWTauL"] = (0.097 * 2);
        N0["tWbarLMu"] = (0.097 * 2);
        N0["tWRest"] = (7.3 * 2);
        N0["tWbarRest"] = (7.3 * 2);
        N0["ttdiL"] = 2.04;
        N0["ttLpL"] = 4.07;
        N0["ttLtau"] = 4.07;
        N0["ttLhad"] = 24.4;
        N0["ttrest"] = 130.42;
        N0["s"] = 3.19;
        N0["sbar"] = 1.44;
    }

    ~TWElectronSignalSampleInfo() {
    };
    std::map<string, double> Xsections; //pb
    std::map<string, double> N0;
};

class TWMuonSignalSampleInfo {// should be changed ....
public:

    TWMuonSignalSampleInfo() {
        Xsections["w"] = 31314;
        Xsections["dy"] = 3048;
        Xsections["t"] = 41.9;
        Xsections["tbar"] = 22.6;
        Xsections["tWHadL"] = (0.58 * 2);
        Xsections["tWbarHadL"] = (0.58 * 2);
        Xsections["tWLpL"] = (0.097 * 2);
        Xsections["tWbarLpL"] = (0.097 * 2);
        Xsections["tWTauL"] = (0.097 * 2);
        Xsections["tWbarLMu"] = (0.097 * 2);
        Xsections["tWRest"] = (7.3 * 2);
        Xsections["tWbarRest"] = (7.3 * 2);
        Xsections["ttdiL"] = 2.04;
        Xsections["ttLpL"] = 4.07;
        Xsections["ttLtau"] = 4.07;
        Xsections["ttLhad"] = 24.4;
        Xsections["ttrest"] = 130.42;
        Xsections["s"] = 3.19;
        Xsections["sbar"] = 1.44;

        N0["w"] = 75748221;
        N0["dy"] = 30459503;
        N0["t"] = 41.9;
        N0["tbar"] = 22.6;
        N0["tWHadL"] = (0.58 * 2);
        N0["tWbarHadL"] = (0.58 * 2);
        N0["tWLpL"] = (0.097 * 2);
        N0["tWbarLpL"] = (0.097 * 2);
        N0["tWTauL"] = (0.097 * 2);
        N0["tWbarLMu"] = (0.097 * 2);
        N0["tWRest"] = (7.3 * 2);
        N0["tWbarRest"] = (7.3 * 2);
        N0["ttdiL"] = 2.04;
        N0["ttLpL"] = 4.07;
        N0["ttLtau"] = 4.07;
        N0["ttLhad"] = 24.4;
        N0["ttrest"] = 130.42;
        N0["s"] = 3.19;
        N0["sbar"] = 1.44;
    }

    ~TWMuonSignalSampleInfo() {
    };
    std::map<string, double> Xsections; //pb
    std::map<string, double> N0;
};
using namespace std;
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "TH1.h"
#include "TH2.h"
#include "TH3.h"
#include "TF1.h"
#include "TF3.h"

class TWBiasChecker : public TwoDLinearityChecker {
public:

    TWBiasChecker(string name, string pfix, string sfix, string hist, string dir, string chan,
            int bins = 10) : TwoDLinearityChecker(name, pfix, sfix, hist, dir, chan, bins) {
    }

    virtual ~TWBiasChecker() {
    }

    void addFlatBkgs(double Lumi = 1) {
        TWElectronSignalSampleInfo myESampleInfo;
        TWMuonSignalSampleInfo myMuSampleInfo;
        std::map<string, double>::iterator eSampleItr = myESampleInfo.Xsections.begin();
        std::map<string, double>::iterator mSampleItr = myMuSampleInfo.Xsections.begin();
        for (; eSampleItr != myESampleInfo.Xsections.end(); eSampleItr++, mSampleItr++) {
            if (eSampleItr->first == "w" || eSampleItr->first == "dy") {
                TH1* hist = GetCosThetaPlot(eSampleItr->first, prefix, suffix, histName, dirName, 10);
                hist->Sumw2();
                DistributionProducerFromSelected *myDist =
                        new DistributionProducerFromSelected(hist, string(eSampleItr->first), Lumi);
                bkg_samples[eSampleItr->first] = myDist;
                hist->Scale(float(Lumi * eSampleItr->second) / float(myESampleInfo.N0[eSampleItr->first]));
                if (bkg == 0)
                    bkg = ((TH1*) hist->Clone(string("bkg_" + string(hist->GetName())).c_str()));
                else {
                    bkg->Add(hist);
                }
                cout << "bkg is added " << eSampleItr->first << endl;
            } else {// be careful with channel
                TH1* bkginsignal = 0;
                DistributionProducerFromSelected* myDist = 0;
                if (channel == "electron") {
                    bkginsignal = GetCosThetaPlot(eSampleItr->first, prefix, suffix, histName, dirName, 10);
                    bkginsignal->Sumw2();
                    myDist = new DistributionProducerFromSelected(bkginsignal, string(eSampleItr->first)
                            , Lumi);
                    myDist->SetBasicValues(myESampleInfo.Xsections[eSampleItr->first],
                            myESampleInfo.N0[eSampleItr->first], bkginsignal->GetEntries());
                    bkginsignal->Scale(float(Lumi * eSampleItr->second) / float(myESampleInfo.N0[eSampleItr->first]));
                } else if (channel == "muon") {
                    bkginsignal = GetCosThetaPlot(mSampleItr->first, prefix, suffix, histName, dirName, 10);
                    bkginsignal->Sumw2();
                    myDist = new DistributionProducerFromSelected(bkginsignal, string(mSampleItr->first)
                            , Lumi);
                    myDist->SetBasicValues(myMuSampleInfo.Xsections[mSampleItr->first],
                            myMuSampleInfo.N0[mSampleItr->first], bkginsignal->GetEntries());
                    bkginsignal->Scale(float(Lumi * mSampleItr->second) / float(myMuSampleInfo.N0[mSampleItr->first]));
                }
                bkg_samples[eSampleItr->first] = myDist;
                if (bkg != 0)
                    bkg->Add(bkginsignal);
                else {
                    cout << "WARNING: CHECK BKG SCENARIO \n\t first put w, dy, ... in the input list" << endl;
                    bkg = (TH1*) bkginsignal->Clone("bkginsig");
                }
                cout << "bkginSignal is added " << mSampleItr->first << endl;
            }
        }
    }

    virtual void addSamples(double Lumi = 1) {
        this->addFlatBkgs(Lumi);
        //filling the vectors
        TWElectronSignalSampleInfo myESampleInfo;
        TWMuonSignalSampleInfo myMuSampleInfo;
        std::map<string, double>::iterator eSampleItr = myESampleInfo.Xsections.begin();
        std::map<string, double>::iterator mSampleItr = myMuSampleInfo.Xsections.begin();
        for (; eSampleItr != myESampleInfo.Xsections.end(); eSampleItr++, mSampleItr++) {
            if (eSampleItr->first == string("dy") || eSampleItr->first == string("w"))
                continue;
            TH2* histIID = 0;
            if (channel == "electron") {
                histIID = (TH2*) GetCosThetaPlot(eSampleItr->first, BaseLinearityCheker::prefix,
                        BaseLinearityCheker::suffix, BaseLinearityCheker::histName,
                        BaseLinearityCheker::dirName, 10, /*is2D*/true);
                histIID->Sumw2();
                DistributionProducerFromSelected* myDist2D = new DistributionProducerFromSelected(histIID
                        , string(eSampleItr->first), Lumi, true);
                myDist2D->SetBasicValues(myESampleInfo.Xsections[eSampleItr->first],
                        myESampleInfo.N0[eSampleItr->first], histIID->GetEntries());
                histIID->Scale(float(Lumi * eSampleItr->second) / float(myESampleInfo.N0[eSampleItr->first]));
                BaseLinearityCheker::signal_samples[eSampleItr->first] = myDist2D;
            }
            if (channel == "muon") {
                histIID = (TH2*) GetCosThetaPlot(mSampleItr->first, BaseLinearityCheker::prefix,
                        BaseLinearityCheker::suffix, BaseLinearityCheker::histName,
                        BaseLinearityCheker::dirName, 10, /*is2D*/true);
                histIID->Sumw2();
                DistributionProducerFromSelected* myDist2D = new DistributionProducerFromSelected(histIID
                        , string(mSampleItr->first), Lumi, true);
                myDist2D->SetBasicValues(myMuSampleInfo.Xsections[mSampleItr->first],
                        myMuSampleInfo.N0[mSampleItr->first], histIID->GetEntries());
                histIID->Scale(float(Lumi * mSampleItr->second) / float(myMuSampleInfo.N0[mSampleItr->first]));
                BaseLinearityCheker::signal_samples[mSampleItr->first] = myDist2D;
            }
            BaseLinearityCheker::signalIID.push_back((TH2*) histIID->Clone(std::string("MyTwoD_" + eSampleItr->first + "_" +
                    std::string(histIID->GetName())).c_str()));

        }
    }

    virtual void doLinearityCheck(int StartPEX, int LPEX, int nSteps = 300) {
        TWElectronSignalSampleInfo myESampleInfo;
        double FNegValueSteps[nSteps];
        for (int i = 0; i < nSteps; i++) {
            FNegValueSteps[i] = float(i) / (float) nSteps;
        }
        for (int nPEX = 0; nPEX < 300; nPEX++) {
            cout << "PEX: " << nPEX << endl;
            if (nPEX >= (StartPEX + LPEX)) {
                cout << " ... Skipped" << endl;
                continue;
            }

            if (nPEX < StartPEX) {
                for (unsigned int i = 0; i < myESampleInfo.Xsections.size(); i++)
                    SeedGenerator.Integer(10000);
                cout << " ... Skipped" << endl;
                continue;
            }
            TH1* myBkg = BaseLinearityCheker::GetBkgPartial(nPEX);
            this->SetSigPartialCollection(nPEX);

            stringstream name__;
            for (int i = 0; i < nSteps; i++) {
                if (FNegValueSteps[i] > (1.0 - BaseLinearityCheker::FposFixed))
                    continue;
                double F0Value = 1.0 - BaseLinearityCheker::FposFixed - FNegValueSteps[i];
                name__.str("");
                name__ << "myLL_" << nPEX << "_" << FNegValueSteps[i] << "_" << F0Value;
                TH1* PD = this->GetPsuedoData(nPEX, FNegValueSteps[i], F0Value, myBkg);
                std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray = LikelihoodFunction::getLLFunctionGeneralized(
                        string("F_" + name__.str()), BaseLinearityCheker::bkg, PD, BaseLinearityCheker::signalIID);
                TF3 LLinPEXforFNegValue = LLinPEXforFNegValueArray.first;
                double x[3] = {-1., -1., -1.};
                double xerr[3] = {-1., -1., -1.};
                double correlation12 = -1000;
                GetMinimum(LLinPEXforFNegValue, x, xerr, correlation12, false);
                BaseLinearityCheker::hFinalF0->Fill(F0Value, x[0]);
                BaseLinearityCheker::hFinalFNeg->Fill(FNegValueSteps[i], x[1]);
                BaseLinearityCheker::hFinalFPos->Fill(nPEX, 1.0 - x[0] - x[1]);
                delete PD;
                delete LLinPEXforFNegValueArray.second;
            }
            delete myBkg;
            for (unsigned int iP2D = 0; iP2D < BaseLinearityCheker::signalIIDPartial.size(); iP2D++)
                delete BaseLinearityCheker::signalIIDPartial[iP2D];
            BaseLinearityCheker::signalIIDPartial.clear();
        }
    }

    virtual void doBiasCheck(int StartPEX, int LPEX, int nSteps = 300) {
        TWElectronSignalSampleInfo myESampleInfo;
        double FNegValueSteps[nSteps];
        for (int i = 0; i < nSteps; i++) {
            FNegValueSteps[i] = float(i) / (float) nSteps;
        }
        std::vector<TH2*> tmp2DSignal;
        TH1* newBkg = (TH1*) BaseLinearityCheker::bkg->Clone("newBKG");
        for (unsigned int iTwoDSignal = 0; iTwoDSignal < BaseLinearityCheker::signalIID.size(); iTwoDSignal++) {
            if (!this->isTWXL(string(BaseLinearityCheker::signalIID[iTwoDSignal]->GetName())))
                tmp2DSignal.push_back(new TH2D(*((TH2D*) signalIID.at(iTwoDSignal))));
            else {
                stringstream esm;
                esm << "myNewBkgToAdd_" << iTwoDSignal;
                newBkg->Add((TH1*) (BaseLinearityCheker::signalIID[iTwoDSignal]->ProjectionY(esm.str().c_str())));
            }
        }

        for (int nPEX = 0; nPEX < 300; nPEX++) {
            cout << "PEX: " << nPEX << endl;
            if (nPEX >= (StartPEX + LPEX)) {
                cout << " ... Skipped" << endl;
                continue;
            }

            if (nPEX < StartPEX) {
                for (unsigned int i = 0; i < myESampleInfo.Xsections.size(); i++)
                    SeedGenerator.Integer(10000);
                cout << " ... Skipped" << endl;
                continue;
            }
            TH1* myBkg = BaseLinearityCheker::GetBkgPartial(nPEX);
            this->SetSigPartialCollection(nPEX);

            stringstream name__;
            for (int i = 0; i < nSteps; i++) {
                if (FNegValueSteps[i] > (1.0 - BaseLinearityCheker::FposFixed))
                    continue;
                double F0Value = 1.0 - BaseLinearityCheker::FposFixed - FNegValueSteps[i];
                name__.str("");
                name__ << "myLL_" << nPEX << "_" << FNegValueSteps[i] << "_" << F0Value;
                TH1* PD = this->GetPsuedoData(nPEX, FNegValueSteps[i], F0Value, myBkg);
                std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray = LikelihoodFunction::getLLFunctionGeneralized(
                        string("F_" + name__.str()), newBkg, PD, tmp2DSignal);
                TF3 LLinPEXforFNegValue = LLinPEXforFNegValueArray.first;
                double x[3] = {-1., -1., -1.};
                double xerr[3] = {-1., -1., -1.};
                double correlation12 = -1000;
                GetMinimum(LLinPEXforFNegValue, x, xerr, correlation12, false);
                BaseLinearityCheker::hFinalF0->Fill(F0Value, x[0]);
                BaseLinearityCheker::hFinalFNeg->Fill(FNegValueSteps[i], x[1]);
                BaseLinearityCheker::hFinalFPos->Fill(nPEX, 1.0 - x[0] - x[1]);
                delete PD;
                delete LLinPEXforFNegValueArray.second;
            }
            delete myBkg;
            for (unsigned int iP2D = 0; iP2D < BaseLinearityCheker::signalIIDPartial.size(); iP2D++)
                delete BaseLinearityCheker::signalIIDPartial[iP2D];
            BaseLinearityCheker::signalIIDPartial.clear();
        }
        delete newBkg;
        for (unsigned int iTmp2D = 0; iTmp2D < tmp2DSignal.size(); iTmp2D++)
            delete tmp2DSignal[iTmp2D];
    }

    bool isTWXL(string name) {
        if (name.find("tW") < name.size() && name.find("tW") >= 0)
            if (name != string("tWRest") && name != string("tWbarRest"))
                return true;
        return false;
    }
};
#endif	/* TWBIASCHECKER_H */

