{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Jan  7 17:36:30 2014) by ROOT version5.32/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,700,500);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(2);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetPoint(0,1,1000);
   graph->SetPoint(1,-1,0);
   graph->Draw("ap");
   
   graph = new TGraph(10);
   graph->SetName("SChannel");
   graph->SetTitle("10	bins");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,-0.9,5539);
   graph->SetPoint(1,-0.7,6870);
   graph->SetPoint(2,-0.5,6848);
   graph->SetPoint(3,-0.3,6313);
   graph->SetPoint(4,-0.1,5838);
   graph->SetPoint(5,0.1,5058);
   graph->SetPoint(6,0.3,4395);
   graph->SetPoint(7,0.5,3856);
   graph->SetPoint(8,0.7,3590);
   graph->SetPoint(9,0.9,3125);
   graph->Draw("p");
   
   graph = new TGraph(25);
   graph->SetName("SChannel");
   graph->SetTitle("25	bins");

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,-0.96,1897);
   graph->SetPoint(1,-0.88,2350);
   graph->SetPoint(2,-0.8,2649);
   graph->SetPoint(3,-0.72,2768);
   graph->SetPoint(4,-0.64,2745);
   graph->SetPoint(5,-0.56,2754);
   graph->SetPoint(6,-0.48,2723);
   graph->SetPoint(7,-0.4,2671);
   graph->SetPoint(8,-0.32,2463);
   graph->SetPoint(9,-0.24,2550);
   graph->SetPoint(10,-0.16,2418);
   graph->SetPoint(11,-0.08,2262);
   graph->SetPoint(12,-3.469446952e-17,2214);
   graph->SetPoint(13,0.08,2006);
   graph->SetPoint(14,0.16,1996);
   graph->SetPoint(15,0.24,1834);
   graph->SetPoint(16,0.32,1690);
   graph->SetPoint(17,0.4,1636);
   graph->SetPoint(18,0.48,1551);
   graph->SetPoint(19,0.56,1540);
   graph->SetPoint(20,0.64,1461);
   graph->SetPoint(21,0.72,1410);
   graph->SetPoint(22,0.8,1354);
   graph->SetPoint(23,0.88,1248);
   graph->SetPoint(24,0.96,1242);
   graph->Draw("p");
   
   graph = new TGraph(50);
   graph->SetName("SChannel");
   graph->SetTitle("50	bins");

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,-0.98,1005);
   graph->SetPoint(1,-0.94,892);
   graph->SetPoint(2,-0.9,1097);
   graph->SetPoint(3,-0.86,1253);
   graph->SetPoint(4,-0.82,1292);
   graph->SetPoint(5,-0.78,1357);
   graph->SetPoint(6,-0.74,1381);
   graph->SetPoint(7,-0.7,1387);
   graph->SetPoint(8,-0.66,1318);
   graph->SetPoint(9,-0.62,1427);
   graph->SetPoint(10,-0.58,1414);
   graph->SetPoint(11,-0.54,1340);
   graph->SetPoint(12,-0.5,1380);
   graph->SetPoint(13,-0.46,1343);
   graph->SetPoint(14,-0.42,1371);
   graph->SetPoint(15,-0.38,1300);
   graph->SetPoint(16,-0.34,1244);
   graph->SetPoint(17,-0.3,1219);
   graph->SetPoint(18,-0.26,1306);
   graph->SetPoint(19,-0.22,1244);
   graph->SetPoint(20,-0.18,1248);
   graph->SetPoint(21,-0.14,1170);
   graph->SetPoint(22,-0.1,1146);
   graph->SetPoint(23,-0.06,1116);
   graph->SetPoint(24,-0.02,1158);
   graph->SetPoint(25,0.02,1056);
   graph->SetPoint(26,0.06,1024);
   graph->SetPoint(27,0.1,982);
   graph->SetPoint(28,0.14,1006);
   graph->SetPoint(29,0.18,990);
   graph->SetPoint(30,0.22,931);
   graph->SetPoint(31,0.26,903);
   graph->SetPoint(32,0.3,841);
   graph->SetPoint(33,0.34,849);
   graph->SetPoint(34,0.38,871);
   graph->SetPoint(35,0.42,765);
   graph->SetPoint(36,0.46,783);
   graph->SetPoint(37,0.5,768);
   graph->SetPoint(38,0.54,793);
   graph->SetPoint(39,0.58,747);
   graph->SetPoint(40,0.62,709);
   graph->SetPoint(41,0.66,752);
   graph->SetPoint(42,0.7,734);
   graph->SetPoint(43,0.74,676);
   graph->SetPoint(44,0.78,719);
   graph->SetPoint(45,0.82,635);
   graph->SetPoint(46,0.86,626);
   graph->SetPoint(47,0.9,622);
   graph->SetPoint(48,0.94,631);
   graph->SetPoint(49,0.98,611);
   graph->Draw("p");
   
   graph = new TGraph(72);
   graph->SetName("SChannel");
   graph->SetTitle("72	bins");

   ci = TColor::GetColor("#993300");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,-0.9861111111,762);
   graph->SetPoint(1,-0.9583333333,550);
   graph->SetPoint(2,-0.9305555556,664);
   graph->SetPoint(3,-0.9027777778,769);
   graph->SetPoint(4,-0.875,799);
   graph->SetPoint(5,-0.8472222222,908);
   graph->SetPoint(6,-0.8194444444,885);
   graph->SetPoint(7,-0.7916666667,966);
   graph->SetPoint(8,-0.7638888889,938);
   graph->SetPoint(9,-0.7361111111,956);
   graph->SetPoint(10,-0.7083333333,977);
   graph->SetPoint(11,-0.6805555556,919);
   graph->SetPoint(12,-0.6527777778,927);
   graph->SetPoint(13,-0.625,1001);
   graph->SetPoint(14,-0.5972222222,957);
   graph->SetPoint(15,-0.5694444444,987);
   graph->SetPoint(16,-0.5416666667,936);
   graph->SetPoint(17,-0.5138888889,948);
   graph->SetPoint(18,-0.4861111111,970);
   graph->SetPoint(19,-0.4583333333,910);
   graph->SetPoint(20,-0.4305555556,969);
   graph->SetPoint(21,-0.4027777778,905);
   graph->SetPoint(22,-0.375,924);
   graph->SetPoint(23,-0.3472222222,876);
   graph->SetPoint(24,-0.3194444444,843);
   graph->SetPoint(25,-0.2916666667,839);
   graph->SetPoint(26,-0.2638888889,941);
   graph->SetPoint(27,-0.2361111111,839);
   graph->SetPoint(28,-0.2083333333,868);
   graph->SetPoint(29,-0.1805555556,902);
   graph->SetPoint(30,-0.1527777778,789);
   graph->SetPoint(31,-0.125,820);
   graph->SetPoint(32,-0.09722222222,779);
   graph->SetPoint(33,-0.06944444444,772);
   graph->SetPoint(34,-0.04166666667,814);
   graph->SetPoint(35,-0.01388888889,799);
   graph->SetPoint(36,0.01388888889,739);
   graph->SetPoint(37,0.04166666667,709);
   graph->SetPoint(38,0.06944444444,727);
   graph->SetPoint(39,0.09722222222,688);
   graph->SetPoint(40,0.125,663);
   graph->SetPoint(41,0.1527777778,723);
   graph->SetPoint(42,0.1805555556,656);
   graph->SetPoint(43,0.2083333333,670);
   graph->SetPoint(44,0.2361111111,620);
   graph->SetPoint(45,0.2638888889,649);
   graph->SetPoint(46,0.2916666667,579);
   graph->SetPoint(47,0.3194444444,603);
   graph->SetPoint(48,0.3472222222,577);
   graph->SetPoint(49,0.375,614);
   graph->SetPoint(50,0.4027777778,564);
   graph->SetPoint(51,0.4305555556,531);
   graph->SetPoint(52,0.4583333333,548);
   graph->SetPoint(53,0.4861111111,536);
   graph->SetPoint(54,0.5138888889,542);
   graph->SetPoint(55,0.5416666667,533);
   graph->SetPoint(56,0.5694444444,520);
   graph->SetPoint(57,0.5972222222,513);
   graph->SetPoint(58,0.625,501);
   graph->SetPoint(59,0.6527777778,535);
   graph->SetPoint(60,0.6805555556,496);
   graph->SetPoint(61,0.7083333333,511);
   graph->SetPoint(62,0.7361111111,484);
   graph->SetPoint(63,0.7638888889,479);
   graph->SetPoint(64,0.7916666667,480);
   graph->SetPoint(65,0.8194444444,430);
   graph->SetPoint(66,0.8472222222,436);
   graph->SetPoint(67,0.875,451);
   graph->SetPoint(68,0.9027777778,429);
   graph->SetPoint(69,0.9305555556,444);
   graph->SetPoint(70,0.9583333333,428);
   graph->SetPoint(71,0.9861111111,416);
   graph->Draw("p");
   
   graph = new TGraph(100);
   graph->SetName("SChannel");
   graph->SetTitle("100	bins");
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,-0.99,602);
   graph->SetPoint(1,-0.97,403);
   graph->SetPoint(2,-0.95,410);
   graph->SetPoint(3,-0.93,482);
   graph->SetPoint(4,-0.91,516);
   graph->SetPoint(5,-0.89,581);
   graph->SetPoint(6,-0.87,586);
   graph->SetPoint(7,-0.85,667);
   graph->SetPoint(8,-0.83,643);
   graph->SetPoint(9,-0.81,649);
   graph->SetPoint(10,-0.79,688);
   graph->SetPoint(11,-0.77,669);
   graph->SetPoint(12,-0.75,680);
   graph->SetPoint(13,-0.73,701);
   graph->SetPoint(14,-0.71,680);
   graph->SetPoint(15,-0.69,707);
   graph->SetPoint(16,-0.67,643);
   graph->SetPoint(17,-0.65,675);
   graph->SetPoint(18,-0.63,722);
   graph->SetPoint(19,-0.61,705);
   graph->SetPoint(20,-0.59,691);
   graph->SetPoint(21,-0.57,723);
   graph->SetPoint(22,-0.55,686);
   graph->SetPoint(23,-0.53,654);
   graph->SetPoint(24,-0.51,686);
   graph->SetPoint(25,-0.49,694);
   graph->SetPoint(26,-0.47,670);
   graph->SetPoint(27,-0.45,673);
   graph->SetPoint(28,-0.43,688);
   graph->SetPoint(29,-0.41,683);
   graph->SetPoint(30,-0.39,640);
   graph->SetPoint(31,-0.37,660);
   graph->SetPoint(32,-0.35,639);
   graph->SetPoint(33,-0.33,605);
   graph->SetPoint(34,-0.31,587);
   graph->SetPoint(35,-0.29,632);
   graph->SetPoint(36,-0.27,697);
   graph->SetPoint(37,-0.25,609);
   graph->SetPoint(38,-0.23,606);
   graph->SetPoint(39,-0.21,638);
   graph->SetPoint(40,-0.19,647);
   graph->SetPoint(41,-0.17,601);
   graph->SetPoint(42,-0.15,570);
   graph->SetPoint(43,-0.13,600);
   graph->SetPoint(44,-0.11,561);
   graph->SetPoint(45,-0.09,585);
   graph->SetPoint(46,-0.07,553);
   graph->SetPoint(47,-0.05,563);
   graph->SetPoint(48,-0.03,573);
   graph->SetPoint(49,-0.01,585);
   graph->SetPoint(50,0.01,542);
   graph->SetPoint(51,0.03,514);
   graph->SetPoint(52,0.05,510);
   graph->SetPoint(53,0.07,514);
   graph->SetPoint(54,0.09,505);
   graph->SetPoint(55,0.11,477);
   graph->SetPoint(56,0.13,490);
   graph->SetPoint(57,0.15,516);
   graph->SetPoint(58,0.17,482);
   graph->SetPoint(59,0.19,508);
   graph->SetPoint(60,0.21,471);
   graph->SetPoint(61,0.23,460);
   graph->SetPoint(62,0.25,456);
   graph->SetPoint(63,0.27,447);
   graph->SetPoint(64,0.29,406);
   graph->SetPoint(65,0.31,435);
   graph->SetPoint(66,0.33,436);
   graph->SetPoint(67,0.35,413);
   graph->SetPoint(68,0.37,441);
   graph->SetPoint(69,0.39,430);
   graph->SetPoint(70,0.41,384);
   graph->SetPoint(71,0.43,381);
   graph->SetPoint(72,0.45,398);
   graph->SetPoint(73,0.47,385);
   graph->SetPoint(74,0.49,395);
   graph->SetPoint(75,0.51,373);
   graph->SetPoint(76,0.53,415);
   graph->SetPoint(77,0.55,378);
   graph->SetPoint(78,0.57,379);
   graph->SetPoint(79,0.59,368);
   graph->SetPoint(80,0.61,351);
   graph->SetPoint(81,0.63,358);
   graph->SetPoint(82,0.65,394);
   graph->SetPoint(83,0.67,358);
   graph->SetPoint(84,0.69,354);
   graph->SetPoint(85,0.71,380);
   graph->SetPoint(86,0.73,349);
   graph->SetPoint(87,0.75,327);
   graph->SetPoint(88,0.77,367);
   graph->SetPoint(89,0.79,352);
   graph->SetPoint(90,0.81,329);
   graph->SetPoint(91,0.83,306);
   graph->SetPoint(92,0.85,300);
   graph->SetPoint(93,0.87,326);
   graph->SetPoint(94,0.89,334);
   graph->SetPoint(95,0.91,288);
   graph->SetPoint(96,0.93,337);
   graph->SetPoint(97,0.95,294);
   graph->SetPoint(98,0.97,314);
   graph->SetPoint(99,0.99,297);
   graph->Draw("p");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
