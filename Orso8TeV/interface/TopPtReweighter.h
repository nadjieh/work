/* 
 * File:   TopPtReweighter.h
 * Author: nadjieh
 *
 * Created on July 26, 2013, 1:11 PM
 */

#ifndef TOPPTREWEIGHTER_H
#define	TOPPTREWEIGHTER_H
#include <TMath.h>

class TopPtReweighter {
public:

    TopPtReweighter() {
        LJ8FitValuesA = 0.159;
        LJ8FitValuesB = -0.00141;
    };
    TopPtReweighter(const TopPtReweighter& orig){};
    virtual ~TopPtReweighter(){};

    double SF(double pt) {
        return TMath::Exp((pt * LJ8FitValuesB) + LJ8FitValuesA);
    }

    double Weight(double topPt, double antitopPt) {
        return sqrt(SF(topPt) * SF(antitopPt));
    }
private:
    double LJ8FitValuesA;
    double LJ8FitValuesB;
};

#endif	/* TOPPTREWEIGHTER_H */

