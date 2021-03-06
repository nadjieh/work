{
//=========Macro generated from canvas: Default_allWcosTheta/c1
//=========  (Fri Aug  2 13:34:17 2013) by ROOT version5.32/00
   TCanvas *c = new TCanvas("c", "c",140,82,604,628);
   c->Range(-1.275862,-45.98206,1.022989,434.2249);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.01);
   c->SetTopMargin(0.04);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   double nTotal = 0;
   double factor = 0.932741;
   THStack *Default_allWcosTheta = new THStack();
   Default_allWcosTheta->SetName("Default_allWcosTheta");
  //Default_allWcosTheta->SetTitle("Default_allWcosTheta");
   
   TH1F *Default_allWcosTheta_stack_1 = new TH1F("Default_allWcosTheta_stack_1","Default_allWcosTheta",20,-1,1);
   Default_allWcosTheta_stack_1->SetMinimum(0);
   Default_allWcosTheta_stack_1->SetMaximum(40672.16);
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
   Default_allWcosTheta__1->SetBinContent(1,333.8688);
   Default_allWcosTheta__1->SetBinContent(3,107.3942);
   Default_allWcosTheta__1->SetBinContent(4,242.4732);
   Default_allWcosTheta__1->SetBinContent(5,122.4153);
   Default_allWcosTheta__1->SetBinContent(6,113.112);
   Default_allWcosTheta__1->SetBinContent(7,99.60757);
   Default_allWcosTheta__1->SetBinContent(9,231.1992);
   Default_allWcosTheta__1->SetBinContent(10,211.8901);
   Default_allWcosTheta__1->SetBinContent(11,117.6441);
   Default_allWcosTheta__1->SetBinContent(12,44.1035);
   Default_allWcosTheta__1->SetBinContent(13,152.8313);
   Default_allWcosTheta__1->SetBinContent(14,105.0103);
   Default_allWcosTheta__1->SetBinContent(15,367.4015);
   Default_allWcosTheta__1->SetBinContent(16,265.3695);
   Default_allWcosTheta__1->SetBinContent(17,275.9331);
   Default_allWcosTheta__1->SetBinContent(18,457.1619);
   Default_allWcosTheta__1->SetBinContent(19,84.54122);
   Default_allWcosTheta__1->SetBinContent(20,313.7558);
   Default_allWcosTheta__1->SetBinContent(21,103.9675);
   Default_allWcosTheta__1->SetEntries(48);
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
   nTotal+=Default_allWcosTheta__1->Integral();
   Default_allWcosTheta__1->Scale(factor);
   cout<<Default_allWcosTheta__1->GetTitle()<<"\t"<<Default_allWcosTheta__1->Integral()<<endl;
   //Default_allWcosTheta__1->Scale(526499/Default_allWcosTheta__1->Integral());
   Default_allWcosTheta->Add(Default_allWcosTheta__1,"");
   
   TH1D *Default_allWcosTheta__2 = new TH1D("Default_allWcosTheta__2","Z/gamma^{*}+jets",20,-1,1);
   Default_allWcosTheta__2->SetBinContent(1,295.2256);
   Default_allWcosTheta__2->SetBinContent(2,372.5673);
   Default_allWcosTheta__2->SetBinContent(3,504.021);
   Default_allWcosTheta__2->SetBinContent(4,622.7188);
   Default_allWcosTheta__2->SetBinContent(5,707.2364);
   Default_allWcosTheta__2->SetBinContent(6,869.2923);
   Default_allWcosTheta__2->SetBinContent(7,915.8681);
   Default_allWcosTheta__2->SetBinContent(8,799.0555);
   Default_allWcosTheta__2->SetBinContent(9,820.2313);
   Default_allWcosTheta__2->SetBinContent(10,852.0724);
   Default_allWcosTheta__2->SetBinContent(11,734.9308);
   Default_allWcosTheta__2->SetBinContent(12,782.0039);
   Default_allWcosTheta__2->SetBinContent(13,794.1657);
   Default_allWcosTheta__2->SetBinContent(14,706.2284);
   Default_allWcosTheta__2->SetBinContent(15,753.2667);
   Default_allWcosTheta__2->SetBinContent(16,647.5079);
   Default_allWcosTheta__2->SetBinContent(17,544.8408);
   Default_allWcosTheta__2->SetBinContent(18,514.8096);
   Default_allWcosTheta__2->SetBinContent(19,382.5193);
   Default_allWcosTheta__2->SetBinContent(20,419.5957);
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
   nTotal+=Default_allWcosTheta__2->Integral();
   Default_allWcosTheta__2->Scale(factor);
   cout<<Default_allWcosTheta__2->GetTitle()<<"\t"<<Default_allWcosTheta__2->Integral()<<endl;
   //Default_allWcosTheta__2->Scale(526499/Default_allWcosTheta__2->Integral());
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
   nTotal+=Default_allWcosTheta__3->Integral();
   Default_allWcosTheta__3->Scale(factor);
   cout<<Default_allWcosTheta__3->GetTitle()<<"\t"<<Default_allWcosTheta__3->Integral()<<endl;
   //Default_allWcosTheta__3->Scale(526499/Default_allWcosTheta__3->Integral());
   Default_allWcosTheta->Add(Default_allWcosTheta__3,"");
   
   TH1D *Default_allWcosTheta__4 = new TH1D("Default_allWcosTheta__4","DiBoson",20,-1,1);
   Default_allWcosTheta__4->SetBinContent(1,200.7963);
   Default_allWcosTheta__4->SetBinContent(2,201.7024);
   Default_allWcosTheta__4->SetBinContent(3,258.0958);
   Default_allWcosTheta__4->SetBinContent(4,315.8822);
   Default_allWcosTheta__4->SetBinContent(5,339.4779);
   Default_allWcosTheta__4->SetBinContent(6,356.6187);
   Default_allWcosTheta__4->SetBinContent(7,366.2607);
   Default_allWcosTheta__4->SetBinContent(8,359.6086);
   Default_allWcosTheta__4->SetBinContent(9,352.2759);
   Default_allWcosTheta__4->SetBinContent(10,339.0767);
   Default_allWcosTheta__4->SetBinContent(11,313.0822);
   Default_allWcosTheta__4->SetBinContent(12,297.9723);
   Default_allWcosTheta__4->SetBinContent(13,262.9518);
   Default_allWcosTheta__4->SetBinContent(14,236.921);
   Default_allWcosTheta__4->SetBinContent(15,200.2841);
   Default_allWcosTheta__4->SetBinContent(16,148.6884);
   Default_allWcosTheta__4->SetBinContent(17,108.2313);
   Default_allWcosTheta__4->SetBinContent(18,68.70587);
   Default_allWcosTheta__4->SetBinContent(19,49.13874);
   Default_allWcosTheta__4->SetBinContent(20,38.95153);
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
   nTotal+=Default_allWcosTheta__4->Integral();
   Default_allWcosTheta__4->Scale(factor);
   cout<<Default_allWcosTheta__4->GetTitle()<<"\t"<<Default_allWcosTheta__4->Integral()<<endl;
//   Default_allWcosTheta__4->Scale(526499/Default_allWcosTheta__4->Integral());
   Default_allWcosTheta->Add(Default_allWcosTheta__4,"");
   
   TH1D *Default_allWcosTheta__5 = new TH1D("Default_allWcosTheta__5","DiBoson",20,-1,1);
   Default_allWcosTheta__5->SetBinContent(1,3.173177);
   Default_allWcosTheta__5->SetBinContent(2,2.633239);
   Default_allWcosTheta__5->SetBinContent(3,3.426113);
   Default_allWcosTheta__5->SetBinContent(4,4.182301);
   Default_allWcosTheta__5->SetBinContent(5,5.195803);
   Default_allWcosTheta__5->SetBinContent(6,4.936413);
   Default_allWcosTheta__5->SetBinContent(7,5.885692);
   Default_allWcosTheta__5->SetBinContent(8,5.226996);
   Default_allWcosTheta__5->SetBinContent(9,4.90061);
   Default_allWcosTheta__5->SetBinContent(10,5.189018);
   Default_allWcosTheta__5->SetBinContent(11,4.634112);
   Default_allWcosTheta__5->SetBinContent(12,4.465544);
   Default_allWcosTheta__5->SetBinContent(13,3.8396);
   Default_allWcosTheta__5->SetBinContent(14,3.330935);
   Default_allWcosTheta__5->SetBinContent(15,3.142293);
   Default_allWcosTheta__5->SetBinContent(16,2.85251);
   Default_allWcosTheta__5->SetBinContent(17,1.912904);
   Default_allWcosTheta__5->SetBinContent(18,1.851328);
   Default_allWcosTheta__5->SetBinContent(19,1.426846);
   Default_allWcosTheta__5->SetBinContent(20,1.151259);
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
   Default_allWcosTheta__5->Scale(factor);
   nTotal+=Default_allWcosTheta__5->Integral();
   cout<<Default_allWcosTheta__5->GetTitle()<<"\t"<<Default_allWcosTheta__5->Integral()<<endl;
   //Default_allWcosTheta__5->Scale(526499/Default_allWcosTheta__5->Integral());
   Default_allWcosTheta->Add(Default_allWcosTheta__5,"");

   TH1D *Default_allWcosTheta__6 = new TH1D("Default_allWcosTheta__6","DiBoson",20,-1,1);
   Default_allWcosTheta__6->SetBinContent(1,52.53246);
   Default_allWcosTheta__6->SetBinContent(2,60.2078);
   Default_allWcosTheta__6->SetBinContent(3,85.69343);
   Default_allWcosTheta__6->SetBinContent(4,98.99139);
   Default_allWcosTheta__6->SetBinContent(5,108.5162);
   Default_allWcosTheta__6->SetBinContent(6,120.2087);
   Default_allWcosTheta__6->SetBinContent(7,119.2397);
   Default_allWcosTheta__6->SetBinContent(8,118.3489);
   Default_allWcosTheta__6->SetBinContent(9,119.5627);
   Default_allWcosTheta__6->SetBinContent(10,117.119);
   Default_allWcosTheta__6->SetBinContent(11,111.2663);
   Default_allWcosTheta__6->SetBinContent(12,107.6433);
   Default_allWcosTheta__6->SetBinContent(13,95.39671);
   Default_allWcosTheta__6->SetBinContent(14,84.48444);
   Default_allWcosTheta__6->SetBinContent(15,73.25508);
   Default_allWcosTheta__6->SetBinContent(16,53.46013);
   Default_allWcosTheta__6->SetBinContent(17,42.79857);
   Default_allWcosTheta__6->SetBinContent(18,29.20756);
   Default_allWcosTheta__6->SetBinContent(19,19.28838);
   Default_allWcosTheta__6->SetBinContent(20,15.36786);
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
   Default_allWcosTheta__6->Scale(factor);
   nTotal+=Default_allWcosTheta__6->Integral();
   cout<<Default_allWcosTheta__6->GetTitle()<<"\t"<<Default_allWcosTheta__6->Integral()<<endl;
   //Default_allWcosTheta__6->Scale(526499/Default_allWcosTheta__6->Integral());
   Default_allWcosTheta->Add(Default_allWcosTheta__6,"");
   
   TH1D *Default_allWcosTheta__7 = new TH1D("Default_allWcosTheta__7","t#bar{t}",20,-1,1);
   Default_allWcosTheta__7->SetBinContent(1,1657.27);
   Default_allWcosTheta__7->SetBinContent(2,1424.687);
   Default_allWcosTheta__7->SetBinContent(3,1675.338);
   Default_allWcosTheta__7->SetBinContent(4,1926.7);
   Default_allWcosTheta__7->SetBinContent(5,2073.243);
   Default_allWcosTheta__7->SetBinContent(6,2126.82);
   Default_allWcosTheta__7->SetBinContent(7,2171.137);
   Default_allWcosTheta__7->SetBinContent(8,2125.711);
   Default_allWcosTheta__7->SetBinContent(9,2029.25);
   Default_allWcosTheta__7->SetBinContent(10,1896.873);
   Default_allWcosTheta__7->SetBinContent(11,1723.33);
   Default_allWcosTheta__7->SetBinContent(12,1567.484);
   Default_allWcosTheta__7->SetBinContent(13,1328.222);
   Default_allWcosTheta__7->SetBinContent(14,1166.615);
   Default_allWcosTheta__7->SetBinContent(15,939.7628);
   Default_allWcosTheta__7->SetBinContent(16,717.2833);
   Default_allWcosTheta__7->SetBinContent(17,523.2089);
   Default_allWcosTheta__7->SetBinContent(18,368.7526);
   Default_allWcosTheta__7->SetBinContent(19,269.4778);
   Default_allWcosTheta__7->SetBinContent(20,209.7963);
   Default_allWcosTheta__7->SetBinContent(21,0.1144632);
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
   Default_allWcosTheta__7->Scale(factor);
   nTotal+=Default_allWcosTheta__7->Integral();
   cout<<Default_allWcosTheta__7->GetTitle()<<"\t"<<Default_allWcosTheta__7->Integral()<<endl;
   //Default_allWcosTheta__7->Scale(526499/Default_allWcosTheta__7->Integral());
   Default_allWcosTheta->Add(Default_allWcosTheta__7,"");
   
   TH1D *Default_allWcosTheta__8 = new TH1D("Default_allWcosTheta__8","s-channel",20,-1,1);
   Default_allWcosTheta__8->SetBinContent(1,12.35695);
   Default_allWcosTheta__8->SetBinContent(2,12.95527);
   Default_allWcosTheta__8->SetBinContent(3,14.82012);
   Default_allWcosTheta__8->SetBinContent(4,16.79648);
   Default_allWcosTheta__8->SetBinContent(5,16.69998);
   Default_allWcosTheta__8->SetBinContent(6,16.69054);
   Default_allWcosTheta__8->SetBinContent(7,16.08996);
   Default_allWcosTheta__8->SetBinContent(8,15.16119);
   Default_allWcosTheta__8->SetBinContent(9,13.07692);
   Default_allWcosTheta__8->SetBinContent(10,11.39964);
   Default_allWcosTheta__8->SetBinContent(11,10.01433);
   Default_allWcosTheta__8->SetBinContent(12,9.005006);
   Default_allWcosTheta__8->SetBinContent(13,7.405527);
   Default_allWcosTheta__8->SetBinContent(14,5.991974);
   Default_allWcosTheta__8->SetBinContent(15,4.979672);
   Default_allWcosTheta__8->SetBinContent(16,3.695587);
   Default_allWcosTheta__8->SetBinContent(17,3.180368);
   Default_allWcosTheta__8->SetBinContent(18,2.390659);
   Default_allWcosTheta__8->SetBinContent(19,2.156875);
   Default_allWcosTheta__8->SetBinContent(20,1.517332);
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
   nTotal+=Default_allWcosTheta__8->Integral();
   Default_allWcosTheta__8->Scale(factor);
   cout<<Default_allWcosTheta__8->GetTitle()<<"\t"<<Default_allWcosTheta__8->Integral()<<endl;
//   Default_allWcosTheta__8->Scale(526499/Default_allWcosTheta__8->Integral());
   Default_allWcosTheta->Add(Default_allWcosTheta__8,"");
   
   TH1D *Default_allWcosTheta__9 = new TH1D("Default_allWcosTheta__9","s-channel",20,-1,1);
   Default_allWcosTheta__9->SetBinContent(1,5.242216);
   Default_allWcosTheta__9->SetBinContent(2,5.643919);
   Default_allWcosTheta__9->SetBinContent(3,7.186369);
   Default_allWcosTheta__9->SetBinContent(4,7.377262);
   Default_allWcosTheta__9->SetBinContent(5,7.295814);
   Default_allWcosTheta__9->SetBinContent(6,7.449673);
   Default_allWcosTheta__9->SetBinContent(7,7.61015);
   Default_allWcosTheta__9->SetBinContent(8,6.831146);
   Default_allWcosTheta__9->SetBinContent(9,6.10813);
   Default_allWcosTheta__9->SetBinContent(10,5.832837);
   Default_allWcosTheta__9->SetBinContent(11,4.954761);
   Default_allWcosTheta__9->SetBinContent(12,4.504117);
   Default_allWcosTheta__9->SetBinContent(13,3.695564);
   Default_allWcosTheta__9->SetBinContent(14,3.231172);
   Default_allWcosTheta__9->SetBinContent(15,2.324651);
   Default_allWcosTheta__9->SetBinContent(16,2.049822);
   Default_allWcosTheta__9->SetBinContent(17,1.419127);
   Default_allWcosTheta__9->SetBinContent(18,1.219073);
   Default_allWcosTheta__9->SetBinContent(19,1.066678);
   Default_allWcosTheta__9->SetBinContent(20,0.7796381);
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
   Default_allWcosTheta__9->Scale(factor);
   nTotal+=Default_allWcosTheta__9->Integral();
   cout<<Default_allWcosTheta__9->GetTitle()<<"\t"<<Default_allWcosTheta__9->Integral()<<endl;
//   Default_allWcosTheta__9->Scale(526499/Default_allWcosTheta__9->Integral());
   Default_allWcosTheta->Add(Default_allWcosTheta__9,"");
   
   TH1D *Default_allWcosTheta__10 = new TH1D("Default_allWcosTheta__10","tW-channel",20,-1,1);
   Default_allWcosTheta__10->SetBinContent(1,84.40007);
   Default_allWcosTheta__10->SetBinContent(2,72.98897);
   Default_allWcosTheta__10->SetBinContent(3,106.2078);
   Default_allWcosTheta__10->SetBinContent(4,117.5016);
   Default_allWcosTheta__10->SetBinContent(5,128.9303);
   Default_allWcosTheta__10->SetBinContent(6,148.8289);
   Default_allWcosTheta__10->SetBinContent(7,141.364);
   Default_allWcosTheta__10->SetBinContent(8,132.6829);
   Default_allWcosTheta__10->SetBinContent(9,161.0571);
   Default_allWcosTheta__10->SetBinContent(10,136.5267);
   Default_allWcosTheta__10->SetBinContent(11,139.3442);
   Default_allWcosTheta__10->SetBinContent(12,116.7992);
   Default_allWcosTheta__10->SetBinContent(13,98.01609);
   Default_allWcosTheta__10->SetBinContent(14,92.47049);
   Default_allWcosTheta__10->SetBinContent(15,81.90854);
   Default_allWcosTheta__10->SetBinContent(16,69.34003);
   Default_allWcosTheta__10->SetBinContent(17,43.68282);
   Default_allWcosTheta__10->SetBinContent(18,30.15505);
   Default_allWcosTheta__10->SetBinContent(19,16.96775);
   Default_allWcosTheta__10->SetBinContent(20,12.55043);
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

   nTotal+=Default_allWcosTheta__10->Integral();
   Default_allWcosTheta__10->Scale(factor);
   cout<<Default_allWcosTheta__10->GetTitle()<<"\t"<<Default_allWcosTheta__10->Integral()<<endl;
   //Default_allWcosTheta__10->Scale(526499/Default_allWcosTheta__10->Integral());
   Default_allWcosTheta->Add(Default_allWcosTheta__10,"");
   
   TH1D *Default_allWcosTheta__11 = new TH1D("Default_allWcosTheta__11","tW-channel",20,-1,1);
   Default_allWcosTheta__11->SetBinContent(1,89.32342);
   Default_allWcosTheta__11->SetBinContent(2,77.70109);
   Default_allWcosTheta__11->SetBinContent(3,104.9508);
   Default_allWcosTheta__11->SetBinContent(4,112.2189);
   Default_allWcosTheta__11->SetBinContent(5,131.2253);
   Default_allWcosTheta__11->SetBinContent(6,164.173);
   Default_allWcosTheta__11->SetBinContent(7,154.362);
   Default_allWcosTheta__11->SetBinContent(8,134.841);
   Default_allWcosTheta__11->SetBinContent(9,148.7902);
   Default_allWcosTheta__11->SetBinContent(10,138.0931);
   Default_allWcosTheta__11->SetBinContent(11,122.8638);
   Default_allWcosTheta__11->SetBinContent(12,97.84293);
   Default_allWcosTheta__11->SetBinContent(13,102.8504);
   Default_allWcosTheta__11->SetBinContent(14,92.92433);
   Default_allWcosTheta__11->SetBinContent(15,77.13441);
   Default_allWcosTheta__11->SetBinContent(16,56.19502);
   Default_allWcosTheta__11->SetBinContent(17,42.36651);
   Default_allWcosTheta__11->SetBinContent(18,28.65242);
   Default_allWcosTheta__11->SetBinContent(19,19.16408);
   Default_allWcosTheta__11->SetBinContent(20,13.1964);
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
   nTotal+=Default_allWcosTheta__11->Integral();
   Default_allWcosTheta__11->Scale(factor);
   cout<<Default_allWcosTheta__11->GetTitle()<<"\t"<<Default_allWcosTheta__11->Integral()<<endl;
   //Default_allWcosTheta__11->Scale(526499/Default_allWcosTheta__11->Integral());
   Default_allWcosTheta->Add(Default_allWcosTheta__11,"");
   
   TH1D *Default_allWcosTheta__12 = new TH1D("Default_allWcosTheta__12","t-channel",20,-1,1);
   Default_allWcosTheta__12->SetBinContent(1,183.3902);
   Default_allWcosTheta__12->SetBinContent(2,200.0977);
   Default_allWcosTheta__12->SetBinContent(3,247.853);
   Default_allWcosTheta__12->SetBinContent(4,278.3524);
   Default_allWcosTheta__12->SetBinContent(5,308.2391);
   Default_allWcosTheta__12->SetBinContent(6,317.8372);
   Default_allWcosTheta__12->SetBinContent(7,332.724);
   Default_allWcosTheta__12->SetBinContent(8,318.325);
   Default_allWcosTheta__12->SetBinContent(9,305.4328);
   Default_allWcosTheta__12->SetBinContent(10,274.0475);
   Default_allWcosTheta__12->SetBinContent(11,256.2391);
   Default_allWcosTheta__12->SetBinContent(12,226.2395);
   Default_allWcosTheta__12->SetBinContent(13,193.48);
   Default_allWcosTheta__12->SetBinContent(14,161.9301);
   Default_allWcosTheta__12->SetBinContent(15,128.239);
   Default_allWcosTheta__12->SetBinContent(16,109.4323);
   Default_allWcosTheta__12->SetBinContent(17,86.0943);
   Default_allWcosTheta__12->SetBinContent(18,73.83282);
   Default_allWcosTheta__12->SetBinContent(19,57.47844);
   Default_allWcosTheta__12->SetBinContent(20,44.84076);
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
   Default_allWcosTheta__12->Scale(factor);
   nTotal+=Default_allWcosTheta__12->Integral();
   cout<<Default_allWcosTheta__12->GetTitle()<<"\t"<<Default_allWcosTheta__12->Integral()<<endl;
   //Default_allWcosTheta__12->Scale(526499/Default_allWcosTheta__12->Integral());
   Default_allWcosTheta->Add(Default_allWcosTheta__12,"");
   
   TH1D *Default_allWcosTheta__13 = new TH1D("Default_allWcosTheta__13","t-channel",20,-1,1);
   Default_allWcosTheta__13->SetBinContent(1,92.43832);
   Default_allWcosTheta__13->SetBinContent(2,101.9157);
   Default_allWcosTheta__13->SetBinContent(3,138.0445);
   Default_allWcosTheta__13->SetBinContent(4,148.7953);
   Default_allWcosTheta__13->SetBinContent(5,164.6871);
   Default_allWcosTheta__13->SetBinContent(6,183.7809);
   Default_allWcosTheta__13->SetBinContent(7,187.3144);
   Default_allWcosTheta__13->SetBinContent(8,175.3102);
   Default_allWcosTheta__13->SetBinContent(9,179.4929);
   Default_allWcosTheta__13->SetBinContent(10,159.664);
   Default_allWcosTheta__13->SetBinContent(11,150.0167);
   Default_allWcosTheta__13->SetBinContent(12,127.687);
   Default_allWcosTheta__13->SetBinContent(13,109.868);
   Default_allWcosTheta__13->SetBinContent(14,94.85462);
   Default_allWcosTheta__13->SetBinContent(15,72.82027);
   Default_allWcosTheta__13->SetBinContent(16,57.54997);
   Default_allWcosTheta__13->SetBinContent(17,45.50902);
   Default_allWcosTheta__13->SetBinContent(18,37.4239);
   Default_allWcosTheta__13->SetBinContent(19,29.76101);
   Default_allWcosTheta__13->SetBinContent(20,24.38872);
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
   nTotal+=Default_allWcosTheta__13->Integral();
   Default_allWcosTheta__13->Scale(factor);
   cout<<Default_allWcosTheta__13->GetTitle()<<"\t"<<Default_allWcosTheta__13->Integral()<<endl;
//   Default_allWcosTheta__13->Scale(526499/Default_allWcosTheta__13->Integral());
   Default_allWcosTheta->Add(Default_allWcosTheta__13,"");
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
   cout<<nTotal<<endl;
   cout<<526499./nTotal<<endl;
   TPaveText *pt = new TPaveText(0.3111207,0.9365254,0.6888793,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Default_allWcosTheta");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
