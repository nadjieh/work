{
//=========Macro generated from canvas: c/c
//=========  (Thu Aug  1 19:38:53 2013) by ROOT version5.32/00
   TCanvas *c = new TCanvas("c", "c",67,53,604,630);
   c->Range(-1.272031,-0.008259187,1.02682,0.07324952);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.1183333);
   c->SetRightMargin(0.01166667);
   c->SetTopMargin(0.03986711);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TH1D *hbup = new TH1D("hbup","",20,-1,1);
   hbup->SetBinContent(1,0.03005905);//03205905
   hbup->SetBinContent(2,0.03729522);
   hbup->SetBinContent(3,0.04141419);//04341419
   hbup->SetBinContent(4,0.04451064);//04551064
   hbup->SetBinContent(5,0.04541366);
   hbup->SetBinContent(6,0.04601508);
   hbup->SetBinContent(7,0.05056672);
   hbup->SetBinContent(8,0.05161502);
   hbup->SetBinContent(9,0.0473571);
   hbup->SetBinContent(10,0.04893894);
   hbup->SetBinContent(11,0.0503608);
   hbup->SetBinContent(12,0.05199132);
   hbup->SetBinContent(13,0.05390341);
   hbup->SetBinContent(14,0.0505347);//0525347
   hbup->SetBinContent(15,0.0537104);
   hbup->SetBinContent(16,0.05215418);//05515418
   hbup->SetBinContent(17,0.05768977);
   hbup->SetBinContent(18,0.05602364);
   hbup->SetBinContent(19,0.0591738);
   hbup->SetBinContent(20,0.06127236);
   hbup->SetBinError(1,0.002558265);
   hbup->SetBinError(2,0.002934897);
   hbup->SetBinError(3,0.003064289);
   hbup->SetBinError(4,0.003135147);
   hbup->SetBinError(5,0.002915985);
   hbup->SetBinError(6,0.002928317);
   hbup->SetBinError(7,0.003136948);
   hbup->SetBinError(8,0.003282217);
   hbup->SetBinError(9,0.00297856);
   hbup->SetBinError(10,0.002832609);
   hbup->SetBinError(11,0.003159775);
   hbup->SetBinError(12,0.003091675);
   hbup->SetBinError(13,0.003281888);
   hbup->SetBinError(14,0.003137475);
   hbup->SetBinError(15,0.003140728);
   hbup->SetBinError(16,0.003123016);
   hbup->SetBinError(17,0.003143683);
   hbup->SetBinError(18,0.003176465);
   hbup->SetBinError(19,0.003299685);
   hbup->SetBinError(20,0.0032078);
   hbup->SetMinimum(0);
   hbup->SetMaximum(0.075);
   hbup->SetEntries(5266.223);
   hbup->SetDirectory(0);
   hbup->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffcc00");
   hbup->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   hbup->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   hbup->SetMarkerColor(ci);
   hbup->GetXaxis()->SetTitle("cos(#theta*)");
   hbup->GetYaxis()->SetTitle("Normalized to unity");
   hbup->GetXaxis()->SetLabelFont(42);
   hbup->GetXaxis()->SetLabelSize(0.025);
   hbup->GetXaxis()->SetTitleSize(0.045);
   hbup->GetXaxis()->SetTitleFont(42);
   hbup->GetYaxis()->SetLabelFont(42);
   hbup->GetYaxis()->SetLabelSize(0.025);
   hbup->GetYaxis()->SetTitleSize(0.035);
   hbup->GetYaxis()->SetTitleFont(42);
   hbup->GetZaxis()->SetLabelFont(42);
   hbup->GetZaxis()->SetLabelSize(0.035);
   hbup->GetZaxis()->SetTitleSize(0.035);
   hbup->GetZaxis()->SetTitleFont(42);
   hbup->Draw("E4");
   
   TH1D *hbdown = new TH1D("hbdown","2J0T Data (b-syst.)",20,-1,1);
   hbdown->SetBinContent(1,0.03523036);//03323036
   hbdown->SetBinContent(2,0.03558536);//03858536
   hbdown->SetBinContent(3,0.04169119);//04269119
   hbdown->SetBinContent(4,0.04442299);//04642299
   hbdown->SetBinContent(5,0.04653135);
   hbdown->SetBinContent(6,0.04729618);
   hbdown->SetBinContent(7,0.05117753);
   hbdown->SetBinContent(8,0.05120291);
   hbdown->SetBinContent(9,0.04910139);
   hbdown->SetBinContent(10,0.04951709);
   hbdown->SetBinContent(11,0.05025853);
   hbdown->SetBinContent(12,0.04999246);
   hbdown->SetBinContent(13,0.05270019);
   hbdown->SetBinContent(14,0.05187927);
   hbdown->SetBinContent(15,0.05365469);
   hbdown->SetBinContent(16,0.05520187);
   hbdown->SetBinContent(17,0.05736957);
   hbdown->SetBinContent(18,0.0562391);
   hbdown->SetBinContent(19,0.05849147);
   hbdown->SetBinContent(20,0.05845649);
   hbdown->SetBinError(1,0.002694424);
   hbdown->SetBinError(2,0.003118824);
   hbdown->SetBinError(3,0.003082953);
   hbdown->SetBinError(4,0.0032771);
   hbdown->SetBinError(5,0.00304762);
   hbdown->SetBinError(6,0.003047865);
   hbdown->SetBinError(7,0.003229727);
   hbdown->SetBinError(8,0.003251214);
   hbdown->SetBinError(9,0.003281091);
   hbdown->SetBinError(10,0.002966825);
   hbdown->SetBinError(11,0.00330061);
   hbdown->SetBinError(12,0.003067524);
   hbdown->SetBinError(13,0.003313816);
   hbdown->SetBinError(14,0.003051911);
   hbdown->SetBinError(15,0.003150494);
   hbdown->SetBinError(16,0.003171773);
   hbdown->SetBinError(17,0.003219295);
   hbdown->SetBinError(18,0.003370531);
   hbdown->SetBinError(19,0.0033285);
   hbdown->SetBinError(20,0.003111996);
   hbdown->SetEntries(5013.778);
   hbdown->SetDirectory(0);
   hbdown->SetStats(0);

   ci = TColor::GetColor("#ffcc00");
   hbdown->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   hbdown->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   hbdown->SetMarkerColor(ci);
   hbdown->GetXaxis()->SetTitle("cos(#theta*)");
   hbdown->GetXaxis()->SetLabelFont(42);
   hbdown->GetXaxis()->SetLabelSize(0.035);
   hbdown->GetXaxis()->SetTitleSize(0.035);
   hbdown->GetXaxis()->SetTitleFont(42);
   hbdown->GetYaxis()->SetLabelFont(42);
   hbdown->GetYaxis()->SetLabelSize(0.035);
   hbdown->GetYaxis()->SetTitleSize(0.035);
   hbdown->GetYaxis()->SetTitleFont(42);
   hbdown->GetZaxis()->SetLabelFont(42);
   hbdown->GetZaxis()->SetLabelSize(0.035);
   hbdown->GetZaxis()->SetTitleSize(0.035);
   hbdown->GetZaxis()->SetTitleFont(42);
   hbdown->Draw("E4SAME");
      TH1D *hcup = new TH1D("hcup","2J0T Data (c-syst.)",20,-1,1);
   hcup->SetBinContent(1,0.03104105);
   hcup->SetBinContent(2,0.03080499);//03580499
   hcup->SetBinContent(3,0.04747893);//04447893
   hcup->SetBinContent(4,0.04274847);//04574847
   hcup->SetBinContent(5,0.04475328);
   hcup->SetBinContent(6,0.04545271);
   hcup->SetBinContent(7,0.04979598);
   hcup->SetBinContent(8,0.05243183);
   hcup->SetBinContent(9,0.04746186);
   hcup->SetBinContent(10,0.04827685);
   hcup->SetBinContent(11,0.04940293);
   hcup->SetBinContent(12,0.05398398);
   hcup->SetBinContent(13,0.05529533);
   hcup->SetBinContent(14,0.05265548);
   hcup->SetBinContent(15,0.05328784);
   hcup->SetBinContent(16,0.0542564);
   hcup->SetBinContent(17,0.05843608);
   hcup->SetBinContent(18,0.05464576);
   hcup->SetBinContent(19,0.05955781);
   hcup->SetBinContent(20,0.06323245);
   hcup->SetBinError(1,0.002495717);
   hcup->SetBinError(2,0.002802202);
   hcup->SetBinError(3,0.003084757);
   hcup->SetBinError(4,0.00312092);
   hcup->SetBinError(5,0.002863746);
   hcup->SetBinError(6,0.002888874);
   hcup->SetBinError(7,0.003077532);
   hcup->SetBinError(8,0.003304654);
   hcup->SetBinError(9,0.002951329);
   hcup->SetBinError(10,0.002766964);
   hcup->SetBinError(11,0.003089611);
   hcup->SetBinError(12,0.003135684);
   hcup->SetBinError(13,0.003313769);
   hcup->SetBinError(14,0.003147874);
   hcup->SetBinError(15,0.00311366);
   hcup->SetBinError(16,0.003063576);
   hcup->SetBinError(17,0.003135007);
   hcup->SetBinError(18,0.003056921);
   hcup->SetBinError(19,0.003295623);
   hcup->SetBinError(20,0.003250773);
   hcup->SetMinimum(0);
   hcup->SetMaximum(0.07);
   hcup->SetEntries(5359.279);
   hcup->SetDirectory(0);
   hcup->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ffcc00");
   hcup->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   hcup->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   hcup->SetMarkerColor(ci);
   hcup->GetXaxis()->SetTitle("cos(#theta*)");
   hcup->GetXaxis()->SetLabelFont(42);
   hcup->GetXaxis()->SetLabelSize(0.035);
   hcup->GetXaxis()->SetTitleSize(0.035);
   hcup->GetXaxis()->SetTitleFont(42);
   hcup->GetYaxis()->SetLabelFont(42);
   hcup->GetYaxis()->SetLabelSize(0.035);
   hcup->GetYaxis()->SetTitleSize(0.035);
   hcup->GetYaxis()->SetTitleFont(42);
   hcup->GetZaxis()->SetLabelFont(42);
   hcup->GetZaxis()->SetLabelSize(0.035);
   hcup->GetZaxis()->SetTitleSize(0.035);
   hcup->GetZaxis()->SetTitleFont(42);
   hcup->Draw("E4SAME");
   
   TH1D *hcdown = new TH1D("hcdown","2J0T Data (c-syst.)",20,-1,1);
   hcdown->SetBinContent(1,0.03133287);
   hcdown->SetBinContent(2,0.03681849);//03581849
   hcdown->SetBinContent(3,0.04366299);//04466299
   hcdown->SetBinContent(4,0.04283598);//04683598
   hcdown->SetBinContent(5,0.04529129);
   hcdown->SetBinContent(6,0.04623174);
   hcdown->SetBinContent(7,0.04974796);
   hcdown->SetBinContent(8,0.05271192);
   hcdown->SetBinContent(9,0.049249);
   hcdown->SetBinContent(10,0.04828767);
   hcdown->SetBinContent(11,0.04850387);
   hcdown->SetBinContent(12,0.05369917);
   hcdown->SetBinContent(13,0.05528447);
   hcdown->SetBinContent(14,0.05211761);
   hcdown->SetBinContent(15,0.05288091);
   hcdown->SetBinContent(16,0.05355363);
   hcdown->SetBinContent(17,0.05874688);
   hcdown->SetBinContent(18,0.05370583);
   hcdown->SetBinContent(19,0.0592134);
   hcdown->SetBinContent(20,0.06212434);
   hcdown->SetBinError(1,0.002543581);
   hcdown->SetBinError(2,0.002807301);
   hcdown->SetBinError(3,0.003110577);
   hcdown->SetBinError(4,0.003241428);
   hcdown->SetBinError(5,0.002927542);
   hcdown->SetBinError(6,0.002958635);
   hcdown->SetBinError(7,0.003098137);
   hcdown->SetBinError(8,0.003331838);
   hcdown->SetBinError(9,0.003195881);
   hcdown->SetBinError(10,0.002802867);
   hcdown->SetBinError(11,0.003125565);
   hcdown->SetBinError(12,0.003155119);
   hcdown->SetBinError(13,0.003388478);
   hcdown->SetBinError(14,0.003110084);
   hcdown->SetBinError(15,0.003099456);
   hcdown->SetBinError(16,0.003037433);
   hcdown->SetBinError(17,0.003181865);
   hcdown->SetBinError(18,0.003060102);
   hcdown->SetBinError(19,0.003284594);
   hcdown->SetBinError(20,0.003202664);
   hcdown->SetEntries(5239.121);
   hcdown->SetDirectory(0);
   hcdown->SetStats(0);

   ci = TColor::GetColor("#ffcc00");
   hcdown->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   hcdown->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc00");
   hcdown->SetMarkerColor(ci);
   hcdown->GetXaxis()->SetTitle("cos(#theta*)");
   hcdown->GetXaxis()->SetLabelFont(42);
   hcdown->GetXaxis()->SetLabelSize(0.035);
   hcdown->GetXaxis()->SetTitleSize(0.035);
   hcdown->GetXaxis()->SetTitleFont(42);
   hcdown->GetYaxis()->SetLabelFont(42);
   hcdown->GetYaxis()->SetLabelSize(0.035);
   hcdown->GetYaxis()->SetTitleSize(0.035);
   hcdown->GetYaxis()->SetTitleFont(42);
   hcdown->GetZaxis()->SetLabelFont(42);
   hcdown->GetZaxis()->SetLabelSize(0.035);
   hcdown->GetZaxis()->SetTitleSize(0.035);
   hcdown->GetZaxis()->SetTitleFont(42);
   hcdown->Draw("E4SAME");
   TH1D *data = new TH1D("data","2J0T Data (N)",20,-1,1);
   data->SetBinContent(1,0.0331791);
   data->SetBinContent(2,0.03783773);
   data->SetBinContent(3,0.04236549);
   data->SetBinContent(4,0.04547162);
   data->SetBinContent(5,0.0467398);
   data->SetBinContent(6,0.04824717);
   data->SetBinContent(7,0.04903809);
   data->SetBinContent(8,0.04955371);
   data->SetBinContent(9,0.04999712);
   data->SetBinContent(10,0.05017201);
   data->SetBinContent(11,0.05035704);
   data->SetBinContent(12,0.05157896);
   data->SetBinContent(13,0.05195693);
   data->SetBinContent(14,0.05311003);
   data->SetBinContent(15,0.05414578);
   data->SetBinContent(16,0.05505968);
   data->SetBinContent(17,0.05574905);
   data->SetBinContent(18,0.05745726);
   data->SetBinContent(19,0.05894545);
   data->SetBinContent(20,0.05903797);
   data->SetBinContent(21,3.384816e-06);
   data->SetEntries(886314);
   data->SetDirectory(0);
   data->SetStats(0);

   ci = TColor::GetColor("#000099");
   data->SetLineColor(ci);
   data->GetXaxis()->SetTitle("cos(#theta*)");
   data->GetXaxis()->SetLabelFont(42);
   data->GetXaxis()->SetLabelSize(0.035);
   data->GetXaxis()->SetTitleSize(0.035);
   data->GetXaxis()->SetTitleFont(42);
   data->GetYaxis()->SetLabelFont(42);
   data->GetYaxis()->SetLabelSize(0.035);
   data->GetYaxis()->SetTitleSize(0.035);
   data->GetYaxis()->SetTitleFont(42);
   data->GetZaxis()->SetLabelFont(42);
   data->GetZaxis()->SetLabelSize(0.035);
   data->GetZaxis()->SetTitleSize(0.035);
   data->GetZaxis()->SetTitleFont(42);
   data->Draw("sames");
   
   TH1D *mc = new TH1D("mc","2J1T MC",20,-1,1);
   mc->SetBinContent(1,0.02991727);//02851727
   mc->SetBinContent(2,0.03299598);//03164598
   mc->SetBinContent(3,0.03935708);//03805708
   mc->SetBinContent(4,0.03812563);
   mc->SetBinContent(5,0.04368567);
   mc->SetBinContent(6,0.04833679);
   mc->SetBinContent(7,0.04576201);//
   mc->SetBinContent(8,0.04512251);
   mc->SetBinContent(9,0.05463637);
   mc->SetBinContent(10,0.0558084);
   mc->SetBinContent(11,0.05335832);
   mc->SetBinContent(12,0.05204182);
   mc->SetBinContent(13,0.05268855);
   mc->SetBinContent(14,0.05647711);
   mc->SetBinContent(15,0.05403035);
   mc->SetBinContent(16,0.05909177);
   mc->SetBinContent(17,0.05932696);
   mc->SetBinContent(18,0.05906894);
   mc->SetBinContent(19,0.06040184);
   mc->SetBinContent(20,0.06481663);
   mc->SetBinError(1,0.001563164);
   mc->SetBinError(2,0.001727335);
   mc->SetBinError(3,0.001868442);
   mc->SetBinError(4,0.001820702);
   mc->SetBinError(5,0.001925806);
   mc->SetBinError(6,0.002101794);
   mc->SetBinError(7,0.001946116);
   mc->SetBinError(8,0.001939697);
   mc->SetBinError(9,0.00248032);
   mc->SetBinError(10,0.002261224);
   mc->SetBinError(11,0.002323104);
   mc->SetBinError(12,0.002154553);
   mc->SetBinError(13,0.002190655);
   mc->SetBinError(14,0.002282173);
   mc->SetBinError(15,0.002136388);
   mc->SetBinError(16,0.0023618);
   mc->SetBinError(17,0.002261737);
   mc->SetBinError(18,0.002329594);
   mc->SetBinError(19,0.002350961);
   mc->SetBinError(20,0.002343309);
   mc->SetEntries(15808);
   mc->SetDirectory(0);
   mc->SetStats(0);
   mc->SetLineColor(2);
   mc->SetLineWidth(2);
   mc->GetXaxis()->SetTitle("cos(#theta*)");
   mc->GetXaxis()->SetLabelFont(42);
   mc->GetXaxis()->SetLabelSize(0.035);
   mc->GetXaxis()->SetTitleSize(0.035);
   mc->GetXaxis()->SetTitleFont(42);
   mc->GetYaxis()->SetLabelFont(42);
   mc->GetYaxis()->SetLabelSize(0.035);
   mc->GetYaxis()->SetTitleSize(0.035);
   mc->GetYaxis()->SetTitleFont(42);
   mc->GetZaxis()->SetLabelFont(42);
   mc->GetZaxis()->SetLabelSize(0.035);
   mc->GetZaxis()->SetTitleSize(0.035);
   mc->GetZaxis()->SetTitleFont(42);
   mc->Draw("sames");
   
   TPaveText *pt = new TPaveText(0.855,0.282392,0.8883333,0.3421927,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("2J0T Data (b-syst.)");
   pt->Draw();
   
      TH1D * bDataSyst = (TH1D*)data->Clone("bDataSyst");
   for(int i = 0; i<bDataSyst->GetXaxis()->GetNbins(); i++){
	    double bu = fabs(hbup->GetBinContent(i+1) - data->GetBinContent(i+1));
	    double bd = fabs(hbdown->GetBinContent(i+1) - data->GetBinContent(i+1));
	    double cu = fabs(hcup->GetBinContent(i+1) - data->GetBinContent(i+1));
	    double cd = fabs(hcdown->GetBinContent(i+1) - data->GetBinContent(i+1));

		double bavg = (bu+bd)/2.;
		double cavg = (cu+cd)/2.;
		double err = sqrt(pow(bavg,2)+pow(cavg,2));
		bDataSyst->SetBinError(i+1,err);
   }
   bDataSyst->SetLineColor(kGreen+2);
   bDataSyst->SetLineWidth(0);
   bDataSyst->SetFillColor(kGreen+2);
   bDataSyst->SetFillStyle(0);
   bDataSyst->Draw("E4SAME");
   TPaveText *pt = new TPaveText(0.2083333,0.2192691,0.4516667,0.2790698,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("2J0T Data (b-syst.)");
   pt->Draw();
   
   TLegend *leg = new TLegend(0.185,0.1528239,0.565,0.3621262,NULL,"brNDC");
   leg->SetBorderSize(1);
   leg->SetTextFont(62);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hbup","2J0T flavor scaled Data stat. band","lpf");

   ci = TColor::GetColor("#ffcc00");
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);


   entry=leg->AddEntry("bDataSyst","2J0T Data syst. band","lpf");

   ci = TColor::GetColor("#ffcc00");
   entry->SetFillColor(kGreen+2);
   entry->SetFillStyle(0);

   ci = TColor::GetColor("#ffcc00");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(0);

   ci = TColor::GetColor("#ffcc00");
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);


   entry=leg->AddEntry("Default_DefcosTheta__7","2J0T Data nominal","lpf");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#000099");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry=leg->AddEntry("Default_allWcosTheta__8","2J1T MC","lpf");
   entry->SetFillStyle(1001);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   leg->Draw();

   c->Modified();
   c->cd();
   c->SetSelected(c);
}
