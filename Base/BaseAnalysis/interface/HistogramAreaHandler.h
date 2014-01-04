/* 
 * File:   HistogramAreaHandler.h
 * Author: ajafari
 *
 * Created on March 23, 2010, 5:53 PM
 */

#ifndef _HISTOGRAMAREAHANDLER_H
#define	_HISTOGRAMAREAHANDLER_H
#include "Histograms.h"
#include "HistogramsManager.h"
#include "ObjectProperty.h"
#include "TH1Ext.h"

#include <sstream>
#include <string>
#include <TFile.h>
#include <TSystem.h>
#include <TProfile.h>
#include <TH1.h>
#include <TH2.h>
#include <bits/stl_vector.h>
#include <TCanvas.h>
#include <TDirectory.h>
#include <TBranch.h>
#include <TTree.h>
#include <vector>
#include <TLorentzVector.h>
#include <stdexcept>

template<class T>
class HistogramAreaHandler : public HistogramsManager<T> {
public:
    typedef HistogramsManager<T> base;
    HistogramAreaHandler(string NAME, ObjectProperty<T>* divider) : base(NAME),
    Divider(divider) {
        int NBins = Divider->NumberOfBins;

        for (int i = 0; i < NBins; i++) {
            std::stringstream s;
            s << divider->PropertyName << "_" << i ;
            Histograms<T> * h = new Histograms<T>(s.str());

            base::push_back(h);
        }

        Divider_H = Divider->GetH1("","");
    };
//    HistogramAreaHandler(const HistogramAreaHandler& orig);
    virtual ~HistogramAreaHandler();
    
    void AddHisto(ObjectProperty<T>* histo_prop){
        for (int i = 0; i < base::size(); i++) {
            base::at(i)->AddHisto1(histo_prop);
        }
    };

    void Fill(const T* object , double W = 1.0){
        double value = Divider->ReadValue(object);
        int bin_id = Divider_H->GetXaxis()->FindBin(value) - 1;

        if(bin_id >= 0 && bin_id < base::size() ){
            base::at(bin_id)->Fill(object , W);
        }
    };

protected:
    ObjectProperty<T>* Divider;
    TH1Ext<T>* Divider_H;
};

#endif	/* _HISTOGRAMAREAHANDLER_H */

