/* 
 * File:   NormBiasChecker.h
 * Author: nadjieh
 *
 * Created on June 24, 2013, 2:10 PM
 */

#ifndef NORMBIASCHECKER_H
#define	NORMBIASCHECKER_H
#include "BaseLinearityCheker.h"

class NormFactor {
public:

    NormFactor() {
        norms["w"] = 0;
        norms["dy"] = 0;
        norms["t"] = 0;
        norms["tbar"] = 0;
        norms["tW"] = 0;
        norms["tWbar"] = 0;
//        norms["tt"] = 0;
        norms["s"] = 0;
        norms["sbar"] = 0;
        norms["dimu"] = 2.72;
        norms["die"] = 2.72;
        norms["mue"] = 5.46;
        norms["mutau"] = 5.46;
        norms["etau"] = 5.46;
        norms["muhad"] = 34.2;
        norms["ehad"] = 34.2;
        norms["disemitau"] = 36.9;
    }
    ~NormFactor() {
    }
    std::map<string, double> norms;
};

class NormBiasChecker : public BaseLinearityCheker {
public:

    NormBiasChecker(string NAME, string pfix, string sfix, string hist, string dir, string chan,
            int insign = 0, int bins = 10) : BaseLinearityCheker(Name, pfix, sfix, hist, dir, chan, bins),
    mySign(insign) {
    }

    virtual ~NormBiasChecker() {
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

    virtual void SetSigPartialCollection(int nPEX) {
        stringstream name2D__;
        stringstream title__;
        name2D__.str("");
        name2D__ << Name << "_CosTheta_signal_32D_" << nPEX;
        title__.str("");
        title__ << "Wtb cos(#theta) : PEX=" << nPEX;
        std::map<string, DistributionProducerFromSelected*> ::iterator sigItr = signal_samples.begin();
        signalIIDPartial.clear();
        signalIIIDPartial.clear();
        NormFactor myNorms;
        for (; sigItr != signal_samples.end(); sigItr++) {
            double norm = myNorms.norms[sigItr->first];
            if (mySign == -1)
                norm = 1 - norm;
            else if (mySign == 1)
                norm = 1 + norm;
            else
                norm = 1;
            if (!this->isDiTop(sigItr->first)) {
                TH2* tmp = ((TH2*) sigItr->second->GeneratePartialSample(1.0 / 3.0, nPEX));
                tmp->Scale(norm);
                signalIIDPartial.push_back((TH2*) tmp->Clone(std::string(sigItr->first + "_" + name2D__.str()).c_str()));
                delete tmp;
            } else {
                TH3* tmp = ((TH3*) sigItr->second->GeneratePartialSample(1.0 / 3.0, nPEX));
                tmp->Scale(norm);
                signalIIIDPartial.push_back((TH3*) tmp->Clone(std::string(sigItr->first + "_" + name2D__.str()).c_str()));
                delete tmp;
            }
        }
    }

    virtual TH1* GetPullSignalPartial(int nPEXPull) {
        stringstream name__;
        stringstream title__;
        name__.str("");
        name__ << Name << "_CosTheta_signal_32D_" << nPEXPull;
        title__.str("");
        title__ << "Wtb cos(#theta) : PEXPull =" << nPEXPull;
        TH1* hData = new TH1D(name__.str().c_str(), title__.str().c_str(), bkg->GetYaxis()->GetNbins()
                , bkg->GetYaxis()->GetXmin(), bkg->GetYaxis()->GetXmax());
        hData->Sumw2();
        std::map<string, DistributionProducerFromSelected*> ::iterator sigItr = signal_samples.begin();
        NormFactor myNorms;
        for (; sigItr != signal_samples.end(); sigItr++) {
            double norm = myNorms.norms[sigItr->first];
            if (mySign == -1)
                norm = 1 - norm;
            else if (mySign == 1)
                norm = 1 + norm;
            else
                norm = 1;
            if (!this->isDiTop(sigItr->first)) {
                TH2* tmp1 = (TH2*) sigItr->second->GeneratePartialSampleLumiEQ(nPEXPull);
                TH1* tmp = tmp1->ProjectionY("tmp");
                tmp->Scale(norm);
                hData->Add(tmp);
                delete tmp1;
                delete tmp;
            } else {
                TH3* tmp1 = (TH3*) sigItr->second->GeneratePartialSampleLumiEQ(nPEXPull);
                TH1* tmp = tmp1->Project3D("y");
                tmp->Scale(norm);
                hData->Add(tmp);
                delete tmp1;
                delete tmp;
            }
        }
        return hData;
    }

private:
    int mySign;
};

#endif	/* NORMBIASCHECKER_H */

