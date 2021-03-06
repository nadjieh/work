{
//=========Macro generated from canvas: Default_allWcosTheta/c1
//=========  (Tue Aug 13 18:42:54 2013) by ROOT version5.32/00
   TCanvas *Default_allWcosTheta = new TCanvas("Default_allWcosTheta", "c1",118,140,700,502);
   Default_allWcosTheta->SetHighLightColor(2);
   Default_allWcosTheta->Range(-1.25,-497.2217,1.25,4474.995);
   Default_allWcosTheta->SetFillColor(0);
   Default_allWcosTheta->SetBorderMode(0);
   Default_allWcosTheta->SetBorderSize(2);
   Default_allWcosTheta->SetFrameBorderMode(0);
   Default_allWcosTheta->SetFrameBorderMode(0);
   
   THStack *Default_allWcosTheta = new THStack();
   Default_allWcosTheta->SetName("Default_allWcosTheta");
   Default_allWcosTheta->SetTitle("Default_allWcosTheta");
   
   TH1F *Default_allWcosTheta_stack_1 = new TH1F("Default_allWcosTheta_stack_1","Default_allWcosTheta",20,-1,1);
   Default_allWcosTheta_stack_1->SetMinimum(0);
   Default_allWcosTheta_stack_1->SetMaximum(3977.773);
   Default_allWcosTheta_stack_1->SetDirectory(0);
   Default_allWcosTheta_stack_1->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Default_allWcosTheta_stack_1->SetLineColor(ci);
   Default_allWcosTheta_stack_1->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta_stack_1->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta_stack_1->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta_stack_1->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta_stack_1->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta_stack_1->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta_stack_1->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta_stack_1->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta_stack_1->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta_stack_1->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta_stack_1->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta_stack_1->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta->SetHistogram(Default_allWcosTheta_stack_1);
   
   
   TH1D *Default_allWcosTheta__1 = new TH1D("Default_allWcosTheta__1","QCD",20,-1,1);
   Default_allWcosTheta__1->SetBinContent(1,95.45674);
   Default_allWcosTheta__1->SetBinContent(2,74.02767);
   Default_allWcosTheta__1->SetBinContent(3,83.76816);
   Default_allWcosTheta__1->SetBinContent(4,67.8587);
   Default_allWcosTheta__1->SetBinContent(5,73.05363);
   Default_allWcosTheta__1->SetBinContent(6,88.96308);
   Default_allWcosTheta__1->SetBinContent(7,80.52133);
   Default_allWcosTheta__1->SetBinContent(8,80.19665);
   Default_allWcosTheta__1->SetBinContent(9,73.37831);
   Default_allWcosTheta__1->SetBinContent(10,82.46943);
   Default_allWcosTheta__1->SetBinContent(11,77.59919);
   Default_allWcosTheta__1->SetBinContent(12,89.93713);
   Default_allWcosTheta__1->SetBinContent(13,103.2491);
   Default_allWcosTheta__1->SetBinContent(14,107.7947);
   Default_allWcosTheta__1->SetBinContent(15,130.8472);
   Default_allWcosTheta__1->SetBinContent(16,150.6528);
   Default_allWcosTheta__1->SetBinContent(17,175.004);
   Default_allWcosTheta__1->SetBinContent(18,226.6286);
   Default_allWcosTheta__1->SetBinContent(19,287.9936);
   Default_allWcosTheta__1->SetBinContent(20,388.97);
   Default_allWcosTheta__1->SetEntries(7818);
   Default_allWcosTheta__1->SetDirectory(0);
   Default_allWcosTheta__1->SetStats(0);

   ci = TColor::GetColor("#cccccc");
   Default_allWcosTheta__1->SetFillColor(ci);

   ci = TColor::GetColor("#cccccc");
   Default_allWcosTheta__1->SetLineColor(ci);
   Default_allWcosTheta__1->GetXaxis()->SetTitle("cos(#theta*)");
   Default_allWcosTheta__1->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta__1->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__1->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__1->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta__1->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta__1->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__1->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__1->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta__1->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta__1->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__1->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__1->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta->Add(Default_allWcosTheta,"");
   
   TH1D *Default_allWcosTheta__2 = new TH1D("Default_allWcosTheta__2","Z/gamma^{*}+jets",20,-1,1);
   Default_allWcosTheta__2->SetBinContent(1,12.81637);
   Default_allWcosTheta__2->SetBinContent(2,22.54117);
   Default_allWcosTheta__2->SetBinContent(3,16.22436);
   Default_allWcosTheta__2->SetBinContent(4,40.37719);
   Default_allWcosTheta__2->SetBinContent(5,41.10035);
   Default_allWcosTheta__2->SetBinContent(6,78.76727);
   Default_allWcosTheta__2->SetBinContent(7,38.76074);
   Default_allWcosTheta__2->SetBinContent(8,37.06262);
   Default_allWcosTheta__2->SetBinContent(9,29.25836);
   Default_allWcosTheta__2->SetBinContent(10,104.1245);
   Default_allWcosTheta__2->SetBinContent(11,137.2408);
   Default_allWcosTheta__2->SetBinContent(12,114.366);
   Default_allWcosTheta__2->SetBinContent(13,106.6405);
   Default_allWcosTheta__2->SetBinContent(14,114.6783);
   Default_allWcosTheta__2->SetBinContent(15,221.6423);
   Default_allWcosTheta__2->SetBinContent(16,149.9722);
   Default_allWcosTheta__2->SetBinContent(17,288.9851);
   Default_allWcosTheta__2->SetBinContent(18,233.034);
   Default_allWcosTheta__2->SetBinContent(19,507.6511);
   Default_allWcosTheta__2->SetBinContent(20,605.2837);
   Default_allWcosTheta__2->SetEntries(364);
   Default_allWcosTheta__2->SetDirectory(0);
   Default_allWcosTheta__2->SetStats(0);

   ci = TColor::GetColor("#00cc00");
   Default_allWcosTheta__2->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   Default_allWcosTheta__2->SetLineColor(ci);
   Default_allWcosTheta__2->GetXaxis()->SetTitle("cos(#theta*)");
   Default_allWcosTheta__2->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta__2->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__2->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__2->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta__2->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta__2->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__2->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__2->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta__2->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta__2->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__2->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__2->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta->Add(Default_allWcosTheta,"");
   
   TH1D *Default_allWcosTheta__3 = new TH1D("Default_allWcosTheta__3","W+jets",20,-1,1);
   Default_allWcosTheta__3->SetBinContent(1,660.5458);
   Default_allWcosTheta__3->SetBinContent(2,635.5798);
   Default_allWcosTheta__3->SetBinContent(3,691.94);
   Default_allWcosTheta__3->SetBinContent(4,750.4278);
   Default_allWcosTheta__3->SetBinContent(5,787.0506);
   Default_allWcosTheta__3->SetBinContent(6,821.0252);
   Default_allWcosTheta__3->SetBinContent(7,856.4031);
   Default_allWcosTheta__3->SetBinContent(8,889.0648);
   Default_allWcosTheta__3->SetBinContent(9,912.3558);
   Default_allWcosTheta__3->SetBinContent(10,937.5481);
   Default_allWcosTheta__3->SetBinContent(11,960.4317);
   Default_allWcosTheta__3->SetBinContent(12,989.4493);
   Default_allWcosTheta__3->SetBinContent(13,1026.932);
   Default_allWcosTheta__3->SetBinContent(14,1070.028);
   Default_allWcosTheta__3->SetBinContent(15,1120.798);
   Default_allWcosTheta__3->SetBinContent(16,1183.315);
   Default_allWcosTheta__3->SetBinContent(17,1269.666);
   Default_allWcosTheta__3->SetBinContent(18,1373.423);
   Default_allWcosTheta__3->SetBinContent(19,1549.135);
   Default_allWcosTheta__3->SetBinContent(20,1801.828);
   Default_allWcosTheta__3->SetEntries(896280);
   Default_allWcosTheta__3->SetDirectory(0);
   Default_allWcosTheta__3->SetStats(0);

   ci = TColor::GetColor("#0033ff");
   Default_allWcosTheta__3->SetFillColor(ci);

   ci = TColor::GetColor("#0033ff");
   Default_allWcosTheta__3->SetLineColor(ci);
   Default_allWcosTheta__3->GetXaxis()->SetTitle("cos(#theta*)");
   Default_allWcosTheta__3->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta__3->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__3->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__3->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta__3->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta__3->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__3->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__3->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta__3->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta__3->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__3->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__3->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta->Add(Default_allWcosTheta,"");
   
   TH1D *Default_allWcosTheta__4 = new TH1D("Default_allWcosTheta__4","DiBoson",20,-1,1);
   Default_allWcosTheta__4->SetBinContent(1,9.708144);
   Default_allWcosTheta__4->SetBinContent(2,9.214677);
   Default_allWcosTheta__4->SetBinContent(3,15.69894);
   Default_allWcosTheta__4->SetBinContent(4,17.08289);
   Default_allWcosTheta__4->SetBinContent(5,15.69538);
   Default_allWcosTheta__4->SetBinContent(6,15.12878);
   Default_allWcosTheta__4->SetBinContent(7,16.87463);
   Default_allWcosTheta__4->SetBinContent(8,16.25308);
   Default_allWcosTheta__4->SetBinContent(9,16.45279);
   Default_allWcosTheta__4->SetBinContent(10,16.90413);
   Default_allWcosTheta__4->SetBinContent(11,19.81722);
   Default_allWcosTheta__4->SetBinContent(12,15.67549);
   Default_allWcosTheta__4->SetBinContent(13,16.09887);
   Default_allWcosTheta__4->SetBinContent(14,20.77289);
   Default_allWcosTheta__4->SetBinContent(15,12.94307);
   Default_allWcosTheta__4->SetBinContent(16,14.39228);
   Default_allWcosTheta__4->SetBinContent(17,17.17473);
   Default_allWcosTheta__4->SetBinContent(18,13.57114);
   Default_allWcosTheta__4->SetBinContent(19,16.25134);
   Default_allWcosTheta__4->SetBinContent(20,13.86657);
   Default_allWcosTheta__4->SetEntries(1212);
   Default_allWcosTheta__4->SetDirectory(0);
   Default_allWcosTheta__4->SetStats(0);

   ci = TColor::GetColor("#00ffff");
   Default_allWcosTheta__4->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   Default_allWcosTheta__4->SetLineColor(ci);
   Default_allWcosTheta__4->GetXaxis()->SetTitle("cos(#theta*)");
   Default_allWcosTheta__4->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta__4->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__4->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__4->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta__4->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta__4->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__4->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__4->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta__4->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta__4->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__4->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__4->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta->Add(Default_allWcosTheta,"");
   
   TH1D *Default_allWcosTheta__5 = new TH1D("Default_allWcosTheta__5","DiBoson",20,-1,1);
   Default_allWcosTheta__5->SetBinContent(1,0.9291757);
   Default_allWcosTheta__5->SetBinContent(2,0.6398709);
   Default_allWcosTheta__5->SetBinContent(3,0.9738022);
   Default_allWcosTheta__5->SetBinContent(4,1.051066);
   Default_allWcosTheta__5->SetBinContent(5,1.036721);
   Default_allWcosTheta__5->SetBinContent(6,0.9015922);
   Default_allWcosTheta__5->SetBinContent(7,1.026926);
   Default_allWcosTheta__5->SetBinContent(8,0.6168615);
   Default_allWcosTheta__5->SetBinContent(9,0.8078694);
   Default_allWcosTheta__5->SetBinContent(10,1.119586);
   Default_allWcosTheta__5->SetBinContent(11,1.266869);
   Default_allWcosTheta__5->SetBinContent(12,2.056515);
   Default_allWcosTheta__5->SetBinContent(13,1.885709);
   Default_allWcosTheta__5->SetBinContent(14,1.759882);
   Default_allWcosTheta__5->SetBinContent(15,2.417352);
   Default_allWcosTheta__5->SetBinContent(16,2.88848);
   Default_allWcosTheta__5->SetBinContent(17,3.718548);
   Default_allWcosTheta__5->SetBinContent(18,4.413507);
   Default_allWcosTheta__5->SetBinContent(19,5.084964);
   Default_allWcosTheta__5->SetBinContent(20,6.898844);
   Default_allWcosTheta__5->SetEntries(1109);
   Default_allWcosTheta__5->SetDirectory(0);
   Default_allWcosTheta__5->SetStats(0);

   ci = TColor::GetColor("#00ffff");
   Default_allWcosTheta__5->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   Default_allWcosTheta__5->SetLineColor(ci);
   Default_allWcosTheta__5->GetXaxis()->SetTitle("cos(#theta*)");
   Default_allWcosTheta__5->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta__5->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__5->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__5->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta__5->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta__5->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__5->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__5->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta__5->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta__5->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__5->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__5->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta->Add(Default_allWcosTheta,"");
   
   TH1D *Default_allWcosTheta__6 = new TH1D("Default_allWcosTheta__6","DiBoson",20,-1,1);
   Default_allWcosTheta__6->SetBinContent(1,8.377675);
   Default_allWcosTheta__6->SetBinContent(2,10.01146);
   Default_allWcosTheta__6->SetBinContent(3,13.29261);
   Default_allWcosTheta__6->SetBinContent(4,13.5373);
   Default_allWcosTheta__6->SetBinContent(5,17.62576);
   Default_allWcosTheta__6->SetBinContent(6,15.42816);
   Default_allWcosTheta__6->SetBinContent(7,21.06509);
   Default_allWcosTheta__6->SetBinContent(8,20.96331);
   Default_allWcosTheta__6->SetBinContent(9,20.61151);
   Default_allWcosTheta__6->SetBinContent(10,21.51802);
   Default_allWcosTheta__6->SetBinContent(11,17.43305);
   Default_allWcosTheta__6->SetBinContent(12,19.12654);
   Default_allWcosTheta__6->SetBinContent(13,19.71043);
   Default_allWcosTheta__6->SetBinContent(14,19.98558);
   Default_allWcosTheta__6->SetBinContent(15,22.14054);
   Default_allWcosTheta__6->SetBinContent(16,23.68473);
   Default_allWcosTheta__6->SetBinContent(17,21.66098);
   Default_allWcosTheta__6->SetBinContent(18,23.40574);
   Default_allWcosTheta__6->SetBinContent(19,20.4929);
   Default_allWcosTheta__6->SetBinContent(20,20.98735);
   Default_allWcosTheta__6->SetEntries(2703);
   Default_allWcosTheta__6->SetDirectory(0);
   Default_allWcosTheta__6->SetStats(0);

   ci = TColor::GetColor("#00ffff");
   Default_allWcosTheta__6->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   Default_allWcosTheta__6->SetLineColor(ci);
   Default_allWcosTheta__6->GetXaxis()->SetTitle("cos(#theta*)");
   Default_allWcosTheta__6->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta__6->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__6->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__6->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta__6->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta__6->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__6->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__6->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta__6->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta__6->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__6->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__6->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta->Add(Default_allWcosTheta,"");
   
   TH1D *Default_allWcosTheta__7 = new TH1D("Default_allWcosTheta__7","t#bar{t}",20,-1,1);
   Default_allWcosTheta__7->SetBinContent(1,1389.569);
   Default_allWcosTheta__7->SetBinContent(2,1037.963);
   Default_allWcosTheta__7->SetBinContent(3,1087.613);
   Default_allWcosTheta__7->SetBinContent(4,1152.384);
   Default_allWcosTheta__7->SetBinContent(5,1174.856);
   Default_allWcosTheta__7->SetBinContent(6,1218.153);
   Default_allWcosTheta__7->SetBinContent(7,1185.987);
   Default_allWcosTheta__7->SetBinContent(8,1158.345);
   Default_allWcosTheta__7->SetBinContent(9,1140.08);
   Default_allWcosTheta__7->SetBinContent(10,1083.649);
   Default_allWcosTheta__7->SetBinContent(11,1052.529);
   Default_allWcosTheta__7->SetBinContent(12,999.1777);
   Default_allWcosTheta__7->SetBinContent(13,982.7761);
   Default_allWcosTheta__7->SetBinContent(14,909.4227);
   Default_allWcosTheta__7->SetBinContent(15,840.3811);
   Default_allWcosTheta__7->SetBinContent(16,794.1494);
   Default_allWcosTheta__7->SetBinContent(17,761.9846);
   Default_allWcosTheta__7->SetBinContent(18,687.561);
   Default_allWcosTheta__7->SetBinContent(19,645.6411);
   Default_allWcosTheta__7->SetBinContent(20,633.6939);
   Default_allWcosTheta__7->SetBinContent(21,0.286131);
   Default_allWcosTheta__7->SetEntries(83212);
   Default_allWcosTheta__7->SetDirectory(0);
   Default_allWcosTheta__7->SetStats(0);

   ci = TColor::GetColor("#cc33cc");
   Default_allWcosTheta__7->SetFillColor(ci);

   ci = TColor::GetColor("#cc33cc");
   Default_allWcosTheta__7->SetLineColor(ci);
   Default_allWcosTheta__7->GetXaxis()->SetTitle("cos(#theta*)");
   Default_allWcosTheta__7->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta__7->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__7->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__7->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta__7->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta__7->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__7->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__7->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta__7->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta__7->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__7->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__7->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta->Add(Default_allWcosTheta,"");
   
   TH1D *Default_allWcosTheta__8 = new TH1D("Default_allWcosTheta__8","s-channel",20,-1,1);
   Default_allWcosTheta__8->SetBinContent(1,10.86406);
   Default_allWcosTheta__8->SetBinContent(2,12.10777);
   Default_allWcosTheta__8->SetBinContent(3,13.06974);
   Default_allWcosTheta__8->SetBinContent(4,13.69004);
   Default_allWcosTheta__8->SetBinContent(5,14.28145);
   Default_allWcosTheta__8->SetBinContent(6,14.75353);
   Default_allWcosTheta__8->SetBinContent(7,14.65783);
   Default_allWcosTheta__8->SetBinContent(8,13.55326);
   Default_allWcosTheta__8->SetBinContent(9,13.08036);
   Default_allWcosTheta__8->SetBinContent(10,13.41087);
   Default_allWcosTheta__8->SetBinContent(11,11.74342);
   Default_allWcosTheta__8->SetBinContent(12,11.44659);
   Default_allWcosTheta__8->SetBinContent(13,11.03952);
   Default_allWcosTheta__8->SetBinContent(14,10.32143);
   Default_allWcosTheta__8->SetBinContent(15,10.08796);
   Default_allWcosTheta__8->SetBinContent(16,9.295325);
   Default_allWcosTheta__8->SetBinContent(17,8.874719);
   Default_allWcosTheta__8->SetBinContent(18,7.950163);
   Default_allWcosTheta__8->SetBinContent(19,7.918133);
   Default_allWcosTheta__8->SetBinContent(20,7.888718);
   Default_allWcosTheta__8->SetEntries(44152);
   Default_allWcosTheta__8->SetDirectory(0);
   Default_allWcosTheta__8->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   Default_allWcosTheta__8->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   Default_allWcosTheta__8->SetLineColor(ci);
   Default_allWcosTheta__8->GetXaxis()->SetTitle("cos(#theta*)");
   Default_allWcosTheta__8->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta__8->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__8->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__8->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta__8->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta__8->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__8->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__8->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta__8->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta__8->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__8->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__8->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta->Add(Default_allWcosTheta,"");
   
   TH1D *Default_allWcosTheta__9 = new TH1D("Default_allWcosTheta__9","s-channel",20,-1,1);
   Default_allWcosTheta__9->SetBinContent(1,5.159501);
   Default_allWcosTheta__9->SetBinContent(2,5.452032);
   Default_allWcosTheta__9->SetBinContent(3,6.190723);
   Default_allWcosTheta__9->SetBinContent(4,6.857798);
   Default_allWcosTheta__9->SetBinContent(5,6.852818);
   Default_allWcosTheta__9->SetBinContent(6,7.190339);
   Default_allWcosTheta__9->SetBinContent(7,7.080264);
   Default_allWcosTheta__9->SetBinContent(8,7.25218);
   Default_allWcosTheta__9->SetBinContent(9,6.606661);
   Default_allWcosTheta__9->SetBinContent(10,6.860208);
   Default_allWcosTheta__9->SetBinContent(11,6.390807);
   Default_allWcosTheta__9->SetBinContent(12,5.977671);
   Default_allWcosTheta__9->SetBinContent(13,5.338875);
   Default_allWcosTheta__9->SetBinContent(14,5.410296);
   Default_allWcosTheta__9->SetBinContent(15,4.908725);
   Default_allWcosTheta__9->SetBinContent(16,4.757999);
   Default_allWcosTheta__9->SetBinContent(17,4.118194);
   Default_allWcosTheta__9->SetBinContent(18,4.027323);
   Default_allWcosTheta__9->SetBinContent(19,3.827325);
   Default_allWcosTheta__9->SetBinContent(20,3.284655);
   Default_allWcosTheta__9->SetEntries(23807);
   Default_allWcosTheta__9->SetDirectory(0);
   Default_allWcosTheta__9->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   Default_allWcosTheta__9->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   Default_allWcosTheta__9->SetLineColor(ci);
   Default_allWcosTheta__9->GetXaxis()->SetTitle("cos(#theta*)");
   Default_allWcosTheta__9->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta__9->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__9->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__9->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta__9->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta__9->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__9->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__9->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta__9->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta__9->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__9->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__9->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta->Add(Default_allWcosTheta,"");
   
   TH1D *Default_allWcosTheta__10 = new TH1D("Default_allWcosTheta__10","tW-channel",20,-1,1);
   Default_allWcosTheta__10->SetBinContent(1,51.36299);
   Default_allWcosTheta__10->SetBinContent(2,41.29168);
   Default_allWcosTheta__10->SetBinContent(3,53.10391);
   Default_allWcosTheta__10->SetBinContent(4,48.37169);
   Default_allWcosTheta__10->SetBinContent(5,49.88528);
   Default_allWcosTheta__10->SetBinContent(6,55.95653);
   Default_allWcosTheta__10->SetBinContent(7,61.1903);
   Default_allWcosTheta__10->SetBinContent(8,64.79868);
   Default_allWcosTheta__10->SetBinContent(9,60.83599);
   Default_allWcosTheta__10->SetBinContent(10,64.49938);
   Default_allWcosTheta__10->SetBinContent(11,60.21732);
   Default_allWcosTheta__10->SetBinContent(12,59.05993);
   Default_allWcosTheta__10->SetBinContent(13,56.4345);
   Default_allWcosTheta__10->SetBinContent(14,62.19078);
   Default_allWcosTheta__10->SetBinContent(15,53.98018);
   Default_allWcosTheta__10->SetBinContent(16,50.48677);
   Default_allWcosTheta__10->SetBinContent(17,54.12666);
   Default_allWcosTheta__10->SetBinContent(18,48.40638);
   Default_allWcosTheta__10->SetBinContent(19,54.31152);
   Default_allWcosTheta__10->SetBinContent(20,52.72462);
   Default_allWcosTheta__10->SetEntries(3005);
   Default_allWcosTheta__10->SetDirectory(0);
   Default_allWcosTheta__10->SetStats(0);

   ci = TColor::GetColor("#ffcc00");
   Default_allWcosTheta__10->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   Default_allWcosTheta__10->SetLineColor(ci);
   Default_allWcosTheta__10->GetXaxis()->SetTitle("cos(#theta*)");
   Default_allWcosTheta__10->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta__10->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__10->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__10->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta__10->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta__10->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__10->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__10->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta__10->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta__10->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__10->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__10->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta->Add(Default_allWcosTheta,"");
   
   TH1D *Default_allWcosTheta__11 = new TH1D("Default_allWcosTheta__11","tW-channel",20,-1,1);
   Default_allWcosTheta__11->SetBinContent(1,48.06858);
   Default_allWcosTheta__11->SetBinContent(2,46.58226);
   Default_allWcosTheta__11->SetBinContent(3,44.58159);
   Default_allWcosTheta__11->SetBinContent(4,51.15704);
   Default_allWcosTheta__11->SetBinContent(5,56.11143);
   Default_allWcosTheta__11->SetBinContent(6,63.83347);
   Default_allWcosTheta__11->SetBinContent(7,55.89354);
   Default_allWcosTheta__11->SetBinContent(8,61.66388);
   Default_allWcosTheta__11->SetBinContent(9,49.26932);
   Default_allWcosTheta__11->SetBinContent(10,67.17903);
   Default_allWcosTheta__11->SetBinContent(11,59.2392);
   Default_allWcosTheta__11->SetBinContent(12,57.80469);
   Default_allWcosTheta__11->SetBinContent(13,58.44173);
   Default_allWcosTheta__11->SetBinContent(14,60.53108);
   Default_allWcosTheta__11->SetBinContent(15,56.4296);
   Default_allWcosTheta__11->SetBinContent(16,48.60782);
   Default_allWcosTheta__11->SetBinContent(17,54.33586);
   Default_allWcosTheta__11->SetBinContent(18,51.40712);
   Default_allWcosTheta__11->SetBinContent(19,54.65055);
   Default_allWcosTheta__11->SetBinContent(20,57.4767);
   Default_allWcosTheta__11->SetEntries(3036);
   Default_allWcosTheta__11->SetDirectory(0);
   Default_allWcosTheta__11->SetStats(0);

   ci = TColor::GetColor("#ffcc00");
   Default_allWcosTheta__11->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   Default_allWcosTheta__11->SetLineColor(ci);
   Default_allWcosTheta__11->GetXaxis()->SetTitle("cos(#theta*)");
   Default_allWcosTheta__11->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta__11->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__11->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__11->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta__11->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta__11->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__11->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__11->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta__11->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta__11->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__11->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__11->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta->Add(Default_allWcosTheta,"");
   
   TH1D *Default_allWcosTheta__12 = new TH1D("Default_allWcosTheta__12","t-channel",20,-1,1);
   Default_allWcosTheta__12->SetBinContent(1,123.5289);
   Default_allWcosTheta__12->SetBinContent(2,127.3822);
   Default_allWcosTheta__12->SetBinContent(3,145.7084);
   Default_allWcosTheta__12->SetBinContent(4,165.2292);
   Default_allWcosTheta__12->SetBinContent(5,191.5266);
   Default_allWcosTheta__12->SetBinContent(6,203.8269);
   Default_allWcosTheta__12->SetBinContent(7,221.0291);
   Default_allWcosTheta__12->SetBinContent(8,228.7992);
   Default_allWcosTheta__12->SetBinContent(9,218.7895);
   Default_allWcosTheta__12->SetBinContent(10,220.871);
   Default_allWcosTheta__12->SetBinContent(11,214.463);
   Default_allWcosTheta__12->SetBinContent(12,206.3266);
   Default_allWcosTheta__12->SetBinContent(13,204.8865);
   Default_allWcosTheta__12->SetBinContent(14,189.7588);
   Default_allWcosTheta__12->SetBinContent(15,188.2418);
   Default_allWcosTheta__12->SetBinContent(16,162.7686);
   Default_allWcosTheta__12->SetBinContent(17,154.8856);
   Default_allWcosTheta__12->SetBinContent(18,138.3088);
   Default_allWcosTheta__12->SetBinContent(19,135.4174);
   Default_allWcosTheta__12->SetBinContent(20,123.8073);
   Default_allWcosTheta__12->SetEntries(49074);
   Default_allWcosTheta__12->SetDirectory(0);
   Default_allWcosTheta__12->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   Default_allWcosTheta__12->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   Default_allWcosTheta__12->SetLineColor(ci);
   Default_allWcosTheta__12->GetXaxis()->SetTitle("cos(#theta*)");
   Default_allWcosTheta__12->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta__12->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__12->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__12->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta__12->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta__12->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__12->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__12->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta__12->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta__12->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__12->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__12->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta->Add(Default_allWcosTheta,"");
   
   TH1D *Default_allWcosTheta__13 = new TH1D("Default_allWcosTheta__13","t-channel",20,-1,1);
   Default_allWcosTheta__13->SetBinContent(1,67.38436);
   Default_allWcosTheta__13->SetBinContent(2,72.60467);
   Default_allWcosTheta__13->SetBinContent(3,81.79319);
   Default_allWcosTheta__13->SetBinContent(4,91.85623);
   Default_allWcosTheta__13->SetBinContent(5,106.3223);
   Default_allWcosTheta__13->SetBinContent(6,118.846);
   Default_allWcosTheta__13->SetBinContent(7,130.1122);
   Default_allWcosTheta__13->SetBinContent(8,126.7502);
   Default_allWcosTheta__13->SetBinContent(9,132.0699);
   Default_allWcosTheta__13->SetBinContent(10,129.187);
   Default_allWcosTheta__13->SetBinContent(11,122.754);
   Default_allWcosTheta__13->SetBinContent(12,118.4161);
   Default_allWcosTheta__13->SetBinContent(13,117.0557);
   Default_allWcosTheta__13->SetBinContent(14,108.4754);
   Default_allWcosTheta__13->SetBinContent(15,107.4896);
   Default_allWcosTheta__13->SetBinContent(16,100.6432);
   Default_allWcosTheta__13->SetBinContent(17,92.39837);
   Default_allWcosTheta__13->SetBinContent(18,78.63838);
   Default_allWcosTheta__13->SetBinContent(19,79.95074);
   Default_allWcosTheta__13->SetBinContent(20,71.64519);
   Default_allWcosTheta__13->SetEntries(21670);
   Default_allWcosTheta__13->SetDirectory(0);
   Default_allWcosTheta__13->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   Default_allWcosTheta__13->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   Default_allWcosTheta__13->SetLineColor(ci);
   Default_allWcosTheta__13->GetXaxis()->SetTitle("cos(#theta*)");
   Default_allWcosTheta__13->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta__13->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__13->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__13->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta__13->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta__13->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__13->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__13->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta__13->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta__13->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__13->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__13->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta->Add(Default_allWcosTheta,"");
   Default_allWcosTheta->Draw("");
   
   TH1D *Default_allWcosTheta__14 = new TH1D("Default_allWcosTheta__14","data",20,-1,1);
   Default_allWcosTheta__14->SetBinContent(1,2707);
   Default_allWcosTheta__14->SetBinContent(2,2131);
   Default_allWcosTheta__14->SetBinContent(3,2242);
   Default_allWcosTheta__14->SetBinContent(4,2458);
   Default_allWcosTheta__14->SetBinContent(5,2615);
   Default_allWcosTheta__14->SetBinContent(6,2689);
   Default_allWcosTheta__14->SetBinContent(7,2753);
   Default_allWcosTheta__14->SetBinContent(8,2839);
   Default_allWcosTheta__14->SetBinContent(9,2755);
   Default_allWcosTheta__14->SetBinContent(10,2823);
   Default_allWcosTheta__14->SetBinContent(11,2734);
   Default_allWcosTheta__14->SetBinContent(12,2764);
   Default_allWcosTheta__14->SetBinContent(13,2712);
   Default_allWcosTheta__14->SetBinContent(14,2738);
   Default_allWcosTheta__14->SetBinContent(15,2671);
   Default_allWcosTheta__14->SetBinContent(16,2630);
   Default_allWcosTheta__14->SetBinContent(17,2814);
   Default_allWcosTheta__14->SetBinContent(18,2863);
   Default_allWcosTheta__14->SetBinContent(19,3013);
   Default_allWcosTheta__14->SetBinContent(20,3591);
   Default_allWcosTheta__14->SetEntries(54542);
   Default_allWcosTheta__14->SetDirectory(0);
   Default_allWcosTheta__14->SetStats(0);

   ci = TColor::GetColor("#000099");
   Default_allWcosTheta__14->SetLineColor(ci);
   Default_allWcosTheta__14->SetMarkerStyle(20);
   Default_allWcosTheta__14->GetXaxis()->SetTitle("cos(#theta*)");
   Default_allWcosTheta__14->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta__14->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__14->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__14->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta__14->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta__14->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__14->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__14->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta__14->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta__14->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__14->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__14->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta__14->Draw("PE1sames");
   
   TPaveText *pt = new TPaveText(0.3111207,0.9365254,0.6888793,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Default_allWcosTheta");
   pt->Draw();
   
   TH1D *Default_allWcosTheta = new TH1D("Default_allWcosTheta","Default_allW: cos(#theta)",20,-1,1);
   Default_allWcosTheta->SetBinContent(1,2483.772);
   Default_allWcosTheta->SetBinContent(2,2095.398);
   Default_allWcosTheta->SetBinContent(3,2253.958);
   Default_allWcosTheta->SetBinContent(4,2419.881);
   Default_allWcosTheta->SetBinContent(5,2535.398);
   Default_allWcosTheta->SetBinContent(6,2702.774);
   Default_allWcosTheta->SetBinContent(7,2690.602);
   Default_allWcosTheta->SetBinContent(8,2705.32);
   Default_allWcosTheta->SetBinContent(9,2673.597);
   Default_allWcosTheta->SetBinContent(10,2749.34);
   Default_allWcosTheta->SetBinContent(11,2741.126);
   Default_allWcosTheta->SetBinContent(12,2688.82);
   Default_allWcosTheta->SetBinContent(13,2710.49);
   Default_allWcosTheta->SetBinContent(14,2681.13);
   Default_allWcosTheta->SetBinContent(15,2772.307);
   Default_allWcosTheta->SetBinContent(16,2695.614);
   Default_allWcosTheta->SetBinContent(17,2906.933);
   Default_allWcosTheta->SetBinContent(18,2890.775);
   Default_allWcosTheta->SetBinContent(19,3368.326);
   Default_allWcosTheta->SetBinContent(20,3788.355);
   Default_allWcosTheta->SetBinContent(21,0.286131);
   Default_allWcosTheta->SetBinError(1,69.28433);
   Default_allWcosTheta->SetBinError(2,61.19339);
   Default_allWcosTheta->SetBinError(3,66.3926);
   Default_allWcosTheta->SetBinError(4,68.68282);
   Default_allWcosTheta->SetBinError(5,71.31575);
   Default_allWcosTheta->SetBinError(6,79.69627);
   Default_allWcosTheta->SetBinError(7,77.60519);
   Default_allWcosTheta->SetBinError(8,78.79813);
   Default_allWcosTheta->SetBinError(9,78.38014);
   Default_allWcosTheta->SetBinError(10,86.45436);
   Default_allWcosTheta->SetBinError(11,89.18317);
   Default_allWcosTheta->SetBinError(12,91.6549);
   Default_allWcosTheta->SetBinError(13,96.24038);
   Default_allWcosTheta->SetBinError(14,99.60498);
   Default_allWcosTheta->SetBinError(15,112.8056);
   Default_allWcosTheta->SetBinError(16,118.5236);
   Default_allWcosTheta->SetBinError(17,135.3227);
   Default_allWcosTheta->SetBinError(18,153.0122);
   Default_allWcosTheta->SetBinError(19,191.9193);
   Default_allWcosTheta->SetBinError(20,237.9988);
   Default_allWcosTheta->SetBinError(21,0.2088133);
   Default_allWcosTheta->SetEntries(1201399);
   
   TPaveStats *ptstats = new TPaveStats(0.183908,0.8270042,0.3850575,0.9873418,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("Default_allWcosTheta");
   text->SetTextSize(0.03687764);
   text = ptstats->AddText("Entries = 1201399");
   text = ptstats->AddText("Mean  = 0.05928");
   text = ptstats->AddText("RMS   =  0.582");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   Default_allWcosTheta->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(Default_allWcosTheta);
   Default_allWcosTheta->SetFillColor(1);
   Default_allWcosTheta->SetFillStyle(3005);

   ci = TColor::GetColor("#000099");
   Default_allWcosTheta->SetLineColor(ci);
   Default_allWcosTheta->GetXaxis()->SetTitle("cos(#theta*)");
   Default_allWcosTheta->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta->Draw("E2SAME");
   Default_allWcosTheta->Modified();
   Default_allWcosTheta->cd();
   Default_allWcosTheta->SetSelected(Default_allWcosTheta);
}
