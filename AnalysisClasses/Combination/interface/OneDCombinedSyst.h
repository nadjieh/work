/* 
 * File:   OneDCombinedSyst.h
 * Author: nadjieh
 *
 * Created on June 26, 2013, 9:37 AM
 */

#ifndef ONEDCOMBINEDSYST_H
#define	ONEDCOMBINEDSYST_H
#include "UsefullStructsForCombination.h" 
#include "../../BackgroundStudies/interface/MultiDimensionalFit.h" 
#include "/opt/root/math/mathmore/inc/Math/GSLMinimizer.h"
#include "/opt/root/math/mathmore/inc/Math/GSLSimAnMinimizer.h"
#include "/opt/root/math/minuit2/inc/Minuit2/Minuit2Minimizer.h"
#include "/opt/root/math/mathcore/inc/Math/Functor.h"
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class OneDCombinedSyst : public LikelihoodFunction {
public:

    /*
     * For systematic calculation, E and Mu are based on OneDim
     */
    OneDCombinedSyst(string name, InputForCombination1D input7, InputForCombination1D input8, bool syst = true) :
    LikelihoodFunction(input7.name, input7.nonRWs, input7.data, input7.signalID),
    LLE(input8.name, input8.nonRWs, input8.data, input8.signalID) {
    };

    virtual ~OneDCombinedSyst() {
    };

    double operator()(const double * x) {
        //        x[0] = f_0
        //        x[1] = f_Neg
        //        x[2] = rec_gen factor e
        //        x[3] = rec_gen factor mu


        double LL = 0.0;

        int nbins7 = this->data->GetXaxis()->GetNbins();
        int nbins8 = this->LLE.getNbinData();
        for (int i = 0; i < nbins7; i++) {
            std::pair<double, double> numbers7 = this->getNdataNmc(i + 1, x[0], x[1], x[2]);
            LL += this->logLikelihood(numbers7.first, numbers7.second);
        }
        for (int i = 0; i < nbins8; i++) {
            std::pair<double, double> numbers8 = this->LLE.getNdataNmc(i + 1, x[0], x[1], x[3]);
            LL += this->logLikelihood(numbers8.first, numbers8.second);
        }

        return LL;
    }

    static std::pair<ROOT::Math::Functor, OneDCombinedSyst*> getOneDCombinedSystForSyst(
            string name, InputForCombination1D input7, InputForCombination1D input8) {
        OneDCombinedSyst * functor = new OneDCombinedSyst(name, input7, input8);
        //        cout << "I am in systematic OneDCombinedSyst" << endl;
        ROOT::Math::Functor ret(*functor, 4);
        return make_pair(ret, functor);
    }

private:
    LikelihoodFunction LLE;
};

void GetMinimumOneDSystCombined(ROOT::Math::Functor f, double * x, double * xerr, double & corr12, string forHist = "",
        bool CalcError = true, double f0NominalOneD = 0.7,  double flNominalOneD = 0.3) {
    ROOT::Minuit2::Minuit2Minimizer * min = new ROOT::Minuit2::Minuit2Minimizer(ROOT::Minuit2::kMigrad);
    min->SetMaxFunctionCalls(1000000);
    min->SetMaxIterations(100000);
    min->SetTolerance(0.0001);
    if (CalcError)
        min->ProvidesError();
    //        x[0] = f_0
    //        x[1] = f_Neg
    //        x[2] = rec_gen e
    //        x[3] = rec_gen mu

    double step[4] = {0.001, 0.001, 0.001, 0.001};
    double A[4] = {x[0], x[1], x[2], x[3]};

    min->SetFunction(f);

    // Set the free variables to be minimized!
    min->SetVariable(0, "f0", A[0], step[0]);
    min->SetVariable(1, "f_", A[1], step[1]);
    min->SetVariable(2, "recgenS", A[2], step[2]);
    min->SetVariable(3, "recgenE", A[3], step[3]);


    min->Minimize();
    x[0] = min->X()[0];
    x[1] = min->X()[1];
    x[2] = min->X()[2];
    x[3] = min->X()[3];


    if (forHist == "") {
        if (!CalcError)
            return;
        corr12 = min->Correlation(0, 1);
        xerr[0] = min->Errors()[0];
        xerr[1] = min->Errors()[1];
        xerr[2] = min->Errors()[2];
        xerr[3] = min->Errors()[3];
        cout << "f0               : " << x[0] << "\t+/-\t" << xerr[0] << endl;
        cout << "f_               : " << x[1] << "\t+/-\t" << xerr[1] << endl;
        cout << "reg_gen factor  e: " << x[2] << "\t+/-\t" << xerr[2] << endl;
        cout << "reg_gen factor mu: " << x[3] << "\t+/-\t" << xerr[3] << endl;
        cout << "f0-f_ correlation: " << corr12 << endl;
        cout << "fr               : " << 1 - x[0] - x[1] << "\t+/-\t" <<
                sqrt(pow(xerr[0], 2) + pow(xerr[1], 2)+(2 * corr12 * xerr[0] * xerr[1])) << endl;
    } else {
        //combination
        //        double f0NominalOneD = 0.704624;
        //        double flNominalOneD = 0.299898;
        //combination MG
        //        double f0NominalOneD = 0.685037;
        //        double flNominalOneD = 0.322524;
        //combinationJES MG
        //        double f0NominalOneD = 0.68588;
        //        double flNominalOneD = 0.321606;
        //combination with emtw
        //        double f0NominalOneD = 0.701567;
        //        double flNominalOneD = 0.3092;
        //combination with emtw QCD Free
        //goodTT
        //        double f0NominalOneD = 0.7;
        //        double flNominalOneD = 0.309119;
        //buggyTT
        //        double f0NominalOneD = 0.698989;
        //        double flNominalOneD = 0.307477;
        //combination MG buggyTT
        //        double f0NominalOneD = 0.664643;
        //        double flNominalOneD = 0.338807;
        //combinationJES MG buggyTT
        //        double f0NominalOneD = 0.668389;
        //        double flNominalOneD = 0.334906;
        //        Muon
        //        double f0NominalOneD = 0.700701;
        //        double flNominalOneD = 0.306839;
        //        Muon MG
        //        double f0NominalOneD = 0.677213;
        //        double flNominalOneD = 0.332312;
        //        MuonJES MG
        //        double f0NominalOneD = 0.677977;
        //        double flNominalOneD = 0.331478;
        //        Electron
        //        double f0NominalOneD = 0.699408;
        //        double flNominalOneD = 0.290364;
        //        ElectronMG
        //        double f0NominalOneD = 0.687148;
        //        double flNominalOneD = 0.308463;
        //        ElectronJESMG
        //        double f0NominalOneD = 0.687918;
        //        double flNominalOneD = 0.307888;
        //        Electron emtw
        //        double f0NominalOneD = 0.700762;
        //        double flNominalOneD = 0.318202;
        //        Electron emtw QCD free
        //        goodTT
        //        double f0NominalOneD = 0.699875;
        //        double flNominalOneD = 0.312362;
        //        buggyTT
        //        double f0NominalOneD = 0.694367;
        //        double flNominalOneD = 0.309328;

        //        ElectronMG mtw
        //        double f0NominalOneD = 0.6591;
        //        double flNominalOneD = 0.341417;
        //        ElectronJESMG mtw
        //        double f0NominalOneD = 0.660347;
        //        double flNominalOneD = 0.340269;

        //----------------- real solutions
        //        combination
        //        double f0NominalOneD = 0.721404;
        //        double flNominalOneD = 0.295694;
        //        combinationJES
        //        double f0NominalOneD = 0.72138;
        //        double flNominalOneD = 0.295467;
        //        combination emtw
        //        double f0NominalOneD = 0.70281;
        //        double flNominalOneD = 0.306565;
        //        combinationJES emtw
        //        double f0NominalOneD = 0.703032;
        //        double flNominalOneD = 0.306183;
        //        Muon
        //        double f0NominalOneD = 0.71098;
        //        double flNominalOneD = 0.303337;
        //        MuonJES
        //        double f0NominalOneD = 0.71089;
        //        double flNominalOneD = 0.303165;
        //        Electron
        //        double f0NominalOneD = 0.760147;
        //        double flNominalOneD = 0.277989;
        //        ElectronJES
        //        double f0NominalOneD = 0.756342;
        //        double flNominalOneD = 0.279736;
        //        Electron emtw
        //        double f0NominalOneD = 0.689322;
        //        double flNominalOneD = 0.310954;
        //        ElectronJES emtw
        //        double f0NominalOneD = 0.690376;
        //        double flNominalOneD = 0.309975;

        double frNominalOneD = 1 - flNominalOneD - f0NominalOneD;

        //        double f0NominalThreeD = 0.7;
        //        double flNominalThreeD = 0.3;
        //        double frNominalThreeD = 1 - flNominalThreeD - f0NominalThreeD;

        double Dfl = x[1] - flNominalOneD;
        double Df0 = x[0] - f0NominalOneD;
        double Dfr = (1 - x[0] - x[1]) - frNominalOneD;

        cout << "//// " << forHist << endl;

        if (forHist.find("Up") != 0 && forHist.find("Up") < forHist.size()) {
            cout << "F0Up.push_back(" << Df0 << ");\tFlUp.push_back(" << Dfl << ");\tFrUp.push_back(" << Dfr << ");"
                    << endl;
        } else if (forHist.find("Down") != 0 && forHist.find("Down") < forHist.size()) {
            cout << "F0Down.push_back(" << Df0 << ");\tFlDown.push_back(" << Dfl << ");\tFrDown.push_back(" << Dfr << ");"
                    << endl;
        }
    }
}




#endif	/* ONEDCOMBINEDSYST_H */

