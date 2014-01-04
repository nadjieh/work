#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void myRead(string name) {//"bpt_Ele.C" 
  string line;
  string preline;
  ifstream myfile (name.c_str());
  ofstream myfileOUT ((string("run_")+name).c_str());
  int iLine = 0;
  string errName = "Draw(\"PE1sames\");";
  if (myfile.is_open())
  {
    while ( myfile.good() )
    {

        getline (myfile,line);
		iLine++;
		if(line.find("//") < line.size() || line == string(""))
			continue;

	   myfileOUT<<line<<" ";
	   
    }
    myfile.close();
    myfileOUT.close();
  }

  else cout << "Unable to open file"; 

}




void doJob(){
	myRead("ddMuESystLuca10.sh");
	//myRead("mgMuESystLuca100.sh");
}
