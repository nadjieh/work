/* 
 * File:   HistogramAdder.h
 * Author: nadjieh
 *
 * Created on May 15, 2012, 12:22 PM
 */

#ifndef HISTOGRAMADDER_H
#define	HISTOGRAMADDER_H

#include "TFile.h"
#include "TDirectory.h"
#include "TH1.h"
#include "TH2.h"
#include "TGraphAsymmErrors.h"
#include "TList.h"
#include "THStack.h"
#include "TCanvas.h"
#include <string>
#include <vector>
#include <iostream>
#include "TColor.h"
#include "TColorWheel.h"
#include "TKey.h"
#include "TClass.h"
#include "TROOT.h"
#include "TSystem.h"
#include "HistogramPlotter.h"

using namespace std;

class HistogramAdder {
public:

    HistogramAdder(bool print = false, bool doP = false, bool qcd = false) : doPrint(print),
    doProjection(doP), dataDrivenQCD(qcd) {
    };

    ~HistogramAdder() {
    };

    void StructureFinder_(TDirectory * f) {
        TList * l = f->GetListOfKeys();
        TDirectory * dir = 0;
        TList * l2 = 0;
        for (int i = 1; i < l->GetSize(); i++) {
            FolderContent tmp;
            tmp.mainName = string(l->At(i)->GetName());
            dir = (TDirectory*) f->Get(tmp.mainName.c_str());
            l2 = dir->GetListOfKeys();
            tmp.content.clear();
            for (int j = 0; j < l2->GetSize(); j++) {
                tmp.content.push_back(string(l2->At(j)->GetName()));
            }
            structure.push_back(tmp);
            delete dir;
        }
    }

    void StructureFinder(TDirectory * f) {
        cout << f->GetName() << "--------------------------" << endl;
        TKey *key;
        TIter nextkey(f->GetListOfKeys());
        TDirectory * dir = 0;
        TList * l2 = 0;
        directHists.clear();
        while ((key = (TKey*) nextkey())) {
            const char *classname = key->GetClassName();
            TClass *cl = gROOT->GetClass(classname);
            if (!cl) continue;
            if (cl->InheritsFrom(TDirectory::Class())) {
                FolderContent tmp;
                tmp.mainName = string(key->GetName());
                dir = (TDirectory*) f->Get(tmp.mainName.c_str());
                l2 = dir->GetListOfKeys();
                tmp.content.clear();
                for (int j = 0; j < l2->GetSize(); j++) {
                    bool is3D = string(l2->At(j)->GetName()).find("3D") < string(l2->At(j)->GetName()).size();
                    is3D = (is3D && string(l2->At(j)->GetName()).find("3D") > 0);
                    cout << "is3D: " << l2->At(j)->GetName() << "\t" << is3D << endl;
                    if (string(l2->At(j)->GetName()) == "ttDecayModes" || is3D) {
                        cout << "I don't take it!" << endl;
                        continue;
                    }
                    tmp.content.push_back(string(l2->At(j)->GetName()));
                }
                structure.push_back(tmp);
                delete dir;
            } else {
                directHists.push_back(string(key->GetName()));
            }
        }
    }

    void plot(vector<TFile*> files, vector<double> weights, TFile * out) {
        for (unsigned int q = 0; q < structure.size(); q++) {
            bool mkdir = false;
            TDirectory * tmpdir = 0;

            if (doPrint) {
                cout << "Part " << q << ", " << structure.at(q).mainName << endl;
            }
            for (unsigned int w = 0; w < structure.at(q).content.size(); w++) {
                if (doPrint) {
                    cout << "\t" << w << ", " << structure.at(q).content.at(w) << endl;
                }
                //                THStack stack(structure.at(q).content.at(w).c_str(),structure.at(q).content.at(w).c_str());
                TH1D * h = 0;
                TH1D * Res = 0;
                for (unsigned int e = 0; e < files.size(); e++) {
                    if (doPrint) {
                        cout << "File number " << e << ": " << files.at(e)->GetName() << endl;
                    }
                    TDirectory * d = (TDirectory*) (files.at(e))->Get(structure.at(q).mainName.c_str());
                    if (doPrint) {
                        cout << "Directory number " << q << ": " << d->GetName() << endl;
                    }
                    h = (TH1D*) d->Get(structure.at(q).content.at(w).c_str());
                    //                    h->Sumw2();
                    bool isQCD = false;
                    int pos1 = string(files.at(e)->GetName()).find("qcd");
                    int pos2 = string(files.at(e)->GetName()).find("QCD");
                    isQCD = (pos1 > 0 && pos1 < string(files.at(e)->GetName()).size());
                    if (!isQCD)
                        isQCD = (pos2 > 0 && pos2 < string(files.at(e)->GetName()).size());
                    if (!isQCD || (isQCD && !dataDrivenQCD))
                        h->Scale(weights.at(e));
                    else if (isQCD && dataDrivenQCD) {
                        cout << "I am QCD :-)" << endl;
                        h->Scale(weights.at(e) / h->Integral());
                    }


                    if (structure.at(q).content.at(w) == string(structure.at(q).mainName + "cosTheta")) {
                        cout << files.at(e)->GetName() << endl;
                        if (doProjection && (string(files.at(e)->GetName()).find("qcd") == 0 || string(files.at(e)->GetName()).find("qcd") >
                                string(files.at(e)->GetName()).size())) {
                            cout << "I was not qcd +++++++++++++++++++++++++" << endl;
                            TH1D * h2d = ((TH2D*) d->Get(string(structure.at(q).mainName + "cosTheta2D").c_str()))->ProjectionY();
                            //                            h2d->Sumw2();
                            h2d->Scale(weights.at(e));

                            //                            if(h2d->GetNbinsX() != h->GetNbinsX())
                            //                                h2d->Rebin(int(h2d->GetNbinsX()/h->GetNbinsX()));
                            h->Add(h2d);
                            delete h2d;
                        }
                    }
                    if (structure.at(q).content.at(w) == string(structure.at(q).mainName + "cosTheta_MET")) {
                        if (doProjection && (string(files.at(e)->GetName()).find("qcd") == 0 || string(files.at(e)->GetName()).find("qcd") >
                                string(files.at(e)->GetName()).size())) {
                            cout << "I was not qcd +++++++++++++++++++++++++  " << structure.at(q).content.at(w) << endl;
                            TH1D * h2d = ((TH2D*) d->Get(string(structure.at(q).mainName + "cosTheta2D_MET").c_str()))->ProjectionY();
                            //                            if(h2d->GetNbinsX() != h->GetNbinsX())
                            //                                h2d->Rebin(int(h2d->GetNbinsX()/h->GetNbinsX()));
                            h2d->Scale(weights.at(e));
                            //                            h2d->Sumw2();
                            h->Add(h2d);
                            delete h2d;
                        }
                    }

                    //                    h->Sumw2();
                    if (doPrint) {
                        cout << "\tHistogram number " << w << ": " << h->Class_Name() << endl;
                        cout << h->GetName() << endl;
                    }
                    //                    cout<<weights.at(e)<<endl;

                    if (e == 0) {
                        //                        Res = (TH1D*)h->Clone();
                        Res = h;
                        //                        Res->Sumw2();
                    } else {
                        Res->Add(h);
                        //                        Res->Sumw2();
                    }

                }

                out->cd();
                if (doPrint) {
                    cout << "\tIn outFile " << out->GetName() << endl;
                }
                if (!mkdir) {
                    mkdir = true;
                    tmpdir = ((TDirectory*) out)->mkdir(structure.at(q).mainName.c_str());
                    tmpdir->cd();
                    //                    cout<<"I made"<<endl;
                } else
                    tmpdir->cd();
                //                cout<<"cd success"<<endl;
                if (Res != NULL) {
                    Res->Write();
                    //                    cout<<"I wrote "<<Res->GetName()<<" in "<<tmpdir->GetName()  <<endl;
                }
                if (doPrint) {
                    cout << "\tCanvas is written .... " << endl;
                }



                if (doPrint) {
                    cout << "\tdirectories deleted ... " << endl;
                }
            }
        }

        for (unsigned int g = 0; g < directHists.size(); g++) {
            TH1D * Res = 0;

            for (unsigned int e = 0; e < files.size(); e++) {
                cout << " --- " << files.at(e)->GetName() << endl;
                TH1D * cf = (TH1D*) files.at(e)->Get(directHists.at(g).c_str());
                //                cf->Sumw2();
                bool isQCD = false;
                int pos1 = string(files.at(e)->GetName()).find("qcd");
                int pos2 = string(files.at(e)->GetName()).find("QCD");
                isQCD = (pos1 > 0 && pos1 < string(files.at(e)->GetName()).size());
                if (!isQCD)
                    isQCD = (pos2 > 0 && pos2 < string(files.at(e)->GetName()).size());
                if (!isQCD || (isQCD && !dataDrivenQCD))
                    cf->Scale(weights.at(e));
                else if (isQCD && dataDrivenQCD) {
                    cout << "Direct hist in QCD :-)" << endl;
                    cf->Scale(weights.at(e) / cf->Integral());
                }
                //                cf->Scale(102.56/cf->Integral());

                //                cf->Sumw2();
                if (e == 0) {
                    Res = (TH1D*) cf->Clone();
                    //                    Res->Sumw2();
                } else {
                    Res->Add(cf);
                    //                    Res->Sumw2();
                }
            }

            out->cd();
            Res->Write();
        }
        out->Write();
        out->Close();
    }

    void printStructure() {
        for (unsigned int i = 0; i < structure.size(); i++) {
            cout << "Part " << i << ", " << structure.at(i).mainName << endl;
            for (unsigned int j = 0; j < structure.at(i).content.size(); j++) {
                cout << "\t" << structure.at(i).content.at(j) << endl;
            }
        }
        for (unsigned int i = 0; i < directHists.size(); i++) {
            cout << "Hist " << i << ", " << directHists.at(i) << endl;
        }

    }
    bool doProjection;
private:
    vector<FolderContent> structure;
    vector<string> directHists;
    //    double Lumi;
    bool doPrint;
    bool dataDrivenQCD;
};


#endif	/* HISTOGRAMADDER_H */

