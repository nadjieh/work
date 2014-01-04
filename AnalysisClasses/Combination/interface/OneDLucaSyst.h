/* 
 * File:   OneDLucaSyst.h
 * Author: nadjieh
 *
 * Created on June 26, 2013, 9:37 AM
 */

#ifndef ONEDLUCASYST_H
#define	ONEDLUCASYST_H
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

class OneDLucaSyst : public LikelihoodFunction {
public:

    /*
     * For systematic calculation, E and Mu are based on OneDim
     */
    OneDLucaSyst(string name, InputForCombination1D input7, InputForCombination1D input8, bool syst = true) :
    LikelihoodFunction(input7.name, input7.nonRWs, input7.data, input7.signalID),
    LLE(input8.name, input8.nonRWs, input8.data, input8.signalID) {
    };

    virtual ~OneDLucaSyst() {
    };

    double operator()(const double * x) {
        //        x[0] = f_0 mu
        //        x[1] = f_Neg mu
        //        x[2] = df_0 e
        //        x[3] = df_Neg e
        //        x[4] = rec_gen factor e
        //        x[5] = rec_gen factor mu


        double LL = 0.0;

        int nbins7 = this->data->GetXaxis()->GetNbins();
        int nbins8 = this->LLE.getNbinData();
        for (int i = 0; i < nbins7; i++) {
            std::pair<double, double> numbers7 = this->getNdataNmc(i + 1, x[0] + x[2], x[1] + x[3], x[4]);
            LL += this->logLikelihood(numbers7.first, numbers7.second);
        }
        for (int i = 0; i < nbins8; i++) {
            std::pair<double, double> numbers8 = this->LLE.getNdataNmc(i + 1, x[0], x[1], x[5]);
            LL += this->logLikelihood(numbers8.first, numbers8.second);
        }

        return LL;
    }

    static std::pair<ROOT::Math::Functor, OneDLucaSyst*> getOneDLucaSystForSyst(
            string name, InputForCombination1D input7, InputForCombination1D input8) {
        OneDLucaSyst * functor = new OneDLucaSyst(name, input7, input8);
        //        cout << "I am in systematic OneDLucaSyst" << endl;
        ROOT::Math::Functor ret(*functor, 6);
        return make_pair(ret, functor);
    }

private:
    LikelihoodFunction LLE;
};

void GetMinimumOneDLucaCombined(ROOT::Math::Functor f, double * x, double * xerr, double & corr12, string forHist = "", bool CalcError = true) {
    ROOT::Minuit2::Minuit2Minimizer * min = new ROOT::Minuit2::Minuit2Minimizer(ROOT::Minuit2::kMigrad);
    min->SetMaxFunctionCalls(1000000);
    min->SetMaxIterations(100000);
    min->SetTolerance(0.0001);
    if (CalcError)
        min->ProvidesError();
    //        x[0] = f_0 mu
    //        x[1] = f_Neg mu
    //        x[2] = df_0 e
    //        x[3] = df_Neg e
    //        x[4] = rec_gen factor e
    //        x[5] = rec_gen factor mu

    double step[6] = {0.001, 0.001, 0.001, 0.001, 0.001, 0.001};
    double A[6] = {x[0], x[1], x[2], x[3], x[4], x[5]};

    min->SetFunction(f);

    // Set the free variables to be minimized!
    min->SetVariable(0, "f0mu", A[0], step[0]);
    min->SetFixedVariable(0, "f0mu", 0.700701);
    min->SetVariable(1, "f_mu", A[1], step[1]);
    min->SetFixedVariable(1, "f_mu", 0.306839);
    min->SetVariable(2, "dfe0", A[2], step[2]);
    min->SetVariable(3, "dfe_", A[3], step[3]);
    min->SetVariable(4, "recgen e", A[4], step[4]);
    min->SetVariable(5, "recgen mu", A[5], step[5]);
    min->SetFixedVariable(5, "recgen mu",1.00177);

    min->Minimize();
    x[0] = min->X()[0];
    x[1] = min->X()[1];
    x[2] = min->X()[2];
    x[3] = min->X()[3];
    x[4] = min->X()[4];
    x[5] = min->X()[5];

    if (!CalcError)
        return;
    corr12 = min->Correlation(2, 3);
    xerr[0] = min->Errors()[0];
    xerr[1] = min->Errors()[1];
    xerr[2] = min->Errors()[2];
    xerr[3] = min->Errors()[3];
    xerr[4] = min->Errors()[4];
    xerr[5] = min->Errors()[5];

    if (forHist == "") {
        cout << "f0 mu              : " << x[0] << "\t+/-\t" << xerr[0] << endl;
        cout << "f_ mu              : " << x[1] << "\t+/-\t" << xerr[1] << endl;
        cout << "df0 e              : " << x[2] << "\t+/-\t" << xerr[2] << endl;
        cout << "df_ e              : " << x[3] << "\t+/-\t" << xerr[3] << endl;
        cout << "reg_gen factor  e: " << x[4] << "\t+/-\t" << xerr[4] << endl;
        cout << "reg_gen factor mu: " << x[5] << "\t+/-\t" << xerr[5] << endl;
        cout << "df0-df_ correlation: " << corr12 << endl;
        cout << "dfr               : " << -x[2] - x[3] << "\t+/-\t" <<
                sqrt(pow(xerr[2], 2) + pow(xerr[3], 2)+(2 * corr12 * xerr[2] * xerr[3])) << endl;
    } else {
        //combination
        //        double f0NominalOneD = 0.704624;
        //        double flNominalOneD = 0.299898;
        //combination with emtw
        double f0NominalOneD = -0.00129257;
        double flNominalOneD = -0.0164748;
        // Muon
        //        double f0NominalOneD = 0.700701;
        //        double flNominalOneD = 0.306839;
        //        Electron
        //        double f0NominalOneD = 0.699408;
        //        double flNominalOneD = 0.290364;
        //        Electron emtw
        //        double f0NominalOneD = 0.700762;
        //        double flNominalOneD = 0.318202;

        double frNominalOneD =  - flNominalOneD - f0NominalOneD;

        //        double f0NominalThreeD = 0.7;
        //        double flNominalThreeD = 0.3;
        //        double frNominalThreeD = 1 - flNominalThreeD - f0NominalThreeD;

        double Dfl = x[3] - flNominalOneD;
        double Df0 = x[2] - f0NominalOneD;
        double Dfr = ( - x[2] - x[3]) - frNominalOneD;

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




#endif	/* ONEDLUCASYST_H */

