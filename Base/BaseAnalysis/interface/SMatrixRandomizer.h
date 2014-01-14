/* 
 * File:   SMatrixRandomizer.h
 * Author: nadjieh
 *
 * Created on January 13, 2014, 6:29 PM
 */

#ifndef SMATRIXRANDOMIZER_H
#define	SMATRIXRANDOMIZER_H
#include "TH1.h"
#include "TH2.h"
#include "TH3.h"
#include "TRandom1.h"
#include "/opt/root/math/mathmore/inc/Math/Random.h"
#include "/opt/root/math/mathmore/inc/Math/GSLRndmEngines.h"
#include <sstream>
#include <string>
#include <iostream>
#include <vector>
using namespace std;

class SMatrixRandomizer {
public:

    SMatrixRandomizer(TH1* input, int dim, double integ = 1) : integral(integ) {
        if (dim == 2) {
            input3 = 0;
            input2 = (TH2D*) input;
        } else if (dim == 3) {
            input3 = (TH3D*) input;
            input2 = 0;
        }
        if (input->GetEntries() != 0)
            weight = input->Integral() / (double) input->GetEntries();
        else
            weight = 1.;
        cout << "Weight for a " << dim << "D hist is " << weight << endl;
        doPrint = false;

    }

    ~SMatrixRandomizer() {
    }

    void SetPrint(bool in = true) {
        doPrint = in;
    }

    TH1 * GetGenHist(int bin, int Xbin = -1) {
        TH1 * ret = 0;
        stringstream s;
        if (input2 != NULL) {
            s << "2D_recoBin_" << bin;
            ret = input2->ProjectionX(s.str().c_str(), bin, bin);
        } else if (input3 != NULL) {
            if (Xbin == -1) {
                input3->GetYaxis()->SetRange(bin, bin);
                ret = input3->Project3D("zx");
            } else {
                ret = (TH1*) input3->ProjectionZ(s.str().c_str(), Xbin, Xbin, bin, bin, "o");
            }
        } else {
            cout << "Bad Bin or Bad Histogram" << endl;
        }
        return ret;
    }

    TH1D * DoubleContentRandomly(TH1D * input, int ybin, int nSigma = 1000, int nCoef = 10) {
        TRandom seed;
        unsigned int mySeed = -10000;
        for (int i = 0; i < ybin; i++) {
            mySeed = seed.Uniform(999998);
        }
        TRandom randVal;
        randVal.SetSeed(mySeed);
        stringstream s;
        s << "Randomized_" << ybin;
        TH1D * ret = (TH1D*) input->Clone(s.str().c_str());
        if (ret->GetEntries() == 0)
            return ret;
        for (int i = 0; i < input->GetXaxis()->GetNbins(); i++) {
            int n = (int) (input->GetBinContent(i + 1) / weight);
            if (n == 0)
                continue;
            double width = nSigma * input->GetXaxis()->GetBinWidth(i + 1);
            double cosTheta = input->GetXaxis()->GetBinCenter(i + 1);
            for (int iEntry = 0; iEntry < (nCoef * n); iEntry++) {
                ret->Fill(randVal.Gaus(cosTheta, width), weight);
            }
        }
        ret->Scale(input->Integral() / ret->Integral());
        return ret;
    }

    TH2D * DoubleContentRandomly2D(TH2D * input, int ybin, int nSigma = 1000, int nCoef = 10) {
        TRandom seed;
        unsigned int mySeed = -10000;
        for (int i = 0; i < ybin; i++) {
            mySeed = seed.Uniform(999998);
        }
        ROOT::Math::Random<ROOT::Math::GSLRngMT> randVal;
        //TRandom randVal;
        randVal.SetSeed(mySeed);
        stringstream s;
        s << "Randomized2D_" << ybin;
        TH2D * ret = (TH2D*) input->Clone(s.str().c_str());
        if (input->GetEntries() == 0)
            return ret;
        double rho = ret->GetCorrelationFactor();
        double x = -100.;
        double y = -100.;
        for (int i = 0; i < input->GetXaxis()->GetNbins(); i++) {//x is gen
            double widthX = input->GetXaxis()->GetBinWidth(i + 1);
            double cosThetaX = input->GetXaxis()->GetBinCenter(i + 1);
            for (int j = 0; j < input->GetYaxis()->GetNbins(); j++) {//y is the other top
                double widthY = nSigma * input->GetYaxis()->GetBinWidth(j + 1);
                double cosThetaY = input->GetYaxis()->GetBinCenter(j + 1);
                int n = (int) (input->GetBinContent(i + 1, j + 1) / weight);
                if (n == 0)
                    continue;
                for (int iEntry = 0; iEntry < (nCoef * n); iEntry++) {
                    /*
                     * https://www.gnu.org/software/gsl/manual/html_node/The-Bivariate-Gaussian-Distribution.html
                     * /usr/include/gsl/gsl_randist.h
                     * /opt/root/math/mathmore/src/GSLRndmEngines.cxx
                     */
                    randVal.Gaussian2D(widthX, widthY, rho, x, y);
                    ret->Fill(cosThetaX + x, cosThetaY + y, weight);
                }

            }
        }
        ret->Scale(input->Integral() / ret->Integral());
        return ret;
    }

    TH2D * Get2DHistDoubled(int nSigma = 1000) {
        if (input2->Integral() == 0 && weight == 1)
            return input2;
        TH2D * ret = (TH2D*) input2->Clone((string(input2->GetName()) + "_Doubled").c_str());
        for (int binY = 0; binY < input2->GetYaxis()->GetNbins(); binY++) {
            TH1D * hGen = (TH1D*)this->GetGenHist(binY + 1);
            TH1D * hDoubled = this->DoubleContentRandomly(hGen, binY + 1, nSigma);
            //            if (doPrint) {
            //                cout << "**** binY " << binY << "\n\t" << hGen->GetEntries() << "\t" << hGen->Integral() << endl;
            //                cout << "\t" << hDoubled->GetEntries() << "\t" << hDoubled->Integral() << endl;
            //                if (hGen->GetEntries() != 0 && hGen->Integral())
            //                    cout << "\t" << hDoubled->GetEntries() / hGen->GetEntries()
            //                    << "\t" << hDoubled->Integral() / hGen->Integral() << endl;
            //            }
            delete hGen;
            for (int binX = 0; binX < hDoubled->GetXaxis()->GetNbins(); binX++) {
                ret->SetBinContent(binX + 1, binY + 1, hDoubled->GetBinContent(binX + 1));
            }
            delete hDoubled;
        }
        if (doPrint) {
            cout << "2D ---- Input ----------- Output" << endl;
            cout << "Entries: " << input2->GetEntries() << "\t" << ret->GetEntries() << endl;
            cout << "Integral: " << input2->Integral() << "\t" << ret->Integral() << endl;
            cout << "MeanY: " << input2->GetMean(2) << "\t" << ret->GetMean(2) << endl;
            cout << "MeanX: " << input2->GetMean(1) << "\t" << ret->GetMean(1) << endl;
        }
        return ret;
    }

    TH3D * Get3DHistDoubled2(int nSigma = 100) {
        if (input3->Integral() == 0 && weight == 1)
            return input3;
        TH3D * ret = (TH3D*) input3->Clone((string(input3->GetName()) + "_Doubled").c_str());
        for (int binY = 0; binY < input3->GetYaxis()->GetNbins(); binY++) {
            for (int binX = 0; binX < input3->GetXaxis()->GetNbins(); binX++) {
                TH1D * hGen = (TH1D*)this->GetGenHist(binY + 1, binX + 1);
                TH1D * hDoubled = this->DoubleContentRandomly(hGen, binY + 1, nSigma);
                delete hGen;
                for (int binZ = 0; binZ < hDoubled->GetYaxis()->GetNbins(); binZ++) {
                    ret->SetBinContent(binX + 1, binY + 1, binZ + 1, hDoubled->GetBinContent(binZ + 1));
                }
                delete hDoubled;
            }
        }
        if (doPrint) {
            cout << "3D ----" << endl;
            cout << "Entries: " << input3->GetEntries() << "\t" << ret->GetEntries() << endl;
            cout << "Integral: " << input3->Integral() << "\t" << ret->Integral() << endl;
            cout << "MeanY: " << input3->GetMean(2) << "\t" << ret->GetMean(2) << endl;
            cout << "MeanX: " << input3->GetMean(1) << "\t" << ret->GetMean(1) << endl;
        }
        return ret;
    }

    TH3D * Get3DHistDoubled(int nSigma = 100) {
        if (input3->Integral() == 0 && weight == 1)
            return input3;
        TH3D * ret = (TH3D*) input3->Clone((string(input3->GetName()) + "_Doubled").c_str());

        for (int binY = 0; binY < input3->GetYaxis()->GetNbins(); binY++) {
            TH2D * hGen = (TH2D*)this->GetGenHist(binY + 1);
            TH2D * hDoubled = this->DoubleContentRandomly2D(hGen, binY + 1, nSigma, 20);
            if (doPrint) {
                cout << "**** binY " << binY << "\n\t" << hGen->GetEntries() << "\t" << hGen->Integral() << endl;
                cout << "\t" << hDoubled->GetEntries() << "\t" << hDoubled->Integral() << endl;
                if (hGen->GetEntries() != 0 && hGen->Integral())
                    cout << "\t" << hDoubled->GetEntries() / hGen->GetEntries()
                    << "\t" << hDoubled->Integral() / hGen->Integral() << endl;
                cout << "\tNbinsX: " << input3->GetXaxis()->GetNbins() << "\t" << hDoubled->GetXaxis()->GetNbins() << endl;
                cout << "\tNbinsZ: " << input3->GetZaxis()->GetNbins() << "\t" << hDoubled->GetYaxis()->GetNbins() << endl;
            }
            delete hGen;
            for (int binX = 0; binX < hDoubled->GetXaxis()->GetNbins(); binX++) {
                for (int binZ = 0; binZ < hDoubled->GetYaxis()->GetNbins(); binZ++) {
                    ret->SetBinContent(binX + 1, binY + 1, binZ + 1, hDoubled->GetBinContent(binX + 1, binZ + 1));
                    //                    if (doPrint) {
                    //                        cout << "\tContent: " << input3->GetBinContent(binX + 1, binY + 1, binZ + 1) 
                    //                                << "\t" << ret->GetBinContent(binX + 1, binY + 1, binZ + 1) << endl;
                    //                    }
                }
            }
            delete hDoubled;
        }
        if (doPrint) {
            cout << "3D ----" << endl;
            input3->GetYaxis()->SetRange(0, -1);
            cout << "Entries: " << input3->GetEntries() << "\t" << ret->GetEntries() << endl;
            cout << "Integral: " << input3->Integral() << "\t" << ret->Integral() << endl;
            cout << "MeanY: " << input3->GetMean(2) << "\t" << ret->GetMean(2) << endl;
            cout << "MeanX: " << input3->GetMean(1) << "\t" << ret->GetMean(1) << endl;
        }
        return ret;
    }
private:
    TH2D * input2;
    TH3D * input3;
    double integral;
    double weight;
    bool doPrint;
};

#endif	/* SMATRIXRANDOMIZER_H */

