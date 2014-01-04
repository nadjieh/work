{
//=========Macro generated from canvas: c/c
//=========  (Sat Oct 19 16:51:19 2013) by ROOT version5.32/00
   TCanvas *c = new TCanvas("c", "c",67,53,604,630);
   c->Range(-1.275862,-0.009302326,1.022989,0.08372093);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.01);
   c->SetTopMargin(0.04);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
TH1D *hbup = new TH1D("hbup","2J0T Data (b-syst.)",20,-1,1);
   hbup->SetBinContent(1,0.03015453);//03265453
   hbup->SetBinContent(2,0.02888165);//03088165
   hbup->SetBinContent(3,0.03601449);//03351449
   hbup->SetBinContent(4,0.0366884);
   hbup->SetBinContent(5,0.03813338);
   hbup->SetBinContent(6,0.04011671);
   hbup->SetBinContent(7,0.04208729);
   hbup->SetBinContent(8,0.04345786);
   hbup->SetBinContent(9,0.04476695);
   hbup->SetBinContent(10,0.04623763);
   hbup->SetBinContent(11,0.04614682);
   hbup->SetBinContent(12,0.04932559);
   hbup->SetBinContent(13,0.05043851);
   hbup->SetBinContent(14,0.05206876);
   hbup->SetBinContent(15,0.05593024);
   hbup->SetBinContent(16,0.05872938);
   hbup->SetBinContent(17,0.06235642);
   hbup->SetBinContent(18,0.06748988);
   hbup->SetBinContent(19,0.0784269);
   hbup->SetBinContent(20,0.0905486);
   hbup->SetBinError(1,0.002902265);
   hbup->SetBinError(2,0.002725561);
   hbup->SetBinError(3,0.002664748);
   hbup->SetBinError(4,0.002959532);
   hbup->SetBinError(5,0.002758182);
   hbup->SetBinError(6,0.002918991);
   hbup->SetBinError(7,0.002921538);
   hbup->SetBinError(8,0.003030115);
   hbup->SetBinError(9,0.002854235);
   hbup->SetBinError(10,0.002973304);
   hbup->SetBinError(11,0.002909727);
   hbup->SetBinError(12,0.003367278);
   hbup->SetBinError(13,0.003006952);
   hbup->SetBinError(14,0.003414572);
   hbup->SetBinError(15,0.003257468);
   hbup->SetBinError(16,0.003384534);
   hbup->SetBinError(17,0.003620702);
   hbup->SetBinError(18,0.00372707);
   hbup->SetBinError(19,0.004262749);
   hbup->SetBinError(20,0.004783289);
   hbup->SetEntries(4691.147);
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
   hbup->GetXaxis()->SetLabelFont(42);
   hbup->GetXaxis()->SetLabelSize(0.035);
   hbup->GetXaxis()->SetTitleSize(0.035);
   hbup->GetXaxis()->SetTitleFont(42);
   hbup->GetYaxis()->SetLabelFont(42);
   hbup->GetYaxis()->SetLabelSize(0.035);
   hbup->GetYaxis()->SetTitleSize(0.035);
   hbup->GetYaxis()->SetTitleFont(42);
   hbup->GetZaxis()->SetLabelFont(42);
   hbup->GetZaxis()->SetLabelSize(0.035);
   hbup->GetZaxis()->SetTitleSize(0.035);
   hbup->GetZaxis()->SetTitleFont(42);
   hbup->Draw("E4");
   
   TH1D *hbdown = new TH1D("hbdown","2J0T Data (b-syst.)",20,-1,1);
   hbdown->SetBinContent(1,0.03497235);//03247235
   hbdown->SetBinContent(2,0.03374599);//03174599
   hbdown->SetBinContent(3,0.03215928);//03465928
   hbdown->SetBinContent(4,0.03727179);
   hbdown->SetBinContent(5,0.03941208);
   hbdown->SetBinContent(6,0.04079975);
   hbdown->SetBinContent(7,0.04233278);
   hbdown->SetBinContent(8,0.04416543);
   hbdown->SetBinContent(9,0.04516377);
   hbdown->SetBinContent(10,0.0461927);
   hbdown->SetBinContent(11,0.0484542);
   hbdown->SetBinContent(12,0.04825852);
   hbdown->SetBinContent(13,0.05078945);
   hbdown->SetBinContent(14,0.05337328);
   hbdown->SetBinContent(15,0.05461205);
   hbdown->SetBinContent(16,0.05795639);
   hbdown->SetBinContent(17,0.06279826);
   hbdown->SetBinContent(18,0.06789508);
   hbdown->SetBinContent(19,0.07444005);
   hbdown->SetBinContent(20,0.08720682);
   hbdown->SetBinError(1,0.002820194);
   hbdown->SetBinError(2,0.002791424);
   hbdown->SetBinError(3,0.002754648);
   hbdown->SetBinError(4,0.003107035);
   hbdown->SetBinError(5,0.002943062);
   hbdown->SetBinError(6,0.002992314);
   hbdown->SetBinError(7,0.003021444);
   hbdown->SetBinError(8,0.003038728);
   hbdown->SetBinError(9,0.002924525);
   hbdown->SetBinError(10,0.003094048);
   hbdown->SetBinError(11,0.003119932);
   hbdown->SetBinError(12,0.003175176);
   hbdown->SetBinError(13,0.003127136);
   hbdown->SetBinError(14,0.003524031);
   hbdown->SetBinError(15,0.003317294);
   hbdown->SetBinError(16,0.003458426);
   hbdown->SetBinError(17,0.003830485);
   hbdown->SetBinError(18,0.003874537);
   hbdown->SetBinError(19,0.004133097);
   hbdown->SetBinError(20,0.004827792);
   hbdown->SetEntries(4501.561);
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
   hbdown->Draw("E4sames");
   
   TH1D *hcup = new TH1D("hcup","2J0T Data (c-syst.)",20,-1,1);
   hcup->SetBinContent(1,0.03343757);
   hcup->SetBinContent(2,0.02981116);
   hcup->SetBinContent(3,0.03275822);
   hcup->SetBinContent(4,0.03701123);
   hcup->SetBinContent(5,0.0381913);
   hcup->SetBinContent(6,0.04007378);
   hcup->SetBinContent(7,0.04291083);
   hcup->SetBinContent(8,0.04315597);
   hcup->SetBinContent(9,0.04405151);
   hcup->SetBinContent(10,0.04725915);
   hcup->SetBinContent(11,0.04424608);
   hcup->SetBinContent(12,0.05069724);
   hcup->SetBinContent(13,0.04986506);
   hcup->SetBinContent(14,0.05058212);
   hcup->SetBinContent(15,0.05692577);
   hcup->SetBinContent(16,0.05839135);
   hcup->SetBinContent(17,0.06193674);
   hcup->SetBinContent(18,0.06589122);
   hcup->SetBinContent(19,0.07987573);
   hcup->SetBinContent(20,0.09292796);
   hcup->SetBinError(1,0.002958907);
   hcup->SetBinError(2,0.002658114);
   hcup->SetBinError(3,0.002609016);
   hcup->SetBinError(4,0.002976402);
   hcup->SetBinError(5,0.002725856);
   hcup->SetBinError(6,0.002926038);
   hcup->SetBinError(7,0.002926373);
   hcup->SetBinError(8,0.003025063);
   hcup->SetBinError(9,0.002799134);
   hcup->SetBinError(10,0.002993813);
   hcup->SetBinError(11,0.002802611);
   hcup->SetBinError(12,0.003451506);
   hcup->SetBinError(13,0.002941986);
   hcup->SetBinError(14,0.003321727);
   hcup->SetBinError(15,0.003239248);
   hcup->SetBinError(16,0.003312661);
   hcup->SetBinError(17,0.003567169);
   hcup->SetBinError(18,0.003611934);
   hcup->SetBinError(19,0.004268281);
   hcup->SetBinError(20,0.004772075);
   hcup->SetEntries(4769.26);
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
   hcup->Draw("E4same");
   
   TH1D *hcdown = new TH1D("hcdown","2J0T Data (c-syst.)",20,-1,1);
   hcdown->SetBinContent(1,0.03391192);
   hcdown->SetBinContent(2,0.0297568);
   hcdown->SetBinContent(3,0.03323558);
   hcdown->SetBinContent(4,0.03784261);
   hcdown->SetBinContent(5,0.03947408);
   hcdown->SetBinContent(6,0.04069766);
   hcdown->SetBinContent(7,0.04383173);
   hcdown->SetBinContent(8,0.04358848);
   hcdown->SetBinContent(9,0.04384056);
   hcdown->SetBinContent(10,0.04806404);
   hcdown->SetBinContent(11,0.04489563);
   hcdown->SetBinContent(12,0.05080593);
   hcdown->SetBinContent(13,0.04972773);
   hcdown->SetBinContent(14,0.0506072);
   hcdown->SetBinContent(15,0.05647965);
   hcdown->SetBinContent(16,0.05736427);
   hcdown->SetBinContent(17,0.06201486);
   hcdown->SetBinContent(18,0.06495494);
   hcdown->SetBinContent(19,0.07722927);
   hcdown->SetBinContent(20,0.09167708);
   hcdown->SetBinError(1,0.002991081);
   hcdown->SetBinError(2,0.002662735);
   hcdown->SetBinError(3,0.002647275);
   hcdown->SetBinError(4,0.003142432);
   hcdown->SetBinError(5,0.002858124);
   hcdown->SetBinError(6,0.002999786);
   hcdown->SetBinError(7,0.003027711);
   hcdown->SetBinError(8,0.003062683);
   hcdown->SetBinError(9,0.002796969);
   hcdown->SetBinError(10,0.003123133);
   hcdown->SetBinError(11,0.002871239);
   hcdown->SetBinError(12,0.003436565);
   hcdown->SetBinError(13,0.002972348);
   hcdown->SetBinError(14,0.003323961);
   hcdown->SetBinError(15,0.003245628);
   hcdown->SetBinError(16,0.003275955);
   hcdown->SetBinError(17,0.003682237);
   hcdown->SetBinError(18,0.00360167);
   hcdown->SetBinError(19,0.004148744);
   hcdown->SetBinError(20,0.004755013);
   hcdown->SetEntries(4677.969);
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
   hcdown->Draw("E4sames");
   
   TH1D *data = new TH1D("data","2J0T Data (N)",20,-1,1);
   data->SetBinContent(1,0.03256014);
   data->SetBinContent(2,0.0313295);
   data->SetBinContent(3,0.03410764);
   data->SetBinContent(4,0.03699067);
   data->SetBinContent(5,0.03879591);
   data->SetBinContent(6,0.04047061);
   data->SetBinContent(7,0.04221449);
   data->SetBinContent(8,0.04382447);
   data->SetBinContent(9,0.04497255);
   data->SetBinContent(10,0.04621435);
   data->SetBinContent(11,0.04734235);
   data->SetBinContent(12,0.0487727);
   data->SetBinContent(13,0.05062034);
   data->SetBinContent(14,0.05274468);
   data->SetBinContent(15,0.05524724);
   data->SetBinContent(16,0.05832887);
   data->SetBinContent(17,0.06258535);
   data->SetBinContent(18,0.06769983);
   data->SetBinContent(19,0.07636118);
   data->SetBinContent(20,0.08881711);
   data->SetEntries(896280);
   data->SetDirectory(0);
   data->SetStats(0);
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
   TH1D *mc = new TH1D("mc","2J1T MC",20,-1,1);
   mc->SetBinContent(1,0.03216555);
   mc->SetBinContent(2,0.02729709);
   mc->SetBinContent(3,0.0332566);
   mc->SetBinContent(4,0.03898219);
   mc->SetBinContent(5,0.03826905);
   mc->SetBinContent(6,0.03954366);
   mc->SetBinContent(7,0.04232971);
   mc->SetBinContent(8,0.04722224);
   mc->SetBinContent(9,0.04697035);
   mc->SetBinContent(10,0.04979412);
   mc->SetBinContent(11,0.05178504);
   mc->SetBinContent(12,0.05154034);
   mc->SetBinContent(13,0.05453236);
   mc->SetBinContent(14,0.05525529);
   mc->SetBinContent(15,0.0599811);
   mc->SetBinContent(16,0.06113041);
   mc->SetBinContent(17,0.06363179);
   mc->SetBinContent(18,0.06716162);
   mc->SetBinContent(19,0.06591162);
   mc->SetBinContent(20,0.07323987);
   mc->SetBinError(1,0.001867703);
   mc->SetBinError(2,0.001672653);
   mc->SetBinError(3,0.001780866);
   mc->SetBinError(4,0.002176426);
   mc->SetBinError(5,0.001921229);
   mc->SetBinError(6,0.001969017);
   mc->SetBinError(7,0.002023652);
   mc->SetBinError(8,0.002213992);
   mc->SetBinError(9,0.002157342);
   mc->SetBinError(10,0.002288608);
   mc->SetBinError(11,0.002229226);
   mc->SetBinError(12,0.002352795);
   mc->SetBinError(13,0.002283307);
   mc->SetBinError(14,0.002485576);
   mc->SetBinError(15,0.002488858);
   mc->SetBinError(16,0.002456402);
   mc->SetBinError(17,0.002570539);
   mc->SetBinError(18,0.002619365);
   mc->SetBinError(19,0.002482548);
   mc->SetBinError(20,0.002716695);
   mc->SetEntries(14217);
   mc->SetDirectory(0);
   mc->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   mc->SetLineColor(ci);
   mc->SetLineStyle(2);
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
