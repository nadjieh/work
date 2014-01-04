/* 
 * File:   ProperSystCalculator.h
 * Author: nadjieh
 *
 * Created on September 9, 2013, 1:06 PM
 */

#ifndef PROPERSYSTCALCULATOR_H
#define	PROPERSYSTCALCULATOR_H
#include <vector>
#include <iostream>
#include <math.h>
#include "TMatrixT.h"
#include "TMath.h"
#include "TEllipse.h"
using namespace std;
//http://www.earth-time.org/projects/upb/public_docs/ErrorEllipses.pdf

class ProperSystCalculator {
public:

    ProperSystCalculator(double c1, double c2, vector<double> v1u, vector<double> v1d,
            vector<double> v2u, vector<double> v2d, vector<string> varname) : cent1(c1), cent2(c2) {
        unsigned int s = v1u.size();
        if (v1d.size() != s || v2d.size() != s || v2u.size() != s) {
            cout << "different size for systematics ...." << endl;
            return;
        }
        for (unsigned int i = 0; i < s; i++) {
            varName.push_back(varname[i]);
            if (varName[varName.size() - 1] == string("$\\rm m_{top}$")) {
                var1Up.push_back(v1u[i] / 3.);
                var1Down.push_back(v1d[i] / 3.);
                var2Up.push_back(v2u[i] / 3.);
                var2Down.push_back(v2d[i] / 3.);
            } else {
                var1Up.push_back(v1u[i]);
                var1Down.push_back(v1d[i]);
                var2Up.push_back(v2u[i]);
                var2Down.push_back(v2d[i]);
            }
            if (v1u[i] * v2u[i] < 0 && v1d[i] * v2d[i] < 0) {
                correlation.push_back(-1.);
            } else if ((v1u[i] * v2u[i] < 0 && v1d[i] * v2d[i] > 0) ||
                    (v1u[i] * v2u[i] < 0 && v1d[i] * v2d[i] > 0)) {
                correlation.push_back(0.);
            } else {
                correlation.push_back(1.);
            }
        }
    };

    double GetMean(double x, double y) {
        return (fabs(x) + fabs(y)) / 2.;
    }

    double GetElement(unsigned int i, int xIndex, int yIndex) {
        if (xIndex == yIndex) {
            double meanSyst = 0;
            if (xIndex == 1) {
                meanSyst = GetMean(var1Up[i], var1Down[i]);
            } else if (xIndex == 2) {
                meanSyst = GetMean(var2Up[i], var2Down[i]);
            } else {
                cout << "Bad Index! Zero systematic!" << endl;
            }
            return (meanSyst * meanSyst);
        } else {
            double meanSyst1 = 0;
            double meanSyst2 = 0;
            meanSyst1 = GetMean(var1Up[i], var1Down[i]);
            meanSyst2 = GetMean(var2Up[i], var2Down[i]);
            return correlation[i] * meanSyst1*meanSyst2;
        }
        cout << "Strange error" << endl;
        return 0.;
    }

    TMatrixT<double> * GetCovarianceMatrix() {
        double cov = 0;
        double ii = 0;
        double jj = 0;
        for (unsigned int i = 0; i < var1Down.size(); i++) {
            ii += this->GetElement(i, 1, 1);
            jj += this->GetElement(i, 2, 2);
            cov += this->GetElement(i, 1, 2);
        }
        double elements[4] = {ii, cov, cov, jj};
        TMatrixT<double> * p = new TMatrixT<double>(2, 2);
        p->SetMatrixArray(elements);
        return p;
    }

    bool isFirstGreater(TMatrixT<double> * p) {
        return (p->GetMatrixArray()[0] > p->GetMatrixArray()[3]);
    }

    double GetAngle(TMatrixT<double> * p) {
        double theta = 0.5 *
                TMath::ATan((2 * p->GetMatrixArray()[1]) / (p->GetMatrixArray()[0] - p->GetMatrixArray()[3]));
        return TMath::RadToDeg() * theta;
    }

    std::pair<double, double> GetRoots(TMatrixT<double> * p) {//root1 should be larger
        double det = p->Determinant();
        double sum = p->GetMatrixArray()[0] + p->GetMatrixArray()[3];
        double Delta = pow(sum, 2) - 4 * det;
        double root1 = (-sum + sqrt(Delta)) / (-1 * 2);
        double root2 = (-sum - sqrt(Delta)) / (-1 * 2);
        double max = fabs(root1);
        double min = fabs(root2);
        if (fabs(root1) < fabs(root2)) {
            min = fabs(root1);
            max = fabs(root2);
        }
        return make_pair(max, min);
    }

    TEllipse * GetEllipse(TMatrixT<double> * p) {
        bool isFG = this->isFirstGreater(p);
        std::pair<double, double> roots = this->GetRoots(p);
        cout << roots.first << "\t" << roots.second << endl;
        double angle = this->GetAngle(p);
        TEllipse * el = 0;
        if (isFG)
            el = new TEllipse(cent1, cent2, sqrt(roots.first), sqrt(roots.second), 0, 360, angle);
        else
            el = new TEllipse(cent1, cent2, sqrt(roots.second), sqrt(roots.first), 0, 360, angle);
        return el;
    }

    std::pair<double, double> GetSystematicUncertainty(bool withCorr) {//<F0,FL>
        TMatrixT<double> * p = GetCovarianceMatrix();
        if (!withCorr) {
            return make_pair(p->GetMatrixArray()[0], p->GetMatrixArray()[3]);
        } else {
            std::pair<double, double> roots = this->GetRoots(p);
            if (this->isFirstGreater(p))
                return roots;
            else
                return make_pair(roots.second, roots.first);
        }
        cout << "bad boolean!" << endl;
        return make_pair(0, 0);
    }

    void printSystTable(bool withCor, bool isTEX) {
        double sum1 = 0;
        double sum2 = 0;
        double sumR = 0;
        std::cout.setf(std::ios::fixed);
        std::cout.precision(3);
        if (isTEX) {
            cout << "	& & &	\\\\" << endl;
            if (!withCor)
                cout << "\t" << "&\t$\\Delta F_0$&\t$\\Delta F_L$&\t$\\Delta F_R$\\\\" << endl;
            else
                cout << "\t" << "&\t$\\Delta F_0$&\t$\\Delta F_L$&\t$\\rho$\\\\" << endl;
            cout << "	& & &	\\\\" << endl;
            cout << "\\hline" << endl;
        } else {
            cout << "	| | |	|" << endl;
            if (!withCor)
                cout << "|\t" << "|\t\\Delta F_0|\t\\Delta F_L|\t\\Delta F_R|" << endl;
            else
                cout << "\t" << "|\t\\Delta F_0|\t\\Delta F_L|\t$\\rho$|" << endl;
            cout << "	| | |	|" << endl;
            cout << "|---|" << endl;
        }
        for (unsigned int i = 0; i < var1Up.size(); i++) {
            double mean1 = this->GetMean(var1Up[i], var1Down[i]);
            double mean2 = this->GetMean(var2Up[i], var2Down[i]);
            sum1 += pow(mean1, 2);
            sum2 += pow(mean2, 2);
            double RUp = (var1Up[i] + var2Up[i]);
            double RDown = (var1Down[i] + var2Down[i]);
            if (var3Down.size() != 0) {
                RUp = var3Up[i];
                RDown = var3Down[i];
            }
            double meanR = this->GetMean(RUp, RDown);
            sumR += pow(meanR, 2);
            if (isTEX) {
                cout << varName[i] << "&\t" << mean1 << "&\t" << mean2 << "&\t";
                if (withCor)
                    cout << correlation[i] << "\\\\" << endl;
                else
                    cout << meanR << "\\\\" << endl;
                cout << "\\hline" << endl;
            } else {
                cout << "|" << varName[i] << "|\t" << mean1 << "|\t" << mean2 << "&\t";
                if (withCor)
                    cout << correlation[i] << "|" << endl;
                else
                    cout << meanR << "|" << endl;
            }
        }
        if (isTEX) {
            cout << "	& & & 	\\\\" << endl;
            std::cout << "Sum &\t" << sqrt(sum1) << "&\t" << sqrt(sum2) << "&\t";
            if (withCor)
                cout << " \\\\" << endl;
            else
                cout << sqrt(sumR) << "\\\\" << endl;
            cout << "	& & &	\\\\" << endl;
            cout << "\\hline" << endl;
        } else {
            cout << "	| | | 	|" << endl;
            std::cout << "Sum |\t" << sqrt(sum1) << "|\t" << sqrt(sum2) << "|\t";
            if (withCor)
                cout << " |" << endl;
            else
                cout << sqrt(sumR) << "|" << endl;
            cout << "	| | |	|" << endl;
            cout << "|----|" << endl;
        }
    }

    void Set3rdVar(vector<double> v3u, vector<double> v3d) {
        for (unsigned int i = 0; i < v3u.size(); i++) {
            var3Up.push_back(v3u[i]);
            var3Down.push_back(v3d[i]);
        }
    }

    void AddCorrelation(double s) {
        correlation.push_back(s);
    }

    void AddUncertainty(double s, int number, TString type) {
        if(number == 1){
            if(type == "Up")
                var1Up.push_back(s);
            if(type == "Down")
                var1Down.push_back(s);
        }else if(number == 2){
            if(type == "Up")
                var2Up.push_back(s);
            if(type == "Down")
                var2Down.push_back(s);
        }
    }

    void AddName(string n){
        varName.push_back(n);
    }
    virtual ~ProperSystCalculator() {
    };
private:
    vector<string> varName;
    vector<double> var1Up;
    vector<double> var1Down;
    vector<double> var2Up;
    vector<double> var2Down;
    vector<double> var3Up;
    vector<double> var3Down;
    double cent1, cent2;
    vector<double> correlation;
};

#endif	/* PROPERSYSTCALCULATOR_H */

