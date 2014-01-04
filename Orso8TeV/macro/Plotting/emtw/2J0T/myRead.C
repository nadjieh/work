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

void myRead(string s,string name, double scale = 1.) {//"bpt_Ele.C" 
  string line;
  string preline;
  ifstream myfile (name.c_str());
  ofstream myfileOUT ((string("corrected/")+name).c_str());
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
	  if(iLine > 2 && iLine < 11){
        cout<<"HERS"<<endl;
        getline (myfile,line);
		iLine++;
		continue;
      }
	  if(iLine == 11){
	   myfileOUT<<"   TCanvas *c = new TCanvas(\"c\", \"c\",140,82,604,628);\n";
   	   myfileOUT<<"   c->Range(-1.275862,-45.98206,1.022989,434.2249);\n";
   	   myfileOUT<<"   c->SetFillColor(0);\n";
   	   myfileOUT<<"   c->SetBorderMode(0);\n";
  	   myfileOUT<<"   c->SetBorderSize(2);\n";
  	   myfileOUT<<"   c->SetLeftMargin(0.12);\n";
  	   myfileOUT<<"   c->SetRightMargin(0.01);\n";
  	   myfileOUT<<"   c->SetTopMargin(0.04);\n";
  	   myfileOUT<<"   c->SetFrameBorderMode(0);\n";
  	   myfileOUT<<"   c->SetFrameBorderMode(0);\n";
       iLine++;
	   continue;
	  }

      preline = line;
      getline (myfile,line);
      if(string(line) == ("   THStack *"+s+" = new THStack();")){
	   myfileOUT<<"   THStack *"+s+"Stack = new THStack();\n";
	   iLine++;
	   continue;
      }
	  if(string(line).find("   TH1F *"+s) == 0 ){
		myfileOUT<<line<<endl;
		int pos = string(line).find("=");
		string myStr =  string(line).substr(9, pos-10);
		myfileOUT<<"   "<<myStr<<"->GetXaxis()->SetTitle(\""<<settitles(s)<<"\");"<<endl;
		myfileOUT<<"   "<<myStr<<"->GetYaxis()->SetTitle(\""<<setYtitles(s)<<"\");"<<endl;
	   iLine++;
	   continue;
	  }
      if(string(line) == ("   "+s+"->SetName(\""+s+"\");")){
	   myfileOUT<<"   "+s+"Stack->SetName(\""+s+"Stack\");\n";
	   iLine++;
	   continue;
      }
      if(string(line) == ("   "+s+"->Draw(\"\");")){  
	    myfileOUT<<"   for(int i = 0; i< "<<s<<"Stack->GetStack()->GetSize(); i++){\n";
	    myfileOUT<<"      ((TH1*)"<<s<<"Stack->GetStack()->At(i))->Scale("<<scale<<");\n   }\n";
        myfileOUT<<"   "+s+"Stack->Draw(\"\");\n";
	    iLine++;
	    continue;
      }
      if(string(line) == ("   "+s+"->Draw(\"E2SAME\");")){  
	    myfileOUT<<"   "<<s<<"->Scale("<<scale<<");\n";
	    myfileOUT<<"   "+s+"->Draw(\"E2SAME\");\n";
	    iLine++;
	    continue;
      }
      if(string(line).find("SetHistogram(") != 0 && string(line).find("SetHistogram(") < string(line).size()){
		int pos = preline.find("->GetZaxis()");
		string myStr = preline.substr(3, pos-3);
		cout<<myStr<<endl;
		myfileOUT<<"   "+s+"Stack->SetHistogram("+myStr+");\n";
	   iLine++;
	   continue;
      }
      if(string(line) == ("   "+s+"->SetTitle(\""+s+"\");")){
	   iLine++;
	   continue;
      }
      if(string(line) == ("   "+s+"->Modified();") || string(line) == ("   "+s+"->cd();") || 
      string(line) == ("   "+s+"->SetSelected("+s+");")){   
	   iLine++;
	   continue;
      }
      if(string(line) == ("}")){
	   iLine++;
	   continue;
      }
	  if(string(line) == myLine){
      	cout <<"before: " <<line << endl;
		int pos = preline.find("__");
		int len = preline.find("-");
		string myStr = preline.substr(pos,len-pos);
     	cout <<"after: " << string("   ")+s+string("->Add(")+s+myStr+string(",")+q+string(");")<< endl;
		myfileOUT <<string("   ")+s+string("Stack->Add(")+s+myStr+string(",")+q+string(");")<< endl;
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
//	double scale = 1.09331;
	double scale = 381908./393285.;
	myRead("DefaultTrue_allWcosTheta","cosTheta_true.C",scale);
//	myRead("Default_allWcosTheta","Mu_cosTheta_2j0tag.C",scale);
//	myRead("allW_Muon_Pt","Ele_ept_2j0t.C",scale);
//	myRead("allW_Muon_Pt","Mu_ept_2j0t.C",scale);
//	myRead("allW_FwD_Eta","Ele_etafwd_2j0t.C",scale);
//	myRead("allW_FwD_Eta","Mu_etafwd_2j0t.C",scale);
//	myRead("allW_Jet_Pt","Ele_jetpt_2j0t.C",scale);
//	myRead("allW_Jet_Pt","Mu_jetpt_2j0t.C",scale);
//	myRead("allW_finalMT","Ele_mt_2j0t.C",scale);
//	myRead("allW_Met_Pt","Mu_met_2j0t.C",scale);
//	myRead("Default_allW_topMass","Ele_mtop_2j0t.C",scale);
//	myRead("Default_allW_topMass","Mu_mtop_2j0t.C",scale);
}

