/* 
 * File:   SystematicEstimator.h
 * Author: nadjieh
 *
 * Created on June 12, 2013, 3:46 PM
 */

#ifndef SYSTEMATICESTIMATOR_H
#define	SYSTEMATICESTIMATOR_H
#include "TDirectory.h"
#include "TF1.h"
#include "TH1.h"
#include "TH2.h"
#include "TH3.h"
#include <vector>
#include <iostream>
#include <sstream>
#include <string>
#include "FitValidator.h"
#include "ValidatorExecuter.h"
#include "BaseLinearityCheker.h"
#include "OneDLinearityChecker.h"

class SystematicEstimator {
public:

    SystematicEstimator(string name, string pfix, string sfix, string hist, string dir, string chan, string pfixU, string sfixU, string dirU,
            string pfixD, string sfixD, string dirD, int bins = 10) : Name(name), prefix(pfix), suffix(sfix), histName(hist), dirName(dir),
    channel(chan), prefixUp(pfixU), suffixUp(sfixU), dirNameUp(dirU), prefixDown(pfixD), suffixDown(sfixD), dirNameDown(dirD),
    nBins(bins) {
        hFNegUp = new TH1D("hFNegUp", "hFNegUp", 200, -1., 1.);
        hFNegDown = new TH1D("hFNegDown", "hFNegDown", 200, -1., 1.);
        hFNegNominal = new TH1D("hFNegNominal", "hFNegNominal", 200, -1., 1.);
        hDFNegUp = new TH1D("hDFNegUp", "hDFNegUp", 400, -2., 2.);
        hDFNegDown = new TH1D("hDFNegDown", "hDFNegDown", 400, -2., 2.);
        hDFNegAvg = new TH1D("hDFNegAvg", "hDFNegAvg", 400, -2., 2.);

        hFZeroUp = new TH1D("hFZeroUp", "hFZeroUp", 200, -1., 1.);
        hFZeroDown = new TH1D("hFZeroDown", "hFZeroDown", 200, -1., 1.);
        hFZeroNominal = new TH1D("hFZeroNominal", "hFZeroNominal", 200, -1., 1.);
        hDFZeroUp = new TH1D("hDFZeroUp", "hDFZeroUp", 400, -2., 2.);
        hDFZeroDown = new TH1D("hDFZeroDown", "hDFZeroDown", 400, -2., 2.);
        hDFZeroAvg = new TH1D("hDFZeroAvg", "hDFZeroAvg", 400, -2., 2.);

        hFPosUp = new TH1D("hFPosUp", "hFPosUp", 200, -1., 1.);
        hFPosDown = new TH1D("hFPosDown", "hFPosDown", 200, -1., 1.);
        hFPosNominal = new TH1D("hFPosNominal", "hFPosNominal", 200, -1., 1.);
        hDFPosUp = new TH1D("hDFPosUp", "hDFPosUp", 400, -2., 2.);
        hDFPosDown = new TH1D("hDFPosDown", "hDFPosDown", 400, -2., 2.);
        hDFPosAvg = new TH1D("hDFPosAvg", "hDFPosAvg", 400, -2., 2.);


        hDStatFPosUp = new TH1D("hDStatFPosUp", "hDStatFPosUp", 400, -2., 2.);
        hDStatFPosDown = new TH1D("hDStatFPosDown", "hDStatFPosDown", 400, -2., 2.);
        hDStatFPosNominal = new TH1D("hDStatFPosNominal", "hDStatFPosNominal", 400, -2., 2.);

        hDStatFZeroUp = new TH1D("hDStatFZeroUp", "hDStatFZeroUp", 400, -2., 2.);
        hDStatFZeroDown = new TH1D("hDStatFZeroDown", "hDStatFZeroDown", 400, -2., 2.);
        hDStatFZeroNominal = new TH1D("hDStatFZeroNominal", "hDStatFZeroNominal", 400, -2., 2.);

        hDStatFNegUp = new TH1D("hDStatFNegUp", "hDStatFNegUp", 400, -2., 2.);
        hDStatFNegDown = new TH1D("hDStatFNegDown", "hDStatFNegDown", 400, -2., 2.);
        hDStatFNegNominal = new TH1D("hDStatFNegNominal", "hDStatFNegNominal", 400, -2., 2.);

        NominalScenario = new OneDLinearityChecker(string(Name + "_Nominal"), pfix, sfix, hist, dir, chan, bins);
        UpScenario = new OneDLinearityChecker(string(Name + "_Up"), pfixU, sfixU, hist, dirU, chan, bins);
        DownScenario = new OneDLinearityChecker(string(Name + "_Down"), pfixD, sfixD, hist, dirD, chan, bins);

        WtbWeightor = WeightFunctionCreator::getWeightFunction(string(Name + "Syst_WtbWeightor").c_str());
    }

    virtual ~SystematicEstimator() {
    }

    virtual void addFlatBkgs(double Lumi = 1) {
        NominalScenario->addFlatBkgs(Lumi);
        UpScenario->addFlatBkgs(Lumi);
        DownScenario->addFlatBkgs(Lumi);
    }

    virtual void addSamples(double Lumi = 1) {
        NominalScenario->addSamples(Lumi);
        UpScenario->addSamples(Lumi);
        DownScenario->addSamples(Lumi);
    }

    virtual void doSMSystPE(int StartPEXPull, int LPEXPull) {
        ElectronSignalSampleInfo mySampleInfo;
        for (int nPEXPull = 0; nPEXPull < 1000; nPEXPull++) {
            if (nPEXPull >= (StartPEXPull + LPEXPull)) {
                cout << " ... Skipped pull" << endl;
                continue;
            }

            if (nPEXPull < StartPEXPull) {
                for (unsigned int i = 0; i < mySampleInfo.Xsections.size(); i++)
                    SeedGeneratorLumiEQ.Integer(10000);
                cout << " ... Skipped pull" << endl;
                continue;
            }

            cout << "PEXPull:" << nPEXPull << endl;

            stringstream name__;
            name__ << Name << "_CosTheta_Pull_" << nPEXPull;
            stringstream title__;
            title__ << "cos(#theta) : PEXPull=" << nPEXPull;
            TH1* hData = NominalScenario->GetBkgPartial(nPEXPull);
            hData->Add(NominalScenario->GetPullSignalPartial(nPEXPull));

            std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray_Nominal = LikelihoodFunction::getLLFunction(
                    string("F_Nominal_" + name__.str()), NominalScenario->GetBkgMC(), hData, NominalScenario->GetSignalMC());
            TF3 LLinPEXforFNegValue_Nominal = LLinPEXforFNegValueArray_Nominal.first;

            std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray_Up = LikelihoodFunction::getLLFunction(
                    string("F_Up_" + name__.str()), UpScenario->GetBkgMC(), hData, UpScenario->GetSignalMC());
            TF3 LLinPEXforFNegValue_Up = LLinPEXforFNegValueArray_Up.first;

            std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray_Down = LikelihoodFunction::getLLFunction(
                    string("F_Down_" + name__.str()), DownScenario->GetBkgMC(), hData, DownScenario->GetSignalMC());
            TF3 LLinPEXforFNegValue_Down = LLinPEXforFNegValueArray_Down.first;


            double xN[3] = {-1., -1., -1.};
            double xerrN[3] = {-1., -1., -1.};
            double correlation12N = -1000;
            GetMinimum(LLinPEXforFNegValue_Nominal, xN, xerrN, correlation12N, false);

            double xU[3] = {-1., -1., -1.};
            double xerrU[3] = {-1., -1., -1.};
            double correlation12U = -1000;
            GetMinimum(LLinPEXforFNegValue_Up, xU, xerrU, correlation12U, false);

            double xD[3] = {-1., -1., -1.};
            double xerrD[3] = {-1., -1., -1.};
            double correlation12D = -1000;
            GetMinimum(LLinPEXforFNegValue_Down, xD, xerrD, correlation12D, false);

            hFNegUp->Fill(xU[1]);
            hFNegDown->Fill(xD[1]);
            hFNegNominal->Fill(xN[1]);
            hDFNegUp->Fill(xU[1] - xN[1]);
            hDFNegDown->Fill(xD[1] - xN[1]);
            hDFNegAvg->Fill((fabs(xD[1] - xN[1]) + fabs(xU[1] - xN[1])) / 2.);

            hFZeroUp->Fill(xU[0]);
            hFZeroDown->Fill(xD[0]);
            hFZeroNominal->Fill(xN[0]);
            hDFZeroUp->Fill(xU[0] - xN[0]);
            hDFZeroDown->Fill(xD[0] - xN[0]);
            hDFZeroAvg->Fill((fabs(xD[0] - xN[0]) + fabs(xU[0] - xN[0])) / 2.);

            hFPosUp->Fill(1 - xU[0] - xU[1]);
            hFPosDown->Fill(1 - xD[0] - xD[1]);
            hFPosNominal->Fill(1 - xN[0] - xN[1]);
            hDFPosUp->Fill(xN[0] + xN[1] - xU[0] - xU[1]);
            hDFPosDown->Fill(xN[0] + xN[1] - xD[0] - xD[1]);
            hDFPosAvg->Fill((fabs(xN[0] + xN[1] - xU[0] - xU[1]) + fabs(xN[0] + xN[1] - xD[0] - xD[1])) / 2.);

            hDStatFNegUp->Fill(xerrU[1]);
            hDStatFNegDown->Fill(xerrD[1]);
            hDStatFNegNominal->Fill(xerrN[1]);

            hDStatFZeroUp->Fill(xerrU[0]);
            hDStatFZeroDown->Fill(xerrD[0]);
            hDStatFZeroNominal->Fill(xerrN[0]);

            hDStatFPosUp->Fill(sqrt(pow(xerrU[0], 2) + pow(xerrU[1], 2)+(2 * correlation12U / (xerrU[0] * xerrU[1]))));
            hDStatFPosDown->Fill(sqrt(pow(xerrD[0], 2) + pow(xerrD[1], 2)+(2 * correlation12D / (xerrD[0] * xerrD[1]))));
            hDStatFPosNominal->Fill(sqrt(pow(xerrN[0], 2) + pow(xerrN[1], 2)+(2 * correlation12N / (xerrN[0] * xerrN[1]))));

            delete hData;
            delete LLinPEXforFNegValueArray_Down.second;
            delete LLinPEXforFNegValueArray_Nominal.second;
            delete LLinPEXforFNegValueArray_Up.second;
        }
    }

    virtual void doBSMSystPE(int StartPEXPull, int LPEXPull, double myF0, double myFL) {
        ElectronSignalSampleInfo mySampleInfo;
        for (int nPEXPull = 0; nPEXPull < 1000; nPEXPull++) {
            if (nPEXPull >= (StartPEXPull + LPEXPull)) {
                cout << " ... Skipped pull" << endl;
                continue;
            }

            if (nPEXPull < StartPEXPull) {
                for (unsigned int i = 0; i < mySampleInfo.Xsections.size(); i++)
                    SeedGeneratorLumiEQ.Integer(10000);
                cout << " ... Skipped pull" << endl;
                continue;
            }

            cout << "BSM PEXPull:" << nPEXPull << endl;
            WtbWeightor.first.SetParameters(myF0, myFL);
            stringstream name__;
            name__ << Name << "_CosTheta_Pull_" << nPEXPull;
            stringstream title__;
            title__ << "cos(#theta) : PEXPull=" << nPEXPull;
            TH1* hData = NominalScenario->GetPullSignalPartial(nPEXPull);
            hData->Multiply(&WtbWeightor.first, 1);
            hData->Add(NominalScenario->GetBkgPartial(nPEXPull));

            std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray_Nominal = LikelihoodFunction::getLLFunction(
                    string("F_Nominal_" + name__.str()), NominalScenario->GetBkgMC(), hData, NominalScenario->GetSignalMC());
            TF3 LLinPEXforFNegValue_Nominal = LLinPEXforFNegValueArray_Nominal.first;

            std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray_Up = LikelihoodFunction::getLLFunction(
                    string("F_Up_" + name__.str()), UpScenario->GetBkgMC(), hData, UpScenario->GetSignalMC());
            TF3 LLinPEXforFNegValue_Up = LLinPEXforFNegValueArray_Up.first;

            std::pair<TF3, LikelihoodFunction*> LLinPEXforFNegValueArray_Down = LikelihoodFunction::getLLFunction(
                    string("F_Down_" + name__.str()), DownScenario->GetBkgMC(), hData, DownScenario->GetSignalMC());
            TF3 LLinPEXforFNegValue_Down = LLinPEXforFNegValueArray_Down.first;


            double xN[3] = {-1., -1., -1.};
            double xerrN[3] = {-1., -1., -1.};
            double correlation12N = -1000;
            GetMinimum(LLinPEXforFNegValue_Nominal, xN, xerrN, correlation12N, false);

            double xU[3] = {-1., -1., -1.};
            double xerrU[3] = {-1., -1., -1.};
            double correlation12U = -1000;
            GetMinimum(LLinPEXforFNegValue_Up, xU, xerrU, correlation12U, false);

            double xD[3] = {-1., -1., -1.};
            double xerrD[3] = {-1., -1., -1.};
            double correlation12D = -1000;
            GetMinimum(LLinPEXforFNegValue_Down, xD, xerrD, correlation12D, false);

            hFNegUp->Fill(xU[1]);
            hFNegDown->Fill(xD[1]);
            hFNegNominal->Fill(xN[1]);
            hDFNegUp->Fill(xU[1] - xN[1]);
            hDFNegDown->Fill(xD[1] - xN[1]);
            hDFNegAvg->Fill((fabs(xD[1] - xN[1]) + fabs(xU[1] - xN[1])) / 2.);

            hFZeroUp->Fill(xU[0]);
            hFZeroDown->Fill(xD[0]);
            hFZeroNominal->Fill(xN[0]);
            hDFZeroUp->Fill(xU[0] - xN[0]);
            hDFZeroDown->Fill(xD[0] - xN[0]);
            hDFZeroAvg->Fill((fabs(xD[0] - xN[0]) + fabs(xU[0] - xN[0])) / 2.);

            hFPosUp->Fill(1 - xU[0] - xU[1]);
            hFPosDown->Fill(1 - xD[0] - xD[1]);
            hFPosNominal->Fill(1 - xN[0] - xN[1]);
            hDFPosUp->Fill(xN[0] + xN[1] - xU[0] - xU[1]);
            hDFPosDown->Fill(xN[0] + xN[1] - xD[0] - xD[1]);
            hDFPosAvg->Fill((fabs(xN[0] + xN[1] - xU[0] - xU[1]) + fabs(xN[0] + xN[1] - xD[0] - xD[1])) / 2.);

            hDStatFNegUp->Fill(xerrU[1]);
            hDStatFNegDown->Fill(xerrD[1]);
            hDStatFNegNominal->Fill(xerrN[1]);

            hDStatFZeroUp->Fill(xerrU[0]);
            hDStatFZeroDown->Fill(xerrD[0]);
            hDStatFZeroNominal->Fill(xerrN[0]);

            hDStatFPosUp->Fill(sqrt(pow(xerrU[0], 2) + pow(xerrU[1], 2)+(2 * correlation12U / (xerrU[0] * xerrU[1]))));
            hDStatFPosDown->Fill(sqrt(pow(xerrD[0], 2) + pow(xerrD[1], 2)+(2 * correlation12D / (xerrD[0] * xerrD[1]))));
            hDStatFPosNominal->Fill(sqrt(pow(xerrN[0], 2) + pow(xerrN[1], 2)+(2 * correlation12N / (xerrN[0] * xerrN[1]))));

            delete hData;
            delete LLinPEXforFNegValueArray_Down.second;
            delete LLinPEXforFNegValueArray_Nominal.second;
            delete LLinPEXforFNegValueArray_Up.second;
        }
    }

    virtual void WriteAll(string outDir, int StartPEX, int LPEX, int StartPEXPull, int LPEXPull) {
        stringstream outName;
        outName << outDir << Name << "_" << channel << "_Linearity_start-" << StartPEX << "-length-"
                << LPEX << "_Pull_start-" << StartPEXPull << "-length-" << LPEXPull << ".root";
        TFile * d = new TFile(outName.str().c_str(), "recreate");
        d->cd();
        d->mkdir("FNeg")->cd();
        hFNegUp->Write();
        hFNegDown->Write();
        hFNegNominal->Write();
        hDFNegUp->Write();
        hDFNegDown->Write();
        hDFNegAvg->Write();

        d->cd();
        d->mkdir("F0")->cd();
        hFZeroUp->Write();
        hFZeroDown->Write();
        hFZeroNominal->Write();
        hDFZeroUp->Write();
        hDFZeroDown->Write();
        hDFZeroAvg->Write();

        d->cd();
        d->mkdir("FPos")->cd();
        hFPosUp->Write();
        hFPosDown->Write();
        hFPosNominal->Write();
        hDFPosUp->Write();
        hDFPosDown->Write();
        hDFPosAvg->Write();


        d->cd();
        d->mkdir("StatFNeg")->cd();
        hDStatFNegUp->Write();
        hDStatFNegDown->Write();
        hDStatFNegNominal->Write();

        d->cd();
        d->mkdir("StatFZero")->cd();
        hDStatFZeroUp->Write();
        hDStatFZeroDown->Write();
        hDStatFZeroNominal->Write();

        d->cd();
        d->mkdir("StatFPos")->cd();
        hDStatFPosUp->Write();
        hDStatFPosDown->Write();
        hDStatFPosNominal->Write();

        d->cd();
        d->Write();
        d->Close();
    }

private:
    string Name, prefix, suffix, histName, dirName, channel;
    string prefixUp, suffixUp, dirNameUp;
    string prefixDown, suffixDown, dirNameDown;

    int nBins;

    TH1D* hFNegUp;
    TH1D* hFNegDown;
    TH1D* hFNegNominal;
    TH1D* hDFNegUp;
    TH1D* hDFNegDown;
    TH1D* hDFNegAvg;

    TH1D* hFZeroUp;
    TH1D* hFZeroDown;
    TH1D* hFZeroNominal;
    TH1D* hDFZeroUp;
    TH1D* hDFZeroDown;
    TH1D* hDFZeroAvg;

    TH1D* hFPosUp;
    TH1D* hFPosDown;
    TH1D* hFPosNominal;
    TH1D* hDFPosUp;
    TH1D* hDFPosDown;
    TH1D* hDFPosAvg;

    TH1D* hDStatFNegUp;
    TH1D* hDStatFNegDown;
    TH1D* hDStatFNegNominal;

    TH1D* hDStatFZeroUp;
    TH1D* hDStatFZeroDown;
    TH1D* hDStatFZeroNominal;

    TH1D* hDStatFPosUp;
    TH1D* hDStatFPosDown;
    TH1D* hDStatFPosNominal;

    std::pair<TF1, WeightFunctionCreator*> WtbWeightor;

    OneDLinearityChecker* NominalScenario;
    OneDLinearityChecker* UpScenario;
    OneDLinearityChecker* DownScenario;
};

#endif	/* SYSTEMATICESTIMATOR_H */

