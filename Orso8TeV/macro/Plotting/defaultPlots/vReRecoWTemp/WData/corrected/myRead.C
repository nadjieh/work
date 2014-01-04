#include <iostream>
#include <fstream>
#include <string>
using namespace std;
string settitles(string s){
	string ret="";
	if(s == string("allW_BJet_Pt"))
		ret = string("p_{T}^{b-jets} (GeV)");
	if(s == string("Default_allWcosTheta"))
		ret = string("cos(#theta_{l}*)");
	if(s == string("allW_Muon_Pt"))
		ret = string("p_{T}^{l}");
	if(s == string("EtaFwD_allWcosTheta"))
		ret = string("cos(#theta_{l}*)");
	if(s == string("allW_FwD_Eta"))
		ret = string("#eta_{jet}^{FwD}");
	if(s == string("allW_Jet_Pt"))
		ret = string("p_{T}^{jets} (GeV)");
	if(s == string("allW_finalMT"))
		ret = string("m_{T}^{W} (GeV)");
	if(s == string("allW_Met_Pt"))
		ret = string("E_{T}^{miss} (GeV)");
	if(s == string("Default_allW_topMass"))
		ret = string("m_{lb#nu} (GeV)");
	return ret;
}
string setYtitles(string s){
	string ret=string("Events @ 19.4 fb^{-1}");
	if(s == string("allW_Jet_Pt"))
		ret = string("Jets @ 19.4 fb^{-1}");
	return ret;
}
string getlegend(){
  string leg = "   TLegend *leg = new TLegend(0.1516667,0.63,0.4983333,0.9516667,NULL,\"brNDC\");\n";
  leg+="   leg->SetBorderSize(0);\n";
  leg+="   leg->SetTextFont(62);\n";
  leg+="   leg->SetTextSize(0.03);\n";
  leg+="   leg->SetLineColor(1);\n";
  leg+="   leg->SetLineStyle(1);\n";
  leg+="   leg->SetLineWidth(1);\n";
  leg+="   leg->SetFillColor(0);\n";
  leg+="   leg->SetFillStyle(1001);\n";
  leg+="   TLegendEntry *entry=leg->AddEntry(\"\",\"data\",\"lpf\");\n";
  leg+="   entry->SetFillStyle(1001);\n";
  leg+="   entry->SetLineColor(1);\n";
  leg+="   entry->SetLineStyle(1);\n";
  leg+="   entry->SetLineWidth(1);\n";
  leg+="   entry->SetMarkerColor(1);\n";
  leg+="   entry->SetMarkerStyle(20);\n";
  leg+="   entry->SetMarkerSize(1);\n";
  leg+="   entry=leg->AddEntry(\"\",\"t-channel\",\"lpf\");\n";
  leg+="   entry->SetFillColor(2);\n";
  leg+="   entry->SetFillStyle(1001);\n";
  leg+="   entry->SetLineColor(2);\n";
  leg+="   entry->SetLineStyle(1);\n";
  leg+="   entry->SetLineWidth(1);\n";
  leg+="   entry->SetMarkerColor(2);\n";
  leg+="   entry->SetMarkerStyle(1);\n";
  leg+="   entry->SetMarkerSize(1);\n";
  leg+="   entry=leg->AddEntry(\"\",\"tW-channel\",\"lpf\");\n";

  leg+="   ci = TColor::GetColor(\"#ffcc00\");\n";
  leg+="   entry->SetFillColor(ci);\n";
  leg+="   entry->SetFillStyle(1001);\n";

  leg+="   ci = TColor::GetColor(\"#ffcc00\");\n";
  leg+="   entry->SetLineColor(ci);\n";
  leg+="   entry->SetLineStyle(1);\n";
  leg+="   entry->SetLineWidth(1);\n";
  leg+="   entry->SetMarkerColor(ci);\n";
  leg+="   entry->SetMarkerStyle(1);\n";
  leg+="   entry->SetMarkerSize(1);\n";
  leg+="   entry=leg->AddEntry(\"\",\"s-channel\",\"lpf\");\n";
  leg+="   entry->SetFillColor(5);\n";
  leg+="   entry->SetFillStyle(1001);\n";
  leg+="   entry->SetLineColor(5);\n";
  leg+="   entry->SetLineStyle(1);\n";
  leg+="   entry->SetLineWidth(1);\n";
  leg+="   entry->SetMarkerColor(5);\n";
  leg+="   entry->SetMarkerStyle(1);\n";
  leg+="   entry->SetMarkerSize(1);\n";
  leg+="   entry=leg->AddEntry(\"\",\"t#bar{t}\",\"lpf\");\n";

  leg+="   ci = TColor::GetColor(\"#cc33cc\");\n";
  leg+="   entry->SetFillColor(ci);\n";
  leg+="   entry->SetFillStyle(1001);\n";

  leg+="   ci = TColor::GetColor(\"#cc33cc\");\n";
  leg+="   entry->SetLineColor(ci);\n";
  leg+="   entry->SetLineStyle(1);\n";
  leg+="   entry->SetLineWidth(1);\n";
  leg+="   entry->SetMarkerColor(ci);\n";
  leg+="   entry->SetMarkerStyle(1);\n";
  leg+="   entry->SetMarkerSize(1);\n";
  leg+="   entry=leg->AddEntry(\"\",\"W+Jets\",\"lpf\");\n";

  leg+="   ci = TColor::GetColor(\"#0033ff\");\n";
  leg+="   entry->SetFillColor(ci);\n";
  leg+="   entry->SetFillStyle(1001);\n";

  leg+="   ci = TColor::GetColor(\"#0033ff\");\n";
  leg+="   entry->SetLineColor(ci);\n";
  leg+="   entry->SetLineStyle(1);\n";
  leg+="   entry->SetLineWidth(1);\n";
  leg+="   entry->SetMarkerColor(ci);\n";
  leg+="   entry->SetMarkerStyle(1);\n";
  leg+="   entry->SetMarkerSize(1);\n";
  leg+="   entry=leg->AddEntry(\"\",\"#gamma^{*}/Z+Jets\",\"lpf\");\n";

  leg+="   ci = TColor::GetColor(\"#00cc00\");\n";
  leg+="   entry->SetFillColor(ci);\n";
  leg+="   entry->SetFillStyle(1001);\n";

  leg+="   ci = TColor::GetColor(\"#00cc00\");\n";
  leg+="   entry->SetLineColor(ci);\n";
  leg+="   entry->SetLineStyle(1);\n";
  leg+="   entry->SetLineWidth(1);\n";
  leg+="   entry->SetMarkerColor(ci);\n";
  leg+="   entry->SetMarkerStyle(1);\n";
  leg+="   entry->SetMarkerSize(1);\n";
  leg+="   entry=leg->AddEntry(\"\",\"QCD\",\"lpf\");\n";

  leg+="   ci = TColor::GetColor(\"#663300\");\n";
  leg+="   entry->SetFillColor(kGray);\n";
  leg+="   entry->SetFillStyle(1001);\n";

  leg+="   ci = TColor::GetColor(\"#663300\");\n";
  leg+="   entry->SetLineColor(kGray);\n";
  leg+="   entry->SetLineStyle(1);\n";
  leg+="   entry->SetLineWidth(1);\n";
  leg+="   entry->SetMarkerColor(kGray);\n";
  leg+="   entry->SetMarkerStyle(1);\n";
  leg+="   entry->SetMarkerSize(1);\n";

  leg+="   entry=leg->AddEntry(\"NULL\",\"Stat. Unc.\",\"f\");\n";
  leg+="   entry->SetFillColor(1);\n";
  leg+="   entry->SetFillStyle(3004);\n";
  leg+="   ci = TColor::GetColor(\"#000099\");\n";
  leg+="   entry->SetLineColor(1);\n";
  leg+="   entry->SetLineStyle(1);\n";
  leg+="   entry->SetLineWidth(1);\n";
  leg+="   entry->SetMarkerColor(1);\n";
  leg+="   entry->SetMarkerStyle(1);\n";
  leg+="   entry->SetMarkerSize(0);\n";
  leg+="   entry->SetMarkerSize(0);\n";

  leg+="   leg->Draw();\n";
  leg+="   TLatex *   tex = new TLatex(0.27,0.9684385,\"CMS preliminary, 19.4 fb^{-1} at #sqrt{s} = 8 TeV\");\n";
  leg+="   tex->SetNDC();\n";
  leg+="   tex->SetTextSize(0.03156146);\n";
  leg+="   tex->SetLineWidth(2);\n";
  leg+="   tex->Draw();\n";

  leg+="   c->Modified();\n";
  leg+="   c->cd();\n";
  leg+="   c->SetSelected(c);\n}\n";

 return leg;
}

void myRead(string s,string name) {//"bpt_Ele.C" 
  string line;
  string preline;
  ifstream myfile (name.c_str());
  ofstream myfileOUT ((string("tmp/")+name).c_str());
  int iLine = 0;
  //string s = "allW_BJet_Pt";
  string q = "\"\"";
  string myLine = string("   ")+s+string("->Add(")+s+string(",")+q+string(");");
  cout<<"---- "<<myLine<<endl;
  string errName = "Draw(\"PE1sames\");";
  if (myfile.is_open())
  {
    while ( myfile.good() )
    {
	  
      preline = line;
      getline (myfile,line);
      if(string(line) == ("   TLatex *   tex = new TLatex(0.27,0.9684385,\"CMS preliminary, 19.4 fb^{-1} at #sqrt{s} = 8 TeV\");")){
	   myfileOUT<<"   TLatex *   tex = new TLatex(0.27,0.9684385,\"CMS preliminary, 19.8 fb^{-1} at #sqrt{s} = 8 TeV\");\n";
	   iLine++;
	   continue;
      } else if (string(line).find("->GetYaxis()->SetTitle(\"Events @ 19.4 fb^{-1}\");") > 0 && string(line).find("->GetYaxis()->SetTitle(\"Events @ 19.4 fb^{-1}\");") <  string(line).size()){
		int pos = string(line).find("->GetYaxis()->SetTitle(\"Events @ 19.4 fb^{-1}\");");
	    myfileOUT<<string(line).substr(0,pos)<<"->GetYaxis()->SetTitle(\"Events @ 19.8 fb^{-1}\");\n";
	    iLine++;
	    continue;
      } else {
		myfileOUT<<line<<endl;
	  }
	  iLine++;
    }
    myfile.close();
    myfileOUT<<"\n"<<getlegend()<<endl;

    myfileOUT.close();
  }

  else cout << "Unable to open file"; 

}




void doJob(){

	//myRead("allW_BJet_Pt","bpt_Ele.C");
	//myRead("allW_BJet_Pt","bpt_Mu.C");
	//myRead("Default_allWcosTheta","cosTheta_Ele.C");
	//myRead("Default_allWcosTheta","cosTheta_Mu.C");
//	myRead("allW_Muon_Pt","ept_Ele.C");
//	myRead("allW_Muon_Pt","mupt_Mu.C");
	//myRead("EtaFwD_allWcosTheta","EtaCosTheta_Ele.C");
	//myRead("EtaFwD_allWcosTheta","EtaCosTheta_Mu.C");
	myRead("allW_FwD_Eta","fwdeta_Ele.C");
	myRead("allW_FwD_Eta","fwdeta_Mu.C");
	/*myRead("allW_Jet_Pt","jetpt_Ele.C");
	myRead("allW_Jet_Pt","jetpt_Mu.C");
	myRead("allW_finalMT","mt_Ele.C");
	myRead("allW_Met_Pt","met_Mu.C");
	myRead("Default_allW_topMass","mtop_Ele.C");
	myRead("Default_allW_topMass","mtop_Mu.C");*/
}
