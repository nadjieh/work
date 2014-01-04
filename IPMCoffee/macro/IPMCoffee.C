/* 
 * File:   OrsoHistogramCreator.C
 * Author: nadjieh
 *
 * Created on October 12, 2012, 12:34 PM
 */

#include "TDirectory.h"

#include "../interface/CoffeeInfo.h"



#include <sstream>
#include <iostream>
#include <string>

#include <TApplication.h>
#include <TFile.h>
#include <TH1.h>
#include <TH2.h>
#include <TCanvas.h>
#include <TBranch.h>
#include <TTree.h>
#include <TRandom.h>
#include <TRandom3.h>
#include <TSystem.h>
#include <vector>

using namespace std;

int main(int argc, char** argv) {
    std::vector<CoffeeInfo*> inputs;

    for (int f = 1; f < argc; f++) {
        std::string arg_fth(*(argv + f));
        if (arg_fth == "position") {
            f++;
            std::string in(*(argv + f));
            inputs.push_back(new CoffeeInfo());
            inputs[inputs.size() - 1]->SetPosition(in);
            cout<<"position: "<<inputs[inputs.size() - 1]->GetPosition()<<endl;
        } else if (arg_fth == "feed") {
            f++;
            std::string in(*(argv + f));
            inputs[inputs.size() - 1]->SetFeed(atof(in.c_str()));
            cout<<"feed: "<<inputs[inputs.size() - 1]->GetFeed()<<endl;

        } else if (arg_fth == "Ulimit") {
            f++;
            std::string in(*(argv + f));
            inputs[inputs.size() - 1]->SetUpLim(atof(in.c_str()));
            inputs[inputs.size() - 1]->SetLowLim(atof(in.c_str()));
            cout<<"UL: "<<inputs[inputs.size() - 1]->GetUpLim()<<endl;
            cout<<"LL: "<<inputs[inputs.size() - 1]->GetLowLim()<<endl;
        } else if (arg_fth == "Llimit") {
            f++;
            std::string in(*(argv + f));
            inputs[inputs.size() - 1]->SetLowLim(atof(in.c_str()));
            cout<<"LL2: "<<inputs[inputs.size() - 1]->GetLowLim()<<endl;

        } else if (arg_fth == "cont") {
            f++;
            std::string in(*(argv + f));
            inputs[inputs.size() - 1]->SetCont(atof(in.c_str()));
            cout<<"cont: "<<inputs[inputs.size() - 1]->GetCont()<<endl;

        } else if (arg_fth == "age") {
            f++;
            std::string in(*(argv + f));
            inputs[inputs.size() - 1]->SetAge(atof(in.c_str()));
            cout<<"age: "<<inputs[inputs.size() - 1]->GetAge()<<endl;

        } else if (arg_fth == "group") {
            f++;
            std::string in(*(argv + f));
            inputs[inputs.size() - 1]->SetGroup(in);
        }
    }
    int uSum = 0;
    int lSum = 0;
    int nStaff = 0;
    int nStudent = 0;
    int nPostDoc = 0;
    TH1D * price = new TH1D("price", "price", 120, 0, 600);
    price->GetXaxis()->SetTitle("maximum payement");

    TH2D * price_feed = new TH2D("price_feed", "price_feed", 120, 0, 600, 4, -1.5, 2.5);
    price_feed->GetYaxis()->SetBinLabel(1, "negative");
    price_feed->GetYaxis()->SetBinLabel(2, "positive");
    price_feed->GetYaxis()->SetBinLabel(3, "v. positive");
    price_feed->GetYaxis()->SetBinLabel(4, "occ. user");
    price_feed->GetXaxis()->SetTitle("maximum payement");

    TH2D * price_position = new TH2D("price_position", "price_position", 120, 0, 600, 3, 0, 3);
    price_position->GetYaxis()->SetBinLabel(1, "Staff");
    price_position->GetYaxis()->SetBinLabel(2, "Postdoc");
    price_position->GetYaxis()->SetBinLabel(3, "Student");
    price_position->GetXaxis()->SetTitle("maximum payement");

    TH2D * price_age = new TH2D("price_age", "price_age", 120, 0, 600, 2, -0.5, 1.5);
    price_age->GetYaxis()->SetBinLabel(1, "[30,35]");
    price_age->GetYaxis()->SetBinLabel(2, "> 35");
    price_age->GetXaxis()->SetTitle("maximum payement");

    TH2D * cont_feed = new TH2D("cont_feed", "cont_feed", 4, 0, 4, 4, -1.5, 2.5);
    cont_feed->GetXaxis()->SetBinLabel(1, "no contribution");
    cont_feed->GetXaxis()->SetBinLabel(1, "Coffee");
    cont_feed->GetXaxis()->SetBinLabel(3, "System");
    cont_feed->GetXaxis()->SetBinLabel(4, "Both");
    cont_feed->GetYaxis()->SetBinLabel(1, "negative");
    cont_feed->GetYaxis()->SetBinLabel(2, "positive");
    cont_feed->GetYaxis()->SetBinLabel(3, "v. positive");
    cont_feed->GetYaxis()->SetBinLabel(4, "occ. user");

    TH2D * feed_age = new TH2D("feed_age", "feed_age", 4, -1.5, 2.5, 2, -0.5, 1.5);
    feed_age->GetXaxis()->SetBinLabel(1, "negative");
    feed_age->GetXaxis()->SetBinLabel(2, "positive");
    feed_age->GetXaxis()->SetBinLabel(3, "v. positive");
    feed_age->GetXaxis()->SetBinLabel(4, "occ. user");
    feed_age->GetYaxis()->SetBinLabel(1, "[30,35]");
    feed_age->GetYaxis()->SetBinLabel(2, "> 35");
    for (int i = 0; i < inputs.size(); i++) {
        uSum += inputs.at(i)->GetUpLim();
        lSum += inputs.at(i)->GetLowLim();
        price->Fill(inputs.at(i)->GetUpLim());
        price_age->Fill(inputs.at(i)->GetUpLim(), inputs.at(i)->GetAge());
        price_feed->Fill(inputs.at(i)->GetUpLim(), inputs.at(i)->GetFeed());
        cont_feed->Fill(inputs.at(i)->GetCont(), inputs.at(i)->GetFeed());
        feed_age->Fill(inputs.at(i)->GetFeed(), inputs.at(i)->GetAge());
        if (inputs.at(i)->GetPosition() == "Staff") {
            price_position->Fill(inputs.at(i)->GetUpLim(), 0);
            nStaff += 1;
        } else if (inputs.at(i)->GetPosition() == "PostDoc") {
            price_position->Fill(inputs.at(i)->GetUpLim(), 1);
            nPostDoc += 1;
        } else if (inputs.at(i)->GetPosition() == "Student") {
            price_position->Fill(inputs.at(i)->GetUpLim(), 2);
            nStudent += 1;
        }
    }
    cout << "Number of participants: " << inputs.size() << endl;
    cout << "Staffs: " << nStaff << ", PostDocs: " << nPostDoc << ", Students: " << nStudent << endl;
    cout << "Based on the current numbers we have:" << endl;
    cout << "\tMaximum expected contribution in IRR:" << uSum * 10 << endl;
    cout << "\tMinimum expected contribution in IRR:" << lSum * 10 << endl;
    cout << "Note that the maximum value could be enhanced since some of the\n"
            << "contributors did not specify the value or gave only the lower\nlimit of their contribution" << endl;

    TFile * fout = new TFile("coffee.root", "recreate");
    fout->cd();
    price->Write();
    price_age->Write();
    price_feed->Write();
    price_position->Write();
    cont_feed->Write();
    feed_age->Write();
    fout->Write();
    fout->Close();


    return 0;
}

