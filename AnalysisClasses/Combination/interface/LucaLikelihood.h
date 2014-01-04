/* 
 * File:   LucaLikelihood.h
 * Author: nadjieh
 *
 * Created on January 9, 2013, 11:12 AM
 */

#ifndef LucaLikelihood_H
#define	LucaLikelihood_H
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

class LucaLikelihood : public MultiDimensionalFitLiklihood {
public:

    LucaLikelihood(string name, WTempForCombination3D input7, WTempForCombination3D input8,
            bool syst = false) : MultiDimensionalFitLiklihood(input7.rest.name, input7.rest.nonRWs,
    input7.rest.data, input7.rest.signalIID, input7.rest.signalIIID, input7.Wtemplate),
    isSys(syst), MDFLL8(input8.rest.name, input8.rest.nonRWs, input8.rest.data,
    input8.rest.signalIID, input8.rest.signalIIID, input8.Wtemplate), LL8(string("tmp"),
    input7.rest.nonRWs, input7.rest.data, input7.Wtemplate, 1., 1.) {
        //                cout<<"-----"<<endl;
    };

    /*
     * For systematic calculation, 7TeV is based on multiDim
     * 8TeV is 1D ....
     */
    LucaLikelihood(string name, WTempForCombination1D input7, InputForCombination1D input8, bool syst = true) :
    MultiDimensionalFitLiklihood(input7.rest.name, input7.rest.nonRWs, input7.rest.data, input7.rest.signalID,
    input7.Wtemplate), isSys(syst), MDFLL8(string("tmp"), input7.rest.nonRWs, input7.rest.data, input7.rest.signalID,
    input7.Wtemplate), LL8(input8.name, input8.nonRWs, input8.data, input8.signalID) {
        //                cout<<"-----"<<endl;
    };

    virtual ~LucaLikelihood() {
    };

    double operator()(const double * x) {
        //        x[0] = f_0 for muon
        //        x[1] = f_Neg for muon
        //        x[2] = df_0 for electron
        //        x[3] = df_Neg for electron
        //        x[4] = rec_gen factor electron
        //        x[5] = nWjets7
        //        x[6] = rec_gen factor muon
        //        x[7] = nWjets8


        double LL = 0.0;
        if (!isSys) {
            int nbins7 = this->data->GetXaxis()->GetNbins();
            int nbins8 = this->MDFLL8.getNbinData();
            for (int i = 0; i < nbins7; i++) {
                std::pair<double, double> numbers7 = this->getNdataNmcMD(i + 1, x[0] + x[2], x[1] + x[3], x[6], x[7]);
                LL += this->logLikelihood(numbers7.first, numbers7.second);
            }
            for (int i = 0; i < nbins8; i++) {
                std::pair<double, double> numbers8 = this->MDFLL8.getNdataNmcMD(i + 1, x[0], x[1], x[4], x[5]);
                LL += this->logLikelihood(numbers8.first, numbers8.second);
            }
        }
        return LL;
    }

    static std::pair<ROOT::Math::Functor, LucaLikelihood*> getLucaLikelihoodForBias(
            string name, WTempForCombination3D input7, WTempForCombination3D input8, bool syst = false) {
        LucaLikelihood * functor = new LucaLikelihood(name, input7, input8, syst);
        //        cout << "I am in bias LucaLikelihood" << endl;
        ROOT::Math::Functor ret(*functor, 8);
        return make_pair(ret, functor);
    }


private:
    bool isSys;
    MultiDimensionalFitLiklihood MDFLL8;
    LikelihoodFunction LL8;
};

void GetMinimumLuca(ROOT::Math::Functor f, double * x, double * xerr, double & corr12,
        bool CalcError = true, double f0Ref = 0.7, double flRef = 0.3, double fRef = 1., double nwRef = -1.) {
    ROOT::Minuit2::Minuit2Minimizer * min = new ROOT::Minuit2::Minuit2Minimizer(ROOT::Minuit2::kMigrad);
    min->SetMaxFunctionCalls(1000000);
    min->SetMaxIterations(100000);
    min->SetTolerance(0.0001);
    if (CalcError)
        min->ProvidesError();
    //        x[0] = f_0 for muon
    //        x[1] = f_Neg for muon
    //        x[2] = f_0 for electron
    //        x[3] = f_Neg for electron
    //        x[4] = rec_gen factor electron
    //        x[5] = nWjets7
    //        x[6] = rec_gen factor muon
    //        x[7] = nWjets8

    double step[8] = {0.001, 0.001, 0.001, 0.001, 0.001, 0.01, 0.001, 0.01};
    double A[8] = {x[0], x[1], x[2], x[3], x[4], x[5], x[6], x[7]};

    min->SetFunction(f);

    // Set the free variables to be minimized!
    min->SetVariable(0, "f0_mu", A[0], step[0]);
    min->SetFixedVariable(0, "f0_mu", f0Ref);
    //    min->SetFixedVariable(0, "f0_mu", 0.722384);
    //    min->SetFixedVariable(0, "f0_mu", 0.653687);
    //100 DD
    //    min->SetFixedVariable(0, "f0_mu", 0.68911);
    //100 MG

    min->SetVariable(1, "fl_mu", A[1], step[1]);
    min->SetFixedVariable(1, "fl_mu", flRef);
    //    min->SetFixedVariable(1, "fl_mu", 0.308293);
    //    min->SetFixedVariable(1, "fl_mu", 0.378817);
    //100  DD
    //    min->SetFixedVariable(1, "fl_mu", 0.321879);
    //100  MG

    min->SetVariable(2, "df0_e", A[2], step[2]);
    min->SetVariable(3, "dfl_e", A[3], step[3]);

    min->SetVariable(4, "recgenMuon", A[4], step[4]);
    min->SetFixedVariable(4, "recgenMuon", fRef);
    //    min->SetFixedVariable(4, "recgenMuon", 1.02517);

    min->SetVariable(5, "WJetMuon", A[5], step[5]);
    min->SetFixedVariable(5, "WJetMuon", nwRef);
    //    min->SetFixedVariable(5, "WJetMuon", 18285.5);
    //    min->SetFixedVariable(5, "WJetMuon", 18068);
    //100 bin DD
    //    min->SetFixedVariable(5, "WJetMuon", 18261.7);
    //100 bin MG
    //    min->SetFixedVariable(5, "WJetMuon", 18837.8);

    min->SetVariable(6, "recgenElec", A[6], step[6]);
    min->SetFixedVariable(6, "recgenElec", 1.);
    min->SetVariable(7, "WJetElec", A[7], step[7]);
    //    min->SetFixedVariable(7, "WJetElec", 10976.7);



    min->Minimize();
    x[0] = min->X()[0];
    x[1] = min->X()[1];
    x[2] = min->X()[2];
    x[3] = min->X()[3];
    x[4] = min->X()[4];
    x[5] = min->X()[5];
    x[6] = min->X()[6];
    x[7] = min->X()[7];
    if (!CalcError)
        return;
    corr12 = min->Correlation(2, 3);
    xerr[0] = min->Errors()[0];
    xerr[1] = min->Errors()[1];
    xerr[2] = min->Errors()[2];
    xerr[3] = min->Errors()[3];
    xerr[4] = min->Errors()[4];
    xerr[5] = min->Errors()[5];
    xerr[6] = min->Errors()[6];
    xerr[7] = min->Errors()[7];

    cout << "f0_mu              : " << x[0] << "\t+/-\t" << xerr[0] << endl;
    cout << "fl_mu              : " << x[1] << "\t+/-\t" << xerr[1] << endl;
    cout << "df0_e              : " << x[2] << "\t+/-\t" << xerr[2] << endl;
    cout << "dfl_e              : " << x[3] << "\t+/-\t" << xerr[3] << endl;
    cout << "reg_gen factor muon: " << x[4] << "\t+/-\t" << xerr[4] << endl;
    cout << "n_{W+jets}     muon: " << x[5] << "\t+/-\t" << xerr[5] << endl;
    cout << "reg_gen factor ele : " << x[6] << "\t+/-\t" << xerr[6] << endl;
    cout << "n_{W+jets}     ele : " << x[7] << "\t+/-\t" << xerr[7] << endl;
    cout << "dfr_e              : " << -x[2] - x[3] << "\t+/-\t" <<
            sqrt(pow(xerr[2], 2) + pow(xerr[3], 2)+(2 * corr12 * xerr[2] * xerr[3])) << endl;
    cout << "(df0_e;dfl_e) correlation: " << corr12 << endl;


    double contX0[100];
    double contX1[100];
    unsigned int nPoints = 100;
//    bool isCont = min->Contour(2, 3, nPoints, contX0, contX1);
//    TCanvas myCan;
//    myCan.cd();
    //    TGraph *gr12 = new TGraph(nPoints, contX0, contX1);
    //    gr12->Draw("alf");
    //    myCan.SaveAs("LucaGraph.C");
    //    nPoints = 100;
    //    double scanX0[100];
    //    double scanX1[100];
    //    bool isScan = min->Scan(0, nPoints, scanX0, scanX1, 0.5, 1);
    //    TCanvas myCan2;
    //    myCan2.cd();
    //    TGraph *gr1 = new TGraph(nPoints, scanX0, scanX1);
    //    gr1->Draw("alf");
    //    myCan2.SaveAs("LucaGraph2.C");
}




#endif	/* LucaLikelihood_H */

