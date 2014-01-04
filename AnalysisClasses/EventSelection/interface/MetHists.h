/*                                                                                                                                              
 * File:   MetHists.h                                                                                                                     
 * Author: ajafari                                                                                                                              
 *                                                                                                                                              
 * Created on November 29, 2009, 8:55 PM                                                                                                        
 */

#ifndef _METHISTS_H
#define _METHISTS_H

#include <iomanip>
#include "../../../TopBrussels/TopTreeProducer/interface/TRootMuon.h"
#include "../../../TopBrussels/TopTreeProducer/interface/TRootElectron.h"
#include "../../../TopBrussels/TopTreeProducer/interface/TRootJet.h"
#include "../../../TopBrussels/TopTreeProducer/interface/TRootMET.h"
#include "../../../TopBrussels/TopTreeProducer/interface/TRootPFMET.h"
#include "../../../TopBrussels/TopTreeProducer/interface/TRootGenEvent.h"
#include "../../../TopBrussels/TopTreeProducer/interface/TRootEvent.h"
#include "../../../TopBrussels/TopTreeProducer/interface/TRootRun.h"
#include "../../../TopBrussels/TopTreeProducer/interface/TRootParticle.h"
#include "../../../TopBrussels/TopTreeProducer/interface/TRootMCParticle.h"
#include <sstream>

#include <TFile.h>
#include <TH1.h>
#include <TH2.h>
#include <TString.h>
#include <TDirectory.h>
#include <TCanvas.h>
#include <TBranch.h>
#include <TTree.h>
#include <TClonesArray.h>
#include <vector>

#include "KinematicHists.h"


using namespace TopTree;

class MetHists {
public:

    MetHists(std::string name, bool sumw2 = false) : Name(name) {
        kinHists = new KinematicHists<TRootPFMET > (Name, sumw2);
    };

    virtual ~MetHists() {
    };

    virtual void Fill(TRootPFMET * MET, double weight = 1) {
        kinHists->Fill(MET, weight);
    };

    virtual void WriteAll(TDirectory * dir) {
        if (dir == 0)
            return;
        TDirectory * my_dir = dir->mkdir((Name + "_MET").c_str());
        my_dir->cd();

        kinHists->Write();
        dir->cd();
    };

    virtual void SetErrors(bool SET = false) {
        kinHists->SetErrors(SET);
    }
private:
    KinematicHists<TRootPFMET> * kinHists;
    std::string Name;


};
#endif

