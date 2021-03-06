{
//=========Macro generated from canvas: allW_BJet_Pt/c1
//=========  (Sun Jul  7 16:17:45 2013) by ROOT version5.32/00
//=========  (Sun Jul  7 15:51:33 2013) by ROOT version5.32/00
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
   
   THStack *allW_BJet_Pt = new THStack();
   allW_BJet_Pt->SetName("allW_BJet_Pt");
//   allW_BJet_Pt->SetTitle("allW_BJet_Pt");
   
   TH1F *allW_BJet_Pt_stack_3 = new TH1F("allW_BJet_Pt_stack_3","allW_BJet_Pt",25,0,200);
   allW_BJet_Pt_stack_3->SetMinimum(0);
   allW_BJet_Pt_stack_3->SetMaximum(8083.744);
   allW_BJet_Pt_stack_3->SetDirectory(0);
   allW_BJet_Pt_stack_3->SetStats(0);
   allW_BJet_Pt_stack_3->GetXaxis()->SetTitle("p_{T}^{b-jet}(GeV)");
   allW_BJet_Pt_stack_3->GetYaxis()->SetTitle("b-jets @ 19.4 fb^{-1}");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   allW_BJet_Pt_stack_3->SetLineColor(ci);
   allW_BJet_Pt_stack_3->GetXaxis()->SetRange(5,25);
   allW_BJet_Pt_stack_3->GetXaxis()->SetLabelFont(42);
   allW_BJet_Pt_stack_3->GetXaxis()->SetLabelSize(0.035);
   allW_BJet_Pt_stack_3->GetXaxis()->SetTitleSize(0.035);
   allW_BJet_Pt_stack_3->GetXaxis()->SetTitleFont(42);
   allW_BJet_Pt_stack_3->GetYaxis()->SetLabelFont(42);
   allW_BJet_Pt_stack_3->GetYaxis()->SetLabelSize(0.035);
   allW_BJet_Pt_stack_3->GetYaxis()->SetTitleSize(0.035);
   allW_BJet_Pt_stack_3->GetYaxis()->SetTitleFont(42);
   allW_BJet_Pt_stack_3->GetZaxis()->SetLabelFont(42);
   allW_BJet_Pt_stack_3->GetZaxis()->SetLabelSize(0.035);
   allW_BJet_Pt_stack_3->GetZaxis()->SetTitleSize(0.035);
   allW_BJet_Pt_stack_3->GetZaxis()->SetTitleFont(42);
   allW_BJet_Pt->SetHistogram(allW_BJet_Pt_stack_3);
   
   
   TH1D *allW_BJet_Pt__29 = new TH1D("allW_BJet_Pt__29","QCD",25,0,200);
   allW_BJet_Pt__29->SetBinContent(6,225.8574);
   allW_BJet_Pt__29->SetBinContent(7,201.2822);
   allW_BJet_Pt__29->SetBinContent(8,155.3726);
   allW_BJet_Pt__29->SetBinContent(9,105.5021);
   allW_BJet_Pt__29->SetBinContent(10,77.77632);
   allW_BJet_Pt__29->SetBinContent(11,57.43205);
   allW_BJet_Pt__29->SetBinContent(12,42.57893);
   allW_BJet_Pt__29->SetBinContent(13,28.17591);
   allW_BJet_Pt__29->SetBinContent(14,22.50472);
   allW_BJet_Pt__29->SetBinContent(15,16.47346);
   allW_BJet_Pt__29->SetBinContent(16,11.25236);
   allW_BJet_Pt__29->SetBinContent(17,8.641813);
   allW_BJet_Pt__29->SetBinContent(18,6.571379);
   allW_BJet_Pt__29->SetBinContent(19,4.951039);
   allW_BJet_Pt__29->SetBinContent(20,3.24068);
   allW_BJet_Pt__29->SetBinContent(21,3.420718);
   allW_BJet_Pt__29->SetBinContent(22,2.610548);
   allW_BJet_Pt__29->SetBinContent(23,1.890397);
   allW_BJet_Pt__29->SetBinContent(24,1.440302);
   allW_BJet_Pt__29->SetBinContent(25,0.4500944);
   allW_BJet_Pt__29->SetBinContent(26,4.410925);
   allW_BJet_Pt__29->SetEntries(10907);
   allW_BJet_Pt__29->SetDirectory(0);
   allW_BJet_Pt__29->SetStats(0);

   ci = TColor::GetColor("#663300");
   allW_BJet_Pt__29->SetFillColor(kGray);

   ci = TColor::GetColor("#663300");
   allW_BJet_Pt__29->SetLineColor(kGray);
   allW_BJet_Pt__29->GetXaxis()->SetTitle("P_{T}");
   allW_BJet_Pt__29->GetXaxis()->SetLabelFont(42);
   allW_BJet_Pt__29->GetXaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__29->GetXaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__29->GetXaxis()->SetTitleFont(42);
   allW_BJet_Pt__29->GetYaxis()->SetLabelFont(42);
   allW_BJet_Pt__29->GetYaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__29->GetYaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__29->GetYaxis()->SetTitleFont(42);
   allW_BJet_Pt__29->GetZaxis()->SetLabelFont(42);
   allW_BJet_Pt__29->GetZaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__29->GetZaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__29->GetZaxis()->SetTitleFont(42);
   allW_BJet_Pt->Add(allW_BJet_Pt__29,"");
   
   TH1D *allW_BJet_Pt__30 = new TH1D("allW_BJet_Pt__30","Z/gamma^{*}+jets",25,0,200);
   allW_BJet_Pt__30->SetBinContent(6,416.1377);
   allW_BJet_Pt__30->SetBinContent(7,304.9947);
   allW_BJet_Pt__30->SetBinContent(8,357.2055);
   allW_BJet_Pt__30->SetBinContent(9,248.3948);
   allW_BJet_Pt__30->SetBinContent(10,146.3365);
   allW_BJet_Pt__30->SetBinContent(11,165.8223);
   allW_BJet_Pt__30->SetBinContent(12,177.3251);
   allW_BJet_Pt__30->SetBinContent(13,131.1339);
   allW_BJet_Pt__30->SetBinContent(14,33.85029);
   allW_BJet_Pt__30->SetBinContent(15,47.91159);
   allW_BJet_Pt__30->SetBinContent(16,45.23172);
   allW_BJet_Pt__30->SetBinContent(17,29.72423);
   allW_BJet_Pt__30->SetBinContent(18,34.18532);
   allW_BJet_Pt__30->SetBinContent(19,31.66114);
   allW_BJet_Pt__30->SetBinContent(20,21.00529);
   allW_BJet_Pt__30->SetBinContent(21,18.85451);
   allW_BJet_Pt__30->SetBinContent(22,27.05296);
   allW_BJet_Pt__30->SetBinContent(23,16.11032);
   allW_BJet_Pt__30->SetBinContent(24,11.73391);
   allW_BJet_Pt__30->SetBinContent(25,18.76703);
   allW_BJet_Pt__30->SetBinContent(26,89.6554);
   allW_BJet_Pt__30->SetEntries(538);
   allW_BJet_Pt__30->SetDirectory(0);
   allW_BJet_Pt__30->SetStats(0);

   ci = TColor::GetColor("#00cc00");
   allW_BJet_Pt__30->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   allW_BJet_Pt__30->SetLineColor(ci);
   allW_BJet_Pt__30->GetXaxis()->SetTitle("P_{T}");
   allW_BJet_Pt__30->GetXaxis()->SetLabelFont(42);
   allW_BJet_Pt__30->GetXaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__30->GetXaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__30->GetXaxis()->SetTitleFont(42);
   allW_BJet_Pt__30->GetYaxis()->SetLabelFont(42);
   allW_BJet_Pt__30->GetYaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__30->GetYaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__30->GetYaxis()->SetTitleFont(42);
   allW_BJet_Pt__30->GetZaxis()->SetLabelFont(42);
   allW_BJet_Pt__30->GetZaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__30->GetZaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__30->GetZaxis()->SetTitleFont(42);
   allW_BJet_Pt->Add(allW_BJet_Pt__30,"");
   
   TH1D *allW_BJet_Pt__31 = new TH1D("allW_BJet_Pt__31","W+jets",25,0,200);
   allW_BJet_Pt__31->SetBinContent(6,3585.208);
   allW_BJet_Pt__31->SetBinContent(7,2895.327);
   allW_BJet_Pt__31->SetBinContent(8,2337.365);
   allW_BJet_Pt__31->SetBinContent(9,1890.983);
   allW_BJet_Pt__31->SetBinContent(10,1532.416);
   allW_BJet_Pt__31->SetBinContent(11,1236.267);
   allW_BJet_Pt__31->SetBinContent(12,996.3429);
   allW_BJet_Pt__31->SetBinContent(13,818.226);
   allW_BJet_Pt__31->SetBinContent(14,651.2277);
   allW_BJet_Pt__31->SetBinContent(15,525.5648);
   allW_BJet_Pt__31->SetBinContent(16,435.8523);
   allW_BJet_Pt__31->SetBinContent(17,354.5115);
   allW_BJet_Pt__31->SetBinContent(18,290.6554);
   allW_BJet_Pt__31->SetBinContent(19,242.3219);
   allW_BJet_Pt__31->SetBinContent(20,196.0158);
   allW_BJet_Pt__31->SetBinContent(21,164.5565);
   allW_BJet_Pt__31->SetBinContent(22,135.1029);
   allW_BJet_Pt__31->SetBinContent(23,115.3945);
   allW_BJet_Pt__31->SetBinContent(24,95.70787);
   allW_BJet_Pt__31->SetBinContent(25,82.19104);
   allW_BJet_Pt__31->SetBinContent(26,524.78);
   allW_BJet_Pt__31->SetEntries(876369);
   allW_BJet_Pt__31->SetDirectory(0);
   allW_BJet_Pt__31->SetStats(0);

   ci = TColor::GetColor("#0033ff");
   allW_BJet_Pt__31->SetFillColor(ci);

   ci = TColor::GetColor("#0033ff");
   allW_BJet_Pt__31->SetLineColor(ci);
   allW_BJet_Pt__31->GetXaxis()->SetTitle("P_{T}");
   allW_BJet_Pt__31->GetXaxis()->SetLabelFont(42);
   allW_BJet_Pt__31->GetXaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__31->GetXaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__31->GetXaxis()->SetTitleFont(42);
   allW_BJet_Pt__31->GetYaxis()->SetLabelFont(42);
   allW_BJet_Pt__31->GetYaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__31->GetYaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__31->GetYaxis()->SetTitleFont(42);
   allW_BJet_Pt__31->GetZaxis()->SetLabelFont(42);
   allW_BJet_Pt__31->GetZaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__31->GetZaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__31->GetZaxis()->SetTitleFont(42);
   allW_BJet_Pt->Add(allW_BJet_Pt__31,"");
   
   TH1D *allW_BJet_Pt__32 = new TH1D("allW_BJet_Pt__32","DiBoson",25,0,200);
   allW_BJet_Pt__32->SetBinContent(6,53.79206);
   allW_BJet_Pt__32->SetBinContent(7,46.03383);
   allW_BJet_Pt__32->SetBinContent(8,33.81051);
   allW_BJet_Pt__32->SetBinContent(9,27.54599);
   allW_BJet_Pt__32->SetBinContent(10,21.25689);
   allW_BJet_Pt__32->SetBinContent(11,15.31756);
   allW_BJet_Pt__32->SetBinContent(12,14.84952);
   allW_BJet_Pt__32->SetBinContent(13,12.19777);
   allW_BJet_Pt__32->SetBinContent(14,10.88053);
   allW_BJet_Pt__32->SetBinContent(15,6.203361);
   allW_BJet_Pt__32->SetBinContent(16,5.490886);
   allW_BJet_Pt__32->SetBinContent(17,4.618418);
   allW_BJet_Pt__32->SetBinContent(18,4.485115);
   allW_BJet_Pt__32->SetBinContent(19,3.303544);
   allW_BJet_Pt__32->SetBinContent(20,1.529372);
   allW_BJet_Pt__32->SetBinContent(21,1.482109);
   allW_BJet_Pt__32->SetBinContent(22,2.738347);
   allW_BJet_Pt__32->SetBinContent(23,1.153113);
   allW_BJet_Pt__32->SetBinContent(24,1.612638);
   allW_BJet_Pt__32->SetBinContent(25,2.268575);
   allW_BJet_Pt__32->SetBinContent(26,10.78429);
   allW_BJet_Pt__32->SetEntries(1398);
   allW_BJet_Pt__32->SetDirectory(0);
   allW_BJet_Pt__32->SetStats(0);

   ci = TColor::GetColor("#00ffff");
   allW_BJet_Pt__32->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   allW_BJet_Pt__32->SetLineColor(ci);
   allW_BJet_Pt__32->GetXaxis()->SetTitle("P_{T}");
   allW_BJet_Pt__32->GetXaxis()->SetLabelFont(42);
   allW_BJet_Pt__32->GetXaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__32->GetXaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__32->GetXaxis()->SetTitleFont(42);
   allW_BJet_Pt__32->GetYaxis()->SetLabelFont(42);
   allW_BJet_Pt__32->GetYaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__32->GetYaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__32->GetYaxis()->SetTitleFont(42);
   allW_BJet_Pt__32->GetZaxis()->SetLabelFont(42);
   allW_BJet_Pt__32->GetZaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__32->GetZaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__32->GetZaxis()->SetTitleFont(42);
   allW_BJet_Pt->Add(allW_BJet_Pt__32,"");
   
   TH1D *allW_BJet_Pt__33 = new TH1D("allW_BJet_Pt__33","DiBoson",25,0,200);
   allW_BJet_Pt__33->SetBinContent(6,5.190829);
   allW_BJet_Pt__33->SetBinContent(7,5.129765);
   allW_BJet_Pt__33->SetBinContent(8,4.427046);
   allW_BJet_Pt__33->SetBinContent(9,3.018601);
   allW_BJet_Pt__33->SetBinContent(10,2.573264);
   allW_BJet_Pt__33->SetBinContent(11,1.612609);
   allW_BJet_Pt__33->SetBinContent(12,1.676462);
   allW_BJet_Pt__33->SetBinContent(13,1.083233);
   allW_BJet_Pt__33->SetBinContent(14,0.8025388);
   allW_BJet_Pt__33->SetBinContent(15,0.7975011);
   allW_BJet_Pt__33->SetBinContent(16,0.621771);
   allW_BJet_Pt__33->SetBinContent(17,0.5798259);
   allW_BJet_Pt__33->SetBinContent(18,0.3432083);
   allW_BJet_Pt__33->SetBinContent(19,0.2746796);
   allW_BJet_Pt__33->SetBinContent(20,0.2193452);
   allW_BJet_Pt__33->SetBinContent(21,0.280307);
   allW_BJet_Pt__33->SetBinContent(22,0.3563208);
   allW_BJet_Pt__33->SetBinContent(23,0.1433687);
   allW_BJet_Pt__33->SetBinContent(24,0.1310647);
   allW_BJet_Pt__33->SetBinContent(25,0.1211144);
   allW_BJet_Pt__33->SetBinContent(26,0.6648268);
   allW_BJet_Pt__33->SetEntries(1101);
   allW_BJet_Pt__33->SetDirectory(0);
   allW_BJet_Pt__33->SetStats(0);

   ci = TColor::GetColor("#00ffff");
   allW_BJet_Pt__33->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   allW_BJet_Pt__33->SetLineColor(ci);
   allW_BJet_Pt__33->GetXaxis()->SetTitle("P_{T}");
   allW_BJet_Pt__33->GetXaxis()->SetLabelFont(42);
   allW_BJet_Pt__33->GetXaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__33->GetXaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__33->GetXaxis()->SetTitleFont(42);
   allW_BJet_Pt__33->GetYaxis()->SetLabelFont(42);
   allW_BJet_Pt__33->GetYaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__33->GetYaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__33->GetYaxis()->SetTitleFont(42);
   allW_BJet_Pt__33->GetZaxis()->SetLabelFont(42);
   allW_BJet_Pt__33->GetZaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__33->GetZaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__33->GetZaxis()->SetTitleFont(42);
   allW_BJet_Pt->Add(allW_BJet_Pt__33,"");
   
   TH1D *allW_BJet_Pt__34 = new TH1D("allW_BJet_Pt__34","DiBoson",25,0,200);
   allW_BJet_Pt__34->SetBinContent(6,73.47045);
   allW_BJet_Pt__34->SetBinContent(7,61.56245);
   allW_BJet_Pt__34->SetBinContent(8,52.50959);
   allW_BJet_Pt__34->SetBinContent(9,34.3882);
   allW_BJet_Pt__34->SetBinContent(10,28.47878);
   allW_BJet_Pt__34->SetBinContent(11,23.97784);
   allW_BJet_Pt__34->SetBinContent(12,15.75411);
   allW_BJet_Pt__34->SetBinContent(13,14.44645);
   allW_BJet_Pt__34->SetBinContent(14,9.269564);
   allW_BJet_Pt__34->SetBinContent(15,7.66165);
   allW_BJet_Pt__34->SetBinContent(16,4.601648);
   allW_BJet_Pt__34->SetBinContent(17,6.34005);
   allW_BJet_Pt__34->SetBinContent(18,3.229213);
   allW_BJet_Pt__34->SetBinContent(19,3.939611);
   allW_BJet_Pt__34->SetBinContent(20,2.653646);
   allW_BJet_Pt__34->SetBinContent(21,2.606217);
   allW_BJet_Pt__34->SetBinContent(22,1.490619);
   allW_BJet_Pt__34->SetBinContent(23,1.650738);
   allW_BJet_Pt__34->SetBinContent(24,0.6688779);
   allW_BJet_Pt__34->SetBinContent(25,1.095516);
   allW_BJet_Pt__34->SetBinContent(26,6.494818);
   allW_BJet_Pt__34->SetEntries(3156);
   allW_BJet_Pt__34->SetDirectory(0);
   allW_BJet_Pt__34->SetStats(0);

   ci = TColor::GetColor("#00ffff");
   allW_BJet_Pt__34->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   allW_BJet_Pt__34->SetLineColor(ci);
   allW_BJet_Pt__34->GetXaxis()->SetTitle("P_{T}");
   allW_BJet_Pt__34->GetXaxis()->SetLabelFont(42);
   allW_BJet_Pt__34->GetXaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__34->GetXaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__34->GetXaxis()->SetTitleFont(42);
   allW_BJet_Pt__34->GetYaxis()->SetLabelFont(42);
   allW_BJet_Pt__34->GetYaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__34->GetYaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__34->GetYaxis()->SetTitleFont(42);
   allW_BJet_Pt__34->GetZaxis()->SetLabelFont(42);
   allW_BJet_Pt__34->GetZaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__34->GetZaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__34->GetZaxis()->SetTitleFont(42);
   allW_BJet_Pt->Add(allW_BJet_Pt__34,"");
   
   TH1D *allW_BJet_Pt__35 = new TH1D("allW_BJet_Pt__35","t#bar{t}",25,0,200);
   allW_BJet_Pt__35->SetBinContent(6,2215.645);
   allW_BJet_Pt__35->SetBinContent(7,2580.006);
   allW_BJet_Pt__35->SetBinContent(8,2725.76);
   allW_BJet_Pt__35->SetBinContent(9,2640.535);
   allW_BJet_Pt__35->SetBinContent(10,2470.084);
   allW_BJet_Pt__35->SetBinContent(11,2195.079);
   allW_BJet_Pt__35->SetBinContent(12,1904.159);
   allW_BJet_Pt__35->SetBinContent(13,1617.305);
   allW_BJet_Pt__35->SetBinContent(14,1292.162);
   allW_BJet_Pt__35->SetBinContent(15,1055.73);
   allW_BJet_Pt__35->SetBinContent(16,837.5305);
   allW_BJet_Pt__35->SetBinContent(17,638.5837);
   allW_BJet_Pt__35->SetBinContent(18,490.5206);
   allW_BJet_Pt__35->SetBinContent(19,393.0654);
   allW_BJet_Pt__35->SetBinContent(20,295.0205);
   allW_BJet_Pt__35->SetBinContent(21,214.5061);
   allW_BJet_Pt__35->SetBinContent(22,171.5318);
   allW_BJet_Pt__35->SetBinContent(23,139.1826);
   allW_BJet_Pt__35->SetBinContent(24,100.8477);
   allW_BJet_Pt__35->SetBinContent(25,79.19693);
   allW_BJet_Pt__35->SetBinContent(26,366.0896);
   allW_BJet_Pt__35->SetEntries(177933);
   allW_BJet_Pt__35->SetDirectory(0);
   allW_BJet_Pt__35->SetStats(0);

   ci = TColor::GetColor("#cc33cc");
   allW_BJet_Pt__35->SetFillColor(ci);

   ci = TColor::GetColor("#cc33cc");
   allW_BJet_Pt__35->SetLineColor(ci);
   allW_BJet_Pt__35->GetXaxis()->SetTitle("P_{T}");
   allW_BJet_Pt__35->GetXaxis()->SetLabelFont(42);
   allW_BJet_Pt__35->GetXaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__35->GetXaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__35->GetXaxis()->SetTitleFont(42);
   allW_BJet_Pt__35->GetYaxis()->SetLabelFont(42);
   allW_BJet_Pt__35->GetYaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__35->GetYaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__35->GetYaxis()->SetTitleFont(42);
   allW_BJet_Pt__35->GetZaxis()->SetLabelFont(42);
   allW_BJet_Pt__35->GetZaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__35->GetZaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__35->GetZaxis()->SetTitleFont(42);
   allW_BJet_Pt->Add(allW_BJet_Pt__35,"");
   
   TH1D *allW_BJet_Pt__36 = new TH1D("allW_BJet_Pt__36","s-channel",25,0,200);
   allW_BJet_Pt__36->SetBinContent(6,28.46669);
   allW_BJet_Pt__36->SetBinContent(7,31.04869);
   allW_BJet_Pt__36->SetBinContent(8,31.73226);
   allW_BJet_Pt__36->SetBinContent(9,30.20871);
   allW_BJet_Pt__36->SetBinContent(10,27.9755);
   allW_BJet_Pt__36->SetBinContent(11,24.73215);
   allW_BJet_Pt__36->SetBinContent(12,21.09037);
   allW_BJet_Pt__36->SetBinContent(13,17.77277);
   allW_BJet_Pt__36->SetBinContent(14,14.16761);
   allW_BJet_Pt__36->SetBinContent(15,11.62079);
   allW_BJet_Pt__36->SetBinContent(16,9.191961);
   allW_BJet_Pt__36->SetBinContent(17,7.431142);
   allW_BJet_Pt__36->SetBinContent(18,6.260489);
   allW_BJet_Pt__36->SetBinContent(19,5.555858);
   allW_BJet_Pt__36->SetBinContent(20,4.265005);
   allW_BJet_Pt__36->SetBinContent(21,3.432169);
   allW_BJet_Pt__36->SetBinContent(22,2.91183);
   allW_BJet_Pt__36->SetBinContent(23,2.516141);
   allW_BJet_Pt__36->SetBinContent(24,2.187306);
   allW_BJet_Pt__36->SetBinContent(25,1.88762);
   allW_BJet_Pt__36->SetBinContent(26,11.77485);
   allW_BJet_Pt__36->SetEntries(51969);
   allW_BJet_Pt__36->SetDirectory(0);
   allW_BJet_Pt__36->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   allW_BJet_Pt__36->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   allW_BJet_Pt__36->SetLineColor(ci);
   allW_BJet_Pt__36->GetXaxis()->SetTitle("P_{T}");
   allW_BJet_Pt__36->GetXaxis()->SetLabelFont(42);
   allW_BJet_Pt__36->GetXaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__36->GetXaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__36->GetXaxis()->SetTitleFont(42);
   allW_BJet_Pt__36->GetYaxis()->SetLabelFont(42);
   allW_BJet_Pt__36->GetYaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__36->GetYaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__36->GetYaxis()->SetTitleFont(42);
   allW_BJet_Pt__36->GetZaxis()->SetLabelFont(42);
   allW_BJet_Pt__36->GetZaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__36->GetZaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__36->GetZaxis()->SetTitleFont(42);
   allW_BJet_Pt->Add(allW_BJet_Pt__36,"");
   
   TH1D *allW_BJet_Pt__37 = new TH1D("allW_BJet_Pt__37","s-channel",25,0,200);
   allW_BJet_Pt__37->SetBinContent(6,15.1199);
   allW_BJet_Pt__37->SetBinContent(7,15.16773);
   allW_BJet_Pt__37->SetBinContent(8,16.21035);
   allW_BJet_Pt__37->SetBinContent(9,15.61508);
   allW_BJet_Pt__37->SetBinContent(10,14.14483);
   allW_BJet_Pt__37->SetBinContent(11,12.46381);
   allW_BJet_Pt__37->SetBinContent(12,10.28071);
   allW_BJet_Pt__37->SetBinContent(13,8.302867);
   allW_BJet_Pt__37->SetBinContent(14,6.887049);
   allW_BJet_Pt__37->SetBinContent(15,5.271157);
   allW_BJet_Pt__37->SetBinContent(16,4.240968);
   allW_BJet_Pt__37->SetBinContent(17,3.429138);
   allW_BJet_Pt__37->SetBinContent(18,2.722118);
   allW_BJet_Pt__37->SetBinContent(19,2.13562);
   allW_BJet_Pt__37->SetBinContent(20,1.849842);
   allW_BJet_Pt__37->SetBinContent(21,1.49375);
   allW_BJet_Pt__37->SetBinContent(22,1.074301);
   allW_BJet_Pt__37->SetBinContent(23,0.964405);
   allW_BJet_Pt__37->SetBinContent(24,0.9528881);
   allW_BJet_Pt__37->SetBinContent(25,0.5549476);
   allW_BJet_Pt__37->SetBinContent(26,4.052648);
   allW_BJet_Pt__37->SetEntries(27481);
   allW_BJet_Pt__37->SetDirectory(0);
   allW_BJet_Pt__37->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   allW_BJet_Pt__37->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   allW_BJet_Pt__37->SetLineColor(ci);
   allW_BJet_Pt__37->GetXaxis()->SetTitle("P_{T}");
   allW_BJet_Pt__37->GetXaxis()->SetLabelFont(42);
   allW_BJet_Pt__37->GetXaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__37->GetXaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__37->GetXaxis()->SetTitleFont(42);
   allW_BJet_Pt__37->GetYaxis()->SetLabelFont(42);
   allW_BJet_Pt__37->GetYaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__37->GetYaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__37->GetYaxis()->SetTitleFont(42);
   allW_BJet_Pt__37->GetZaxis()->SetLabelFont(42);
   allW_BJet_Pt__37->GetZaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__37->GetZaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__37->GetZaxis()->SetTitleFont(42);
   allW_BJet_Pt->Add(allW_BJet_Pt__37,"");
   
   TH1D *allW_BJet_Pt__38 = new TH1D("allW_BJet_Pt__38","tW-channel",25,0,200);
   allW_BJet_Pt__38->SetBinContent(6,143.3133);
   allW_BJet_Pt__38->SetBinContent(7,158.6121);
   allW_BJet_Pt__38->SetBinContent(8,193.6632);
   allW_BJet_Pt__38->SetBinContent(9,162.3101);
   allW_BJet_Pt__38->SetBinContent(10,140.0613);
   allW_BJet_Pt__38->SetBinContent(11,133.4008);
   allW_BJet_Pt__38->SetBinContent(12,105.3446);
   allW_BJet_Pt__38->SetBinContent(13,78.62732);
   allW_BJet_Pt__38->SetBinContent(14,68.54665);
   allW_BJet_Pt__38->SetBinContent(15,46.94292);
   allW_BJet_Pt__38->SetBinContent(16,33.79858);
   allW_BJet_Pt__38->SetBinContent(17,26.82911);
   allW_BJet_Pt__38->SetBinContent(18,20.27901);
   allW_BJet_Pt__38->SetBinContent(19,14.47435);
   allW_BJet_Pt__38->SetBinContent(20,8.339208);
   allW_BJet_Pt__38->SetBinContent(21,5.685694);
   allW_BJet_Pt__38->SetBinContent(22,8.308387);
   allW_BJet_Pt__38->SetBinContent(23,6.004282);
   allW_BJet_Pt__38->SetBinContent(24,4.529242);
   allW_BJet_Pt__38->SetBinContent(25,4.561716);
   allW_BJet_Pt__38->SetBinContent(26,19.06771);
   allW_BJet_Pt__38->SetEntries(3538);
   allW_BJet_Pt__38->SetDirectory(0);
   allW_BJet_Pt__38->SetStats(0);

   ci = TColor::GetColor("#ffcc00");
   allW_BJet_Pt__38->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   allW_BJet_Pt__38->SetLineColor(ci);
   allW_BJet_Pt__38->GetXaxis()->SetTitle("P_{T}");
   allW_BJet_Pt__38->GetXaxis()->SetLabelFont(42);
   allW_BJet_Pt__38->GetXaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__38->GetXaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__38->GetXaxis()->SetTitleFont(42);
   allW_BJet_Pt__38->GetYaxis()->SetLabelFont(42);
   allW_BJet_Pt__38->GetYaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__38->GetYaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__38->GetYaxis()->SetTitleFont(42);
   allW_BJet_Pt__38->GetZaxis()->SetLabelFont(42);
   allW_BJet_Pt__38->GetZaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__38->GetZaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__38->GetZaxis()->SetTitleFont(42);
   allW_BJet_Pt->Add(allW_BJet_Pt__38,"");
   
   TH1D *allW_BJet_Pt__39 = new TH1D("allW_BJet_Pt__39","tW-channel",25,0,200);
   allW_BJet_Pt__39->SetBinContent(6,149.3957);
   allW_BJet_Pt__39->SetBinContent(7,164.1971);
   allW_BJet_Pt__39->SetBinContent(8,180.0858);
   allW_BJet_Pt__39->SetBinContent(9,168.2506);
   allW_BJet_Pt__39->SetBinContent(10,164.7591);
   allW_BJet_Pt__39->SetBinContent(11,131.4511);
   allW_BJet_Pt__39->SetBinContent(12,97.9623);
   allW_BJet_Pt__39->SetBinContent(13,84.47984);
   allW_BJet_Pt__39->SetBinContent(14,55.02869);
   allW_BJet_Pt__39->SetBinContent(15,47.08238);
   allW_BJet_Pt__39->SetBinContent(16,28.15495);
   allW_BJet_Pt__39->SetBinContent(17,27.56417);
   allW_BJet_Pt__39->SetBinContent(18,20.22003);
   allW_BJet_Pt__39->SetBinContent(19,16.75197);
   allW_BJet_Pt__39->SetBinContent(20,9.105617);
   allW_BJet_Pt__39->SetBinContent(21,11.61759);
   allW_BJet_Pt__39->SetBinContent(22,6.916909);
   allW_BJet_Pt__39->SetBinContent(23,7.698527);
   allW_BJet_Pt__39->SetBinContent(24,4.85546);
   allW_BJet_Pt__39->SetBinContent(25,5.880332);
   allW_BJet_Pt__39->SetBinContent(26,21.07802);
   allW_BJet_Pt__39->SetEntries(3528);
   allW_BJet_Pt__39->SetDirectory(0);
   allW_BJet_Pt__39->SetStats(0);

   ci = TColor::GetColor("#ffcc00");
   allW_BJet_Pt__39->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   allW_BJet_Pt__39->SetLineColor(ci);
   allW_BJet_Pt__39->GetXaxis()->SetTitle("P_{T}");
   allW_BJet_Pt__39->GetXaxis()->SetLabelFont(42);
   allW_BJet_Pt__39->GetXaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__39->GetXaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__39->GetXaxis()->SetTitleFont(42);
   allW_BJet_Pt__39->GetYaxis()->SetLabelFont(42);
   allW_BJet_Pt__39->GetYaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__39->GetYaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__39->GetYaxis()->SetTitleFont(42);
   allW_BJet_Pt__39->GetZaxis()->SetLabelFont(42);
   allW_BJet_Pt__39->GetZaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__39->GetZaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__39->GetZaxis()->SetTitleFont(42);
   allW_BJet_Pt->Add(allW_BJet_Pt__39,"");
   
   TH1D *allW_BJet_Pt__40 = new TH1D("allW_BJet_Pt__40","t-channel",25,0,200);
   allW_BJet_Pt__40->SetBinContent(6,490.1093);
   allW_BJet_Pt__40->SetBinContent(7,544.9534);
   allW_BJet_Pt__40->SetBinContent(8,563.0391);
   allW_BJet_Pt__40->SetBinContent(9,551.6884);
   allW_BJet_Pt__40->SetBinContent(10,502.8456);
   allW_BJet_Pt__40->SetBinContent(11,440.7468);
   allW_BJet_Pt__40->SetBinContent(12,355.8284);
   allW_BJet_Pt__40->SetBinContent(13,274.5459);
   allW_BJet_Pt__40->SetBinContent(14,197.3508);
   allW_BJet_Pt__40->SetBinContent(15,136.3773);
   allW_BJet_Pt__40->SetBinContent(16,101.0242);
   allW_BJet_Pt__40->SetBinContent(17,71.27635);
   allW_BJet_Pt__40->SetBinContent(18,51.51912);
   allW_BJet_Pt__40->SetBinContent(19,37.15316);
   allW_BJet_Pt__40->SetBinContent(20,29.48286);
   allW_BJet_Pt__40->SetBinContent(21,23.75749);
   allW_BJet_Pt__40->SetBinContent(22,18.42311);
   allW_BJet_Pt__40->SetBinContent(23,11.41255);
   allW_BJet_Pt__40->SetBinContent(24,10.93434);
   allW_BJet_Pt__40->SetBinContent(25,7.951252);
   allW_BJet_Pt__40->SetBinContent(26,37.06028);
   allW_BJet_Pt__40->SetEntries(59482);
   allW_BJet_Pt__40->SetDirectory(0);
   allW_BJet_Pt__40->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   allW_BJet_Pt__40->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   allW_BJet_Pt__40->SetLineColor(ci);
   allW_BJet_Pt__40->GetXaxis()->SetTitle("P_{T}");
   allW_BJet_Pt__40->GetXaxis()->SetLabelFont(42);
   allW_BJet_Pt__40->GetXaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__40->GetXaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__40->GetXaxis()->SetTitleFont(42);
   allW_BJet_Pt__40->GetYaxis()->SetLabelFont(42);
   allW_BJet_Pt__40->GetYaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__40->GetYaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__40->GetYaxis()->SetTitleFont(42);
   allW_BJet_Pt__40->GetZaxis()->SetLabelFont(42);
   allW_BJet_Pt__40->GetZaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__40->GetZaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__40->GetZaxis()->SetTitleFont(42);
   allW_BJet_Pt->Add(allW_BJet_Pt__40,"");
   
   TH1D *allW_BJet_Pt__41 = new TH1D("allW_BJet_Pt__41","t-channel",25,0,200);
   allW_BJet_Pt__41->SetBinContent(6,297.0971);
   allW_BJet_Pt__41->SetBinContent(7,338.3385);
   allW_BJet_Pt__41->SetBinContent(8,329.8879);
   allW_BJet_Pt__41->SetBinContent(9,331.0791);
   allW_BJet_Pt__41->SetBinContent(10,289.6467);
   allW_BJet_Pt__41->SetBinContent(11,244.6718);
   allW_BJet_Pt__41->SetBinContent(12,204.3437);
   allW_BJet_Pt__41->SetBinContent(13,153.5765);
   allW_BJet_Pt__41->SetBinContent(14,106.3108);
   allW_BJet_Pt__41->SetBinContent(15,75.15617);
   allW_BJet_Pt__41->SetBinContent(16,55.50974);
   allW_BJet_Pt__41->SetBinContent(17,33.38922);
   allW_BJet_Pt__41->SetBinContent(18,26.02097);
   allW_BJet_Pt__41->SetBinContent(19,21.35005);
   allW_BJet_Pt__41->SetBinContent(20,15.17411);
   allW_BJet_Pt__41->SetBinContent(21,11.99493);
   allW_BJet_Pt__41->SetBinContent(22,9.467433);
   allW_BJet_Pt__41->SetBinContent(23,7.80868);
   allW_BJet_Pt__41->SetBinContent(24,5.542364);
   allW_BJet_Pt__41->SetBinContent(25,4.036647);
   allW_BJet_Pt__41->SetBinContent(26,20.04547);
   allW_BJet_Pt__41->SetEntries(26462);
   allW_BJet_Pt__41->SetDirectory(0);
   allW_BJet_Pt__41->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   allW_BJet_Pt__41->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   allW_BJet_Pt__41->SetLineColor(ci);
   allW_BJet_Pt__41->GetXaxis()->SetTitle("P_{T}");
   allW_BJet_Pt__41->GetXaxis()->SetLabelFont(42);
   allW_BJet_Pt__41->GetXaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__41->GetXaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__41->GetXaxis()->SetTitleFont(42);
   allW_BJet_Pt__41->GetYaxis()->SetLabelFont(42);
   allW_BJet_Pt__41->GetYaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__41->GetYaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__41->GetYaxis()->SetTitleFont(42);
   allW_BJet_Pt__41->GetZaxis()->SetLabelFont(42);
   allW_BJet_Pt__41->GetZaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__41->GetZaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__41->GetZaxis()->SetTitleFont(42);
   allW_BJet_Pt->Add(allW_BJet_Pt__41,"");
   allW_BJet_Pt->Draw("");
   
   TH1D *allW_BJet_Pt__42 = new TH1D("allW_BJet_Pt__42","data",25,0,200);
   allW_BJet_Pt__42->SetBinContent(6,7024);
   allW_BJet_Pt__42->SetBinContent(7,6933);
   allW_BJet_Pt__42->SetBinContent(8,6853);
   allW_BJet_Pt__42->SetBinContent(9,6392);
   allW_BJet_Pt__42->SetBinContent(10,5650);
   allW_BJet_Pt__42->SetBinContent(11,4801);
   allW_BJet_Pt__42->SetBinContent(12,3952);
   allW_BJet_Pt__42->SetBinContent(13,3291);
   allW_BJet_Pt__42->SetBinContent(14,2699);
   allW_BJet_Pt__42->SetBinContent(15,2035);
   allW_BJet_Pt__42->SetBinContent(16,1609);
   allW_BJet_Pt__42->SetBinContent(17,1298);
   allW_BJet_Pt__42->SetBinContent(18,1036);
   allW_BJet_Pt__42->SetBinContent(19,791);
   allW_BJet_Pt__42->SetBinContent(20,587);
   allW_BJet_Pt__42->SetBinContent(21,484);
   allW_BJet_Pt__42->SetBinContent(22,390);
   allW_BJet_Pt__42->SetBinContent(23,305);
   allW_BJet_Pt__42->SetBinContent(24,270);
   allW_BJet_Pt__42->SetBinContent(25,208);
   allW_BJet_Pt__42->SetBinContent(26,1190);
   allW_BJet_Pt__42->SetEntries(57798);
   allW_BJet_Pt__42->SetDirectory(0);
   allW_BJet_Pt__42->SetStats(0);

   ci = TColor::GetColor("#000099");
   allW_BJet_Pt__42->SetLineColor(ci);
   allW_BJet_Pt__42->SetMarkerStyle(20);
   allW_BJet_Pt__42->GetXaxis()->SetTitle("P_{T}");
   allW_BJet_Pt__42->GetXaxis()->SetRange(5,25);
   allW_BJet_Pt__42->GetXaxis()->SetLabelFont(42);
   allW_BJet_Pt__42->GetXaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__42->GetXaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__42->GetXaxis()->SetTitleFont(42);
   allW_BJet_Pt__42->GetYaxis()->SetLabelFont(42);
   allW_BJet_Pt__42->GetYaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__42->GetYaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__42->GetYaxis()->SetTitleFont(42);
   allW_BJet_Pt__42->GetZaxis()->SetLabelFont(42);
   allW_BJet_Pt__42->GetZaxis()->SetLabelSize(0.035);
   allW_BJet_Pt__42->GetZaxis()->SetTitleSize(0.035);
   allW_BJet_Pt__42->GetZaxis()->SetTitleFont(42);
   allW_BJet_Pt__42->Draw("PE1sames");
   
   TPaveText *pt = new TPaveText(0.3808046,0.9365254,0.6191954,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("allW_BJet_Pt");
//   pt->Draw();
   
   TH1D *allW_BJet_Pt2 = new TH1D("allW_BJet_Pt2","allW_BJet_Pt2",25,0,200);
   allW_BJet_Pt2->SetBinContent(6,7698.804);
   allW_BJet_Pt2->SetBinContent(7,7346.653);
   allW_BJet_Pt2->SetBinContent(8,6981.069);
   allW_BJet_Pt2->SetBinContent(9,6209.519);
   allW_BJet_Pt2->SetBinContent(10,5418.355);
   allW_BJet_Pt2->SetBinContent(11,4682.974);
   allW_BJet_Pt2->SetBinContent(12,3947.536);
   allW_BJet_Pt2->SetBinContent(13,3239.873);
   allW_BJet_Pt2->SetBinContent(14,2468.989);
   allW_BJet_Pt2->SetBinContent(15,1982.793);
   allW_BJet_Pt2->SetBinContent(16,1572.502);
   allW_BJet_Pt2->SetBinContent(17,1212.919);
   allW_BJet_Pt2->SetBinContent(18,957.012);
   allW_BJet_Pt2->SetBinContent(19,776.9382);
   allW_BJet_Pt2->SetBinContent(20,587.9013);
   allW_BJet_Pt2->SetBinContent(21,463.6881);
   allW_BJet_Pt2->SetBinContent(22,387.9854);
   allW_BJet_Pt2->SetBinContent(23,311.9296);
   allW_BJet_Pt2->SetBinContent(24,241.1439);
   allW_BJet_Pt2->SetBinContent(25,208.9628);
   allW_BJet_Pt2->SetBinContent(26,1115.959);
   allW_BJet_Pt2->SetBinError(6,271.4798);
   allW_BJet_Pt2->SetBinError(7,222.1124);
   allW_BJet_Pt2->SetBinError(8,182.7672);
   allW_BJet_Pt2->SetBinError(9,146.3438);
   allW_BJet_Pt2->SetBinError(10,117.6543);
   allW_BJet_Pt2->SetBinError(11,98.13089);
   allW_BJet_Pt2->SetBinError(12,82.49791);
   allW_BJet_Pt2->SetBinError(13,68.6152);
   allW_BJet_Pt2->SetBinError(14,51.75655);
   allW_BJet_Pt2->SetBinError(15,44.01842);
   allW_BJet_Pt2->SetBinError(16,37.83761);
   allW_BJet_Pt2->SetBinError(17,30.95291);
   allW_BJet_Pt2->SetBinError(18,26.90026);
   allW_BJet_Pt2->SetBinError(19,23.98557);
   allW_BJet_Pt2->SetBinError(20,19.26766);
   allW_BJet_Pt2->SetBinError(21,17.63897);
   allW_BJet_Pt2->SetBinError(22,18.23917);
   allW_BJet_Pt2->SetBinError(23,13.49722);
   allW_BJet_Pt2->SetBinError(24,11.95031);
   allW_BJet_Pt2->SetBinError(25,13.40348);
   allW_BJet_Pt2->SetBinError(26,27.01687);
   allW_BJet_Pt2->SetEntries(1243862);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("allW_BJet_Pt2");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 1243862");
   text = ptstats->AddText("Mean  =  79.85");
   text = ptstats->AddText("RMS   =  32.02");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   /*ptstats->Draw();
   allW_BJet_Pt2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(allW_BJet_Pt2);*/
   allW_BJet_Pt2->SetFillColor(1);
   allW_BJet_Pt2->SetFillStyle(3004);

   ci = TColor::GetColor("#000099");
   allW_BJet_Pt2->SetLineColor(ci);
   allW_BJet_Pt2->GetXaxis()->SetTitle("P_{T}");
   allW_BJet_Pt2->GetXaxis()->SetLabelFont(42);
   allW_BJet_Pt2->GetXaxis()->SetLabelSize(0.035);
   allW_BJet_Pt2->GetXaxis()->SetTitleSize(0.035);
   allW_BJet_Pt2->GetXaxis()->SetTitleFont(42);
   allW_BJet_Pt2->GetYaxis()->SetLabelFont(42);
   allW_BJet_Pt2->GetYaxis()->SetLabelSize(0.035);
   allW_BJet_Pt2->GetYaxis()->SetTitleSize(0.035);
   allW_BJet_Pt2->GetYaxis()->SetTitleFont(42);
   allW_BJet_Pt2->GetZaxis()->SetLabelFont(42);
   allW_BJet_Pt2->GetZaxis()->SetLabelSize(0.035);
   allW_BJet_Pt2->GetZaxis()->SetTitleSize(0.035);
   allW_BJet_Pt2->GetZaxis()->SetTitleFont(42);
   allW_BJet_Pt2->Draw("E2SAME");
TLegend *leg = new TLegend(0.1516667,0.63,0.4983333,0.9516667,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.03);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Default_allWcosTheta","data","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Default_allWcosTheta","t-channel","lpf");
   entry->SetFillColor(2);
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Default_allWcosTheta","tW-channel","lpf");

   ci = TColor::GetColor("#ffcc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Default_allWcosTheta","s-channel","lpf");
   entry->SetFillColor(5);
   entry->SetFillStyle(1001);
   entry->SetLineColor(5);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(5);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Default_allWcosTheta","t#bar{t}","lpf");

   ci = TColor::GetColor("#cc33cc");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#cc33cc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Default_allWcosTheta","W+Jets","lpf");

   ci = TColor::GetColor("#0033ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#0033ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Default_allWcosTheta","#gamma^{*}/Z+Jets","lpf");

   ci = TColor::GetColor("#00cc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#00cc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Default_allWcosTheta","QCD","lpf");

   ci = TColor::GetColor("#663300");
   entry->SetFillColor(kGray);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#663300");
   entry->SetLineColor(kGray);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(kGray);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);

   entry=leg->AddEntry("NULL","Stat. Unc.","f");
   entry->SetFillColor(1);
   entry->SetFillStyle(3004);
   ci = TColor::GetColor("#000099");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(0);
   entry->SetMarkerSize(0);

   leg->Draw();
   TLatex *   tex = new TLatex(0.27,0.9684385,"CMS preliminary, 19.4 fb^{-1} at #sqrt{s} = 8 TeV");
   tex->SetNDC();
   tex->SetTextSize(0.03156146);
   tex->SetLineWidth(2);
   tex->Draw();

   c->Modified();
   c->cd();
   c->SetSelected(c);
}
