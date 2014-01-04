/* 
 * File:   NoCorrelation3DLinearityChecker.h
 * Author: nadjieh
 *
 * Created on June 11, 2013, 8:22 PM
 */

#ifndef NOCORRELATION3DLINEARITYCHECKER_H
#define	NOCORRELATION3DLINEARITYCHECKER_H

#include "BaseLinearityCheker.h"

class NoCorrelation3DLinearityChecker : public BaseLinearityCheker {
public:

    NoCorrelation3DLinearityChecker(string name, string pfix, string sfix, string hist, string dir, string chan,
            int bins = 10) : BaseLinearityCheker(name, pfix, sfix, hist, dir, chan, bins) {
    }

    virtual ~NoCorrelation3DLinearityChecker() {
    }

    virtual void addSamples(double Lumi = 1) {
        BaseLinearityCheker::addFlatBkgs(Lumi);
        //filling the vectors
        ElectronSignalSampleInfo myESampleInfo;
        MuonSignalSampleInfo myMuSampleInfo;
        std::map<string, double>::iterator eSampleItr = myESampleInfo.Xsections.begin();
        std::map<string, double>::iterator mSampleItr = myMuSampleInfo.Xsections.begin();
        for (; eSampleItr != myESampleInfo.Xsections.end(); eSampleItr++, mSampleItr++) {
            if (eSampleItr->first == string("dy") || eSampleItr->first == string("w"))
                continue;
            cout << "for 3D, the name should contain mu: " << eSampleItr->first
                    << "\t" << BaseLinearityCheker::isDiTop(eSampleItr->first) << endl;
            TH2* histIID = 0;
            if (!BaseLinearityCheker::isDiTop(eSampleItr->first)) {
                cout << "it is not ditop" << endl;
                if (channel == "electron") {
                    histIID = (TH2*) GetCosThetaPlot(eSampleItr->first, BaseLinearityCheker::prefix,
                            BaseLinearityCheker::suffix, BaseLinearityCheker::histName, BaseLinearityCheker::dirName,
                            10, /*is2D*/true);
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
                            BaseLinearityCheker::suffix, BaseLinearityCheker::histName, BaseLinearityCheker::dirName,
                            10, /*is2D*/true);
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
            } else {
                cout << "it is ditop" << endl;
                TH3* histIIID = 0;
                if (channel == "electron") {
                    TH2* h = (TH2*) GetCosThetaPlot(eSampleItr->first, BaseLinearityCheker::prefix,
                            BaseLinearityCheker::suffix, BaseLinearityCheker::histName,
                            BaseLinearityCheker::dirName, 10, /*is2D*/true);
                    cout << h->GetName() << endl;
                    TF1 * f = new TF1("fFor3D", CosTheta, -1., 1., 2);
                    f->SetParameter(0, F0);
                    f->SetParameter(1, FL);
                    histIIID = Make3DRandom((TH2*) h, f);
                    DistributionProducerFromSelected* myDist3D = new DistributionProducerFromSelected(histIIID
                            , string(eSampleItr->first), Lumi, false, true);
                    myDist3D->SetBasicValues(myESampleInfo.Xsections[eSampleItr->first],
                            myESampleInfo.N0[eSampleItr->first], histIID->GetEntries());
                    BaseLinearityCheker::signal_samples[eSampleItr->first] = myDist3D;
                    histIIID->Scale(float(Lumi * eSampleItr->second) / float(myESampleInfo.N0[eSampleItr->first]));
                    delete f;
                    delete h;
                }
                if (channel == "muon") {
                    TH2* h = (TH2*) GetCosThetaPlot(mSampleItr->first, BaseLinearityCheker::prefix,
                            BaseLinearityCheker::suffix, BaseLinearityCheker::histName,
                            BaseLinearityCheker::dirName, 10, /*is2D*/true);
                    cout << h->GetName() << endl;
                    TF1 * f = new TF1("fFor3D", CosTheta, -1., 1., 2);
                    f->SetParameter(0, F0);
                    f->SetParameter(1, FL);
                    histIIID = Make3DRandom((TH2*) h, f);
                    DistributionProducerFromSelected* myDist3D = new DistributionProducerFromSelected(histIIID
                            , string(mSampleItr->first), Lumi, false, true);
                    myDist3D->SetBasicValues(myMuSampleInfo.Xsections[mSampleItr->first],
                            myMuSampleInfo.N0[mSampleItr->first], histIID->GetEntries());
                    BaseLinearityCheker::signal_samples[mSampleItr->first] = myDist3D;
                    histIIID->Scale(float(Lumi * mSampleItr->second) / float(myMuSampleInfo.N0[mSampleItr->first]));
                    delete f;
                    delete h;
                }
                BaseLinearityCheker::signalIIID.push_back((TH3*) histIIID->Clone(std::string("MyThreeD_" + eSampleItr->first + "_" +
                        std::string(histIIID->GetName())).c_str()));
            }
        }
    }
};

#endif	/* NOCORRELATION3DLINEARITYCHECKER_H */

