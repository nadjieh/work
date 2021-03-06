{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Thu Nov 28 01:19:47 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "Canvas_1",471,131,700,504);
   Canvas_1->Range(-1.25,-0.0125,1.25,0.1125);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *Default_allWcosTheta__1__1 = new TH1D("Default_allWcosTheta__1__1","Default_allW: cos(#theta)",20,-1,1);
   Default_allWcosTheta__1__1->SetBinContent(1,0.02851727);
   Default_allWcosTheta__1__1->SetBinContent(2,0.03164598);
   Default_allWcosTheta__1__1->SetBinContent(3,0.03805708);
   Default_allWcosTheta__1__1->SetBinContent(4,0.03812563);
   Default_allWcosTheta__1__1->SetBinContent(5,0.04368567);
   Default_allWcosTheta__1__1->SetBinContent(6,0.04833679);
   Default_allWcosTheta__1__1->SetBinContent(7,0.04476201);
   Default_allWcosTheta__1__1->SetBinContent(8,0.04512251);
   Default_allWcosTheta__1__1->SetBinContent(9,0.05463637);
   Default_allWcosTheta__1__1->SetBinContent(10,0.0558084);
   Default_allWcosTheta__1__1->SetBinContent(11,0.05335832);
   Default_allWcosTheta__1__1->SetBinContent(12,0.05204182);
   Default_allWcosTheta__1__1->SetBinContent(13,0.05268855);
   Default_allWcosTheta__1__1->SetBinContent(14,0.05647711);
   Default_allWcosTheta__1__1->SetBinContent(15,0.05403035);
   Default_allWcosTheta__1__1->SetBinContent(16,0.05909177);
   Default_allWcosTheta__1__1->SetBinContent(17,0.05932696);
   Default_allWcosTheta__1__1->SetBinContent(18,0.05906894);
   Default_allWcosTheta__1__1->SetBinContent(19,0.06040184);
   Default_allWcosTheta__1__1->SetBinContent(20,0.06481663);
   Default_allWcosTheta__1__1->SetBinError(1,0.001563164);
   Default_allWcosTheta__1__1->SetBinError(2,0.001727335);
   Default_allWcosTheta__1__1->SetBinError(3,0.001868442);
   Default_allWcosTheta__1__1->SetBinError(4,0.001820702);
   Default_allWcosTheta__1__1->SetBinError(5,0.001925806);
   Default_allWcosTheta__1__1->SetBinError(6,0.002101794);
   Default_allWcosTheta__1__1->SetBinError(7,0.001946116);
   Default_allWcosTheta__1__1->SetBinError(8,0.001939697);
   Default_allWcosTheta__1__1->SetBinError(9,0.00248032);
   Default_allWcosTheta__1__1->SetBinError(10,0.002261224);
   Default_allWcosTheta__1__1->SetBinError(11,0.002323104);
   Default_allWcosTheta__1__1->SetBinError(12,0.002154553);
   Default_allWcosTheta__1__1->SetBinError(13,0.002190655);
   Default_allWcosTheta__1__1->SetBinError(14,0.002282173);
   Default_allWcosTheta__1__1->SetBinError(15,0.002136388);
   Default_allWcosTheta__1__1->SetBinError(16,0.0023618);
   Default_allWcosTheta__1__1->SetBinError(17,0.002261737);
   Default_allWcosTheta__1__1->SetBinError(18,0.002329594);
   Default_allWcosTheta__1__1->SetBinError(19,0.002350961);
   Default_allWcosTheta__1__1->SetBinError(20,0.002343309);
   Default_allWcosTheta__1__1->SetMinimum(0);
   Default_allWcosTheta__1__1->SetMaximum(0.1);
   Default_allWcosTheta__1__1->SetEntries(15808);
   Default_allWcosTheta__1__1->SetDirectory(0);
   
   TPaveStats *ptstats = new TPaveStats(0.1005747,0.835443,0.3017241,0.9957806,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("Default_allWcosTheta__1");
   text->SetTextSize(0.03687765);
   text = ptstats->AddText("Entries = 15808  ");
   text = ptstats->AddText("Mean  =  0.105");
   text = ptstats->AddText("RMS   = 0.5555");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   Default_allWcosTheta__1__1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(Default_allWcosTheta__1__1);
   Default_allWcosTheta__1__1->SetLineColor(2);
   Default_allWcosTheta__1__1->SetLineWidth(3);
   Default_allWcosTheta__1__1->GetXaxis()->SetTitle("cos(#theta*)");
   Default_allWcosTheta__1__1->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta__1__1->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__1__1->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__1__1->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta__1__1->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta__1__1->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__1__1->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__1__1->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta__1__1->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta__1__1->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__1__1->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__1__1->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta__1__1->Draw("");
   
   TPaveText *pt = new TPaveText(0.3276437,0.9342405,0.6723563,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("Default_allW: cos(#theta)");
   pt->Draw();
   
   ptstats = new TPaveStats(0.09482759,0.8291139,0.295977,0.9894515,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("lptw_cosTheta__2");
   text->SetTextSize(0.03687765);
   text = ptstats->AddText("Entries = 693008 ");
   text = ptstats->AddText("Mean  = 0.1781");
   text = ptstats->AddText("RMS   = 0.5366");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   TH1D *lptw_cosTheta__2__2 = new TH1D("lptw_cosTheta__2__2","lptw_cosTheta",20,-1,1);
   lptw_cosTheta__2__2->SetBinContent(1,0.008277401);
   lptw_cosTheta__2__2->SetBinContent(2,0.02463511);
   lptw_cosTheta__2__2->SetBinContent(3,0.0325561);
   lptw_cosTheta__2__2->SetBinContent(4,0.03729626);
   lptw_cosTheta__2__2->SetBinContent(5,0.04032812);
   lptw_cosTheta__2__2->SetBinContent(6,0.04291689);
   lptw_cosTheta__2__2->SetBinContent(7,0.04453285);
   lptw_cosTheta__2__2->SetBinContent(8,0.04692448);
   lptw_cosTheta__2__2->SetBinContent(9,0.04878893);
   lptw_cosTheta__2__2->SetBinContent(10,0.04937586);
   lptw_cosTheta__2__2->SetBinContent(11,0.05130902);
   lptw_cosTheta__2__2->SetBinContent(12,0.05324112);
   lptw_cosTheta__2__2->SetBinContent(13,0.05584999);
   lptw_cosTheta__2__2->SetBinContent(14,0.05770473);
   lptw_cosTheta__2__2->SetBinContent(15,0.05969875);
   lptw_cosTheta__2__2->SetBinContent(16,0.06355111);
   lptw_cosTheta__2__2->SetBinContent(17,0.06678797);
   lptw_cosTheta__2__2->SetBinContent(18,0.06963726);
   lptw_cosTheta__2__2->SetBinContent(19,0.07281549);
   lptw_cosTheta__2__2->SetBinContent(20,0.07377257);
   lptw_cosTheta__2__2->SetBinError(1,0.00012341);
   lptw_cosTheta__2__2->SetBinError(2,0.0002112491);
   lptw_cosTheta__2__2->SetBinError(3,0.0002430761);
   lptw_cosTheta__2__2->SetBinError(4,0.0002611517);
   lptw_cosTheta__2__2->SetBinError(5,0.0002728893);
   lptw_cosTheta__2__2->SetBinError(6,0.0002844107);
   lptw_cosTheta__2__2->SetBinError(7,0.0002910985);
   lptw_cosTheta__2__2->SetBinError(8,0.0003010741);
   lptw_cosTheta__2__2->SetBinError(9,0.0003070303);
   lptw_cosTheta__2__2->SetBinError(10,0.0003078715);
   lptw_cosTheta__2__2->SetBinError(11,0.0003180236);
   lptw_cosTheta__2__2->SetBinError(12,0.0003255198);
   lptw_cosTheta__2__2->SetBinError(13,0.0003352627);
   lptw_cosTheta__2__2->SetBinError(14,0.0003407803);
   lptw_cosTheta__2__2->SetBinError(15,0.0003486687);
   lptw_cosTheta__2__2->SetBinError(16,0.0003635375);
   lptw_cosTheta__2__2->SetBinError(17,0.000376023);
   lptw_cosTheta__2__2->SetBinError(18,0.0003848499);
   lptw_cosTheta__2__2->SetBinError(19,0.0003978246);
   lptw_cosTheta__2__2->SetBinError(20,0.0004038966);
   lptw_cosTheta__2__2->SetEntries(693008);
   lptw_cosTheta__2__2->SetDirectory(0);
   
   ptstats = new TPaveStats(0.09482759,0.8291139,0.295977,0.9894515,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("lptw_cosTheta__2");
   text->SetTextSize(0.03687765);
   text = ptstats->AddText("Entries = 693008 ");
   text = ptstats->AddText("Mean  = 0.1781");
   text = ptstats->AddText("RMS   = 0.5366");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   lptw_cosTheta__2__2->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(lptw_cosTheta__2__2);
   lptw_cosTheta__2__2->SetLineColor(8);
   lptw_cosTheta__2__2->GetXaxis()->SetLabelFont(42);
   lptw_cosTheta__2__2->GetXaxis()->SetLabelSize(0.035);
   lptw_cosTheta__2__2->GetXaxis()->SetTitleSize(0.035);
   lptw_cosTheta__2__2->GetXaxis()->SetTitleFont(42);
   lptw_cosTheta__2__2->GetYaxis()->SetLabelFont(42);
   lptw_cosTheta__2__2->GetYaxis()->SetLabelSize(0.035);
   lptw_cosTheta__2__2->GetYaxis()->SetTitleSize(0.035);
   lptw_cosTheta__2__2->GetYaxis()->SetTitleFont(42);
   lptw_cosTheta__2__2->GetZaxis()->SetLabelFont(42);
   lptw_cosTheta__2__2->GetZaxis()->SetLabelSize(0.035);
   lptw_cosTheta__2__2->GetZaxis()->SetTitleSize(0.035);
   lptw_cosTheta__2__2->GetZaxis()->SetTitleFont(42);
   lptw_cosTheta__2__2->Draw("sames");
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("Default_allWcosTheta__3");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 693008 ");
   text = ptstats->AddText("Mean  = 0.05433");
   text = ptstats->AddText("RMS   =  0.565");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   TH1D *Default_allWcosTheta__3__3 = new TH1D("Default_allWcosTheta__3__3","Default_allW: cos(#theta)",20,-1,1);
   Default_allWcosTheta__3__3->SetBinContent(1,0.03344641);
   Default_allWcosTheta__3__3->SetBinContent(2,0.03969065);
   Default_allWcosTheta__3__3->SetBinContent(3,0.04428798);
   Default_allWcosTheta__3__3->SetBinContent(4,0.04732447);
   Default_allWcosTheta__3__3->SetBinContent(5,0.04833361);
   Default_allWcosTheta__3__3->SetBinContent(6,0.04935978);
   Default_allWcosTheta__3__3->SetBinContent(7,0.05054347);
   Default_allWcosTheta__3__3->SetBinContent(8,0.05015459);
   Default_allWcosTheta__3__3->SetBinContent(9,0.05036026);
   Default_allWcosTheta__3__3->SetBinContent(10,0.05071258);
   Default_allWcosTheta__3__3->SetBinContent(11,0.05108074);
   Default_allWcosTheta__3__3->SetBinContent(12,0.05154633);
   Default_allWcosTheta__3__3->SetBinContent(13,0.05131288);
   Default_allWcosTheta__3__3->SetBinContent(14,0.05246985);
   Default_allWcosTheta__3__3->SetBinContent(15,0.05359094);
   Default_allWcosTheta__3__3->SetBinContent(16,0.0542245);
   Default_allWcosTheta__3__3->SetBinContent(17,0.05465568);
   Default_allWcosTheta__3__3->SetBinContent(18,0.05522813);
   Default_allWcosTheta__3__3->SetBinContent(19,0.05527872);
   Default_allWcosTheta__3__3->SetBinContent(20,0.05639844);
   Default_allWcosTheta__3__3->SetBinError(1,0.0002579307);
   Default_allWcosTheta__3__3->SetBinError(2,0.0002807906);
   Default_allWcosTheta__3__3->SetBinError(3,0.0002953783);
   Default_allWcosTheta__3__3->SetBinError(4,0.0003055622);
   Default_allWcosTheta__3__3->SetBinError(5,0.0003103252);
   Default_allWcosTheta__3__3->SetBinError(6,0.0003138845);
   Default_allWcosTheta__3__3->SetBinError(7,0.0003188797);
   Default_allWcosTheta__3__3->SetBinError(8,0.0003153817);
   Default_allWcosTheta__3__3->SetBinError(9,0.0003164137);
   Default_allWcosTheta__3__3->SetBinError(10,0.000317165);
   Default_allWcosTheta__3__3->SetBinError(11,0.0003166158);
   Default_allWcosTheta__3__3->SetBinError(12,0.0003188969);
   Default_allWcosTheta__3__3->SetBinError(13,0.0003187661);
   Default_allWcosTheta__3__3->SetBinError(14,0.0003224005);
   Default_allWcosTheta__3__3->SetBinError(15,0.0003243308);
   Default_allWcosTheta__3__3->SetBinError(16,0.0003291322);
   Default_allWcosTheta__3__3->SetBinError(17,0.0003323685);
   Default_allWcosTheta__3__3->SetBinError(18,0.0003310543);
   Default_allWcosTheta__3__3->SetBinError(19,0.0003318151);
   Default_allWcosTheta__3__3->SetBinError(20,0.0003327187);
   Default_allWcosTheta__3__3->SetEntries(693008);
   Default_allWcosTheta__3__3->SetDirectory(0);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("Default_allWcosTheta__3");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 693008 ");
   text = ptstats->AddText("Mean  = 0.05433");
   text = ptstats->AddText("RMS   =  0.565");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   Default_allWcosTheta__3__3->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(Default_allWcosTheta__3__3);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#3399ff");
   Default_allWcosTheta__3__3->SetLineColor(ci);
   Default_allWcosTheta__3__3->SetLineWidth(3);
   Default_allWcosTheta__3__3->GetXaxis()->SetTitle("cos(#theta*)");
   Default_allWcosTheta__3__3->GetXaxis()->SetLabelFont(42);
   Default_allWcosTheta__3__3->GetXaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__3__3->GetXaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__3__3->GetXaxis()->SetTitleFont(42);
   Default_allWcosTheta__3__3->GetYaxis()->SetLabelFont(42);
   Default_allWcosTheta__3__3->GetYaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__3__3->GetYaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__3__3->GetYaxis()->SetTitleFont(42);
   Default_allWcosTheta__3__3->GetZaxis()->SetLabelFont(42);
   Default_allWcosTheta__3__3->GetZaxis()->SetLabelSize(0.035);
   Default_allWcosTheta__3__3->GetZaxis()->SetTitleSize(0.035);
   Default_allWcosTheta__3__3->GetZaxis()->SetTitleFont(42);
   Default_allWcosTheta__3__3->Draw("sames");
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("bptw_cosTheta__4");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 693008 ");
   text = ptstats->AddText("Mean  = 0.1482");
   text = ptstats->AddText("RMS   = 0.5395");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   TH1D *bptw_cosTheta__4__4 = new TH1D("bptw_cosTheta__4__4","bptw_cosTheta",20,-1,1);
   bptw_cosTheta__4__4->SetBinContent(1,0.008907374);
   bptw_cosTheta__4__4->SetBinContent(2,0.0267884);
   bptw_cosTheta__4__4->SetBinContent(3,0.03574714);
   bptw_cosTheta__4__4->SetBinContent(4,0.04079741);
   bptw_cosTheta__4__4->SetBinContent(5,0.04364572);
   bptw_cosTheta__4__4->SetBinContent(6,0.04584253);
   bptw_cosTheta__4__4->SetBinContent(7,0.04713598);
   bptw_cosTheta__4__4->SetBinContent(8,0.04919378);
   bptw_cosTheta__4__4->SetBinContent(9,0.05052033);
   bptw_cosTheta__4__4->SetBinContent(10,0.05048775);
   bptw_cosTheta__4__4->SetBinContent(11,0.05201916);
   bptw_cosTheta__4__4->SetBinContent(12,0.05331445);
   bptw_cosTheta__4__4->SetBinContent(13,0.05557394);
   bptw_cosTheta__4__4->SetBinContent(14,0.05658096);
   bptw_cosTheta__4__4->SetBinContent(15,0.05794238);
   bptw_cosTheta__4__4->SetBinContent(16,0.06107832);
   bptw_cosTheta__4__4->SetBinContent(17,0.06345456);
   bptw_cosTheta__4__4->SetBinContent(18,0.06555452);
   bptw_cosTheta__4__4->SetBinContent(19,0.06761671);
   bptw_cosTheta__4__4->SetBinContent(20,0.06779859);
   bptw_cosTheta__4__4->SetBinError(1,0.0001335735);
   bptw_cosTheta__4__4->SetBinError(2,0.000231339);
   bptw_cosTheta__4__4->SetBinError(3,0.0002705428);
   bptw_cosTheta__4__4->SetBinError(4,0.0002892375);
   bptw_cosTheta__4__4->SetBinError(5,0.0002990978);
   bptw_cosTheta__4__4->SetBinError(6,0.000305651);
   bptw_cosTheta__4__4->SetBinError(7,0.0003104165);
   bptw_cosTheta__4__4->SetBinError(8,0.000318635);
   bptw_cosTheta__4__4->SetBinError(9,0.0003203023);
   bptw_cosTheta__4__4->SetBinError(10,0.0003177104);
   bptw_cosTheta__4__4->SetBinError(11,0.0003249972);
   bptw_cosTheta__4__4->SetBinError(12,0.0003270976);
   bptw_cosTheta__4__4->SetBinError(13,0.0003351993);
   bptw_cosTheta__4__4->SetBinError(14,0.0003356605);
   bptw_cosTheta__4__4->SetBinError(15,0.000339113);
   bptw_cosTheta__4__4->SetBinError(16,0.0003496524);
   bptw_cosTheta__4__4->SetBinError(17,0.0003576149);
   bptw_cosTheta__4__4->SetBinError(18,0.0003626559);
   bptw_cosTheta__4__4->SetBinError(19,0.0003693797);
   bptw_cosTheta__4__4->SetBinError(20,0.0003709493);
   bptw_cosTheta__4__4->SetEntries(693008);
   bptw_cosTheta__4__4->SetDirectory(0);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("bptw_cosTheta__4");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 693008 ");
   text = ptstats->AddText("Mean  = 0.1482");
   text = ptstats->AddText("RMS   = 0.5395");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   bptw_cosTheta__4__4->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(bptw_cosTheta__4__4);
   bptw_cosTheta__4__4->SetLineColor(6);
   bptw_cosTheta__4__4->GetXaxis()->SetLabelFont(42);
   bptw_cosTheta__4__4->GetXaxis()->SetLabelSize(0.035);
   bptw_cosTheta__4__4->GetXaxis()->SetTitleSize(0.035);
   bptw_cosTheta__4__4->GetXaxis()->SetTitleFont(42);
   bptw_cosTheta__4__4->GetYaxis()->SetLabelFont(42);
   bptw_cosTheta__4__4->GetYaxis()->SetLabelSize(0.035);
   bptw_cosTheta__4__4->GetYaxis()->SetTitleSize(0.035);
   bptw_cosTheta__4__4->GetYaxis()->SetTitleFont(42);
   bptw_cosTheta__4__4->GetZaxis()->SetLabelFont(42);
   bptw_cosTheta__4__4->GetZaxis()->SetLabelSize(0.035);
   bptw_cosTheta__4__4->GetZaxis()->SetTitleSize(0.035);
   bptw_cosTheta__4__4->GetZaxis()->SetTitleFont(42);
   bptw_cosTheta__4__4->Draw("sames");
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("betaw_cosTheta__5");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 693008 ");
   text = ptstats->AddText("Mean  = 0.1685");
   text = ptstats->AddText("RMS   =  0.538");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   TH1D *betaw_cosTheta__5__5 = new TH1D("betaw_cosTheta__5__5","betaw_cosTheta",20,-1,1);
   betaw_cosTheta__5__5->SetBinContent(1,0.00798646);
   betaw_cosTheta__5__5->SetBinContent(2,0.02514105);
   betaw_cosTheta__5__5->SetBinContent(3,0.03370893);
   betaw_cosTheta__5__5->SetBinContent(4,0.03861018);
   betaw_cosTheta__5__5->SetBinContent(5,0.0417474);
   betaw_cosTheta__5__5->SetBinContent(6,0.04422337);
   betaw_cosTheta__5__5->SetBinContent(7,0.04561586);
   betaw_cosTheta__5__5->SetBinContent(8,0.04780223);
   betaw_cosTheta__5__5->SetBinContent(9,0.04949291);
   betaw_cosTheta__5__5->SetBinContent(10,0.04986718);
   betaw_cosTheta__5__5->SetBinContent(11,0.0515203);
   betaw_cosTheta__5__5->SetBinContent(12,0.05313829);
   betaw_cosTheta__5__5->SetBinContent(13,0.05545085);
   betaw_cosTheta__5__5->SetBinContent(14,0.0568849);
   betaw_cosTheta__5__5->SetBinContent(15,0.05875551);
   betaw_cosTheta__5__5->SetBinContent(16,0.06227742);
   betaw_cosTheta__5__5->SetBinContent(17,0.0652924);
   betaw_cosTheta__5__5->SetBinContent(18,0.06818836);
   betaw_cosTheta__5__5->SetBinContent(19,0.07149739);
   betaw_cosTheta__5__5->SetBinContent(20,0.07279901);
   betaw_cosTheta__5__5->SetBinError(1,0.000123266);
   betaw_cosTheta__5__5->SetBinError(2,0.0002209084);
   betaw_cosTheta__5__5->SetBinError(3,0.0002582592);
   betaw_cosTheta__5__5->SetBinError(4,0.0002768947);
   betaw_cosTheta__5__5->SetBinError(5,0.0002892837);
   betaw_cosTheta__5__5->SetBinError(6,0.0002991464);
   betaw_cosTheta__5__5->SetBinError(7,0.0003045562);
   betaw_cosTheta__5__5->SetBinError(8,0.0003119903);
   betaw_cosTheta__5__5->SetBinError(9,0.0003176678);
   betaw_cosTheta__5__5->SetBinError(10,0.0003162836);
   betaw_cosTheta__5__5->SetBinError(11,0.0003255905);
   betaw_cosTheta__5__5->SetBinError(12,0.0003290481);
   betaw_cosTheta__5__5->SetBinError(13,0.0003375944);
   betaw_cosTheta__5__5->SetBinError(14,0.000340163);
   betaw_cosTheta__5__5->SetBinError(15,0.0003464924);
   betaw_cosTheta__5__5->SetBinError(16,0.0003595751);
   betaw_cosTheta__5__5->SetBinError(17,0.0003704817);
   betaw_cosTheta__5__5->SetBinError(18,0.0003801033);
   betaw_cosTheta__5__5->SetBinError(19,0.0003923658);
   betaw_cosTheta__5__5->SetBinError(20,0.0003975525);
   betaw_cosTheta__5__5->SetEntries(693008);
   betaw_cosTheta__5__5->SetDirectory(0);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("betaw_cosTheta__5");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 693008 ");
   text = ptstats->AddText("Mean  = 0.1685");
   text = ptstats->AddText("RMS   =  0.538");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   betaw_cosTheta__5__5->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(betaw_cosTheta__5__5);

   ci = TColor::GetColor("#666600");
   betaw_cosTheta__5__5->SetLineColor(ci);
   betaw_cosTheta__5__5->GetXaxis()->SetLabelFont(42);
   betaw_cosTheta__5__5->GetXaxis()->SetLabelSize(0.035);
   betaw_cosTheta__5__5->GetXaxis()->SetTitleSize(0.035);
   betaw_cosTheta__5__5->GetXaxis()->SetTitleFont(42);
   betaw_cosTheta__5__5->GetYaxis()->SetLabelFont(42);
   betaw_cosTheta__5__5->GetYaxis()->SetLabelSize(0.035);
   betaw_cosTheta__5__5->GetYaxis()->SetTitleSize(0.035);
   betaw_cosTheta__5__5->GetYaxis()->SetTitleFont(42);
   betaw_cosTheta__5__5->GetZaxis()->SetLabelFont(42);
   betaw_cosTheta__5__5->GetZaxis()->SetLabelSize(0.035);
   betaw_cosTheta__5__5->GetZaxis()->SetTitleSize(0.035);
   betaw_cosTheta__5__5->GetZaxis()->SetTitleFont(42);
   betaw_cosTheta__5__5->Draw("sames");
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("bptetaw_cosTheta__6");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 693008 ");
   text = ptstats->AddText("Mean  = 0.1674");
   text = ptstats->AddText("RMS   = 0.5383");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   TH1D *bptetaw_cosTheta__6__6 = new TH1D("bptetaw_cosTheta__6__6","bptetaw_cosTheta",20,-1,1);
   bptetaw_cosTheta__6__6->SetBinContent(1,0.007730329);
   bptetaw_cosTheta__6__6->SetBinContent(2,0.02476751);
   bptetaw_cosTheta__6__6->SetBinContent(3,0.03386848);
   bptetaw_cosTheta__6__6->SetBinContent(4,0.03904956);
   bptetaw_cosTheta__6__6->SetBinContent(5,0.04218937);
   bptetaw_cosTheta__6__6->SetBinContent(6,0.04452964);
   bptetaw_cosTheta__6__6->SetBinContent(7,0.04594108);
   bptetaw_cosTheta__6__6->SetBinContent(8,0.04819317);
   bptetaw_cosTheta__6__6->SetBinContent(9,0.04974199);
   bptetaw_cosTheta__6__6->SetBinContent(10,0.04985311);
   bptetaw_cosTheta__6__6->SetBinContent(11,0.05152891);
   bptetaw_cosTheta__6__6->SetBinContent(12,0.05294721);
   bptetaw_cosTheta__6__6->SetBinContent(13,0.05540035);
   bptetaw_cosTheta__6__6->SetBinContent(14,0.05659398);
   bptetaw_cosTheta__6__6->SetBinContent(15,0.05837606);
   bptetaw_cosTheta__6__6->SetBinContent(16,0.06178463);
   bptetaw_cosTheta__6__6->SetBinContent(17,0.06479533);
   bptetaw_cosTheta__6__6->SetBinContent(18,0.06781787);
   bptetaw_cosTheta__6__6->SetBinContent(19,0.07136717);
   bptetaw_cosTheta__6__6->SetBinContent(20,0.07352425);
   bptetaw_cosTheta__6__6->SetBinError(1,0.0001202082);
   bptetaw_cosTheta__6__6->SetBinError(2,0.0002190729);
   bptetaw_cosTheta__6__6->SetBinError(3,0.0002634589);
   bptetaw_cosTheta__6__6->SetBinError(4,0.0002844846);
   bptetaw_cosTheta__6__6->SetBinError(5,0.0002971361);
   bptetaw_cosTheta__6__6->SetBinError(6,0.0003040228);
   bptetaw_cosTheta__6__6->SetBinError(7,0.0003098074);
   bptetaw_cosTheta__6__6->SetBinError(8,0.0003190396);
   bptetaw_cosTheta__6__6->SetBinError(9,0.0003229806);
   bptetaw_cosTheta__6__6->SetBinError(10,0.0003202783);
   bptetaw_cosTheta__6__6->SetBinError(11,0.0003294717);
   bptetaw_cosTheta__6__6->SetBinError(12,0.0003306784);
   bptetaw_cosTheta__6__6->SetBinError(13,0.0003406663);
   bptetaw_cosTheta__6__6->SetBinError(14,0.0003420282);
   bptetaw_cosTheta__6__6->SetBinError(15,0.0003476828);
   bptetaw_cosTheta__6__6->SetBinError(16,0.0003596814);
   bptetaw_cosTheta__6__6->SetBinError(17,0.0003712097);
   bptetaw_cosTheta__6__6->SetBinError(18,0.0003815553);
   bptetaw_cosTheta__6__6->SetBinError(19,0.000394677);
   bptetaw_cosTheta__6__6->SetBinError(20,0.0004048658);
   bptetaw_cosTheta__6__6->SetEntries(693008);
   bptetaw_cosTheta__6__6->SetDirectory(0);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("bptetaw_cosTheta__6");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 693008 ");
   text = ptstats->AddText("Mean  = 0.1674");
   text = ptstats->AddText("RMS   = 0.5383");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   bptetaw_cosTheta__6__6->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(bptetaw_cosTheta__6__6);
   bptetaw_cosTheta__6__6->SetLineColor(5);
   bptetaw_cosTheta__6__6->GetXaxis()->SetLabelFont(42);
   bptetaw_cosTheta__6__6->GetXaxis()->SetLabelSize(0.035);
   bptetaw_cosTheta__6__6->GetXaxis()->SetTitleSize(0.035);
   bptetaw_cosTheta__6__6->GetXaxis()->SetTitleFont(42);
   bptetaw_cosTheta__6__6->GetYaxis()->SetLabelFont(42);
   bptetaw_cosTheta__6__6->GetYaxis()->SetLabelSize(0.035);
   bptetaw_cosTheta__6__6->GetYaxis()->SetTitleSize(0.035);
   bptetaw_cosTheta__6__6->GetYaxis()->SetTitleFont(42);
   bptetaw_cosTheta__6__6->GetZaxis()->SetLabelFont(42);
   bptetaw_cosTheta__6__6->GetZaxis()->SetLabelSize(0.035);
   bptetaw_cosTheta__6__6->GetZaxis()->SetTitleSize(0.035);
   bptetaw_cosTheta__6__6->GetZaxis()->SetTitleFont(42);
   bptetaw_cosTheta__6__6->Draw("sames");
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("lptbetaw_cosTheta__7");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 1386016");
   text = ptstats->AddText("Mean  = 0.1885");
   text = ptstats->AddText("RMS   = 0.5358");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   TH1D *lptbetaw_cosTheta__7__7 = new TH1D("lptbetaw_cosTheta__7__7","lptbetaw_cosTheta",20,-1,1);
   lptbetaw_cosTheta__7__7->SetBinContent(1,0.007572552);
   lptbetaw_cosTheta__7__7->SetBinContent(2,0.02347203);
   lptbetaw_cosTheta__7__7->SetBinContent(3,0.03164056);
   lptbetaw_cosTheta__7__7->SetBinContent(4,0.036545);
   lptbetaw_cosTheta__7__7->SetBinContent(5,0.03967104);
   lptbetaw_cosTheta__7__7->SetBinContent(6,0.04226997);
   lptbetaw_cosTheta__7__7->SetBinContent(7,0.04394507);
   lptbetaw_cosTheta__7__7->SetBinContent(8,0.04646764);
   lptbetaw_cosTheta__7__7->SetBinContent(9,0.04836516);
   lptbetaw_cosTheta__7__7->SetBinContent(10,0.04893563);
   lptbetaw_cosTheta__7__7->SetBinContent(11,0.05098238);
   lptbetaw_cosTheta__7__7->SetBinContent(12,0.05289832);
   lptbetaw_cosTheta__7__7->SetBinContent(13,0.05568799);
   lptbetaw_cosTheta__7__7->SetBinContent(14,0.05755535);
   lptbetaw_cosTheta__7__7->SetBinContent(15,0.05976049);
   lptbetaw_cosTheta__7__7->SetBinContent(16,0.06372991);
   lptbetaw_cosTheta__7__7->SetBinContent(17,0.06734209);
   lptbetaw_cosTheta__7__7->SetBinContent(18,0.07075313);
   lptbetaw_cosTheta__7__7->SetBinContent(19,0.07492892);
   lptbetaw_cosTheta__7__7->SetBinContent(20,0.07747678);
   lptbetaw_cosTheta__7__7->SetBinError(1,8.160497e-05);
   lptbetaw_cosTheta__7__7->SetBinError(2,0.0001445343);
   lptbetaw_cosTheta__7__7->SetBinError(3,0.0001703699);
   lptbetaw_cosTheta__7__7->SetBinError(4,0.0001843758);
   lptbetaw_cosTheta__7__7->SetBinError(5,0.0001936055);
   lptbetaw_cosTheta__7__7->SetBinError(6,0.0002012137);
   lptbetaw_cosTheta__7__7->SetBinError(7,0.0002065487);
   lptbetaw_cosTheta__7__7->SetBinError(8,0.0002145812);
   lptbetaw_cosTheta__7__7->SetBinError(9,0.0002191147);
   lptbetaw_cosTheta__7__7->SetBinError(10,0.0002197026);
   lptbetaw_cosTheta__7__7->SetBinError(11,0.000227929);
   lptbetaw_cosTheta__7__7->SetBinError(12,0.0002324526);
   lptbetaw_cosTheta__7__7->SetBinError(13,0.0002406001);
   lptbetaw_cosTheta__7__7->SetBinError(14,0.000245061);
   lptbetaw_cosTheta__7__7->SetBinError(15,0.0002516891);
   lptbetaw_cosTheta__7__7->SetBinError(16,0.0002623576);
   lptbetaw_cosTheta__7__7->SetBinError(17,0.0002737197);
   lptbetaw_cosTheta__7__7->SetBinError(18,0.0002822694);
   lptbetaw_cosTheta__7__7->SetBinError(19,0.0002947995);
   lptbetaw_cosTheta__7__7->SetBinError(20,0.0003047855);
   lptbetaw_cosTheta__7__7->SetEntries(1386016);
   lptbetaw_cosTheta__7__7->SetDirectory(0);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("lptbetaw_cosTheta__7");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 1386016");
   text = ptstats->AddText("Mean  = 0.1885");
   text = ptstats->AddText("RMS   = 0.5358");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   lptbetaw_cosTheta__7__7->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(lptbetaw_cosTheta__7__7);
   lptbetaw_cosTheta__7__7->SetLineColor(50);
   lptbetaw_cosTheta__7__7->GetXaxis()->SetLabelFont(42);
   lptbetaw_cosTheta__7__7->GetXaxis()->SetLabelSize(0.035);
   lptbetaw_cosTheta__7__7->GetXaxis()->SetTitleSize(0.035);
   lptbetaw_cosTheta__7__7->GetXaxis()->SetTitleFont(42);
   lptbetaw_cosTheta__7__7->GetYaxis()->SetLabelFont(42);
   lptbetaw_cosTheta__7__7->GetYaxis()->SetLabelSize(0.035);
   lptbetaw_cosTheta__7__7->GetYaxis()->SetTitleSize(0.035);
   lptbetaw_cosTheta__7__7->GetYaxis()->SetTitleFont(42);
   lptbetaw_cosTheta__7__7->GetZaxis()->SetLabelFont(42);
   lptbetaw_cosTheta__7__7->GetZaxis()->SetLabelSize(0.035);
   lptbetaw_cosTheta__7__7->GetZaxis()->SetTitleSize(0.035);
   lptbetaw_cosTheta__7__7->GetZaxis()->SetTitleFont(42);
   lptbetaw_cosTheta__7__7->Draw("sames");
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("allw_cosTheta__8");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 693008 ");
   text = ptstats->AddText("Mean  = 0.1988");
   text = ptstats->AddText("RMS   = 0.5349");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   
   TH1D *allw_cosTheta__8__8 = new TH1D("allw_cosTheta__8__8","allw_cosTheta",20,-1,1);
   allw_cosTheta__8__8->SetBinContent(1,0.006891799);
   allw_cosTheta__8__8->SetBinContent(2,0.02227497);
   allw_cosTheta__8__8->SetBinContent(3,0.03070386);
   allw_cosTheta__8__8->SetBinContent(4,0.03577669);
   allw_cosTheta__8__8->SetBinContent(5,0.0390289);
   allw_cosTheta__8__8->SetBinContent(6,0.04163672);
   allw_cosTheta__8__8->SetBinContent(7,0.04338932);
   allw_cosTheta__8__8->SetBinContent(8,0.04604122);
   allw_cosTheta__8__8->SetBinContent(9,0.04798348);
   allw_cosTheta__8__8->SetBinContent(10,0.04851472);
   allw_cosTheta__8__8->SetBinContent(11,0.05066532);
   allw_cosTheta__8__8->SetBinContent(12,0.05255909);
   allw_cosTheta__8__8->SetBinContent(13,0.0555283);
   allw_cosTheta__8__8->SetBinContent(14,0.05738577);
   allw_cosTheta__8__8->SetBinContent(15,0.05979895);
   allw_cosTheta__8__8->SetBinContent(16,0.06389251);
   allw_cosTheta__8__8->SetBinContent(17,0.06784992);
   allw_cosTheta__8__8->SetBinContent(18,0.0718114);
   allw_cosTheta__8__8->SetBinContent(19,0.07697491);
   allw_cosTheta__8__8->SetBinContent(20,0.08129216);
   allw_cosTheta__8__8->SetBinError(1,0.0001072221);
   allw_cosTheta__8__8->SetBinError(2,0.0001967684);
   allw_cosTheta__8__8->SetBinError(3,0.0002385908);
   allw_cosTheta__8__8->SetBinError(4,0.0002606995);
   allw_cosTheta__8__8->SetBinError(5,0.0002753518);
   allw_cosTheta__8__8->SetBinError(6,0.0002851435);
   allw_cosTheta__8__8->SetBinError(7,0.0002935383);
   allw_cosTheta__8__8->SetBinError(8,0.00030666);
   allw_cosTheta__8__8->SetBinError(9,0.0003137097);
   allw_cosTheta__8__8->SetBinError(10,0.0003140406);
   allw_cosTheta__8__8->SetBinError(11,0.0003272038);
   allw_cosTheta__8__8->SetBinError(12,0.0003323282);
   allw_cosTheta__8__8->SetBinError(13,0.000345898);
   allw_cosTheta__8__8->SetBinError(14,0.000352426);
   allw_cosTheta__8__8->SetBinError(15,0.0003635222);
   allw_cosTheta__8__8->SetBinError(16,0.000379192);
   allw_cosTheta__8__8->SetBinError(17,0.0003984323);
   allw_cosTheta__8__8->SetBinError(18,0.0004136028);
   allw_cosTheta__8__8->SetBinError(19,0.0004354836);
   allw_cosTheta__8__8->SetBinError(20,0.0004599384);
   allw_cosTheta__8__8->SetEntries(693008);
   allw_cosTheta__8__8->SetDirectory(0);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("allw_cosTheta__8");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 693008 ");
   text = ptstats->AddText("Mean  = 0.1988");
   text = ptstats->AddText("RMS   = 0.5349");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   allw_cosTheta__8__8->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(allw_cosTheta__8__8);

   ci = TColor::GetColor("#000099");
   allw_cosTheta__8__8->SetLineColor(ci);
   allw_cosTheta__8__8->GetXaxis()->SetLabelFont(42);
   allw_cosTheta__8__8->GetXaxis()->SetLabelSize(0.035);
   allw_cosTheta__8__8->GetXaxis()->SetTitleSize(0.035);
   allw_cosTheta__8__8->GetXaxis()->SetTitleFont(42);
   allw_cosTheta__8__8->GetYaxis()->SetLabelFont(42);
   allw_cosTheta__8__8->GetYaxis()->SetLabelSize(0.035);
   allw_cosTheta__8__8->GetYaxis()->SetTitleSize(0.035);
   allw_cosTheta__8__8->GetYaxis()->SetTitleFont(42);
   allw_cosTheta__8__8->GetZaxis()->SetLabelFont(42);
   allw_cosTheta__8__8->GetZaxis()->SetLabelSize(0.035);
   allw_cosTheta__8__8->GetZaxis()->SetTitleSize(0.035);
   allw_cosTheta__8__8->GetZaxis()->SetTitleFont(42);
   allw_cosTheta__8__8->Draw("sames");
   
   TH1D *Default_allWcosTheta__9 = new TH1D("Default_allWcosTheta__9","Default_allW: cos(#theta)",20,-1,1);
   Default_allWcosTheta__9->SetBinContent(1,0.0331791);
   Default_allWcosTheta__9->SetBinContent(2,0.03783773);
   Default_allWcosTheta__9->SetBinContent(3,0.04236549);
   Default_allWcosTheta__9->SetBinContent(4,0.04547162);
   Default_allWcosTheta__9->SetBinContent(5,0.0467398);
   Default_allWcosTheta__9->SetBinContent(6,0.04824717);
   Default_allWcosTheta__9->SetBinContent(7,0.04903809);
   Default_allWcosTheta__9->SetBinContent(8,0.04955371);
   Default_allWcosTheta__9->SetBinContent(9,0.04999712);
   Default_allWcosTheta__9->SetBinContent(10,0.05017201);
   Default_allWcosTheta__9->SetBinContent(11,0.05035704);
   Default_allWcosTheta__9->SetBinContent(12,0.05157896);
   Default_allWcosTheta__9->SetBinContent(13,0.05195693);
   Default_allWcosTheta__9->SetBinContent(14,0.05311003);
   Default_allWcosTheta__9->SetBinContent(15,0.05414578);
   Default_allWcosTheta__9->SetBinContent(16,0.05505968);
   Default_allWcosTheta__9->SetBinContent(17,0.05574905);
   Default_allWcosTheta__9->SetBinContent(18,0.05745726);
   Default_allWcosTheta__9->SetBinContent(19,0.05894545);
   Default_allWcosTheta__9->SetBinContent(20,0.05903797);
   Default_allWcosTheta__9->SetBinContent(21,3.384816e-06);
   Default_allWcosTheta__9->SetEntries(886314);
   Default_allWcosTheta__9->SetDirectory(0);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("Default_allWcosTheta");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 886314 ");
   text = ptstats->AddText("Mean  = 0.07008");
   text = ptstats->AddText("RMS   = 0.5666");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   Default_allWcosTheta__9->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(Default_allWcosTheta__9);

   ci = TColor::GetColor("#000099");
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
   Default_allWcosTheta__9->Draw("SAME");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
