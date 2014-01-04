/* 
 * File:   NormOneDBiasChecker.h
 * Author: nadjieh
 *
 * Created on June 24, 2013, 4:49 PM
 */

#ifndef NORMONEDBIASCHECKER_H
#define	NORMONEDBIASCHECKER_H

#include "NormBiasChecker.h"
#include "OneDLinearityChecker.h"
class NormOneDBiasChecker : public OneDLinearityChecker {
public:

    NormOneDBiasChecker(string NAME, string pfix, string sfix, string hist, string dir, string chan,
            int insign = 0, int bins = 10) :
    OneDLinearityChecker(Name, pfix, sfix, hist, dir, chan, bins), mySign(insign) {
    }

    virtual ~NormOneDBiasChecker() {
    }

    virtual TH1* GetBkgPartial(int nPEX) {
        stringstream name__;
        name__ << "CosTheta_bkg_" << nPEX;
        stringstream title__;
        title__ << "noWtb cos(#theta) : PEX=" << nPEX;
        TH1* hSumBGPartial = new TH1D(name__.str().c_str(), title__.str().c_str(), bkg->GetYaxis()->GetNbins()
                , bkg->GetYaxis()->GetXmin(), bkg->GetYaxis()->GetXmax());
        hSumBGPartial->Sumw2();
        std::map<string, DistributionProducerFromSelected*>::iterator bkgItr = bkg_samples.begin();
        NormFactor myNorms;
        cout << "--------GetBkgPartial--------- " << nPEX << endl;
        for (; bkgItr != bkg_samples.end(); bkgItr++) {
            cout << "background " << bkgItr->first << endl;
            TH1* tmp = 0;
            if (string(bkgItr->first) == "w") {
                tmp = bkgItr->second->GeneratePartialSample(1.0, nPEX);
                // tmp->Scale(3.0);
            } else
                tmp = bkgItr->second->GeneratePartialSample(1.0 / 3.0, nPEX);
            double norm = myNorms.norms[bkgItr->first];
            if (mySign == -1)
                norm = 1 - norm;
            else if (mySign == 1)
                norm = 1 + norm;
            else
                norm = 1;
            tmp->Scale(norm);
            hSumBGPartial->Add(tmp);
            delete tmp;
        }
        hSumBGPartial->SetName(string(Name + "_" + string(hSumBGPartial->GetName())).c_str());
        return hSumBGPartial;
    }

    virtual TH1* GetPullBkgPartial(int nPEXPull) {
        stringstream name__;
        name__ << "CosTheta_bkg_" << nPEXPull;
        stringstream title__;
        title__ << "noWtb cos(#theta) : PEX=" << nPEXPull;
        TH1* hData = new TH1D(name__.str().c_str(), title__.str().c_str(), bkg->GetYaxis()->GetNbins()
                , bkg->GetYaxis()->GetXmin(), bkg->GetYaxis()->GetXmax());
        hData->Sumw2();
        cout << "--------GetPullBkgPartial--------- " << nPEXPull << endl;
        NormFactor myNorms;
        std::map<string, DistributionProducerFromSelected*>::iterator bkgItr = bkg_samples.begin();
        for (; bkgItr != bkg_samples.end(); bkgItr++) {
            TH1* tmp = bkgItr->second->GeneratePartialSampleLumiEQ(nPEXPull);
            double norm = myNorms.norms[bkgItr->first];
            if (mySign == -1)
                norm = 1 - norm;
            else if (mySign == 1)
                norm = 1 + norm;
            else
                norm = 1;
            tmp->Scale(norm);
            hData->Add(tmp);
            delete tmp;
        }
        hData->SetName(string(Name + "_" + string(hData->GetName())).c_str());
        return hData;
    }

    virtual void SetSignalPartial(int nPEX) {
        stringstream name__;
        name__ << Name << "_CosTheta_signal_" << nPEX;
        stringstream title__;
        title__ << "Wtb cos(#theta) : PEX=" << nPEX;
        signalPartial = new TH1D(name__.str().c_str(), title__.str().c_str(), signalMC->GetXaxis()->GetNbins()
                , signalMC->GetXaxis()->GetXmin(), signalMC->GetXaxis()->GetXmax());
        signalPartial->Sumw2();
        std::map<string, DistributionProducerFromSelected*> ::iterator sigItr = BaseLinearityCheker::signal_samples.begin();
        NormFactor myNorm;
        double norm = myNorm.norms[sigItr->first];
        if (mySign == 1)
            norm = 1 + norm;
        else if (mySign == -1)
            norm = 1 - norm;
        else
            norm = 1;
        for (; sigItr != BaseLinearityCheker::signal_samples.end(); sigItr++) {
            TH1* tmp = sigItr->second->GeneratePartialSample(1.0 / 3.0, nPEX);
            tmp->Scale(norm);
            signalPartial->Add(tmp);
            delete tmp;
        }
    }

    virtual TH1* GetPullSignalPartial(int nPEXPull) {
        stringstream name__;
        stringstream title__;
        name__.str("");
        name__ << Name << "_CosTheta_signal_32D_" << nPEXPull;
        title__.str("");
        title__ << "Wtb cos(#theta) : PEXPull =" << nPEXPull;
        TH1* hData = new TH1D(name__.str().c_str(), title__.str().c_str(), BaseLinearityCheker::bkg->GetYaxis()->GetNbins()
                , BaseLinearityCheker::bkg->GetYaxis()->GetXmin(), BaseLinearityCheker::bkg->GetYaxis()->GetXmax());
        hData->Sumw2();
        std::map<string, DistributionProducerFromSelected*> ::iterator sigItr = BaseLinearityCheker::signal_samples.begin();
        NormFactor myNorm;
        double norm = myNorm.norms[sigItr->first];
        if (mySign == 1)
            norm = 1 + norm;
        else if (mySign == -1)
            norm = 1 - norm;
        else
            norm = 1;        
        for (; sigItr != BaseLinearityCheker::signal_samples.end(); sigItr++) {
            TH1* tmp1 = sigItr->second->GeneratePartialSampleLumiEQ(nPEXPull);
            tmp1->Scale(norm);
            hData->Add(tmp1);
            delete tmp1;
        }
        return hData;
    }

private:
    int mySign;
};
#endif	/* NORMONEDBIASCHECKER_H */

