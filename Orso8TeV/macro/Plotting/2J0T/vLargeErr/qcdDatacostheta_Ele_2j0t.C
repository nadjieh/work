{
//=========Macro generated from canvas: Default_allWcosTheta/c1
//=========  (Fri Aug  2 15:41:12 2013) by ROOT version5.32/00
   TCanvas *Default_allWcosTheta = new TCanvas("Default_allWcosTheta", "c1",67,53,700,500);
   Default_allWcosTheta->SetHighLightColor(2);
   Default_allWcosTheta->Range(-1.25,-5853.339,1.25,52680.05);
   Default_allWcosTheta->SetFillColor(0);
   Default_allWcosTheta->SetBorderMode(0);
   Default_allWcosTheta->SetBorderSize(2);
   Default_allWcosTheta->SetFrameBorderMode(0);
   Default_allWcosTheta->SetFrameBorderMode(0);
   
   THStack *Default_allWcosTheta = new THStack();
   Default_allWcosTheta->SetName("Default_allWcosTheta");
//   Default_allWcosTheta->SetTitle("Default_allWcosTheta");
   
   TH1F *Default_allWcosTheta_stack_1 = new TH1F("Default_allWcosTheta_stack_1","Default_allWcosTheta",20,-1,1);
   Default_allWcosTheta_stack_1->SetMinimum(0);
   Default_allWcosTheta_stack_1->SetMaximum(46826.71);
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
   Default_allWcosTheta__1->SetBinContent(1,2449.818);
   Default_allWcosTheta__1->SetBinContent(2,1936.372);
   Default_allWcosTheta__1->SetBinContent(3,2387.502);
   Default_allWcosTheta__1->SetBinContent(4,3251.266);
   Default_allWcosTheta__1->SetBinContent(5,3811.631);
   Default_allWcosTheta__1->SetBinContent(6,4193.708);
   Default_allWcosTheta__1->SetBinContent(7,4629.44);
   Default_allWcosTheta__1->SetBinContent(8,5151.788);
   Default_allWcosTheta__1->SetBinContent(9,5582.468);
   Default_allWcosTheta__1->SetBinContent(10,5778.318);
   Default_allWcosTheta__1->SetBinContent(11,5821.627);
   Default_allWcosTheta__1->SetBinContent(12,6023.493);
   Default_allWcosTheta__1->SetBinContent(13,6190.952);
   Default_allWcosTheta__1->SetBinContent(14,6387.765);
   Default_allWcosTheta__1->SetBinContent(15,6252.065);
   Default_allWcosTheta__1->SetBinContent(16,5353.414);
   Default_allWcosTheta__1->SetBinContent(17,4249.768);
   Default_allWcosTheta__1->SetBinContent(18,3775.781);
   Default_allWcosTheta__1->SetBinContent(19,3811.871);
   Default_allWcosTheta__1->SetBinContent(20,4335.664);
   Default_allWcosTheta__1->SetEntries(379774);
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
   Default_allWcosTheta->Add(Default_allWcosTheta__1,"");
   
   TH1D *Default_allWcosTheta__2 = new TH1D("Default_allWcosTheta__2","Z/gamma^{*}+jets",20,-1,1);
   Default_allWcosTheta__2->SetBinContent(1,446.5614);
   Default_allWcosTheta__2->SetBinContent(2,563.5494);
   Default_allWcosTheta__2->SetBinContent(3,762.3876);
   Default_allWcosTheta__2->SetBinContent(4,941.9311);
   Default_allWcosTheta__2->SetBinContent(5,1069.773);
   Default_allWcosTheta__2->SetBinContent(6,1314.901);
   Default_allWcosTheta__2->SetBinContent(7,1385.352);
   Default_allWcosTheta__2->SetBinContent(8,1208.66);
   Default_allWcosTheta__2->SetBinContent(9,1240.691);
   Default_allWcosTheta__2->SetBinContent(10,1288.854);
   Default_allWcosTheta__2->SetBinContent(11,1111.664);
   Default_allWcosTheta__2->SetBinContent(12,1182.867);
   Default_allWcosTheta__2->SetBinContent(13,1201.264);
   Default_allWcosTheta__2->SetBinContent(14,1068.249);
   Default_allWcosTheta__2->SetBinContent(15,1139.399);
   Default_allWcosTheta__2->SetBinContent(16,979.4273);
   Default_allWcosTheta__2->SetBinContent(17,824.132);
   Default_allWcosTheta__2->SetBinContent(18,778.7065);
   Default_allWcosTheta__2->SetBinContent(19,578.6028);
   Default_allWcosTheta__2->SetBinContent(20,634.6849);
   Default_allWcosTheta__2->SetEntries(4260);
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
   Default_allWcosTheta->Add(Default_allWcosTheta__2,"");
   
   TH1D *Default_allWcosTheta__3 = new TH1D("Default_allWcosTheta__3","W+jets",20,-1,1);
   Default_allWcosTheta__3->SetBinContent(1,21752.49);
   Default_allWcosTheta__3->SetBinContent(2,22204.93);
   Default_allWcosTheta__3->SetBinContent(3,26416.8);
   Default_allWcosTheta__3->SetBinContent(4,30255.25);
   Default_allWcosTheta__3->SetBinContent(5,32325.86);
   Default_allWcosTheta__3->SetBinContent(6,33622.25);
   Default_allWcosTheta__3->SetBinContent(7,34198.88);
   Default_allWcosTheta__3->SetBinContent(8,34544.29);
   Default_allWcosTheta__3->SetBinContent(9,33929.33);
   Default_allWcosTheta__3->SetBinContent(10,33170.03);
   Default_allWcosTheta__3->SetBinContent(11,31749.15);
   Default_allWcosTheta__3->SetBinContent(12,30247.23);
   Default_allWcosTheta__3->SetBinContent(13,27956.5);
   Default_allWcosTheta__3->SetBinContent(14,25541.08);
   Default_allWcosTheta__3->SetBinContent(15,22358.26);
   Default_allWcosTheta__3->SetBinContent(16,18525.96);
   Default_allWcosTheta__3->SetBinContent(17,14731.06);
   Default_allWcosTheta__3->SetBinContent(18,11853.14);
   Default_allWcosTheta__3->SetBinContent(19,9713.08);
   Default_allWcosTheta__3->SetBinContent(20,7729.08);
   Default_allWcosTheta__3->SetBinContent(21,1.359247);
   Default_allWcosTheta__3->SetEntries(534561);
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
   Default_allWcosTheta->Add(Default_allWcosTheta__3,"");
   
   TH1D *Default_allWcosTheta__4 = new TH1D("Default_allWcosTheta__4","DiBoson",20,-1,1);
   Default_allWcosTheta__4->SetBinContent(1,303.7267);
   Default_allWcosTheta__4->SetBinContent(2,305.0971);
   Default_allWcosTheta__4->SetBinContent(3,390.3984);
   Default_allWcosTheta__4->SetBinContent(4,477.8068);
   Default_allWcosTheta__4->SetBinContent(5,513.4979);
   Default_allWcosTheta__4->SetBinContent(6,539.4253);
   Default_allWcosTheta__4->SetBinContent(7,554.0099);
   Default_allWcosTheta__4->SetBinContent(8,543.9478);
   Default_allWcosTheta__4->SetBinContent(9,532.8563);
   Default_allWcosTheta__4->SetBinContent(10,512.891);
   Default_allWcosTheta__4->SetBinContent(11,473.5715);
   Default_allWcosTheta__4->SetBinContent(12,450.7161);
   Default_allWcosTheta__4->SetBinContent(13,397.7437);
   Default_allWcosTheta__4->SetBinContent(14,358.3693);
   Default_allWcosTheta__4->SetBinContent(15,302.9518);
   Default_allWcosTheta__4->SetBinContent(16,224.9077);
   Default_allWcosTheta__4->SetBinContent(17,163.7117);
   Default_allWcosTheta__4->SetBinContent(18,103.9252);
   Default_allWcosTheta__4->SetBinContent(19,74.32778);
   Default_allWcosTheta__4->SetBinContent(20,58.9185);
   Default_allWcosTheta__4->SetEntries(44841);
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
   Default_allWcosTheta->Add(Default_allWcosTheta__4,"");
   
   TH1D *Default_allWcosTheta__5 = new TH1D("Default_allWcosTheta__5","DiBoson",20,-1,1);
   Default_allWcosTheta__5->SetBinContent(1,4.799782);
   Default_allWcosTheta__5->SetBinContent(2,3.983066);
   Default_allWcosTheta__5->SetBinContent(3,5.182375);
   Default_allWcosTheta__5->SetBinContent(4,6.326194);
   Default_allWcosTheta__5->SetBinContent(5,7.859227);
   Default_allWcosTheta__5->SetBinContent(6,7.466871);
   Default_allWcosTheta__5->SetBinContent(7,8.902761);
   Default_allWcosTheta__5->SetBinContent(8,7.90641);
   Default_allWcosTheta__5->SetBinContent(9,7.412715);
   Default_allWcosTheta__5->SetBinContent(10,7.848964);
   Default_allWcosTheta__5->SetBinContent(11,7.009608);
   Default_allWcosTheta__5->SetBinContent(12,6.75463);
   Default_allWcosTheta__5->SetBinContent(13,5.80782);
   Default_allWcosTheta__5->SetBinContent(14,5.038408);
   Default_allWcosTheta__5->SetBinContent(15,4.753066);
   Default_allWcosTheta__5->SetBinContent(16,4.314738);
   Default_allWcosTheta__5->SetBinContent(17,2.893479);
   Default_allWcosTheta__5->SetBinContent(18,2.800339);
   Default_allWcosTheta__5->SetBinContent(19,2.158262);
   Default_allWcosTheta__5->SetBinContent(20,1.741407);
   Default_allWcosTheta__5->SetEntries(4692);
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
   Default_allWcosTheta__6->SetBinContent(1,79.46116);
   Default_allWcosTheta__6->SetBinContent(2,91.07096);
   Default_allWcosTheta__6->SetBinContent(3,129.6208);
   Default_allWcosTheta__6->SetBinContent(4,149.7354);
   Default_allWcosTheta__6->SetBinContent(5,164.1428);
   Default_allWcosTheta__6->SetBinContent(6,181.829);
   Default_allWcosTheta__6->SetBinContent(7,180.3633);
   Default_allWcosTheta__6->SetBinContent(8,179.0158);
   Default_allWcosTheta__6->SetBinContent(9,180.8518);
   Default_allWcosTheta__6->SetBinContent(10,177.1555);
   Default_allWcosTheta__6->SetBinContent(11,168.3026);
   Default_allWcosTheta__6->SetBinContent(12,162.8223);
   Default_allWcosTheta__6->SetBinContent(13,144.2981);
   Default_allWcosTheta__6->SetBinContent(14,127.7921);
   Default_allWcosTheta__6->SetBinContent(15,110.8064);
   Default_allWcosTheta__6->SetBinContent(16,80.86436);
   Default_allWcosTheta__6->SetBinContent(17,64.73757);
   Default_allWcosTheta__6->SetBinContent(18,44.17966);
   Default_allWcosTheta__6->SetBinContent(19,29.17581);
   Default_allWcosTheta__6->SetBinContent(20,23.2456);
   Default_allWcosTheta__6->SetEntries(27793);
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
   Default_allWcosTheta__7->SetBinContent(1,1689.774);
   Default_allWcosTheta__7->SetBinContent(2,1452.629);
   Default_allWcosTheta__7->SetBinContent(3,1708.196);
   Default_allWcosTheta__7->SetBinContent(4,1964.488);
   Default_allWcosTheta__7->SetBinContent(5,2113.906);
   Default_allWcosTheta__7->SetBinContent(6,2168.534);
   Default_allWcosTheta__7->SetBinContent(7,2213.72);
   Default_allWcosTheta__7->SetBinContent(8,2167.403);
   Default_allWcosTheta__7->SetBinContent(9,2069.05);
   Default_allWcosTheta__7->SetBinContent(10,1934.076);
   Default_allWcosTheta__7->SetBinContent(11,1757.13);
   Default_allWcosTheta__7->SetBinContent(12,1598.227);
   Default_allWcosTheta__7->SetBinContent(13,1354.272);
   Default_allWcosTheta__7->SetBinContent(14,1189.496);
   Default_allWcosTheta__7->SetBinContent(15,958.1944);
   Default_allWcosTheta__7->SetBinContent(16,731.3514);
   Default_allWcosTheta__7->SetBinContent(17,533.4706);
   Default_allWcosTheta__7->SetBinContent(18,375.985);
   Default_allWcosTheta__7->SetBinContent(19,274.7631);
   Default_allWcosTheta__7->SetBinContent(20,213.911);
   Default_allWcosTheta__7->SetBinContent(21,0.1167082);
   Default_allWcosTheta__7->SetEntries(185598);
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
   Default_allWcosTheta__8->SetBinContent(1,12.59931);
   Default_allWcosTheta__8->SetBinContent(2,13.20936);
   Default_allWcosTheta__8->SetBinContent(3,15.11079);
   Default_allWcosTheta__8->SetBinContent(4,17.12591);
   Default_allWcosTheta__8->SetBinContent(5,17.02752);
   Default_allWcosTheta__8->SetBinContent(6,17.01789);
   Default_allWcosTheta__8->SetBinContent(7,16.40553);
   Default_allWcosTheta__8->SetBinContent(8,15.45854);
   Default_allWcosTheta__8->SetBinContent(9,13.3334);
   Default_allWcosTheta__8->SetBinContent(10,11.62323);
   Default_allWcosTheta__8->SetBinContent(11,10.21074);
   Default_allWcosTheta__8->SetBinContent(12,9.181621);
   Default_allWcosTheta__8->SetBinContent(13,7.550772);
   Default_allWcosTheta__8->SetBinContent(14,6.109495);
   Default_allWcosTheta__8->SetBinContent(15,5.077338);
   Default_allWcosTheta__8->SetBinContent(16,3.768068);
   Default_allWcosTheta__8->SetBinContent(17,3.242744);
   Default_allWcosTheta__8->SetBinContent(18,2.437547);
   Default_allWcosTheta__8->SetBinContent(19,2.199177);
   Default_allWcosTheta__8->SetBinContent(20,1.547092);
   Default_allWcosTheta__8->SetEntries(32672);
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
   Default_allWcosTheta__9->SetBinContent(1,5.345032);
   Default_allWcosTheta__9->SetBinContent(2,5.754613);
   Default_allWcosTheta__9->SetBinContent(3,7.327315);
   Default_allWcosTheta__9->SetBinContent(4,7.521953);
   Default_allWcosTheta__9->SetBinContent(5,7.438907);
   Default_allWcosTheta__9->SetBinContent(6,7.595783);
   Default_allWcosTheta__9->SetBinContent(7,7.759408);
   Default_allWcosTheta__9->SetBinContent(8,6.965125);
   Default_allWcosTheta__9->SetBinContent(9,6.227928);
   Default_allWcosTheta__9->SetBinContent(10,5.947236);
   Default_allWcosTheta__9->SetBinContent(11,5.051939);
   Default_allWcosTheta__9->SetBinContent(12,4.592456);
   Default_allWcosTheta__9->SetBinContent(13,3.768045);
   Default_allWcosTheta__9->SetBinContent(14,3.294545);
   Default_allWcosTheta__9->SetBinContent(15,2.370245);
   Default_allWcosTheta__9->SetBinContent(16,2.090025);
   Default_allWcosTheta__9->SetBinContent(17,1.44696);
   Default_allWcosTheta__9->SetBinContent(18,1.242982);
   Default_allWcosTheta__9->SetBinContent(19,1.087599);
   Default_allWcosTheta__9->SetBinContent(20,0.7949291);
   Default_allWcosTheta__9->SetEntries(16611);
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
   Default_allWcosTheta__10->SetBinContent(1,86.05541);
   Default_allWcosTheta__10->SetBinContent(2,74.42051);
   Default_allWcosTheta__10->SetBinContent(3,108.2909);
   Default_allWcosTheta__10->SetBinContent(4,119.8061);
   Default_allWcosTheta__10->SetBinContent(5,131.459);
   Default_allWcosTheta__10->SetBinContent(6,151.7479);
   Default_allWcosTheta__10->SetBinContent(7,144.1366);
   Default_allWcosTheta__10->SetBinContent(8,135.2852);
   Default_allWcosTheta__10->SetBinContent(9,164.2159);
   Default_allWcosTheta__10->SetBinContent(10,139.2044);
   Default_allWcosTheta__10->SetBinContent(11,142.0771);
   Default_allWcosTheta__10->SetBinContent(12,119.09);
   Default_allWcosTheta__10->SetBinContent(13,99.93848);
   Default_allWcosTheta__10->SetBinContent(14,94.28411);
   Default_allWcosTheta__10->SetBinContent(15,83.51502);
   Default_allWcosTheta__10->SetBinContent(16,70.7);
   Default_allWcosTheta__10->SetBinContent(17,44.53957);
   Default_allWcosTheta__10->SetBinContent(18,30.74649);
   Default_allWcosTheta__10->SetBinContent(19,17.30054);
   Default_allWcosTheta__10->SetBinContent(20,12.79658);
   Default_allWcosTheta__10->SetEntries(4635);
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
   Default_allWcosTheta__11->SetBinContent(1,91.07532);
   Default_allWcosTheta__11->SetBinContent(2,79.22504);
   Default_allWcosTheta__11->SetBinContent(3,107.0092);
   Default_allWcosTheta__11->SetBinContent(4,114.4199);
   Default_allWcosTheta__11->SetBinContent(5,133.7991);
   Default_allWcosTheta__11->SetBinContent(6,167.3929);
   Default_allWcosTheta__11->SetBinContent(7,157.3895);
   Default_allWcosTheta__11->SetBinContent(8,137.4857);
   Default_allWcosTheta__11->SetBinContent(9,151.7084);
   Default_allWcosTheta__11->SetBinContent(10,140.8015);
   Default_allWcosTheta__11->SetBinContent(11,125.2736);
   Default_allWcosTheta__11->SetBinContent(12,99.76193);
   Default_allWcosTheta__11->SetBinContent(13,104.8676);
   Default_allWcosTheta__11->SetBinContent(14,94.74685);
   Default_allWcosTheta__11->SetBinContent(15,78.64725);
   Default_allWcosTheta__11->SetBinContent(16,57.29717);
   Default_allWcosTheta__11->SetBinContent(17,43.19744);
   Default_allWcosTheta__11->SetBinContent(18,29.21438);
   Default_allWcosTheta__11->SetBinContent(19,19.53994);
   Default_allWcosTheta__11->SetBinContent(20,13.45522);
   Default_allWcosTheta__11->SetEntries(4559);
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
   Default_allWcosTheta__12->SetBinContent(1,185.2567);
   Default_allWcosTheta__12->SetBinContent(2,202.1343);
   Default_allWcosTheta__12->SetBinContent(3,250.3756);
   Default_allWcosTheta__12->SetBinContent(4,281.1854);
   Default_allWcosTheta__12->SetBinContent(5,311.3763);
   Default_allWcosTheta__12->SetBinContent(6,321.0722);
   Default_allWcosTheta__12->SetBinContent(7,336.1104);
   Default_allWcosTheta__12->SetBinContent(8,321.5649);
   Default_allWcosTheta__12->SetBinContent(9,308.5415);
   Default_allWcosTheta__12->SetBinContent(10,276.8367);
   Default_allWcosTheta__12->SetBinContent(11,258.847);
   Default_allWcosTheta__12->SetBinContent(12,228.5421);
   Default_allWcosTheta__12->SetBinContent(13,195.4492);
   Default_allWcosTheta__12->SetBinContent(14,163.5782);
   Default_allWcosTheta__12->SetBinContent(15,129.5443);
   Default_allWcosTheta__12->SetBinContent(16,110.5461);
   Default_allWcosTheta__12->SetBinContent(17,86.97056);
   Default_allWcosTheta__12->SetBinContent(18,74.58429);
   Default_allWcosTheta__12->SetBinContent(19,58.06345);
   Default_allWcosTheta__12->SetBinContent(20,45.29715);
   Default_allWcosTheta__12->SetEntries(48640);
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
   Default_allWcosTheta__13->SetBinContent(1,93.37915);
   Default_allWcosTheta__13->SetBinContent(2,102.953);
   Default_allWcosTheta__13->SetBinContent(3,139.4495);
   Default_allWcosTheta__13->SetBinContent(4,150.3097);
   Default_allWcosTheta__13->SetBinContent(5,166.3633);
   Default_allWcosTheta__13->SetBinContent(6,185.6514);
   Default_allWcosTheta__13->SetBinContent(7,189.2208);
   Default_allWcosTheta__13->SetBinContent(8,177.0945);
   Default_allWcosTheta__13->SetBinContent(9,181.3198);
   Default_allWcosTheta__13->SetBinContent(10,161.289);
   Default_allWcosTheta__13->SetBinContent(11,151.5436);
   Default_allWcosTheta__13->SetBinContent(12,128.9865);
   Default_allWcosTheta__13->SetBinContent(13,110.9862);
   Default_allWcosTheta__13->SetBinContent(14,95.82004);
   Default_allWcosTheta__13->SetBinContent(15,73.56143);
   Default_allWcosTheta__13->SetBinContent(16,58.13571);
   Default_allWcosTheta__13->SetBinContent(17,45.97221);
   Default_allWcosTheta__13->SetBinContent(18,37.8048);
   Default_allWcosTheta__13->SetBinContent(19,30.06392);
   Default_allWcosTheta__13->SetBinContent(20,24.63695);
   Default_allWcosTheta__13->SetEntries(20788);
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
   Default_allWcosTheta__14->SetBinContent(1,23119);
   Default_allWcosTheta__14->SetBinContent(2,22126);
   Default_allWcosTheta__14->SetBinContent(3,26059);
   Default_allWcosTheta__14->SetBinContent(4,30005);
   Default_allWcosTheta__14->SetBinContent(5,32387);
   Default_allWcosTheta__14->SetBinContent(6,33912);
   Default_allWcosTheta__14->SetBinContent(7,34786);
   Default_allWcosTheta__14->SetBinContent(8,35221);
   Default_allWcosTheta__14->SetBinContent(9,35081);
   Default_allWcosTheta__14->SetBinContent(10,34358);
   Default_allWcosTheta__14->SetBinContent(11,33289);
   Default_allWcosTheta__14->SetBinContent(12,31566);
   Default_allWcosTheta__14->SetBinContent(13,30103);
   Default_allWcosTheta__14->SetBinContent(14,27220);
   Default_allWcosTheta__14->SetBinContent(15,24655);
   Default_allWcosTheta__14->SetBinContent(16,21029);
   Default_allWcosTheta__14->SetBinContent(17,17007);
   Default_allWcosTheta__14->SetBinContent(18,13509);
   Default_allWcosTheta__14->SetBinContent(19,11384);
   Default_allWcosTheta__14->SetBinContent(20,9683);
   Default_allWcosTheta__14->SetEntries(526499);
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
   Default_allWcosTheta->Modified();
   Default_allWcosTheta->cd();
   Default_allWcosTheta->SetSelected(Default_allWcosTheta);
}
