{
//=========Macro generated from canvas: Canvas_1/Canvas_1
//=========  (Tue Oct  1 18:27:20 2013) by ROOT version5.32/00
   TCanvas *Canvas_1 = new TCanvas("Canvas_1", "c",368,56,600,630);
   Canvas_1->SetHighLightColor(2);
   Canvas_1->Range(-1.551724,-872.0931,3.045977,7848.837);
   Canvas_1->SetFillColor(0);
   Canvas_1->SetBorderMode(0);
   Canvas_1->SetBorderSize(2);
   Canvas_1->SetLeftMargin(0.12);
   Canvas_1->SetRightMargin(0.01);
   Canvas_1->SetTopMargin(0.04);
   Canvas_1->SetFrameBorderMode(0);
   Canvas_1->SetFrameBorderMode(0);
   
   TH1D *e_Chi2Syst_correlated_res3D = new TH1D("e_Chi2Syst_correlated_res3D","Signal after fit",10,-1,1);
   e_Chi2Syst_correlated_res3D->SetBinContent(1,2966.495);
   e_Chi2Syst_correlated_res3D->SetBinContent(2,2912.324);
   e_Chi2Syst_correlated_res3D->SetBinContent(3,3237.767);
   e_Chi2Syst_correlated_res3D->SetBinContent(4,3286.161);
   e_Chi2Syst_correlated_res3D->SetBinContent(5,3138.721);
   e_Chi2Syst_correlated_res3D->SetBinContent(6,2893.273);
   e_Chi2Syst_correlated_res3D->SetBinContent(7,2605.09);
   e_Chi2Syst_correlated_res3D->SetBinContent(8,2228.401);
   e_Chi2Syst_correlated_res3D->SetBinContent(9,1876.453);
   e_Chi2Syst_correlated_res3D->SetBinContent(10,1584.398);
   e_Chi2Syst_correlated_res3D->SetMinimum(0);
   e_Chi2Syst_correlated_res3D->SetMaximum(7000);
   e_Chi2Syst_correlated_res3D->SetEntries(20);
   
   TPaveStats *ptstats = new TPaveStats(0.7873563,0.7637131,0.9885057,0.9240506,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("e_Chi2Syst_correlated_res3D");
   text->SetTextSize(0.03687764);
   text = ptstats->AddText("Entries = 20     ");
   text = ptstats->AddText("Mean  = -0.1011");
   text = ptstats->AddText("RMS   = 0.5373");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   e_Chi2Syst_correlated_res3D->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(e_Chi2Syst_correlated_res3D);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#99cc99");
   e_Chi2Syst_correlated_res3D->SetLineColor(ci);
   e_Chi2Syst_correlated_res3D->SetLineWidth(2);
   e_Chi2Syst_correlated_res3D->GetXaxis()->SetLabelFont(42);
   e_Chi2Syst_correlated_res3D->GetXaxis()->SetLabelSize(0.035);
   e_Chi2Syst_correlated_res3D->GetXaxis()->SetTitleSize(0.035);
   e_Chi2Syst_correlated_res3D->GetXaxis()->SetTitle("cos(#theta_{l}*)");
   e_Chi2Syst_correlated_res3D->GetXaxis()->SetTitleFont(42);
   e_Chi2Syst_correlated_res3D->GetYaxis()->SetLabelFont(42);
   e_Chi2Syst_correlated_res3D->GetYaxis()->SetLabelSize(0.035);
   e_Chi2Syst_correlated_res3D->GetYaxis()->SetTitleSize(0.035);
   e_Chi2Syst_correlated_res3D->GetYaxis()->SetTitleFont(42);
   e_Chi2Syst_correlated_res3D->GetZaxis()->SetLabelFont(42);
   e_Chi2Syst_correlated_res3D->GetZaxis()->SetLabelSize(0.035);
   e_Chi2Syst_correlated_res3D->GetZaxis()->SetTitleSize(0.035);
   e_Chi2Syst_correlated_res3D->GetZaxis()->SetTitleFont(42);
   e_Chi2Syst_correlated_res3D->Draw("");
   
   TH1D *e_comb2_Components2_subtracted = new TH1D("e_comb2_Components2_subtracted","data - bkg (after fit)",10,-1,1);
   e_comb2_Components2_subtracted->SetBinContent(1,3189.699);
   e_comb2_Components2_subtracted->SetBinContent(2,2860.091);
   e_comb2_Components2_subtracted->SetBinContent(3,3218.807);
   e_comb2_Components2_subtracted->SetBinContent(4,3406.704);
   e_comb2_Components2_subtracted->SetBinContent(5,3241.028);
   e_comb2_Components2_subtracted->SetBinContent(6,2942.23);
   e_comb2_Components2_subtracted->SetBinContent(7,2740.446);
   e_comb2_Components2_subtracted->SetBinContent(8,2174.145);
   e_comb2_Components2_subtracted->SetBinContent(9,1934.946);
   e_comb2_Components2_subtracted->SetBinContent(10,1278.928);
   e_comb2_Components2_subtracted->SetBinError(1,69.55573);
   e_comb2_Components2_subtracted->SetBinError(2,68.55655);
   e_comb2_Components2_subtracted->SetBinError(3,72.82857);
   e_comb2_Components2_subtracted->SetBinError(4,74.77968);
   e_comb2_Components2_subtracted->SetBinError(5,74.68601);
   e_comb2_Components2_subtracted->SetBinError(6,74.1485);
   e_comb2_Components2_subtracted->SetBinError(7,73.82412);
   e_comb2_Components2_subtracted->SetBinError(8,72.80797);
   e_comb2_Components2_subtracted->SetBinError(9,75.34587);
   e_comb2_Components2_subtracted->SetBinError(10,81.265);
   e_comb2_Components2_subtracted->SetEntries(26987);
   
   ptstats = new TPaveStats(0.7873563,0.7616034,0.9885057,0.9219409,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("e_comb2_Components2_subtracted");
   text->SetTextSize(0.03687764);
   text = ptstats->AddText("Entries = 26987  ");
   text = ptstats->AddText("Mean  = -0.1156");
   text = ptstats->AddText("RMS   = 0.5297");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   e_comb2_Components2_subtracted->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(e_comb2_Components2_subtracted);

   ci = TColor::GetColor("#000099");
   e_comb2_Components2_subtracted->SetLineColor(ci);
   e_comb2_Components2_subtracted->SetLineWidth(2);
   e_comb2_Components2_subtracted->SetMarkerStyle(20);
   e_comb2_Components2_subtracted->GetXaxis()->SetTitle("cos(#theta*)");
   e_comb2_Components2_subtracted->GetXaxis()->SetLabelFont(42);
   e_comb2_Components2_subtracted->GetXaxis()->SetLabelSize(0.035);
   e_comb2_Components2_subtracted->GetXaxis()->SetTitleSize(0.035);
   e_comb2_Components2_subtracted->GetXaxis()->SetTitleFont(42);
   e_comb2_Components2_subtracted->GetYaxis()->SetLabelFont(42);
   e_comb2_Components2_subtracted->GetYaxis()->SetLabelSize(0.035);
   e_comb2_Components2_subtracted->GetYaxis()->SetTitleSize(0.035);
   e_comb2_Components2_subtracted->GetYaxis()->SetTitleFont(42);
   e_comb2_Components2_subtracted->GetZaxis()->SetLabelFont(42);
   e_comb2_Components2_subtracted->GetZaxis()->SetLabelSize(0.035);
   e_comb2_Components2_subtracted->GetZaxis()->SetTitleSize(0.035);
   e_comb2_Components2_subtracted->GetZaxis()->SetTitleFont(42);
   e_comb2_Components2_subtracted->Draw("sames");
   
   TPaveText *pt = new TPaveText(0.4792241,0.94,0.7291092,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("Signal after fit");
   pt->Draw();
   
   TH1D *e_comb2_Components2_unfolded = new TH1D("e_comb2_Components2_unfolded","Signal unfolded",10,-1,1);
   e_comb2_Components2_unfolded->SetBinContent(1,743.9171);
   e_comb2_Components2_unfolded->SetBinContent(2,1946.101);
   e_comb2_Components2_unfolded->SetBinContent(3,2896.02);
   e_comb2_Components2_unfolded->SetBinContent(4,3595.541);
   e_comb2_Components2_unfolded->SetBinContent(5,4001.547);
   e_comb2_Components2_unfolded->SetBinContent(6,4063.095);
   e_comb2_Components2_unfolded->SetBinContent(7,3786.559);
   e_comb2_Components2_unfolded->SetBinContent(8,3084.798);
   e_comb2_Components2_unfolded->SetBinContent(9,2097.659);
   e_comb2_Components2_unfolded->SetBinContent(10,771.7857);
   e_comb2_Components2_unfolded->SetBinError(1,23.44233);
   e_comb2_Components2_unfolded->SetBinError(2,38.54036);
   e_comb2_Components2_unfolded->SetBinError(3,46.94512);
   e_comb2_Components2_unfolded->SetBinError(4,51.83415);
   e_comb2_Components2_unfolded->SetBinError(5,54.10313);
   e_comb2_Components2_unfolded->SetBinError(6,54.06832);
   e_comb2_Components2_unfolded->SetBinError(7,51.63751);
   e_comb2_Components2_unfolded->SetBinError(8,46.17797);
   e_comb2_Components2_unfolded->SetBinError(9,37.64125);
   e_comb2_Components2_unfolded->SetBinError(10,22.64373);
   e_comb2_Components2_unfolded->SetEntries(26987);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("e_comb2_Components2_unfolded");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 26987  ");
   text = ptstats->AddText("Mean  = 0.01071");
   text = ptstats->AddText("RMS   = 0.4492");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   e_comb2_Components2_unfolded->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(e_comb2_Components2_unfolded);

   ci = TColor::GetColor("#6666cc");
   e_comb2_Components2_unfolded->SetLineColor(ci);
   e_comb2_Components2_unfolded->SetLineWidth(2);
   e_comb2_Components2_unfolded->GetXaxis()->SetLabelFont(42);
   e_comb2_Components2_unfolded->GetXaxis()->SetLabelSize(0.035);
   e_comb2_Components2_unfolded->GetXaxis()->SetTitleSize(0.035);
   e_comb2_Components2_unfolded->GetXaxis()->SetTitleFont(42);
   e_comb2_Components2_unfolded->GetYaxis()->SetLabelFont(42);
   e_comb2_Components2_unfolded->GetYaxis()->SetLabelSize(0.035);
   e_comb2_Components2_unfolded->GetYaxis()->SetTitleSize(0.035);
   e_comb2_Components2_unfolded->GetYaxis()->SetTitleFont(42);
   e_comb2_Components2_unfolded->GetZaxis()->SetLabelFont(42);
   e_comb2_Components2_unfolded->GetZaxis()->SetLabelSize(0.035);
   e_comb2_Components2_unfolded->GetZaxis()->SetTitleSize(0.035);
   e_comb2_Components2_unfolded->GetZaxis()->SetTitleFont(42);
   e_comb2_Components2_unfolded->Draw("sames");
   
   TH1D *genSignal = new TH1D("genSignal","Signal gen-info",10,-1,1);
   genSignal->SetBinContent(1,722.3267);
   genSignal->SetBinContent(2,1919.88);
   genSignal->SetBinContent(3,2866.03);
   genSignal->SetBinContent(4,3566.528);
   genSignal->SetBinContent(5,3993.482);
   genSignal->SetBinContent(6,4099.106);
   genSignal->SetBinContent(7,3883.739);
   genSignal->SetBinContent(8,3228.503);
   genSignal->SetBinContent(9,2246.331);
   genSignal->SetBinContent(10,849.8556);
   genSignal->SetBinError(1,22.63546);
   genSignal->SetBinError(2,37.85418);
   genSignal->SetBinError(3,46.30519);
   genSignal->SetBinError(4,51.29568);
   genSignal->SetBinError(5,53.83543);
   genSignal->SetBinError(6,54.30954);
   genSignal->SetBinError(7,52.61713);
   genSignal->SetBinError(8,47.85146);
   genSignal->SetBinError(9,39.74809);
   genSignal->SetBinError(10,24.44644);
   genSignal->SetEntries(294862);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("genSignal");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 294862 ");
   text = ptstats->AddText("Mean  = 0.02312");
   text = ptstats->AddText("RMS   = 0.4477");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   genSignal->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(genSignal);

   ci = TColor::GetColor("#ffcc66");
   genSignal->SetLineColor(ci);

   ci = TColor::GetColor("#ffcc66");
   genSignal->SetMarkerColor(ci);
   genSignal->SetMarkerStyle(22);
   genSignal->GetXaxis()->SetTitle(" cos(#theta)_{gen}");
   genSignal->GetXaxis()->SetLabelFont(42);
   genSignal->GetXaxis()->SetLabelSize(0.035);
   genSignal->GetXaxis()->SetTitleSize(0.035);
   genSignal->GetXaxis()->SetTitleFont(42);
   genSignal->GetYaxis()->SetLabelFont(42);
   genSignal->GetYaxis()->SetLabelSize(0.035);
   genSignal->GetYaxis()->SetTitleSize(0.035);
   genSignal->GetYaxis()->SetTitleFont(42);
   genSignal->GetZaxis()->SetLabelFont(42);
   genSignal->GetZaxis()->SetLabelSize(0.035);
   genSignal->GetZaxis()->SetTitleSize(0.035);
   genSignal->GetZaxis()->SetTitleFont(42);
   genSignal->Draw("sames");
   
   TH1D *component_0_meas = new TH1D("component_0_meas","F_{0} = 1, F_{L} = F_{R} = 0",10,-1,1);
   component_0_meas->SetBinContent(1,245.9784);
   component_0_meas->SetBinContent(2,1699.884);
   component_0_meas->SetBinContent(3,3636.344);
   component_0_meas->SetBinContent(4,5320.822);
   component_0_meas->SetBinContent(5,6221.551);
   component_0_meas->SetBinContent(6,6069.423);
   component_0_meas->SetBinContent(7,4972.761);
   component_0_meas->SetBinContent(8,3181.068);
   component_0_meas->SetBinContent(9,1396.863);
   component_0_meas->SetBinContent(10,181.347);
   component_0_meas->SetBinError(1,7.751276);
   component_0_meas->SetBinError(2,33.6643);
   component_0_meas->SetBinError(3,58.94593);
   component_0_meas->SetBinError(4,76.70619);
   component_0_meas->SetBinError(5,84.11881);
   component_0_meas->SetBinError(6,80.76688);
   component_0_meas->SetBinError(7,67.81381);
   component_0_meas->SetBinError(8,47.61909);
   component_0_meas->SetBinError(9,25.06588);
   component_0_meas->SetBinError(10,5.320612);
   component_0_meas->SetEntries(34227.59);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("component_0_meas");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 34228  ");
   text = ptstats->AddText("Mean  = -0.01876");
   text = ptstats->AddText("RMS   =  0.374");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   component_0_meas->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(component_0_meas);
   component_0_meas->SetLineColor(2);
   component_0_meas->SetLineStyle(2);
   component_0_meas->SetLineWidth(2);
   component_0_meas->GetXaxis()->SetLabelFont(42);
   component_0_meas->GetXaxis()->SetLabelSize(0.035);
   component_0_meas->GetXaxis()->SetTitleSize(0.035);
   component_0_meas->GetXaxis()->SetTitleFont(42);
   component_0_meas->GetYaxis()->SetLabelFont(42);
   component_0_meas->GetYaxis()->SetLabelSize(0.035);
   component_0_meas->GetYaxis()->SetTitleSize(0.035);
   component_0_meas->GetYaxis()->SetTitleFont(42);
   component_0_meas->GetZaxis()->SetLabelFont(42);
   component_0_meas->GetZaxis()->SetLabelSize(0.035);
   component_0_meas->GetZaxis()->SetTitleSize(0.035);
   component_0_meas->GetZaxis()->SetTitleFont(42);
   component_0_meas->Draw("EHISTSAME");
   
   TH1D *component_1_meas = new TH1D("component_1_meas","F_{L} = 1, F_{0} = F_{R} = 0",10,-1,1);
   component_1_meas->SetBinContent(1,2336.795);
   component_1_meas->SetBinContent(2,4816.337);
   component_1_meas->SetBinContent(3,5454.516);
   component_1_meas->SetBinContent(4,4940.763);
   component_1_meas->SetBinContent(5,3802.059);
   component_1_meas->SetBinContent(6,2482.946);
   component_1_meas->SetBinContent(7,1338.82);
   component_1_meas->SetBinContent(8,530.178);
   component_1_meas->SetBinContent(9,123.2526);
   component_1_meas->SetBinContent(10,4.772289);
   component_1_meas->SetBinError(1,73.63713);
   component_1_meas->SetBinError(2,95.38217);
   component_1_meas->SetBinError(3,88.41889);
   component_1_meas->SetBinError(4,71.22718);
   component_1_meas->SetBinError(5,51.40594);
   component_1_meas->SetBinError(6,33.041);
   component_1_meas->SetBinError(7,18.25756);
   component_1_meas->SetBinError(8,7.936515);
   component_1_meas->SetBinError(9,2.211695);
   component_1_meas->SetBinError(10,0.1400161);
   component_1_meas->SetEntries(21149.82);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("component_1_meas");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 21150  ");
   text = ptstats->AddText("Mean  = -0.3507");
   text = ptstats->AddText("RMS   = 0.3555");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   component_1_meas->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(component_1_meas);
   component_1_meas->SetLineColor(2);
   component_1_meas->SetLineStyle(2);
   component_1_meas->SetLineWidth(2);
   component_1_meas->GetXaxis()->SetLabelFont(42);
   component_1_meas->GetXaxis()->SetLabelSize(0.035);
   component_1_meas->GetXaxis()->SetTitleSize(0.035);
   component_1_meas->GetXaxis()->SetTitleFont(42);
   component_1_meas->GetYaxis()->SetLabelFont(42);
   component_1_meas->GetYaxis()->SetLabelSize(0.035);
   component_1_meas->GetYaxis()->SetTitleSize(0.035);
   component_1_meas->GetYaxis()->SetTitleFont(42);
   component_1_meas->GetZaxis()->SetLabelFont(42);
   component_1_meas->GetZaxis()->SetLabelSize(0.035);
   component_1_meas->GetZaxis()->SetTitleSize(0.035);
   component_1_meas->GetZaxis()->SetTitleFont(42);
   component_1_meas->Draw("EHISTSAME");
   
   TH1D *component_2_meas = new TH1D("component_2_meas","F_{R} = 1, F_{L} = F_{0} = 0",10,-1,1);
   component_2_meas->SetBinContent(1,6.473115);
   component_2_meas->SetBinContent(2,149.9897);
   component_2_meas->SetBinContent(3,606.0574);
   component_2_meas->SetBinContent(4,1432.529);
   component_2_meas->SetBinContent(5,2545.18);
   component_2_meas->SetBinContent(6,3709.092);
   component_2_meas->SetBinContent(7,4617.564);
   component_2_meas->SetBinContent(8,4771.602);
   component_2_meas->SetBinContent(9,3957.779);
   component_2_meas->SetBinContent(10,1722.796);
   component_2_meas->SetBinError(1,0.203981);
   component_2_meas->SetBinError(2,2.970379);
   component_2_meas->SetBinError(3,9.824321);
   component_2_meas->SetBinError(4,20.65167);
   component_2_meas->SetBinError(5,34.41224);
   component_2_meas->SetBinError(6,49.35754);
   component_2_meas->SetBinError(7,62.96997);
   component_2_meas->SetBinError(8,71.42863);
   component_2_meas->SetBinError(9,71.01999);
   component_2_meas->SetBinError(10,50.54581);
   component_2_meas->SetEntries(26570.29);
   
   ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("component_2_meas");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 26570  ");
   text = ptstats->AddText("Mean  = 0.3131");
   text = ptstats->AddText("RMS   = 0.3606");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   component_2_meas->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(component_2_meas);
   component_2_meas->SetLineColor(2);
   component_2_meas->SetLineStyle(2);
   component_2_meas->SetLineWidth(2);
   component_2_meas->GetXaxis()->SetLabelFont(42);
   component_2_meas->GetXaxis()->SetLabelSize(0.035);
   component_2_meas->GetXaxis()->SetTitleSize(0.035);
   component_2_meas->GetXaxis()->SetTitleFont(42);
   component_2_meas->GetYaxis()->SetLabelFont(42);
   component_2_meas->GetYaxis()->SetLabelSize(0.035);
   component_2_meas->GetYaxis()->SetTitleSize(0.035);
   component_2_meas->GetYaxis()->SetTitleFont(42);
   component_2_meas->GetZaxis()->SetLabelFont(42);
   component_2_meas->GetZaxis()->SetLabelSize(0.035);
   component_2_meas->GetZaxis()->SetTitleSize(0.035);
   component_2_meas->GetZaxis()->SetTitleFont(42);
   component_2_meas->Draw("EHISTSAME");
   Canvas_1->Modified();
   Canvas_1->cd();
   Canvas_1->SetSelected(Canvas_1);
}
