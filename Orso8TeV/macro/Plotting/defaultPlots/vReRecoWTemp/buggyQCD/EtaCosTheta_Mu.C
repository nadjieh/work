{
//=========Macro generated from canvas: EtaFwD_allWcosTheta/c1
//=========  (Sat Aug  3 22:43:21 2013) by ROOT version5.32/00
   TCanvas *EtaFwD_allWcosTheta = new TCanvas("EtaFwD_allWcosTheta", "c1",541,101,700,502);
   EtaFwD_allWcosTheta->SetHighLightColor(2);
   EtaFwD_allWcosTheta->Range(-1.25,-189.5978,1.25,1706.38);
   EtaFwD_allWcosTheta->SetFillColor(0);
   EtaFwD_allWcosTheta->SetBorderMode(0);
   EtaFwD_allWcosTheta->SetBorderSize(2);
   EtaFwD_allWcosTheta->SetFrameBorderMode(0);
   EtaFwD_allWcosTheta->SetFrameBorderMode(0);
   
   THStack *EtaFwD_allWcosTheta = new THStack();
   EtaFwD_allWcosTheta->SetName("EtaFwD_allWcosTheta");
   EtaFwD_allWcosTheta->SetTitle("EtaFwD_allWcosTheta");
   
   TH1F *EtaFwD_allWcosTheta_stack_16 = new TH1F("EtaFwD_allWcosTheta_stack_16","EtaFwD_allWcosTheta",20,-1,1);
   EtaFwD_allWcosTheta_stack_16->SetMinimum(0);
   EtaFwD_allWcosTheta_stack_16->SetMaximum(1516.782);
   EtaFwD_allWcosTheta_stack_16->SetDirectory(0);
   EtaFwD_allWcosTheta_stack_16->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   EtaFwD_allWcosTheta_stack_16->SetLineColor(ci);
   EtaFwD_allWcosTheta_stack_16->GetXaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta_stack_16->GetXaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta_stack_16->GetXaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta_stack_16->GetXaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta_stack_16->GetYaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta_stack_16->GetYaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta_stack_16->GetYaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta_stack_16->GetYaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta_stack_16->GetZaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta_stack_16->GetZaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta_stack_16->GetZaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta_stack_16->GetZaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta->SetHistogram(EtaFwD_allWcosTheta_stack_16);
   
   
   TH1D *EtaFwD_allWcosTheta__211 = new TH1D("EtaFwD_allWcosTheta__211","QCD",20,-1,1);
   EtaFwD_allWcosTheta__211->SetBinContent(1,8.275746);
   EtaFwD_allWcosTheta__211->SetBinContent(2,7.269236);
   EtaFwD_allWcosTheta__211->SetBinContent(3,7.045567);
   EtaFwD_allWcosTheta__211->SetBinContent(4,9.953262);
   EtaFwD_allWcosTheta__211->SetBinContent(5,13.6438);
   EtaFwD_allWcosTheta__211->SetBinContent(6,13.30829);
   EtaFwD_allWcosTheta__211->SetBinContent(7,16.43966);
   EtaFwD_allWcosTheta__211->SetBinContent(8,17.78167);
   EtaFwD_allWcosTheta__211->SetBinContent(9,15.54498);
   EtaFwD_allWcosTheta__211->SetBinContent(10,18.22901);
   EtaFwD_allWcosTheta__211->SetBinContent(11,21.80771);
   EtaFwD_allWcosTheta__211->SetBinContent(12,20.24203);
   EtaFwD_allWcosTheta__211->SetBinContent(13,19.23552);
   EtaFwD_allWcosTheta__211->SetBinContent(14,24.3799);
   EtaFwD_allWcosTheta__211->SetBinContent(15,26.61659);
   EtaFwD_allWcosTheta__211->SetBinContent(16,30.41896);
   EtaFwD_allWcosTheta__211->SetBinContent(17,38.80654);
   EtaFwD_allWcosTheta__211->SetBinContent(18,49.98998);
   EtaFwD_allWcosTheta__211->SetBinContent(19,57.93022);
   EtaFwD_allWcosTheta__211->SetBinContent(20,78.17225);
   EtaFwD_allWcosTheta__211->SetEntries(4427);
   EtaFwD_allWcosTheta__211->SetDirectory(0);
   EtaFwD_allWcosTheta__211->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   EtaFwD_allWcosTheta__211->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   EtaFwD_allWcosTheta__211->SetLineColor(ci);
   EtaFwD_allWcosTheta__211->GetXaxis()->SetTitle("cos(#theta*)");
   EtaFwD_allWcosTheta__211->GetXaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__211->GetXaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__211->GetXaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__211->GetXaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__211->GetYaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__211->GetYaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__211->GetYaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__211->GetYaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__211->GetZaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__211->GetZaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__211->GetZaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__211->GetZaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta->Add(EtaFwD_allWcosTheta,"");
   
   TH1D *EtaFwD_allWcosTheta__212 = new TH1D("EtaFwD_allWcosTheta__212","Z/gamma^{*}+jets",20,-1,1);
   EtaFwD_allWcosTheta__212->SetBinContent(1,29.87418);
   EtaFwD_allWcosTheta__212->SetBinContent(2,35.85145);
   EtaFwD_allWcosTheta__212->SetBinContent(3,19.67386);
   EtaFwD_allWcosTheta__212->SetBinContent(4,34.8045);
   EtaFwD_allWcosTheta__212->SetBinContent(5,38.97526);
   EtaFwD_allWcosTheta__212->SetBinContent(6,44.93248);
   EtaFwD_allWcosTheta__212->SetBinContent(7,12.40373);
   EtaFwD_allWcosTheta__212->SetBinContent(8,12.5351);
   EtaFwD_allWcosTheta__212->SetBinContent(9,71.28725);
   EtaFwD_allWcosTheta__212->SetBinContent(10,56.77723);
   EtaFwD_allWcosTheta__212->SetBinContent(11,35.91064);
   EtaFwD_allWcosTheta__212->SetBinContent(12,29.01167);
   EtaFwD_allWcosTheta__212->SetBinContent(13,88.56661);
   EtaFwD_allWcosTheta__212->SetBinContent(14,75.87923);
   EtaFwD_allWcosTheta__212->SetBinContent(15,63.24737);
   EtaFwD_allWcosTheta__212->SetBinContent(16,90.77125);
   EtaFwD_allWcosTheta__212->SetBinContent(17,46.41284);
   EtaFwD_allWcosTheta__212->SetBinContent(18,92.51586);
   EtaFwD_allWcosTheta__212->SetBinContent(19,71.88409);
   EtaFwD_allWcosTheta__212->SetBinContent(20,107.0776);
   EtaFwD_allWcosTheta__212->SetEntries(172);
   EtaFwD_allWcosTheta__212->SetDirectory(0);
   EtaFwD_allWcosTheta__212->SetStats(0);

   ci = TColor::GetColor("#00cc00");
   EtaFwD_allWcosTheta__212->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   EtaFwD_allWcosTheta__212->SetLineColor(ci);
   EtaFwD_allWcosTheta__212->GetXaxis()->SetTitle("cos(#theta*)");
   EtaFwD_allWcosTheta__212->GetXaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__212->GetXaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__212->GetXaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__212->GetXaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__212->GetYaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__212->GetYaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__212->GetYaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__212->GetYaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__212->GetZaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__212->GetZaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__212->GetZaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__212->GetZaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta->Add(EtaFwD_allWcosTheta,"");
   
   TH1D *EtaFwD_allWcosTheta__213 = new TH1D("EtaFwD_allWcosTheta__213","W+jets",20,-1,1);
   EtaFwD_allWcosTheta__213->SetBinContent(1,243.5131);
   EtaFwD_allWcosTheta__213->SetBinContent(2,263.1893);
   EtaFwD_allWcosTheta__213->SetBinContent(3,327.4665);
   EtaFwD_allWcosTheta__213->SetBinContent(4,364.0043);
   EtaFwD_allWcosTheta__213->SetBinContent(5,347.9102);
   EtaFwD_allWcosTheta__213->SetBinContent(6,400.0654);
   EtaFwD_allWcosTheta__213->SetBinContent(7,380.0533);
   EtaFwD_allWcosTheta__213->SetBinContent(8,369.7851);
   EtaFwD_allWcosTheta__213->SetBinContent(9,463.3687);
   EtaFwD_allWcosTheta__213->SetBinContent(10,476.0025);
   EtaFwD_allWcosTheta__213->SetBinContent(11,400.8179);
   EtaFwD_allWcosTheta__213->SetBinContent(12,409.4347);
   EtaFwD_allWcosTheta__213->SetBinContent(13,434.7259);
   EtaFwD_allWcosTheta__213->SetBinContent(14,437.1755);
   EtaFwD_allWcosTheta__213->SetBinContent(15,424.0017);
   EtaFwD_allWcosTheta__213->SetBinContent(16,430.0736);
   EtaFwD_allWcosTheta__213->SetBinContent(17,484.5101);
   EtaFwD_allWcosTheta__213->SetBinContent(18,429.6414);
   EtaFwD_allWcosTheta__213->SetBinContent(19,473.4026);
   EtaFwD_allWcosTheta__213->SetBinContent(20,461.2531);
   EtaFwD_allWcosTheta__213->SetEntries(7113);
   EtaFwD_allWcosTheta__213->SetDirectory(0);
   EtaFwD_allWcosTheta__213->SetStats(0);

   ci = TColor::GetColor("#0033ff");
   EtaFwD_allWcosTheta__213->SetFillColor(ci);

   ci = TColor::GetColor("#0033ff");
   EtaFwD_allWcosTheta__213->SetLineColor(ci);
   EtaFwD_allWcosTheta__213->GetXaxis()->SetTitle("cos(#theta*)");
   EtaFwD_allWcosTheta__213->GetXaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__213->GetXaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__213->GetXaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__213->GetXaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__213->GetYaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__213->GetYaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__213->GetYaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__213->GetYaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__213->GetZaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__213->GetZaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__213->GetZaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__213->GetZaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta->Add(EtaFwD_allWcosTheta,"");
   
   TH1D *EtaFwD_allWcosTheta__214 = new TH1D("EtaFwD_allWcosTheta__214","DiBoson",20,-1,1);
   EtaFwD_allWcosTheta__214->SetBinContent(1,4.149013);
   EtaFwD_allWcosTheta__214->SetBinContent(2,4.457087);
   EtaFwD_allWcosTheta__214->SetBinContent(3,6.153918);
   EtaFwD_allWcosTheta__214->SetBinContent(4,7.066738);
   EtaFwD_allWcosTheta__214->SetBinContent(5,4.956161);
   EtaFwD_allWcosTheta__214->SetBinContent(6,5.311181);
   EtaFwD_allWcosTheta__214->SetBinContent(7,6.906247);
   EtaFwD_allWcosTheta__214->SetBinContent(8,6.904717);
   EtaFwD_allWcosTheta__214->SetBinContent(9,4.91855);
   EtaFwD_allWcosTheta__214->SetBinContent(10,4.744845);
   EtaFwD_allWcosTheta__214->SetBinContent(11,5.822606);
   EtaFwD_allWcosTheta__214->SetBinContent(12,5.653195);
   EtaFwD_allWcosTheta__214->SetBinContent(13,5.217704);
   EtaFwD_allWcosTheta__214->SetBinContent(14,4.659883);
   EtaFwD_allWcosTheta__214->SetBinContent(15,3.967316);
   EtaFwD_allWcosTheta__214->SetBinContent(16,5.271788);
   EtaFwD_allWcosTheta__214->SetBinContent(17,4.398758);
   EtaFwD_allWcosTheta__214->SetBinContent(18,4.581261);
   EtaFwD_allWcosTheta__214->SetBinContent(19,4.365985);
   EtaFwD_allWcosTheta__214->SetBinContent(20,4.295085);
   EtaFwD_allWcosTheta__214->SetEntries(529);
   EtaFwD_allWcosTheta__214->SetDirectory(0);
   EtaFwD_allWcosTheta__214->SetStats(0);

   ci = TColor::GetColor("#00ffff");
   EtaFwD_allWcosTheta__214->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   EtaFwD_allWcosTheta__214->SetLineColor(ci);
   EtaFwD_allWcosTheta__214->GetXaxis()->SetTitle("cos(#theta*)");
   EtaFwD_allWcosTheta__214->GetXaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__214->GetXaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__214->GetXaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__214->GetXaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__214->GetYaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__214->GetYaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__214->GetYaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__214->GetYaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__214->GetZaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__214->GetZaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__214->GetZaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__214->GetZaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta->Add(EtaFwD_allWcosTheta,"");
   
   TH1D *EtaFwD_allWcosTheta__215 = new TH1D("EtaFwD_allWcosTheta__215","DiBoson",20,-1,1);
   EtaFwD_allWcosTheta__215->SetBinContent(1,0.3303467);
   EtaFwD_allWcosTheta__215->SetBinContent(2,0.3871234);
   EtaFwD_allWcosTheta__215->SetBinContent(3,0.4708548);
   EtaFwD_allWcosTheta__215->SetBinContent(4,0.3719545);
   EtaFwD_allWcosTheta__215->SetBinContent(5,0.4651334);
   EtaFwD_allWcosTheta__215->SetBinContent(6,0.6357462);
   EtaFwD_allWcosTheta__215->SetBinContent(7,0.5313872);
   EtaFwD_allWcosTheta__215->SetBinContent(8,0.4089227);
   EtaFwD_allWcosTheta__215->SetBinContent(9,0.3999439);
   EtaFwD_allWcosTheta__215->SetBinContent(10,0.4901321);
   EtaFwD_allWcosTheta__215->SetBinContent(11,0.7553286);
   EtaFwD_allWcosTheta__215->SetBinContent(12,0.6112758);
   EtaFwD_allWcosTheta__215->SetBinContent(13,0.3523783);
   EtaFwD_allWcosTheta__215->SetBinContent(14,0.7441007);
   EtaFwD_allWcosTheta__215->SetBinContent(15,0.63787);
   EtaFwD_allWcosTheta__215->SetBinContent(16,0.4288604);
   EtaFwD_allWcosTheta__215->SetBinContent(17,0.6000948);
   EtaFwD_allWcosTheta__215->SetBinContent(18,0.5341076);
   EtaFwD_allWcosTheta__215->SetBinContent(19,0.8965626);
   EtaFwD_allWcosTheta__215->SetBinContent(20,1.110807);
   EtaFwD_allWcosTheta__215->SetEntries(389);
   EtaFwD_allWcosTheta__215->SetDirectory(0);
   EtaFwD_allWcosTheta__215->SetStats(0);

   ci = TColor::GetColor("#00ffff");
   EtaFwD_allWcosTheta__215->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   EtaFwD_allWcosTheta__215->SetLineColor(ci);
   EtaFwD_allWcosTheta__215->GetXaxis()->SetTitle("cos(#theta*)");
   EtaFwD_allWcosTheta__215->GetXaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__215->GetXaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__215->GetXaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__215->GetXaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__215->GetYaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__215->GetYaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__215->GetYaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__215->GetYaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__215->GetZaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__215->GetZaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__215->GetZaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__215->GetZaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta->Add(EtaFwD_allWcosTheta,"");
   
   TH1D *EtaFwD_allWcosTheta__216 = new TH1D("EtaFwD_allWcosTheta__216","DiBoson",20,-1,1);
   EtaFwD_allWcosTheta__216->SetBinContent(1,3.610734);
   EtaFwD_allWcosTheta__216->SetBinContent(2,5.22501);
   EtaFwD_allWcosTheta__216->SetBinContent(3,5.128356);
   EtaFwD_allWcosTheta__216->SetBinContent(4,7.503066);
   EtaFwD_allWcosTheta__216->SetBinContent(5,6.856906);
   EtaFwD_allWcosTheta__216->SetBinContent(6,6.533324);
   EtaFwD_allWcosTheta__216->SetBinContent(7,8.545077);
   EtaFwD_allWcosTheta__216->SetBinContent(8,6.017635);
   EtaFwD_allWcosTheta__216->SetBinContent(9,8.032353);
   EtaFwD_allWcosTheta__216->SetBinContent(10,5.848);
   EtaFwD_allWcosTheta__216->SetBinContent(11,8.333538);
   EtaFwD_allWcosTheta__216->SetBinContent(12,8.425127);
   EtaFwD_allWcosTheta__216->SetBinContent(13,7.196331);
   EtaFwD_allWcosTheta__216->SetBinContent(14,5.943241);
   EtaFwD_allWcosTheta__216->SetBinContent(15,7.958178);
   EtaFwD_allWcosTheta__216->SetBinContent(16,7.233072);
   EtaFwD_allWcosTheta__216->SetBinContent(17,5.887524);
   EtaFwD_allWcosTheta__216->SetBinContent(18,6.605472);
   EtaFwD_allWcosTheta__216->SetBinContent(19,6.397856);
   EtaFwD_allWcosTheta__216->SetBinContent(20,5.633778);
   EtaFwD_allWcosTheta__216->SetEntries(1246);
   EtaFwD_allWcosTheta__216->SetDirectory(0);
   EtaFwD_allWcosTheta__216->SetStats(0);

   ci = TColor::GetColor("#00ffff");
   EtaFwD_allWcosTheta__216->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   EtaFwD_allWcosTheta__216->SetLineColor(ci);
   EtaFwD_allWcosTheta__216->GetXaxis()->SetTitle("cos(#theta*)");
   EtaFwD_allWcosTheta__216->GetXaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__216->GetXaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__216->GetXaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__216->GetXaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__216->GetYaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__216->GetYaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__216->GetYaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__216->GetYaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__216->GetZaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__216->GetZaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__216->GetZaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__216->GetZaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta->Add(EtaFwD_allWcosTheta,"");
   
   TH1D *EtaFwD_allWcosTheta__217 = new TH1D("EtaFwD_allWcosTheta__217","t#bar{t}",20,-1,1);
   EtaFwD_allWcosTheta__217->SetBinContent(1,635.3668);
   EtaFwD_allWcosTheta__217->SetBinContent(2,571.8371);
   EtaFwD_allWcosTheta__217->SetBinContent(3,597.1252);
   EtaFwD_allWcosTheta__217->SetBinContent(4,570.5289);
   EtaFwD_allWcosTheta__217->SetBinContent(5,553.8958);
   EtaFwD_allWcosTheta__217->SetBinContent(6,544.971);
   EtaFwD_allWcosTheta__217->SetBinContent(7,514.8523);
   EtaFwD_allWcosTheta__217->SetBinContent(8,488.9038);
   EtaFwD_allWcosTheta__217->SetBinContent(9,464.8347);
   EtaFwD_allWcosTheta__217->SetBinContent(10,419.8476);
   EtaFwD_allWcosTheta__217->SetBinContent(11,395.9919);
   EtaFwD_allWcosTheta__217->SetBinContent(12,364.1978);
   EtaFwD_allWcosTheta__217->SetBinContent(13,345.1981);
   EtaFwD_allWcosTheta__217->SetBinContent(14,323.3133);
   EtaFwD_allWcosTheta__217->SetBinContent(15,293.513);
   EtaFwD_allWcosTheta__217->SetBinContent(16,265.3761);
   EtaFwD_allWcosTheta__217->SetBinContent(17,242.4094);
   EtaFwD_allWcosTheta__217->SetBinContent(18,224.0826);
   EtaFwD_allWcosTheta__217->SetBinContent(19,206.5441);
   EtaFwD_allWcosTheta__217->SetBinContent(20,185.6519);
   EtaFwD_allWcosTheta__217->SetEntries(59420);
   EtaFwD_allWcosTheta__217->SetDirectory(0);
   EtaFwD_allWcosTheta__217->SetStats(0);

   ci = TColor::GetColor("#cc33cc");
   EtaFwD_allWcosTheta__217->SetFillColor(ci);

   ci = TColor::GetColor("#cc33cc");
   EtaFwD_allWcosTheta__217->SetLineColor(ci);
   EtaFwD_allWcosTheta__217->GetXaxis()->SetTitle("cos(#theta*)");
   EtaFwD_allWcosTheta__217->GetXaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__217->GetXaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__217->GetXaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__217->GetXaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__217->GetYaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__217->GetYaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__217->GetYaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__217->GetYaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__217->GetZaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__217->GetZaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__217->GetZaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__217->GetZaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta->Add(EtaFwD_allWcosTheta,"");
   
   TH1D *EtaFwD_allWcosTheta__218 = new TH1D("EtaFwD_allWcosTheta__218","s-channel",20,-1,1);
   EtaFwD_allWcosTheta__218->SetBinContent(1,7.380086);
   EtaFwD_allWcosTheta__218->SetBinContent(2,9.465343);
   EtaFwD_allWcosTheta__218->SetBinContent(3,10.36896);
   EtaFwD_allWcosTheta__218->SetBinContent(4,9.463719);
   EtaFwD_allWcosTheta__218->SetBinContent(5,8.952153);
   EtaFwD_allWcosTheta__218->SetBinContent(6,8.756086);
   EtaFwD_allWcosTheta__218->SetBinContent(7,8.058886);
   EtaFwD_allWcosTheta__218->SetBinContent(8,7.754623);
   EtaFwD_allWcosTheta__218->SetBinContent(9,7.261196);
   EtaFwD_allWcosTheta__218->SetBinContent(10,6.938255);
   EtaFwD_allWcosTheta__218->SetBinContent(11,5.774176);
   EtaFwD_allWcosTheta__218->SetBinContent(12,5.577009);
   EtaFwD_allWcosTheta__218->SetBinContent(13,5.138306);
   EtaFwD_allWcosTheta__218->SetBinContent(14,4.754911);
   EtaFwD_allWcosTheta__218->SetBinContent(15,4.413675);
   EtaFwD_allWcosTheta__218->SetBinContent(16,4.171062);
   EtaFwD_allWcosTheta__218->SetBinContent(17,3.84915);
   EtaFwD_allWcosTheta__218->SetBinContent(18,3.960945);
   EtaFwD_allWcosTheta__218->SetBinContent(19,3.57273);
   EtaFwD_allWcosTheta__218->SetBinContent(20,3.107766);
   EtaFwD_allWcosTheta__218->SetEntries(21893);
   EtaFwD_allWcosTheta__218->SetDirectory(0);
   EtaFwD_allWcosTheta__218->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   EtaFwD_allWcosTheta__218->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   EtaFwD_allWcosTheta__218->SetLineColor(ci);
   EtaFwD_allWcosTheta__218->GetXaxis()->SetTitle("cos(#theta*)");
   EtaFwD_allWcosTheta__218->GetXaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__218->GetXaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__218->GetXaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__218->GetXaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__218->GetYaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__218->GetYaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__218->GetYaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__218->GetYaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__218->GetZaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__218->GetZaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__218->GetZaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__218->GetZaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta->Add(EtaFwD_allWcosTheta,"");
   
   TH1D *EtaFwD_allWcosTheta__219 = new TH1D("EtaFwD_allWcosTheta__219","s-channel",20,-1,1);
   EtaFwD_allWcosTheta__219->SetBinContent(1,3.163529);
   EtaFwD_allWcosTheta__219->SetBinContent(2,3.877687);
   EtaFwD_allWcosTheta__219->SetBinContent(3,4.117273);
   EtaFwD_allWcosTheta__219->SetBinContent(4,4.0615);
   EtaFwD_allWcosTheta__219->SetBinContent(5,4.34433);
   EtaFwD_allWcosTheta__219->SetBinContent(6,3.855573);
   EtaFwD_allWcosTheta__219->SetBinContent(7,3.628174);
   EtaFwD_allWcosTheta__219->SetBinContent(8,3.904719);
   EtaFwD_allWcosTheta__219->SetBinContent(9,3.65994);
   EtaFwD_allWcosTheta__219->SetBinContent(10,3.453022);
   EtaFwD_allWcosTheta__219->SetBinContent(11,2.90625);
   EtaFwD_allWcosTheta__219->SetBinContent(12,2.411312);
   EtaFwD_allWcosTheta__219->SetBinContent(13,2.826104);
   EtaFwD_allWcosTheta__219->SetBinContent(14,2.438816);
   EtaFwD_allWcosTheta__219->SetBinContent(15,2.416323);
   EtaFwD_allWcosTheta__219->SetBinContent(16,1.922933);
   EtaFwD_allWcosTheta__219->SetBinContent(17,1.643114);
   EtaFwD_allWcosTheta__219->SetBinContent(18,1.647417);
   EtaFwD_allWcosTheta__219->SetBinContent(19,1.556537);
   EtaFwD_allWcosTheta__219->SetBinContent(20,1.193751);
   EtaFwD_allWcosTheta__219->SetEntries(11054);
   EtaFwD_allWcosTheta__219->SetDirectory(0);
   EtaFwD_allWcosTheta__219->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   EtaFwD_allWcosTheta__219->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   EtaFwD_allWcosTheta__219->SetLineColor(ci);
   EtaFwD_allWcosTheta__219->GetXaxis()->SetTitle("cos(#theta*)");
   EtaFwD_allWcosTheta__219->GetXaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__219->GetXaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__219->GetXaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__219->GetXaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__219->GetYaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__219->GetYaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__219->GetYaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__219->GetYaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__219->GetZaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__219->GetZaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__219->GetZaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__219->GetZaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta->Add(EtaFwD_allWcosTheta,"");
   
   TH1D *EtaFwD_allWcosTheta__220 = new TH1D("EtaFwD_allWcosTheta__220","tW-channel",20,-1,1);
   EtaFwD_allWcosTheta__220->SetBinContent(1,18.62069);
   EtaFwD_allWcosTheta__220->SetBinContent(2,24.85239);
   EtaFwD_allWcosTheta__220->SetBinContent(3,26.11395);
   EtaFwD_allWcosTheta__220->SetBinContent(4,31.37589);
   EtaFwD_allWcosTheta__220->SetBinContent(5,24.74807);
   EtaFwD_allWcosTheta__220->SetBinContent(6,29.0133);
   EtaFwD_allWcosTheta__220->SetBinContent(7,25.517);
   EtaFwD_allWcosTheta__220->SetBinContent(8,32.64506);
   EtaFwD_allWcosTheta__220->SetBinContent(9,25.33783);
   EtaFwD_allWcosTheta__220->SetBinContent(10,26.80221);
   EtaFwD_allWcosTheta__220->SetBinContent(11,22.74638);
   EtaFwD_allWcosTheta__220->SetBinContent(12,20.7077);
   EtaFwD_allWcosTheta__220->SetBinContent(13,25.76378);
   EtaFwD_allWcosTheta__220->SetBinContent(14,23.85603);
   EtaFwD_allWcosTheta__220->SetBinContent(15,16.3545);
   EtaFwD_allWcosTheta__220->SetBinContent(16,21.94487);
   EtaFwD_allWcosTheta__220->SetBinContent(17,19.06125);
   EtaFwD_allWcosTheta__220->SetBinContent(18,22.77444);
   EtaFwD_allWcosTheta__220->SetBinContent(19,18.63916);
   EtaFwD_allWcosTheta__220->SetBinContent(20,17.04746);
   EtaFwD_allWcosTheta__220->SetEntries(1155);
   EtaFwD_allWcosTheta__220->SetDirectory(0);
   EtaFwD_allWcosTheta__220->SetStats(0);

   ci = TColor::GetColor("#ffcc00");
   EtaFwD_allWcosTheta__220->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   EtaFwD_allWcosTheta__220->SetLineColor(ci);
   EtaFwD_allWcosTheta__220->GetXaxis()->SetTitle("cos(#theta*)");
   EtaFwD_allWcosTheta__220->GetXaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__220->GetXaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__220->GetXaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__220->GetXaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__220->GetYaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__220->GetYaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__220->GetYaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__220->GetYaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__220->GetZaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__220->GetZaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__220->GetZaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__220->GetZaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta->Add(EtaFwD_allWcosTheta,"");
   
   TH1D *EtaFwD_allWcosTheta__221 = new TH1D("EtaFwD_allWcosTheta__221","tW-channel",20,-1,1);
   EtaFwD_allWcosTheta__221->SetBinContent(1,23.76938);
   EtaFwD_allWcosTheta__221->SetBinContent(2,17.65874);
   EtaFwD_allWcosTheta__221->SetBinContent(3,24.00055);
   EtaFwD_allWcosTheta__221->SetBinContent(4,31.41314);
   EtaFwD_allWcosTheta__221->SetBinContent(5,24.93052);
   EtaFwD_allWcosTheta__221->SetBinContent(6,25.41634);
   EtaFwD_allWcosTheta__221->SetBinContent(7,26.95025);
   EtaFwD_allWcosTheta__221->SetBinContent(8,21.1058);
   EtaFwD_allWcosTheta__221->SetBinContent(9,32.60031);
   EtaFwD_allWcosTheta__221->SetBinContent(10,23.08278);
   EtaFwD_allWcosTheta__221->SetBinContent(11,30.25026);
   EtaFwD_allWcosTheta__221->SetBinContent(12,27.54998);
   EtaFwD_allWcosTheta__221->SetBinContent(13,18.65166);
   EtaFwD_allWcosTheta__221->SetBinContent(14,24.79857);
   EtaFwD_allWcosTheta__221->SetBinContent(15,16.25323);
   EtaFwD_allWcosTheta__221->SetBinContent(16,21.46534);
   EtaFwD_allWcosTheta__221->SetBinContent(17,18.78992);
   EtaFwD_allWcosTheta__221->SetBinContent(18,15.34973);
   EtaFwD_allWcosTheta__221->SetBinContent(19,11.77641);
   EtaFwD_allWcosTheta__221->SetBinContent(20,16.34738);
   EtaFwD_allWcosTheta__221->SetEntries(1101);
   EtaFwD_allWcosTheta__221->SetDirectory(0);
   EtaFwD_allWcosTheta__221->SetStats(0);

   ci = TColor::GetColor("#ffcc00");
   EtaFwD_allWcosTheta__221->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   EtaFwD_allWcosTheta__221->SetLineColor(ci);
   EtaFwD_allWcosTheta__221->GetXaxis()->SetTitle("cos(#theta*)");
   EtaFwD_allWcosTheta__221->GetXaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__221->GetXaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__221->GetXaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__221->GetXaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__221->GetYaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__221->GetYaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__221->GetYaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__221->GetYaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__221->GetZaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__221->GetZaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__221->GetZaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__221->GetZaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta->Add(EtaFwD_allWcosTheta,"");
   
   TH1D *EtaFwD_allWcosTheta__222 = new TH1D("EtaFwD_allWcosTheta__222","t-channel",20,-1,1);
   EtaFwD_allWcosTheta__222->SetBinContent(1,124.1406);
   EtaFwD_allWcosTheta__222->SetBinContent(2,147.924);
   EtaFwD_allWcosTheta__222->SetBinContent(3,178.6737);
   EtaFwD_allWcosTheta__222->SetBinContent(4,194.4835);
   EtaFwD_allWcosTheta__222->SetBinContent(5,216.3095);
   EtaFwD_allWcosTheta__222->SetBinContent(6,225.3737);
   EtaFwD_allWcosTheta__222->SetBinContent(7,227.0001);
   EtaFwD_allWcosTheta__222->SetBinContent(8,230.5322);
   EtaFwD_allWcosTheta__222->SetBinContent(9,226.0659);
   EtaFwD_allWcosTheta__222->SetBinContent(10,224.0391);
   EtaFwD_allWcosTheta__222->SetBinContent(11,216.5423);
   EtaFwD_allWcosTheta__222->SetBinContent(12,216.3631);
   EtaFwD_allWcosTheta__222->SetBinContent(13,185.2816);
   EtaFwD_allWcosTheta__222->SetBinContent(14,183.8658);
   EtaFwD_allWcosTheta__222->SetBinContent(15,159.3676);
   EtaFwD_allWcosTheta__222->SetBinContent(16,150.5499);
   EtaFwD_allWcosTheta__222->SetBinContent(17,140.292);
   EtaFwD_allWcosTheta__222->SetBinContent(18,130.6889);
   EtaFwD_allWcosTheta__222->SetBinContent(19,112.6109);
   EtaFwD_allWcosTheta__222->SetBinContent(20,109.9081);
   EtaFwD_allWcosTheta__222->SetEntries(44631);
   EtaFwD_allWcosTheta__222->SetDirectory(0);
   EtaFwD_allWcosTheta__222->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   EtaFwD_allWcosTheta__222->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   EtaFwD_allWcosTheta__222->SetLineColor(ci);
   EtaFwD_allWcosTheta__222->GetXaxis()->SetTitle("cos(#theta*)");
   EtaFwD_allWcosTheta__222->GetXaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__222->GetXaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__222->GetXaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__222->GetXaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__222->GetYaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__222->GetYaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__222->GetYaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__222->GetYaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__222->GetZaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__222->GetZaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__222->GetZaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__222->GetZaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta->Add(EtaFwD_allWcosTheta,"");
   
   TH1D *EtaFwD_allWcosTheta__223 = new TH1D("EtaFwD_allWcosTheta__223","t-channel",20,-1,1);
   EtaFwD_allWcosTheta__223->SetBinContent(1,64.55587);
   EtaFwD_allWcosTheta__223->SetBinContent(2,78.63173);
   EtaFwD_allWcosTheta__223->SetBinContent(3,98.9772);
   EtaFwD_allWcosTheta__223->SetBinContent(4,108.5857);
   EtaFwD_allWcosTheta__223->SetBinContent(5,116.0347);
   EtaFwD_allWcosTheta__223->SetBinContent(6,117.034);
   EtaFwD_allWcosTheta__223->SetBinContent(7,127.4905);
   EtaFwD_allWcosTheta__223->SetBinContent(8,131.7648);
   EtaFwD_allWcosTheta__223->SetBinContent(9,121.243);
   EtaFwD_allWcosTheta__223->SetBinContent(10,121.1468);
   EtaFwD_allWcosTheta__223->SetBinContent(11,109.4019);
   EtaFwD_allWcosTheta__223->SetBinContent(12,109.6389);
   EtaFwD_allWcosTheta__223->SetBinContent(13,104.0977);
   EtaFwD_allWcosTheta__223->SetBinContent(14,95.75408);
   EtaFwD_allWcosTheta__223->SetBinContent(15,89.42136);
   EtaFwD_allWcosTheta__223->SetBinContent(16,85.90657);
   EtaFwD_allWcosTheta__223->SetBinContent(17,71.86238);
   EtaFwD_allWcosTheta__223->SetBinContent(18,64.19207);
   EtaFwD_allWcosTheta__223->SetBinContent(19,61.26986);
   EtaFwD_allWcosTheta__223->SetBinContent(20,53.87581);
   EtaFwD_allWcosTheta__223->SetEntries(18443);
   EtaFwD_allWcosTheta__223->SetDirectory(0);
   EtaFwD_allWcosTheta__223->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   EtaFwD_allWcosTheta__223->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   EtaFwD_allWcosTheta__223->SetLineColor(ci);
   EtaFwD_allWcosTheta__223->GetXaxis()->SetTitle("cos(#theta*)");
   EtaFwD_allWcosTheta__223->GetXaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__223->GetXaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__223->GetXaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__223->GetXaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__223->GetYaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__223->GetYaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__223->GetYaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__223->GetYaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__223->GetZaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__223->GetZaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__223->GetZaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__223->GetZaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta->Add(EtaFwD_allWcosTheta,"");
   EtaFwD_allWcosTheta->Draw("");
   
   TH1D *EtaFwD_allWcosTheta__224 = new TH1D("EtaFwD_allWcosTheta__224","data",20,-1,1);
   EtaFwD_allWcosTheta__224->SetBinContent(1,1227);
   EtaFwD_allWcosTheta__224->SetBinContent(2,1241);
   EtaFwD_allWcosTheta__224->SetBinContent(3,1383);
   EtaFwD_allWcosTheta__224->SetBinContent(4,1360);
   EtaFwD_allWcosTheta__224->SetBinContent(5,1432);
   EtaFwD_allWcosTheta__224->SetBinContent(6,1376);
   EtaFwD_allWcosTheta__224->SetBinContent(7,1329);
   EtaFwD_allWcosTheta__224->SetBinContent(8,1316);
   EtaFwD_allWcosTheta__224->SetBinContent(9,1378);
   EtaFwD_allWcosTheta__224->SetBinContent(10,1365);
   EtaFwD_allWcosTheta__224->SetBinContent(11,1286);
   EtaFwD_allWcosTheta__224->SetBinContent(12,1236);
   EtaFwD_allWcosTheta__224->SetBinContent(13,1203);
   EtaFwD_allWcosTheta__224->SetBinContent(14,1149);
   EtaFwD_allWcosTheta__224->SetBinContent(15,1058);
   EtaFwD_allWcosTheta__224->SetBinContent(16,1087);
   EtaFwD_allWcosTheta__224->SetBinContent(17,1121);
   EtaFwD_allWcosTheta__224->SetBinContent(18,1063);
   EtaFwD_allWcosTheta__224->SetBinContent(19,946);
   EtaFwD_allWcosTheta__224->SetBinContent(20,963);
   EtaFwD_allWcosTheta__224->SetEntries(24519);
   EtaFwD_allWcosTheta__224->SetDirectory(0);
   EtaFwD_allWcosTheta__224->SetStats(0);

   ci = TColor::GetColor("#000099");
   EtaFwD_allWcosTheta__224->SetLineColor(ci);
   EtaFwD_allWcosTheta__224->SetMarkerStyle(20);
   EtaFwD_allWcosTheta__224->GetXaxis()->SetTitle("cos(#theta*)");
   EtaFwD_allWcosTheta__224->GetXaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__224->GetXaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__224->GetXaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__224->GetXaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__224->GetYaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__224->GetYaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__224->GetYaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__224->GetYaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__224->GetZaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta__224->GetZaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta__224->GetZaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta__224->GetZaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta__224->Draw("PE1sames");
   
   TPaveText *pt = new TPaveText(0.306092,0.9365254,0.693908,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("EtaFwD_allWcosTheta");
   pt->Draw();
   
   TH1D *EtaFwD_allWcosTheta = new TH1D("EtaFwD_allWcosTheta","EtaFwD_allW: cos(#theta)",20,-1,1);
   EtaFwD_allWcosTheta->SetBinContent(1,1166.75);
   EtaFwD_allWcosTheta->SetBinContent(2,1170.626);
   EtaFwD_allWcosTheta->SetBinContent(3,1305.316);
   EtaFwD_allWcosTheta->SetBinContent(4,1373.616);
   EtaFwD_allWcosTheta->SetBinContent(5,1362.023);
   EtaFwD_allWcosTheta->SetBinContent(6,1425.206);
   EtaFwD_allWcosTheta->SetBinContent(7,1358.377);
   EtaFwD_allWcosTheta->SetBinContent(8,1330.044);
   EtaFwD_allWcosTheta->SetBinContent(9,1444.555);
   EtaFwD_allWcosTheta->SetBinContent(10,1387.401);
   EtaFwD_allWcosTheta->SetBinContent(11,1257.061);
   EtaFwD_allWcosTheta->SetBinContent(12,1219.824);
   EtaFwD_allWcosTheta->SetBinContent(13,1242.252);
   EtaFwD_allWcosTheta->SetBinContent(14,1207.563);
   EtaFwD_allWcosTheta->SetBinContent(15,1108.169);
   EtaFwD_allWcosTheta->SetBinContent(16,1115.534);
   EtaFwD_allWcosTheta->SetBinContent(17,1078.523);
   EtaFwD_allWcosTheta->SetBinContent(18,1046.564);
   EtaFwD_allWcosTheta->SetBinContent(19,1030.847);
   EtaFwD_allWcosTheta->SetBinContent(20,1044.675);
   EtaFwD_allWcosTheta->SetBinError(1,27.49861);
   EtaFwD_allWcosTheta->SetBinError(2,29.50793);
   EtaFwD_allWcosTheta->SetBinError(3,29.66415);
   EtaFwD_allWcosTheta->SetBinError(4,30.9412);
   EtaFwD_allWcosTheta->SetBinError(5,30.35125);
   EtaFwD_allWcosTheta->SetBinError(6,33.78517);
   EtaFwD_allWcosTheta->SetBinError(7,28.18643);
   EtaFwD_allWcosTheta->SetBinError(8,27.78791);
   EtaFwD_allWcosTheta->SetBinError(9,42.4683);
   EtaFwD_allWcosTheta->SetBinError(10,37.68919);
   EtaFwD_allWcosTheta->SetBinError(11,34.76517);
   EtaFwD_allWcosTheta->SetBinError(12,31.59197);
   EtaFwD_allWcosTheta->SetBinError(13,39.92275);
   EtaFwD_allWcosTheta->SetBinError(14,37.62271);
   EtaFwD_allWcosTheta->SetBinError(15,34.63266);
   EtaFwD_allWcosTheta->SetBinError(16,37.21752);
   EtaFwD_allWcosTheta->SetBinError(17,35.19693);
   EtaFwD_allWcosTheta->SetBinError(18,39.97921);
   EtaFwD_allWcosTheta->SetBinError(19,38.79439);
   EtaFwD_allWcosTheta->SetBinError(20,43.07864);
   EtaFwD_allWcosTheta->SetEntries(171573);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("EtaFwD_allWcosTheta");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 171573 ");
   text = ptstats->AddText("Mean  = -0.04121");
   text = ptstats->AddText("RMS   = 0.5602");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   EtaFwD_allWcosTheta->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(EtaFwD_allWcosTheta);
   EtaFwD_allWcosTheta->SetFillColor(1);
   EtaFwD_allWcosTheta->SetFillStyle(3005);

   ci = TColor::GetColor("#000099");
   EtaFwD_allWcosTheta->SetLineColor(ci);
   EtaFwD_allWcosTheta->GetXaxis()->SetTitle("cos(#theta*)");
   EtaFwD_allWcosTheta->GetXaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta->GetXaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta->GetXaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta->GetXaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta->GetYaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta->GetYaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta->GetYaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta->GetYaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta->GetZaxis()->SetLabelFont(42);
   EtaFwD_allWcosTheta->GetZaxis()->SetLabelSize(0.035);
   EtaFwD_allWcosTheta->GetZaxis()->SetTitleSize(0.035);
   EtaFwD_allWcosTheta->GetZaxis()->SetTitleFont(42);
   EtaFwD_allWcosTheta->Draw("E2SAMESAMESAME");
   EtaFwD_allWcosTheta->Modified();
   EtaFwD_allWcosTheta->cd();
   EtaFwD_allWcosTheta->SetSelected(EtaFwD_allWcosTheta);
}
