{
//=========Macro generated from canvas: allW_FwD_Eta/c1
//=========  (Sun Jul  7 16:20:49 2013) by ROOT version5.32/00
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
   
   THStack *allW_FwD_Eta = new THStack();
   allW_FwD_Eta->SetName("allW_FwD_Eta");
//   allW_FwD_Eta->SetTitle("allW_FwD_Eta");
   
   TH1F *allW_FwD_Eta_stack_4 = new TH1F("allW_FwD_Eta_stack_4","allW_FwD_Eta",20,-5,5);
   allW_FwD_Eta_stack_4->SetMinimum(-7.403641);
   allW_FwD_Eta_stack_4->SetMaximum(10034.27);
   allW_FwD_Eta_stack_4->SetDirectory(0);
   allW_FwD_Eta_stack_4->SetStats(0);
   allW_FwD_Eta_stack_4->GetXaxis()->SetTitle("\eta^{fwD}_{jet}");
   allW_FwD_Eta_stack_4->GetYaxis()->SetTitle("Forward jets @ 19.4 fb^{-1}");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   allW_FwD_Eta_stack_4->SetLineColor(ci);
   allW_FwD_Eta_stack_4->GetXaxis()->SetLabelFont(42);
   allW_FwD_Eta_stack_4->GetXaxis()->SetLabelSize(0.035);
   allW_FwD_Eta_stack_4->GetXaxis()->SetTitleSize(0.035);
   allW_FwD_Eta_stack_4->GetXaxis()->SetTitleFont(42);
   allW_FwD_Eta_stack_4->GetYaxis()->SetLabelFont(42);
   allW_FwD_Eta_stack_4->GetYaxis()->SetLabelSize(0.035);
   allW_FwD_Eta_stack_4->GetYaxis()->SetTitleSize(0.035);
   allW_FwD_Eta_stack_4->GetYaxis()->SetTitleFont(42);
   allW_FwD_Eta_stack_4->GetZaxis()->SetLabelFont(42);
   allW_FwD_Eta_stack_4->GetZaxis()->SetLabelSize(0.035);
   allW_FwD_Eta_stack_4->GetZaxis()->SetTitleSize(0.035);
   allW_FwD_Eta_stack_4->GetZaxis()->SetTitleFont(42);
   allW_FwD_Eta->SetHistogram(allW_FwD_Eta_stack_4);
   
   
   TH1D *allW_FwD_Eta__43 = new TH1D("allW_FwD_Eta__43","QCD",20,-5,5);
   allW_FwD_Eta__43->SetBinContent(3,1.440302);
   allW_FwD_Eta__43->SetBinContent(4,2.340491);
   allW_FwD_Eta__43->SetBinContent(5,3.690774);
   allW_FwD_Eta__43->SetBinContent(6,40.86857);
   allW_FwD_Eta__43->SetBinContent(7,145.9206);
   allW_FwD_Eta__43->SetBinContent(8,148.5312);
   allW_FwD_Eta__43->SetBinContent(9,111.3534);
   allW_FwD_Eta__43->SetBinContent(10,36.54767);
   allW_FwD_Eta__43->SetBinContent(11,30.9665);
   allW_FwD_Eta__43->SetBinContent(12,108.0227);
   allW_FwD_Eta__43->SetBinContent(13,148.5312);
   allW_FwD_Eta__43->SetBinContent(14,154.1123);
   allW_FwD_Eta__43->SetBinContent(15,41.58873);
   allW_FwD_Eta__43->SetBinContent(16,3.960831);
   allW_FwD_Eta__43->SetBinContent(17,2.250472);
   allW_FwD_Eta__43->SetBinContent(18,1.530321);
   allW_FwD_Eta__43->SetBinContent(19,0.1800378);
   allW_FwD_Eta__43->SetEntries(10907);
   allW_FwD_Eta__43->SetDirectory(0);
   allW_FwD_Eta__43->SetStats(0);

   ci = TColor::GetColor("#663300");
   allW_FwD_Eta__43->SetFillColor(kGray);

   ci = TColor::GetColor("#663300");
   allW_FwD_Eta__43->SetLineColor(kGray);
   allW_FwD_Eta__43->GetXaxis()->SetTitle("#eta");
   allW_FwD_Eta__43->GetXaxis()->SetLabelFont(42);
   allW_FwD_Eta__43->GetXaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__43->GetXaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__43->GetXaxis()->SetTitleFont(42);
   allW_FwD_Eta__43->GetYaxis()->SetLabelFont(42);
   allW_FwD_Eta__43->GetYaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__43->GetYaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__43->GetYaxis()->SetTitleFont(42);
   allW_FwD_Eta__43->GetZaxis()->SetLabelFont(42);
   allW_FwD_Eta__43->GetZaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__43->GetZaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__43->GetZaxis()->SetTitleFont(42);
   allW_FwD_Eta->Add(allW_FwD_Eta__43,"");
   
   TH1D *allW_FwD_Eta__44 = new TH1D("allW_FwD_Eta__44","Z/gamma^{*}+jets",20,-5,5);
   allW_FwD_Eta__44->SetBinContent(3,5.168378);
   allW_FwD_Eta__44->SetBinContent(4,45.82411);
   allW_FwD_Eta__44->SetBinContent(5,89.9244);
   allW_FwD_Eta__44->SetBinContent(6,162.3736);
   allW_FwD_Eta__44->SetBinContent(7,263.7388);
   allW_FwD_Eta__44->SetBinContent(8,288.181);
   allW_FwD_Eta__44->SetBinContent(9,288.4204);
   allW_FwD_Eta__44->SetBinContent(10,66.5647);
   allW_FwD_Eta__44->SetBinContent(11,92.32141);
   allW_FwD_Eta__44->SetBinContent(12,186.2681);
   allW_FwD_Eta__44->SetBinContent(13,346.3713);
   allW_FwD_Eta__44->SetBinContent(14,224.8291);
   allW_FwD_Eta__44->SetBinContent(15,172.946);
   allW_FwD_Eta__44->SetBinContent(16,77.75826);
   allW_FwD_Eta__44->SetBinContent(17,41.68154);
   allW_FwD_Eta__44->SetBinContent(18,15.56474);
   allW_FwD_Eta__44->SetBinContent(19,5.158354);
   allW_FwD_Eta__44->SetEntries(538);
   allW_FwD_Eta__44->SetDirectory(0);
   allW_FwD_Eta__44->SetStats(0);

   ci = TColor::GetColor("#00cc00");
   allW_FwD_Eta__44->SetFillColor(ci);

   ci = TColor::GetColor("#00cc00");
   allW_FwD_Eta__44->SetLineColor(ci);
   allW_FwD_Eta__44->GetXaxis()->SetTitle("#eta");
   allW_FwD_Eta__44->GetXaxis()->SetLabelFont(42);
   allW_FwD_Eta__44->GetXaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__44->GetXaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__44->GetXaxis()->SetTitleFont(42);
   allW_FwD_Eta__44->GetYaxis()->SetLabelFont(42);
   allW_FwD_Eta__44->GetYaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__44->GetYaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__44->GetYaxis()->SetTitleFont(42);
   allW_FwD_Eta__44->GetZaxis()->SetLabelFont(42);
   allW_FwD_Eta__44->GetZaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__44->GetZaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__44->GetZaxis()->SetTitleFont(42);
   allW_FwD_Eta->Add(allW_FwD_Eta__44,"");
   
   TH1D *allW_FwD_Eta__45 = new TH1D("allW_FwD_Eta__45","W+jets",20,-5,5);
   allW_FwD_Eta__45->SetBinContent(1,0.8066495);
   allW_FwD_Eta__45->SetBinContent(2,37.14948);
   allW_FwD_Eta__45->SetBinContent(3,200.8775);
   allW_FwD_Eta__45->SetBinContent(4,404.7636);
   allW_FwD_Eta__45->SetBinContent(5,940.0737);
   allW_FwD_Eta__45->SetBinContent(6,1565.968);
   allW_FwD_Eta__45->SetBinContent(7,2027.917);
   allW_FwD_Eta__45->SetBinContent(8,2136.051);
   allW_FwD_Eta__45->SetBinContent(9,1633.073);
   allW_FwD_Eta__45->SetBinContent(10,589.0939);
   allW_FwD_Eta__45->SetBinContent(11,594.3699);
   allW_FwD_Eta__45->SetBinContent(12,1624.418);
   allW_FwD_Eta__45->SetBinContent(13,2129.86);
   allW_FwD_Eta__45->SetBinContent(14,2036.899);
   allW_FwD_Eta__45->SetBinContent(15,1602.747);
   allW_FwD_Eta__45->SetBinContent(16,930.2849);
   allW_FwD_Eta__45->SetBinContent(17,413.0481);
   allW_FwD_Eta__45->SetBinContent(18,197.8035);
   allW_FwD_Eta__45->SetBinContent(19,39.91825);
   allW_FwD_Eta__45->SetBinContent(20,0.8938548);
   allW_FwD_Eta__45->SetEntries(876369);
   allW_FwD_Eta__45->SetDirectory(0);
   allW_FwD_Eta__45->SetStats(0);

   ci = TColor::GetColor("#0033ff");
   allW_FwD_Eta__45->SetFillColor(ci);

   ci = TColor::GetColor("#0033ff");
   allW_FwD_Eta__45->SetLineColor(ci);
   allW_FwD_Eta__45->GetXaxis()->SetTitle("#eta");
   allW_FwD_Eta__45->GetXaxis()->SetLabelFont(42);
   allW_FwD_Eta__45->GetXaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__45->GetXaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__45->GetXaxis()->SetTitleFont(42);
   allW_FwD_Eta__45->GetYaxis()->SetLabelFont(42);
   allW_FwD_Eta__45->GetYaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__45->GetYaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__45->GetYaxis()->SetTitleFont(42);
   allW_FwD_Eta__45->GetZaxis()->SetLabelFont(42);
   allW_FwD_Eta__45->GetZaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__45->GetZaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__45->GetZaxis()->SetTitleFont(42);
   allW_FwD_Eta->Add(allW_FwD_Eta__45,"");
   
   TH1D *allW_FwD_Eta__46 = new TH1D("allW_FwD_Eta__46","DiBoson",20,-5,5);
   allW_FwD_Eta__46->SetBinContent(3,0.9170962);
   allW_FwD_Eta__46->SetBinContent(4,1.766998);
   allW_FwD_Eta__46->SetBinContent(5,6.40277);
   allW_FwD_Eta__46->SetBinContent(6,14.3321);
   allW_FwD_Eta__46->SetBinContent(7,27.13678);
   allW_FwD_Eta__46->SetBinContent(8,33.88546);
   allW_FwD_Eta__46->SetBinContent(9,37.44255);
   allW_FwD_Eta__46->SetBinContent(10,15.05069);
   allW_FwD_Eta__46->SetBinContent(11,16.18992);
   allW_FwD_Eta__46->SetBinContent(12,37.37921);
   allW_FwD_Eta__46->SetBinContent(13,34.99868);
   allW_FwD_Eta__46->SetBinContent(14,29.4928);
   allW_FwD_Eta__46->SetBinContent(15,18.74117);
   allW_FwD_Eta__46->SetBinContent(16,5.686882);
   allW_FwD_Eta__46->SetBinContent(17,1.488652);
   allW_FwD_Eta__46->SetBinContent(18,0.2093702);
   allW_FwD_Eta__46->SetBinContent(19,0.2333136);
   allW_FwD_Eta__46->SetEntries(1398);
   allW_FwD_Eta__46->SetDirectory(0);
   allW_FwD_Eta__46->SetStats(0);

   ci = TColor::GetColor("#00ffff");
   allW_FwD_Eta__46->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   allW_FwD_Eta__46->SetLineColor(ci);
   allW_FwD_Eta__46->GetXaxis()->SetTitle("#eta");
   allW_FwD_Eta__46->GetXaxis()->SetLabelFont(42);
   allW_FwD_Eta__46->GetXaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__46->GetXaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__46->GetXaxis()->SetTitleFont(42);
   allW_FwD_Eta__46->GetYaxis()->SetLabelFont(42);
   allW_FwD_Eta__46->GetYaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__46->GetYaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__46->GetYaxis()->SetTitleFont(42);
   allW_FwD_Eta__46->GetZaxis()->SetLabelFont(42);
   allW_FwD_Eta__46->GetZaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__46->GetZaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__46->GetZaxis()->SetTitleFont(42);
   allW_FwD_Eta->Add(allW_FwD_Eta__46,"");
   
   TH1D *allW_FwD_Eta__47 = new TH1D("allW_FwD_Eta__47","DiBoson",20,-5,5);
   allW_FwD_Eta__47->SetBinContent(2,0.05375585);
   allW_FwD_Eta__47->SetBinContent(4,0.3231534);
   allW_FwD_Eta__47->SetBinContent(5,0.5292307);
   allW_FwD_Eta__47->SetBinContent(6,1.34285);
   allW_FwD_Eta__47->SetBinContent(7,3.53448);
   allW_FwD_Eta__47->SetBinContent(8,4.276824);
   allW_FwD_Eta__47->SetBinContent(9,4.073707);
   allW_FwD_Eta__47->SetBinContent(10,1.409468);
   allW_FwD_Eta__47->SetBinContent(11,1.467786);
   allW_FwD_Eta__47->SetBinContent(12,3.887807);
   allW_FwD_Eta__47->SetBinContent(13,3.670912);
   allW_FwD_Eta__47->SetBinContent(14,2.763307);
   allW_FwD_Eta__47->SetBinContent(15,1.808318);
   allW_FwD_Eta__47->SetBinContent(16,0.6332979);
   allW_FwD_Eta__47->SetBinContent(17,0.2127252);
   allW_FwD_Eta__47->SetBinContent(18,0.06005903);
   allW_FwD_Eta__47->SetEntries(1101);
   allW_FwD_Eta__47->SetDirectory(0);
   allW_FwD_Eta__47->SetStats(0);

   ci = TColor::GetColor("#00ffff");
   allW_FwD_Eta__47->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   allW_FwD_Eta__47->SetLineColor(ci);
   allW_FwD_Eta__47->GetXaxis()->SetTitle("#eta");
   allW_FwD_Eta__47->GetXaxis()->SetLabelFont(42);
   allW_FwD_Eta__47->GetXaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__47->GetXaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__47->GetXaxis()->SetTitleFont(42);
   allW_FwD_Eta__47->GetYaxis()->SetLabelFont(42);
   allW_FwD_Eta__47->GetYaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__47->GetYaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__47->GetYaxis()->SetTitleFont(42);
   allW_FwD_Eta__47->GetZaxis()->SetLabelFont(42);
   allW_FwD_Eta__47->GetZaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__47->GetZaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__47->GetZaxis()->SetTitleFont(42);
   allW_FwD_Eta->Add(allW_FwD_Eta__47,"");
   
   TH1D *allW_FwD_Eta__48 = new TH1D("allW_FwD_Eta__48","DiBoson",20,-5,5);
   allW_FwD_Eta__48->SetBinContent(2,0.2319077);
   allW_FwD_Eta__48->SetBinContent(3,1.182501);
   allW_FwD_Eta__48->SetBinContent(4,2.243071);
   allW_FwD_Eta__48->SetBinContent(5,9.452652);
   allW_FwD_Eta__48->SetBinContent(6,23.18682);
   allW_FwD_Eta__48->SetBinContent(7,31.29973);
   allW_FwD_Eta__48->SetBinContent(8,44.27903);
   allW_FwD_Eta__48->SetBinContent(9,45.51249);
   allW_FwD_Eta__48->SetBinContent(10,20.13896);
   allW_FwD_Eta__48->SetBinContent(11,17.19202);
   allW_FwD_Eta__48->SetBinContent(12,47.01605);
   allW_FwD_Eta__48->SetBinContent(13,42.68142);
   allW_FwD_Eta__48->SetBinContent(14,30.85461);
   allW_FwD_Eta__48->SetBinContent(15,26.42411);
   allW_FwD_Eta__48->SetBinContent(16,10.14873);
   allW_FwD_Eta__48->SetBinContent(17,3.170856);
   allW_FwD_Eta__48->SetBinContent(18,0.9126659);
   allW_FwD_Eta__48->SetBinContent(19,0.3624041);
   allW_FwD_Eta__48->SetEntries(3156);
   allW_FwD_Eta__48->SetDirectory(0);
   allW_FwD_Eta__48->SetStats(0);

   ci = TColor::GetColor("#00ffff");
   allW_FwD_Eta__48->SetFillColor(ci);

   ci = TColor::GetColor("#00ffff");
   allW_FwD_Eta__48->SetLineColor(ci);
   allW_FwD_Eta__48->GetXaxis()->SetTitle("#eta");
   allW_FwD_Eta__48->GetXaxis()->SetLabelFont(42);
   allW_FwD_Eta__48->GetXaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__48->GetXaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__48->GetXaxis()->SetTitleFont(42);
   allW_FwD_Eta__48->GetYaxis()->SetLabelFont(42);
   allW_FwD_Eta__48->GetYaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__48->GetYaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__48->GetYaxis()->SetTitleFont(42);
   allW_FwD_Eta__48->GetZaxis()->SetLabelFont(42);
   allW_FwD_Eta__48->GetZaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__48->GetZaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__48->GetZaxis()->SetTitleFont(42);
   allW_FwD_Eta->Add(allW_FwD_Eta__48,"");
   
   TH1D *allW_FwD_Eta__49 = new TH1D("allW_FwD_Eta__49","t#bar{t}",20,-5,5);
   allW_FwD_Eta__49->SetBinContent(1,0.8337599);
   allW_FwD_Eta__49->SetBinContent(2,10.99015);
   allW_FwD_Eta__49->SetBinContent(3,45.9202);
   allW_FwD_Eta__49->SetBinContent(4,129.1576);
   allW_FwD_Eta__49->SetBinContent(5,426.5047);
   allW_FwD_Eta__49->SetBinContent(6,1117.034);
   allW_FwD_Eta__49->SetBinContent(7,2222.616);
   allW_FwD_Eta__49->SetBinContent(8,3339.142);
   allW_FwD_Eta__49->SetBinContent(9,3490.92);
   allW_FwD_Eta__49->SetBinContent(10,1459.833);
   allW_FwD_Eta__49->SetBinContent(11,1466.016);
   allW_FwD_Eta__49->SetBinContent(12,3480.355);
   allW_FwD_Eta__49->SetBinContent(13,3299.019);
   allW_FwD_Eta__49->SetBinContent(14,2207.062);
   allW_FwD_Eta__49->SetBinContent(15,1114.749);
   allW_FwD_Eta__49->SetBinContent(16,421.2472);
   allW_FwD_Eta__49->SetBinContent(17,129.2825);
   allW_FwD_Eta__49->SetBinContent(18,51.32585);
   allW_FwD_Eta__49->SetBinContent(19,9.987899);
   allW_FwD_Eta__49->SetBinContent(20,0.5439828);
   allW_FwD_Eta__49->SetEntries(177933);
   allW_FwD_Eta__49->SetDirectory(0);
   allW_FwD_Eta__49->SetStats(0);

   ci = TColor::GetColor("#cc33cc");
   allW_FwD_Eta__49->SetFillColor(ci);

   ci = TColor::GetColor("#cc33cc");
   allW_FwD_Eta__49->SetLineColor(ci);
   allW_FwD_Eta__49->GetXaxis()->SetTitle("#eta");
   allW_FwD_Eta__49->GetXaxis()->SetLabelFont(42);
   allW_FwD_Eta__49->GetXaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__49->GetXaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__49->GetXaxis()->SetTitleFont(42);
   allW_FwD_Eta__49->GetYaxis()->SetLabelFont(42);
   allW_FwD_Eta__49->GetYaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__49->GetYaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__49->GetYaxis()->SetTitleFont(42);
   allW_FwD_Eta__49->GetZaxis()->SetLabelFont(42);
   allW_FwD_Eta__49->GetZaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__49->GetZaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__49->GetZaxis()->SetTitleFont(42);
   allW_FwD_Eta->Add(allW_FwD_Eta__49,"");
   
   TH1D *allW_FwD_Eta__50 = new TH1D("allW_FwD_Eta__50","s-channel",20,-5,5);
   allW_FwD_Eta__50->SetBinContent(1,0.01177795);
   allW_FwD_Eta__50->SetBinContent(2,0.1014049);
   allW_FwD_Eta__50->SetBinContent(3,0.3688081);
   allW_FwD_Eta__50->SetBinContent(4,1.919779);
   allW_FwD_Eta__50->SetBinContent(5,8.590838);
   allW_FwD_Eta__50->SetBinContent(6,19.75667);
   allW_FwD_Eta__50->SetBinContent(7,31.16367);
   allW_FwD_Eta__50->SetBinContent(8,39.05243);
   allW_FwD_Eta__50->SetBinContent(9,34.30987);
   allW_FwD_Eta__50->SetBinContent(10,13.2071);
   allW_FwD_Eta__50->SetBinContent(11,13.87079);
   allW_FwD_Eta__50->SetBinContent(12,33.62401);
   allW_FwD_Eta__50->SetBinContent(13,38.33926);
   allW_FwD_Eta__50->SetBinContent(14,31.57889);
   allW_FwD_Eta__50->SetBinContent(15,19.49909);
   allW_FwD_Eta__50->SetBinContent(16,8.233488);
   allW_FwD_Eta__50->SetBinContent(17,2.090495);
   allW_FwD_Eta__50->SetBinContent(18,0.4456503);
   allW_FwD_Eta__50->SetBinContent(19,0.04825349);
   allW_FwD_Eta__50->SetBinContent(20,0.01763177);
   allW_FwD_Eta__50->SetEntries(51969);
   allW_FwD_Eta__50->SetDirectory(0);
   allW_FwD_Eta__50->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   allW_FwD_Eta__50->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   allW_FwD_Eta__50->SetLineColor(ci);
   allW_FwD_Eta__50->GetXaxis()->SetTitle("#eta");
   allW_FwD_Eta__50->GetXaxis()->SetLabelFont(42);
   allW_FwD_Eta__50->GetXaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__50->GetXaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__50->GetXaxis()->SetTitleFont(42);
   allW_FwD_Eta__50->GetYaxis()->SetLabelFont(42);
   allW_FwD_Eta__50->GetYaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__50->GetYaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__50->GetYaxis()->SetTitleFont(42);
   allW_FwD_Eta__50->GetZaxis()->SetLabelFont(42);
   allW_FwD_Eta__50->GetZaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__50->GetZaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__50->GetZaxis()->SetTitleFont(42);
   allW_FwD_Eta->Add(allW_FwD_Eta__50,"");
   
   TH1D *allW_FwD_Eta__51 = new TH1D("allW_FwD_Eta__51","s-channel",20,-5,5);
   allW_FwD_Eta__51->SetBinContent(2,0.04998254);
   allW_FwD_Eta__51->SetBinContent(3,0.1844167);
   allW_FwD_Eta__51->SetBinContent(4,0.8961667);
   allW_FwD_Eta__51->SetBinContent(5,3.600921);
   allW_FwD_Eta__51->SetBinContent(6,8.181108);
   allW_FwD_Eta__51->SetBinContent(7,14.70744);
   allW_FwD_Eta__51->SetBinContent(8,19.12041);
   allW_FwD_Eta__51->SetBinContent(9,17.15584);
   allW_FwD_Eta__51->SetBinContent(10,6.80118);
   allW_FwD_Eta__51->SetBinContent(11,7.430958);
   allW_FwD_Eta__51->SetBinContent(12,18.05566);
   allW_FwD_Eta__51->SetBinContent(13,18.76385);
   allW_FwD_Eta__51->SetBinContent(14,14.68191);
   allW_FwD_Eta__51->SetBinContent(15,8.56089);
   allW_FwD_Eta__51->SetBinContent(16,3.699259);
   allW_FwD_Eta__51->SetBinContent(17,0.8377484);
   allW_FwD_Eta__51->SetBinContent(18,0.1941256);
   allW_FwD_Eta__51->SetBinContent(19,0.005904919);
   allW_FwD_Eta__51->SetBinContent(20,0.006344488);
   allW_FwD_Eta__51->SetEntries(27481);
   allW_FwD_Eta__51->SetDirectory(0);
   allW_FwD_Eta__51->SetStats(0);

   ci = TColor::GetColor("#ffff00");
   allW_FwD_Eta__51->SetFillColor(ci);

   ci = TColor::GetColor("#ffff00");
   allW_FwD_Eta__51->SetLineColor(ci);
   allW_FwD_Eta__51->GetXaxis()->SetTitle("#eta");
   allW_FwD_Eta__51->GetXaxis()->SetLabelFont(42);
   allW_FwD_Eta__51->GetXaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__51->GetXaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__51->GetXaxis()->SetTitleFont(42);
   allW_FwD_Eta__51->GetYaxis()->SetLabelFont(42);
   allW_FwD_Eta__51->GetYaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__51->GetYaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__51->GetYaxis()->SetTitleFont(42);
   allW_FwD_Eta__51->GetZaxis()->SetLabelFont(42);
   allW_FwD_Eta__51->GetZaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__51->GetZaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__51->GetZaxis()->SetTitleFont(42);
   allW_FwD_Eta->Add(allW_FwD_Eta__51,"");
   
   TH1D *allW_FwD_Eta__52 = new TH1D("allW_FwD_Eta__52","tW-channel",20,-5,5);
   allW_FwD_Eta__52->SetBinContent(2,1.458766);
   allW_FwD_Eta__52->SetBinContent(3,3.057583);
   allW_FwD_Eta__52->SetBinContent(4,7.139844);
   allW_FwD_Eta__52->SetBinContent(5,29.41821);
   allW_FwD_Eta__52->SetBinContent(6,68.35718);
   allW_FwD_Eta__52->SetBinContent(7,116.4079);
   allW_FwD_Eta__52->SetBinContent(8,171.1561);
   allW_FwD_Eta__52->SetBinContent(9,203.8099);
   allW_FwD_Eta__52->SetBinContent(10,88.34524);
   allW_FwD_Eta__52->SetBinContent(11,89.86334);
   allW_FwD_Eta__52->SetBinContent(12,191.9885);
   allW_FwD_Eta__52->SetBinContent(13,179.5747);
   allW_FwD_Eta__52->SetBinContent(14,134.5703);
   allW_FwD_Eta__52->SetBinContent(15,55.39268);
   allW_FwD_Eta__52->SetBinContent(16,29.06958);
   allW_FwD_Eta__52->SetBinContent(17,7.952821);
   allW_FwD_Eta__52->SetBinContent(18,3.928659);
   allW_FwD_Eta__52->SetBinContent(19,0.557539);
   allW_FwD_Eta__52->SetBinContent(20,0.650829);
   allW_FwD_Eta__52->SetEntries(3538);
   allW_FwD_Eta__52->SetDirectory(0);
   allW_FwD_Eta__52->SetStats(0);

   ci = TColor::GetColor("#ffcc00");
   allW_FwD_Eta__52->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   allW_FwD_Eta__52->SetLineColor(ci);
   allW_FwD_Eta__52->GetXaxis()->SetTitle("#eta");
   allW_FwD_Eta__52->GetXaxis()->SetLabelFont(42);
   allW_FwD_Eta__52->GetXaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__52->GetXaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__52->GetXaxis()->SetTitleFont(42);
   allW_FwD_Eta__52->GetYaxis()->SetLabelFont(42);
   allW_FwD_Eta__52->GetYaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__52->GetYaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__52->GetYaxis()->SetTitleFont(42);
   allW_FwD_Eta__52->GetZaxis()->SetLabelFont(42);
   allW_FwD_Eta__52->GetZaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__52->GetZaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__52->GetZaxis()->SetTitleFont(42);
   allW_FwD_Eta->Add(allW_FwD_Eta__52,"");
   
   TH1D *allW_FwD_Eta__53 = new TH1D("allW_FwD_Eta__53","tW-channel",20,-5,5);
   allW_FwD_Eta__53->SetBinContent(2,1.676496);
   allW_FwD_Eta__53->SetBinContent(3,4.091919);
   allW_FwD_Eta__53->SetBinContent(4,6.78606);
   allW_FwD_Eta__53->SetBinContent(5,26.82735);
   allW_FwD_Eta__53->SetBinContent(6,53.31939);
   allW_FwD_Eta__53->SetBinContent(7,126.5397);
   allW_FwD_Eta__53->SetBinContent(8,179.8421);
   allW_FwD_Eta__53->SetBinContent(9,187.9389);
   allW_FwD_Eta__53->SetBinContent(10,92.03238);
   allW_FwD_Eta__53->SetBinContent(11,99.61971);
   allW_FwD_Eta__53->SetBinContent(12,216.1328);
   allW_FwD_Eta__53->SetBinContent(13,189.0519);
   allW_FwD_Eta__53->SetBinContent(14,114.9549);
   allW_FwD_Eta__53->SetBinContent(15,67.19173);
   allW_FwD_Eta__53->SetBinContent(16,24.94132);
   allW_FwD_Eta__53->SetBinContent(17,6.719311);
   allW_FwD_Eta__53->SetBinContent(18,3.706386);
   allW_FwD_Eta__53->SetBinContent(19,0.7333954);
   allW_FwD_Eta__53->SetBinContent(20,0.4305);
   allW_FwD_Eta__53->SetEntries(3528);
   allW_FwD_Eta__53->SetDirectory(0);
   allW_FwD_Eta__53->SetStats(0);

   ci = TColor::GetColor("#ffcc00");
   allW_FwD_Eta__53->SetFillColor(ci);

   ci = TColor::GetColor("#ffcc00");
   allW_FwD_Eta__53->SetLineColor(ci);
   allW_FwD_Eta__53->GetXaxis()->SetTitle("#eta");
   allW_FwD_Eta__53->GetXaxis()->SetLabelFont(42);
   allW_FwD_Eta__53->GetXaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__53->GetXaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__53->GetXaxis()->SetTitleFont(42);
   allW_FwD_Eta__53->GetYaxis()->SetLabelFont(42);
   allW_FwD_Eta__53->GetYaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__53->GetYaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__53->GetYaxis()->SetTitleFont(42);
   allW_FwD_Eta__53->GetZaxis()->SetLabelFont(42);
   allW_FwD_Eta__53->GetZaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__53->GetZaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__53->GetZaxis()->SetTitleFont(42);
   allW_FwD_Eta->Add(allW_FwD_Eta__53,"");
   
   TH1D *allW_FwD_Eta__54 = new TH1D("allW_FwD_Eta__54","t-channel",20,-5,5);
   allW_FwD_Eta__54->SetBinContent(1,5.59956);
   allW_FwD_Eta__54->SetBinContent(2,49.1573);
   allW_FwD_Eta__54->SetBinContent(3,156.8451);
   allW_FwD_Eta__54->SetBinContent(4,267.2923);
   allW_FwD_Eta__54->SetBinContent(5,383.4157);
   allW_FwD_Eta__54->SetBinContent(6,391.2643);
   allW_FwD_Eta__54->SetBinContent(7,386.4709);
   allW_FwD_Eta__54->SetBinContent(8,316.952);
   allW_FwD_Eta__54->SetBinContent(9,208.3953);
   allW_FwD_Eta__54->SetBinContent(10,62.86785);
   allW_FwD_Eta__54->SetBinContent(11,61.5068);
   allW_FwD_Eta__54->SetBinContent(12,203.3128);
   allW_FwD_Eta__54->SetBinContent(13,317.0276);
   allW_FwD_Eta__54->SetBinContent(14,373.3085);
   allW_FwD_Eta__54->SetBinContent(15,396.2935);
   allW_FwD_Eta__54->SetBinContent(16,387.3061);
   allW_FwD_Eta__54->SetBinContent(17,266.8567);
   allW_FwD_Eta__54->SetBinContent(18,169.8528);
   allW_FwD_Eta__54->SetBinContent(19,49.11337);
   allW_FwD_Eta__54->SetBinContent(20,4.641272);
   allW_FwD_Eta__54->SetEntries(59482);
   allW_FwD_Eta__54->SetDirectory(0);
   allW_FwD_Eta__54->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   allW_FwD_Eta__54->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   allW_FwD_Eta__54->SetLineColor(ci);
   allW_FwD_Eta__54->GetXaxis()->SetTitle("#eta");
   allW_FwD_Eta__54->GetXaxis()->SetLabelFont(42);
   allW_FwD_Eta__54->GetXaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__54->GetXaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__54->GetXaxis()->SetTitleFont(42);
   allW_FwD_Eta__54->GetYaxis()->SetLabelFont(42);
   allW_FwD_Eta__54->GetYaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__54->GetYaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__54->GetYaxis()->SetTitleFont(42);
   allW_FwD_Eta__54->GetZaxis()->SetLabelFont(42);
   allW_FwD_Eta__54->GetZaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__54->GetZaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__54->GetZaxis()->SetTitleFont(42);
   allW_FwD_Eta->Add(allW_FwD_Eta__54,"");
   
   TH1D *allW_FwD_Eta__55 = new TH1D("allW_FwD_Eta__55","t-channel",20,-5,5);
   allW_FwD_Eta__55->SetBinContent(1,0.8756429);
   allW_FwD_Eta__55->SetBinContent(2,17.68266);
   allW_FwD_Eta__55->SetBinContent(3,59.73198);
   allW_FwD_Eta__55->SetBinContent(4,124.8742);
   allW_FwD_Eta__55->SetBinContent(5,209.5479);
   allW_FwD_Eta__55->SetBinContent(6,223.3366);
   allW_FwD_Eta__55->SetBinContent(7,253.1555);
   allW_FwD_Eta__55->SetBinContent(8,213.1593);
   allW_FwD_Eta__55->SetBinContent(9,139.5968);
   allW_FwD_Eta__55->SetBinContent(10,40.94752);
   allW_FwD_Eta__55->SetBinContent(11,44.81596);
   allW_FwD_Eta__55->SetBinContent(12,134.5051);
   allW_FwD_Eta__55->SetBinContent(13,215.5293);
   allW_FwD_Eta__55->SetBinContent(14,256.7173);
   allW_FwD_Eta__55->SetBinContent(15,240.0721);
   allW_FwD_Eta__55->SetBinContent(16,200.7882);
   allW_FwD_Eta__55->SetBinContent(17,123.1513);
   allW_FwD_Eta__55->SetBinContent(18,64.83585);
   allW_FwD_Eta__55->SetBinContent(19,16.23921);
   allW_FwD_Eta__55->SetBinContent(20,0.8854012);
   allW_FwD_Eta__55->SetEntries(26462);
   allW_FwD_Eta__55->SetDirectory(0);
   allW_FwD_Eta__55->SetStats(0);

   ci = TColor::GetColor("#ff0000");
   allW_FwD_Eta__55->SetFillColor(ci);

   ci = TColor::GetColor("#ff0000");
   allW_FwD_Eta__55->SetLineColor(ci);
   allW_FwD_Eta__55->GetXaxis()->SetTitle("#eta");
   allW_FwD_Eta__55->GetXaxis()->SetLabelFont(42);
   allW_FwD_Eta__55->GetXaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__55->GetXaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__55->GetXaxis()->SetTitleFont(42);
   allW_FwD_Eta__55->GetYaxis()->SetLabelFont(42);
   allW_FwD_Eta__55->GetYaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__55->GetYaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__55->GetYaxis()->SetTitleFont(42);
   allW_FwD_Eta__55->GetZaxis()->SetLabelFont(42);
   allW_FwD_Eta__55->GetZaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__55->GetZaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__55->GetZaxis()->SetTitleFont(42);
   allW_FwD_Eta->Add(allW_FwD_Eta__55,"");
   allW_FwD_Eta->Draw("");
   
   TH1D *allW_FwD_Eta__56 = new TH1D("allW_FwD_Eta__56","data",20,-5,5);
   allW_FwD_Eta__56->SetBinContent(1,1);
   allW_FwD_Eta__56->SetBinContent(2,81);
   allW_FwD_Eta__56->SetBinContent(3,406);
   allW_FwD_Eta__56->SetBinContent(4,747);
   allW_FwD_Eta__56->SetBinContent(5,1626);
   allW_FwD_Eta__56->SetBinContent(6,3324);
   allW_FwD_Eta__56->SetBinContent(7,5535);
   allW_FwD_Eta__56->SetBinContent(8,7439);
   allW_FwD_Eta__56->SetBinContent(9,7053);
   allW_FwD_Eta__56->SetBinContent(10,2591);
   allW_FwD_Eta__56->SetBinContent(11,2661);
   allW_FwD_Eta__56->SetBinContent(12,6908);
   allW_FwD_Eta__56->SetBinContent(13,7189);
   allW_FwD_Eta__56->SetBinContent(14,5695);
   allW_FwD_Eta__56->SetBinContent(15,3504);
   allW_FwD_Eta__56->SetBinContent(16,1742);
   allW_FwD_Eta__56->SetBinContent(17,786);
   allW_FwD_Eta__56->SetBinContent(18,409);
   allW_FwD_Eta__56->SetBinContent(19,98);
   allW_FwD_Eta__56->SetBinContent(20,3);
   allW_FwD_Eta__56->SetMinimum(-7.403641);
   allW_FwD_Eta__56->SetMaximum(10034.27);
   allW_FwD_Eta__56->SetEntries(57798);
   allW_FwD_Eta__56->SetDirectory(0);
   allW_FwD_Eta__56->SetStats(0);

   ci = TColor::GetColor("#000099");
   allW_FwD_Eta__56->SetLineColor(ci);
   allW_FwD_Eta__56->SetMarkerStyle(20);
   allW_FwD_Eta__56->GetXaxis()->SetTitle("#eta");
   allW_FwD_Eta__56->GetXaxis()->SetLabelFont(42);
   allW_FwD_Eta__56->GetXaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__56->GetXaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__56->GetXaxis()->SetTitleFont(42);
   allW_FwD_Eta__56->GetYaxis()->SetLabelFont(42);
   allW_FwD_Eta__56->GetYaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__56->GetYaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__56->GetYaxis()->SetTitleFont(42);
   allW_FwD_Eta__56->GetZaxis()->SetLabelFont(42);
   allW_FwD_Eta__56->GetZaxis()->SetLabelSize(0.035);
   allW_FwD_Eta__56->GetZaxis()->SetTitleSize(0.035);
   allW_FwD_Eta__56->GetZaxis()->SetTitleFont(42);
   allW_FwD_Eta__56->Draw("PE1sames");
   
   TPaveText *pt = new TPaveText(0.3721839,0.9365254,0.6278161,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("allW_FwD_Eta");
  // pt->Draw();
   
   TH1D *allW_FwD_Eta1 = new TH1D("allW_FwD_Eta1","allW_FwD_Eta1",20,-5,5);
   allW_FwD_Eta1->SetBinContent(1,8.12739);
   allW_FwD_Eta1->SetBinContent(2,118.5519);
   allW_FwD_Eta1->SetBinContent(3,479.7858);
   allW_FwD_Eta1->SetBinContent(4,995.3275);
   allW_FwD_Eta1->SetBinContent(5,2137.979);
   allW_FwD_Eta1->SetBinContent(6,3689.322);
   allW_FwD_Eta1->SetBinContent(7,5650.608);
   allW_FwD_Eta1->SetBinContent(8,6933.629);
   allW_FwD_Eta1->SetBinContent(9,6402.002);
   allW_FwD_Eta1->SetBinContent(10,2492.84);
   allW_FwD_Eta1->SetBinContent(11,2535.631);
   allW_FwD_Eta1->SetBinContent(12,6284.966);
   allW_FwD_Eta1->SetBinContent(13,6963.419);
   allW_FwD_Eta1->SetBinContent(14,5611.824);
   allW_FwD_Eta1->SetBinContent(15,3766.014);
   allW_FwD_Eta1->SetBinContent(16,2103.758);
   allW_FwD_Eta1->SetBinContent(17,998.7432);
   allW_FwD_Eta1->SetBinContent(18,510.37);
   allW_FwD_Eta1->SetBinContent(19,122.5379);
   allW_FwD_Eta1->SetBinContent(20,8.069816);
   allW_FwD_Eta1->SetBinError(1,0.8538861);
   allW_FwD_Eta1->SetBinError(2,3.748876);
   allW_FwD_Eta1->SetBinError(3,12.21124);
   allW_FwD_Eta1->SetBinError(4,25.61784);
   allW_FwD_Eta1->SetBinError(5,49.8496);
   allW_FwD_Eta1->SetBinError(6,80.31124);
   allW_FwD_Eta1->SetBinError(7,107.0218);
   allW_FwD_Eta1->SetBinError(8,112.8065);
   allW_FwD_Eta1->SetBinError(9,94.57425);
   allW_FwD_Eta1->SetBinError(10,41.00016);
   allW_FwD_Eta1->SetBinError(11,43.5974);
   allW_FwD_Eta1->SetBinError(12,88.9819);
   allW_FwD_Eta1->SetBinError(13,114.7873);
   allW_FwD_Eta1->SetBinError(14,106.5491);
   allW_FwD_Eta1->SetBinError(15,82.26911);
   allW_FwD_Eta1->SetBinError(16,49.96889);
   allW_FwD_Eta1->SetBinError(17,26.77079);
   allW_FwD_Eta1->SetBinError(18,14.24252);
   allW_FwD_Eta1->SetBinError(19,6.388056);
   allW_FwD_Eta1->SetBinError(20,1.099881);
   allW_FwD_Eta1->SetEntries(1243862);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   text = ptstats->AddText("allW_FwD_Eta1");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 1243862");
   text = ptstats->AddText("Mean  = 0.002438");
   text = ptstats->AddText("RMS   =  1.726");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   /*ptstats->Draw();
   allW_FwD_Eta1->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(allW_FwD_Eta1);*/
   allW_FwD_Eta1->SetFillColor(1);
   allW_FwD_Eta1->SetFillStyle(3004);

   ci = TColor::GetColor("#000099");
   allW_FwD_Eta1->SetLineColor(ci);
   allW_FwD_Eta1->GetXaxis()->SetTitle("#eta");
   allW_FwD_Eta1->GetXaxis()->SetLabelFont(42);
   allW_FwD_Eta1->GetXaxis()->SetLabelSize(0.035);
   allW_FwD_Eta1->GetXaxis()->SetTitleSize(0.035);
   allW_FwD_Eta1->GetXaxis()->SetTitleFont(42);
   allW_FwD_Eta1->GetYaxis()->SetLabelFont(42);
   allW_FwD_Eta1->GetYaxis()->SetLabelSize(0.035);
   allW_FwD_Eta1->GetYaxis()->SetTitleSize(0.035);
   allW_FwD_Eta1->GetYaxis()->SetTitleFont(42);
   allW_FwD_Eta1->GetZaxis()->SetLabelFont(42);
   allW_FwD_Eta1->GetZaxis()->SetLabelSize(0.035);
   allW_FwD_Eta1->GetZaxis()->SetTitleSize(0.035);
   allW_FwD_Eta1->GetZaxis()->SetTitleFont(42);
   allW_FwD_Eta1->Draw("E2SAME");
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
