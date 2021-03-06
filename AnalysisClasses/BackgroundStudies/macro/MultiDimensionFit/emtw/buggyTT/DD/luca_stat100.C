{
//=========Macro generated from canvas: c/c
//=========  (Wed Dec 11 02:41:42 2013) by ROOT version5.32/00
   TCanvas *c = new TCanvas("c", "c",501,67,604,700);
   c->Range(-1.024125,-0.9858494,0.8435798,0.8726447);
   c->SetFillColor(0);
   c->SetBorderMode(0);
   c->SetBorderSize(2);
   c->SetLeftMargin(0.12);
   c->SetRightMargin(0.02333333);
   c->SetTopMargin(0.03908795);
   c->SetFrameBorderMode(0);
   c->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(2);
   graph->SetName("Graph1");
   graph->SetTitle("Graph1");
   graph->SetFillColor(1);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(29);
   graph->SetPoint(0,-1.000000015,1.002100855);
   graph->SetPoint(1,1.000000015,-0.9957983342);
   
   TH1F *Graph_Graph_Graph_Graph1111 = new TH1F("Graph_Graph_Graph_Graph1111","Graph1",100,-1.2,1.2);
   Graph_Graph_Graph_Graph1111->SetMinimum(-0.07926156);
   Graph_Graph_Graph_Graph1111->SetMaximum(0.03934135);
   Graph_Graph_Graph_Graph1111->SetDirectory(0);
   Graph_Graph_Graph_Graph1111->SetStats(0);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph1111->SetLineColor(ci);
   Graph_Graph_Graph_Graph1111->GetXaxis()->SetTitle("F_{0}");
   Graph_Graph_Graph_Graph1111->GetXaxis()->SetRange(49,54);
   Graph_Graph_Graph_Graph1111->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph1111->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1111->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph1111->GetXaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph1111->GetXaxis()->SetTitleOffset(0.95);
   Graph_Graph_Graph_Graph1111->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph1111->GetYaxis()->SetTitle("F_{L}");
   Graph_Graph_Graph_Graph1111->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_Graph1111->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1111->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph1111->GetYaxis()->SetTitleSize(0.05);
   Graph_Graph_Graph_Graph1111->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph1111->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph1111->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph1111->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph1111->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph1111);
   
   graph->Draw("ap");
   
   graph = new TGraph(100);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(2);
   graph->SetPoint(0,-0.03783384739,0.01571987161);
   graph->SetPoint(1,-0.03738477535,0.01337236187);
   graph->SetPoint(2,-0.03638242522,0.01120262412);
   graph->SetPoint(3,-0.03540852989,0.009000185345);
   graph->SetPoint(4,-0.03374660737,0.007257422539);
   graph->SetPoint(5,-0.03241674804,0.005305978201);
   graph->SetPoint(6,-0.03073759869,0.003645520946);
   graph->SetPoint(7,-0.02924215859,0.001825099339);
   graph->SetPoint(8,-0.02751516695,0.0002226712511);
   graph->SetPoint(9,-0.02585313667,-0.001430732921);
   graph->SetPoint(10,-0.02443975294,-0.003301143699);
   graph->SetPoint(11,-0.02249308182,-0.00460805972);
   graph->SetPoint(12,-0.02075508828,-0.006181888295);
   graph->SetPoint(13,-0.01900304466,-0.007728661227);
   graph->SetPoint(14,-0.0174267443,-0.00945418738);
   graph->SetPoint(15,-0.01547493522,-0.01073990332);
   graph->SetPoint(16,-0.01367438,-0.01223007951);
   graph->SetPoint(17,-0.011876766,-0.01369055185);
   graph->SetPoint(18,-0.010215553,-0.01530448089);
   graph->SetPoint(19,-0.008263221225,-0.01655067944);
   graph->SetPoint(20,-0.006430192094,-0.0179665235);
   graph->SetPoint(21,-0.004587803887,-0.01936773969);
   graph->SetPoint(22,-0.002860182813,-0.02090823523);
   graph->SetPoint(23,-0.0008880439119,-0.0221200793);
   graph->SetPoint(24,0.0009830584427,-0.02348275088);
   graph->SetPoint(25,0.002862341438,-0.02483262857);
   graph->SetPoint(26,0.004640426283,-0.02631326649);
   graph->SetPoint(27,0.008538152802,-0.02880242018);
   graph->SetPoint(28,0.0104499616,-0.03010511133);
   graph->SetPoint(29,0.01226933978,-0.03153405504);
   graph->SetPoint(30,0.01622002578,-0.03393731645);
   graph->SetPoint(31,0.01815717201,-0.03519131505);
   graph->SetPoint(32,0.02000781281,-0.03656978399);
   graph->SetPoint(33,0.02400140149,-0.03887813091);
   graph->SetPoint(34,0.02596756187,-0.04008619217);
   graph->SetPoint(35,0.02785011319,-0.04142080791);
   graph->SetPoint(36,0.03189837116,-0.04363200568);
   graph->SetPoint(37,0.03580639315,-0.04608348491);
   graph->SetPoint(38,0.03991373482,-0.04818399216);
   graph->SetPoint(39,0.04388187942,-0.05053846453);
   graph->SetPoint(40,0.04805557502,-0.05250569018);
   graph->SetPoint(41,0.05210241066,-0.05475948127);
   graph->SetPoint(42,0.0563701923,-0.05656017359);
   graph->SetPoint(43,0.06049220709,-0.0586809884);
   graph->SetPoint(44,0.06486019598,-0.06023325592);
   graph->SetPoint(45,0.06909207118,-0.06218223309);
   graph->SetPoint(46,0.07361306911,-0.06330822481);
   graph->SetPoint(47,0.07812311788,-0.06443494483);
   graph->SetPoint(48,0.08274185219,-0.0649615673);
   graph->SetPoint(49,0.08598592786,-0.06439797162);
   graph->SetPoint(50,0.08776119293,-0.0616248685);
   graph->SetPoint(51,0.08727924331,-0.05928875551);
   graph->SetPoint(52,0.08626258289,-0.0571309555);
   graph->SetPoint(53,0.0852704058,-0.05494308707);
   graph->SetPoint(54,0.08361315824,-0.05320391652);
   graph->SetPoint(55,0.08227447865,-0.05126242987);
   graph->SetPoint(56,0.08059635273,-0.04960552706);
   graph->SetPoint(57,0.07909531612,-0.04779353832);
   graph->SetPoint(58,0.07736905993,-0.04619464692);
   graph->SetPoint(59,0.07570533721,-0.04454680417);
   graph->SetPoint(60,0.07428178187,-0.04268754377);
   graph->SetPoint(61,0.07234051094,-0.04137749137);
   graph->SetPoint(62,0.0706017543,-0.03980857599);
   graph->SetPoint(63,0.06884893266,-0.0382662607);
   graph->SetPoint(64,0.06726573862,-0.03655027212);
   graph->SetPoint(65,0.06531842221,-0.03526204802);
   graph->SetPoint(66,0.0635176975,-0.03377579333);
   graph->SetPoint(67,0.06171959166,-0.03231861463);
   graph->SetPoint(68,0.06005306465,-0.03071261273);
   graph->SetPoint(69,0.0581044612,-0.02946373081);
   graph->SetPoint(70,0.05627139359,-0.02805071113);
   graph->SetPoint(71,0.05442905092,-0.02665211823);
   graph->SetPoint(72,0.05269731891,-0.02511869304);
   graph->SetPoint(73,0.05072890428,-0.02390389852);
   graph->SetPoint(74,0.04885823765,-0.02254338822);
   graph->SetPoint(75,0.04697947112,-0.02119550189);
   graph->SetPoint(76,0.04519821694,-0.01972115634);
   graph->SetPoint(77,0.04130514306,-0.01723022875);
   graph->SetPoint(78,0.03939427929,-0.01592891265);
   graph->SetPoint(79,0.03757253086,-0.01450551649);
   graph->SetPoint(80,0.03362697098,-0.01209948076);
   graph->SetPoint(81,0.03169087805,-0.01084607724);
   graph->SetPoint(82,0.02983831607,-0.009472217581);
   graph->SetPoint(83,0.02584969577,-0.007159789013);
   graph->SetPoint(84,0.02388492753,-0.005951753636);
   graph->SetPoint(85,0.02200106023,-0.00462107421);
   graph->SetPoint(86,0.01795814397,-0.002404794343);
   graph->SetPoint(87,0.01405107774,4.39858196e-05);
   graph->SetPoint(88,0.009949338663,0.002150506028);
   graph->SetPoint(89,0.005982978805,0.004503588255);
   graph->SetPoint(90,0.001814998583,0.006477656983);
   graph->SetPoint(91,-0.002229354534,0.00873140801);
   graph->SetPoint(92,-0.006491540217,0.01053971081);
   graph->SetPoint(93,-0.01061040282,0.01266185561);
   graph->SetPoint(94,-0.01497321823,0.01422210218);
   graph->SetPoint(95,-0.01920151364,0.01617396056);
   graph->SetPoint(96,-0.0237185512,0.01730736463);
   graph->SetPoint(97,-0.02822570941,0.01843851499);
   graph->SetPoint(98,-0.03284258371,0.0189661967);
   graph->SetPoint(99,-0.03603575246,0.0184155055);
   
   TH1F *Graph_Graph_Graph22 = new TH1F("Graph_Graph_Graph22","Graph",100,-0.05039335,0.1003207);
   Graph_Graph_Graph22->SetMinimum(-0.07335434);
   Graph_Graph_Graph22->SetMaximum(0.02735897);
   Graph_Graph_Graph22->SetDirectory(0);
   Graph_Graph_Graph22->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph22->SetLineColor(ci);
   Graph_Graph_Graph22->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph22->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph22->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph22->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph22->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph22->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph22->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph22->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph22->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph22->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph22->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph22->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph22);
   
   graph->Draw("lf");
   
   graph = new TGraph(1);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,0.0248116,-0.0230065);
   
   TH1F *Graph_Graph_Graph_Graph_Graph1233 = new TH1F("Graph_Graph_Graph_Graph_Graph1233","Graph",100,-0.0687324,0);
   Graph_Graph_Graph_Graph_Graph1233->SetMinimum(0);
   Graph_Graph_Graph_Graph_Graph1233->SetMaximum(0.0065912);
   Graph_Graph_Graph_Graph_Graph1233->SetDirectory(0);
   Graph_Graph_Graph_Graph_Graph1233->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph_Graph1233->SetLineColor(ci);
   Graph_Graph_Graph_Graph_Graph1233->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph1233->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph1233->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph1233->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph1233->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph1233->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph1233->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph1233->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph_Graph1233->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph_Graph1233->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph_Graph1233->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph_Graph1233->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph_Graph1233);
   
   graph->Draw("p");
   
   graph = new TGraph(1);
   graph->SetName("Graph2");
   graph->SetTitle("Graph2");
   graph->SetFillColor(1);
   graph->SetMarkerColor(4);
   graph->SetMarkerStyle(29);
   graph->SetPoint(0,0,0);
   
   TH1F *Graph_Graph_Graph_Graph2344 = new TH1F("Graph_Graph_Graph_Graph2344","Graph2",100,0,1.1);
   Graph_Graph_Graph_Graph2344->SetMinimum(0);
   Graph_Graph_Graph_Graph2344->SetMaximum(1.1);
   Graph_Graph_Graph_Graph2344->SetDirectory(0);
   Graph_Graph_Graph_Graph2344->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph_Graph_Graph2344->SetLineColor(ci);
   Graph_Graph_Graph_Graph2344->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph2344->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph2344->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph2344->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph2344->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph2344->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph2344->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph2344->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_Graph2344->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_Graph2344->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_Graph2344->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_Graph2344->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph_Graph_Graph2344);
   
   graph->Draw("p");
   
   TEllipse *ellipse = new TEllipse(0.02477586,-0.02275149,0.03051724,0.03721849,0,360,8.229719);
   ellipse->SetFillStyle(0);

   ci = TColor::GetColor("#006600");
   ellipse->SetLineColor(ci);
   ellipse->SetLineWidth(2);
   ellipse->Draw();
   
   ellipse = new TEllipse(0.02503448,-0.02306165,0.08146552,0.03690833,0,360,-35.28537);
   ellipse->SetFillStyle(0);
   ellipse->SetLineWidth(2);
   ellipse->Draw();
   
   TPaveText *pt = new TPaveText(0.4310345,0.9390756,0.5675287,0.9957983,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextColor(0);
   pt->SetTextFont(42);
   TText *text = pt->AddText("Graph1");
   pt->Draw();
   c->Modified();
   c->cd();
   c->SetSelected(c);
}
