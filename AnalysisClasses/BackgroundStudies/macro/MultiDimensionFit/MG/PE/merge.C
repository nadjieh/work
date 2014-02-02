// basic file operations
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
using namespace std;
void FirstPart(fstream & f){
	string include = "#include <";
	string h = ".h>\n";
	stringstream s;
	s.str("");
	s << include << "TH1" << h;
	s << include << "TFile" << h;
	s <<"void myFill(){"<<endl;
	s <<"\tTH1D* F0 = new TH1D(\"FZero\", \"FZero\", 2000, -0.5, 1.5);\n";
	s <<"\tTH1D* FNeg = new TH1D(\"FL\", \"FL\", 2000, -0.5, 1.5);\n";
	s <<"\tTH1D* FPos = new TH1D(\"FR\", \"FR\", 2000, -0.5, 1.5);\n";
	f << s.str();
}
void LastPart(fstream & f){
	stringstream s;
	s.str("");
	s << "\tTFile * f = new TFile(\"hists.root\",\"recreate\");\n";
	s << "\tf->cd();\n";
	s << "\tF0->Write();\n";
	s << "\tFNeg->Write();\n";
	s << "\tFPos->Write();\n";
	s << "\tf->Write();\n";
	s << "\tf->Close();\n}\n";
	f << s.str();
}
int main () {
  fstream outFile("histogram.C",ios::out);
  FirstPart(outFile);
	stringstream name;
	char myChar[2000];
  for(int i = 1; i < 101; i++){ 	
  	name.str("");
  	name<<"./mujet_100bin_"<<i<<".txt";
  	cout << name.str() <<endl;
  	int lineNumber = 0;
  	fstream inFile(name.str().c_str(),ios::in);
  	cout<< inFile.is_open()<<endl;
   	while ( !inFile.eof() ){
   	  lineNumber++;
      inFile.getline(myChar,2000);
	    string line = string(myChar);
			unsigned int pos = line.find("FNeg->Fill(");
				if(pos > 0 && pos < line.size()){
					outFile <<"\t"<< line << "\n";
			}
   	}
    inFile.close();	
	}
  LastPart(outFile);
 	outFile.close();
 	return 0;
}




