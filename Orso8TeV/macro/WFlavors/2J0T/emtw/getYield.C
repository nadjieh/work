{
TFile *_file0 = TFile::Open("TreesEle_bDownWTemplateDefault_plots.root");
TFile *_file1 = TFile::Open("TreesEle_bUpWTemplateDefault_plots.root");
TFile *_file2 = TFile::Open("TreesEle_cDownWTemplateDefault_plots.root");
TFile *_file3 = TFile::Open("TreesEle_cUpWTemplateDefault_plots.root");
double n0 = ((TH1D*)_file0->Get("Default_Def/Default_DefcosTheta"))->Integral();
double n1 = ((TH1D*)_file1->Get("Default_Def/Default_DefcosTheta"))->Integral();
double n2 = ((TH1D*)_file2->Get("Default_Def/Default_DefcosTheta"))->Integral();
double n3 = ((TH1D*)_file3->Get("Default_Def/Default_DefcosTheta"))->Integral();

double N = 20286.947;

cout<<"		 - bDownWTemplate: beta = "<<N<<"/"<<n0<<" = "<< N/n0 <<endl;
cout<<"		 - bUpWTemplate: beta = "<<N<<"/"<<n1<<" = "<< N/n1 <<endl;
cout<<"		 - cDownWTemplate: beta = "<<N<<"/"<<n2<<" = "<< N/n2 <<endl;
cout<<"		 - cUpWTemplate: beta = "<<N<<"/"<<n3<<" = "<< N/n3 <<endl;

}
