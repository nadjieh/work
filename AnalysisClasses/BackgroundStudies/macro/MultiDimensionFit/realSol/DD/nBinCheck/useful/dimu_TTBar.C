{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Jan  7 17:33:18 2014) by ROOT version5.32/00
   TCanvas *c1 = new TCanvas("c1", "c1",0,0,700,500);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   
   TGraph *graph = new TGraph(2);
   graph->SetName("Graph");
   graph->SetTitle("t\\bar{t}\\rightarrow\\mu\\mu");
   graph->SetFillColor(1);
   graph->SetPoint(0,1,1000);
   graph->SetPoint(1,-1,0);
   graph->Draw("ap");
   
   graph = new TGraph(10);
   graph->SetName("dimu_TTBar");
   graph->SetTitle("10	bins");

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#ff0000");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,-0.9,178);
   graph->SetPoint(1,-0.7,450);
   graph->SetPoint(2,-0.5,513);
   graph->SetPoint(3,-0.3,490);
   graph->SetPoint(4,-0.1,439);
   graph->SetPoint(5,0.1,421);
   graph->SetPoint(6,0.3,339);
   graph->SetPoint(7,0.5,304);
   graph->SetPoint(8,0.7,247);
   graph->SetPoint(9,0.9,210);
   graph->Draw("p");
   
   graph = new TGraph(25);
   graph->SetName("dimu_TTBar");
   graph->SetTitle("25	bins");

   ci = TColor::GetColor("#0000ff");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,-0.96,19);
   graph->SetPoint(1,-0.88,78);
   graph->SetPoint(2,-0.8,143);
   graph->SetPoint(3,-0.72,179);
   graph->SetPoint(4,-0.64,209);
   graph->SetPoint(5,-0.56,183);
   graph->SetPoint(6,-0.48,224);
   graph->SetPoint(7,-0.4,214);
   graph->SetPoint(8,-0.32,191);
   graph->SetPoint(9,-0.24,191);
   graph->SetPoint(10,-0.16,192);
   graph->SetPoint(11,-0.08,177);
   graph->SetPoint(12,-3.469446952e-17,163);
   graph->SetPoint(13,0.08,161);
   graph->SetPoint(14,0.16,167);
   graph->SetPoint(15,0.24,142);
   graph->SetPoint(16,0.32,129);
   graph->SetPoint(17,0.4,138);
   graph->SetPoint(18,0.48,112);
   graph->SetPoint(19,0.56,122);
   graph->SetPoint(20,0.64,100);
   graph->SetPoint(21,0.72,97);
   graph->SetPoint(22,0.8,99);
   graph->SetPoint(23,0.88,81);
   graph->SetPoint(24,0.96,80);
   graph->Draw("p");
   
   graph = new TGraph(50);
   graph->SetName("dimu_TTBar");
   graph->SetTitle("50	bins");

   ci = TColor::GetColor("#00ff00");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,-0.98,4);
   graph->SetPoint(1,-0.94,15);
   graph->SetPoint(2,-0.9,21);
   graph->SetPoint(3,-0.86,57);
   graph->SetPoint(4,-0.82,81);
   graph->SetPoint(5,-0.78,62);
   graph->SetPoint(6,-0.74,87);
   graph->SetPoint(7,-0.7,92);
   graph->SetPoint(8,-0.66,95);
   graph->SetPoint(9,-0.62,114);
   graph->SetPoint(10,-0.58,88);
   graph->SetPoint(11,-0.54,95);
   graph->SetPoint(12,-0.5,101);
   graph->SetPoint(13,-0.46,123);
   graph->SetPoint(14,-0.42,106);
   graph->SetPoint(15,-0.38,108);
   graph->SetPoint(16,-0.34,102);
   graph->SetPoint(17,-0.3,89);
   graph->SetPoint(18,-0.26,98);
   graph->SetPoint(19,-0.22,93);
   graph->SetPoint(20,-0.18,92);
   graph->SetPoint(21,-0.14,100);
   graph->SetPoint(22,-0.1,85);
   graph->SetPoint(23,-0.06,92);
   graph->SetPoint(24,-0.02,70);
   graph->SetPoint(25,0.02,93);
   graph->SetPoint(26,0.06,76);
   graph->SetPoint(27,0.1,85);
   graph->SetPoint(28,0.14,99);
   graph->SetPoint(29,0.18,68);
   graph->SetPoint(30,0.22,78);
   graph->SetPoint(31,0.26,64);
   graph->SetPoint(32,0.3,68);
   graph->SetPoint(33,0.34,61);
   graph->SetPoint(34,0.38,68);
   graph->SetPoint(35,0.42,70);
   graph->SetPoint(36,0.46,50);
   graph->SetPoint(37,0.5,62);
   graph->SetPoint(38,0.54,67);
   graph->SetPoint(39,0.58,55);
   graph->SetPoint(40,0.62,45);
   graph->SetPoint(41,0.66,55);
   graph->SetPoint(42,0.7,43);
   graph->SetPoint(43,0.74,54);
   graph->SetPoint(44,0.78,50);
   graph->SetPoint(45,0.82,49);
   graph->SetPoint(46,0.86,47);
   graph->SetPoint(47,0.9,34);
   graph->SetPoint(48,0.94,50);
   graph->SetPoint(49,0.98,30);
   graph->Draw("p");
   
   graph = new TGraph(72);
   graph->SetName("dimu_TTBar");
   graph->SetTitle("72	bins");

   ci = TColor::GetColor("#993300");
   graph->SetMarkerColor(ci);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,-0.9861111111,1);
   graph->SetPoint(1,-0.9583333333,5);
   graph->SetPoint(2,-0.9305555556,13);
   graph->SetPoint(3,-0.9027777778,18);
   graph->SetPoint(4,-0.875,32);
   graph->SetPoint(5,-0.8472222222,45);
   graph->SetPoint(6,-0.8194444444,47);
   graph->SetPoint(7,-0.7916666667,45);
   graph->SetPoint(8,-0.7638888889,57);
   graph->SetPoint(9,-0.7361111111,59);
   graph->SetPoint(10,-0.7083333333,62);
   graph->SetPoint(11,-0.6805555556,73);
   graph->SetPoint(12,-0.6527777778,58);
   graph->SetPoint(13,-0.625,80);
   graph->SetPoint(14,-0.5972222222,71);
   graph->SetPoint(15,-0.5694444444,58);
   graph->SetPoint(16,-0.5416666667,68);
   graph->SetPoint(17,-0.5138888889,69);
   graph->SetPoint(18,-0.4861111111,76);
   graph->SetPoint(19,-0.4583333333,87);
   graph->SetPoint(20,-0.4305555556,66);
   graph->SetPoint(21,-0.4027777778,76);
   graph->SetPoint(22,-0.375,80);
   graph->SetPoint(23,-0.3472222222,79);
   graph->SetPoint(24,-0.3194444444,58);
   graph->SetPoint(25,-0.2916666667,63);
   graph->SetPoint(26,-0.2638888889,62);
   graph->SetPoint(27,-0.2361111111,75);
   graph->SetPoint(28,-0.2083333333,57);
   graph->SetPoint(29,-0.1805555556,68);
   graph->SetPoint(30,-0.1527777778,73);
   graph->SetPoint(31,-0.125,56);
   graph->SetPoint(32,-0.09722222222,64);
   graph->SetPoint(33,-0.06944444444,72);
   graph->SetPoint(34,-0.04166666667,51);
   graph->SetPoint(35,-0.01388888889,46);
   graph->SetPoint(36,0.01388888889,58);
   graph->SetPoint(37,0.04166666667,65);
   graph->SetPoint(38,0.06944444444,52);
   graph->SetPoint(39,0.09722222222,58);
   graph->SetPoint(40,0.125,65);
   graph->SetPoint(41,0.1527777778,68);
   graph->SetPoint(42,0.1805555556,47);
   graph->SetPoint(43,0.2083333333,58);
   graph->SetPoint(44,0.2361111111,50);
   graph->SetPoint(45,0.2638888889,40);
   graph->SetPoint(46,0.2916666667,47);
   graph->SetPoint(47,0.3194444444,43);
   graph->SetPoint(48,0.3472222222,44);
   graph->SetPoint(49,0.375,51);
   graph->SetPoint(50,0.4027777778,39);
   graph->SetPoint(51,0.4305555556,50);
   graph->SetPoint(52,0.4583333333,36);
   graph->SetPoint(53,0.4861111111,44);
   graph->SetPoint(54,0.5138888889,41);
   graph->SetPoint(55,0.5416666667,48);
   graph->SetPoint(56,0.5694444444,40);
   graph->SetPoint(57,0.5972222222,33);
   graph->SetPoint(58,0.625,31);
   graph->SetPoint(59,0.6527777778,39);
   graph->SetPoint(60,0.6805555556,29);
   graph->SetPoint(61,0.7083333333,33);
   graph->SetPoint(62,0.7361111111,38);
   graph->SetPoint(63,0.7638888889,39);
   graph->SetPoint(64,0.7916666667,32);
   graph->SetPoint(65,0.8194444444,34);
   graph->SetPoint(66,0.8472222222,35);
   graph->SetPoint(67,0.875,31);
   graph->SetPoint(68,0.9027777778,20);
   graph->SetPoint(69,0.9305555556,41);
   graph->SetPoint(70,0.9583333333,25);
   graph->SetPoint(71,0.9861111111,17);
   graph->Draw("p");
   
   graph = new TGraph(100);
   graph->SetName("dimu_TTBar");
   graph->SetTitle("100	bins");
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,-0.99,1);
   graph->SetPoint(1,-0.97,3);
   graph->SetPoint(2,-0.95,3);
   graph->SetPoint(3,-0.93,12);
   graph->SetPoint(4,-0.91,9);
   graph->SetPoint(5,-0.89,12);
   graph->SetPoint(6,-0.87,30);
   graph->SetPoint(7,-0.85,27);
   graph->SetPoint(8,-0.83,29);
   graph->SetPoint(9,-0.81,52);
   graph->SetPoint(10,-0.79,26);
   graph->SetPoint(11,-0.77,36);
   graph->SetPoint(12,-0.75,50);
   graph->SetPoint(13,-0.73,37);
   graph->SetPoint(14,-0.71,39);
   graph->SetPoint(15,-0.69,53);
   graph->SetPoint(16,-0.67,47);
   graph->SetPoint(17,-0.65,48);
   graph->SetPoint(18,-0.63,61);
   graph->SetPoint(19,-0.61,53);
   graph->SetPoint(20,-0.59,48);
   graph->SetPoint(21,-0.57,40);
   graph->SetPoint(22,-0.55,43);
   graph->SetPoint(23,-0.53,52);
   graph->SetPoint(24,-0.51,50);
   graph->SetPoint(25,-0.49,51);
   graph->SetPoint(26,-0.47,64);
   graph->SetPoint(27,-0.45,59);
   graph->SetPoint(28,-0.43,47);
   graph->SetPoint(29,-0.41,59);
   graph->SetPoint(30,-0.39,45);
   graph->SetPoint(31,-0.37,63);
   graph->SetPoint(32,-0.35,52);
   graph->SetPoint(33,-0.33,50);
   graph->SetPoint(34,-0.31,45);
   graph->SetPoint(35,-0.29,44);
   graph->SetPoint(36,-0.27,42);
   graph->SetPoint(37,-0.25,56);
   graph->SetPoint(38,-0.23,51);
   graph->SetPoint(39,-0.21,42);
   graph->SetPoint(40,-0.19,48);
   graph->SetPoint(41,-0.17,44);
   graph->SetPoint(42,-0.15,55);
   graph->SetPoint(43,-0.13,45);
   graph->SetPoint(44,-0.11,39);
   graph->SetPoint(45,-0.09,46);
   graph->SetPoint(46,-0.07,52);
   graph->SetPoint(47,-0.05,40);
   graph->SetPoint(48,-0.03,35);
   graph->SetPoint(49,-0.01,35);
   graph->SetPoint(50,0.01,44);
   graph->SetPoint(51,0.03,49);
   graph->SetPoint(52,0.05,41);
   graph->SetPoint(53,0.07,35);
   graph->SetPoint(54,0.09,46);
   graph->SetPoint(55,0.11,39);
   graph->SetPoint(56,0.13,46);
   graph->SetPoint(57,0.15,53);
   graph->SetPoint(58,0.17,31);
   graph->SetPoint(59,0.19,37);
   graph->SetPoint(60,0.21,47);
   graph->SetPoint(61,0.23,31);
   graph->SetPoint(62,0.25,37);
   graph->SetPoint(63,0.27,27);
   graph->SetPoint(64,0.29,39);
   graph->SetPoint(65,0.31,29);
   graph->SetPoint(66,0.33,25);
   graph->SetPoint(67,0.35,36);
   graph->SetPoint(68,0.37,39);
   graph->SetPoint(69,0.39,29);
   graph->SetPoint(70,0.41,32);
   graph->SetPoint(71,0.43,38);
   graph->SetPoint(72,0.45,31);
   graph->SetPoint(73,0.47,19);
   graph->SetPoint(74,0.49,35);
   graph->SetPoint(75,0.51,27);
   graph->SetPoint(76,0.53,30);
   graph->SetPoint(77,0.55,37);
   graph->SetPoint(78,0.57,32);
   graph->SetPoint(79,0.59,23);
   graph->SetPoint(80,0.61,20);
   graph->SetPoint(81,0.63,25);
   graph->SetPoint(82,0.65,28);
   graph->SetPoint(83,0.67,27);
   graph->SetPoint(84,0.69,17);
   graph->SetPoint(85,0.71,26);
   graph->SetPoint(86,0.73,26);
   graph->SetPoint(87,0.75,28);
   graph->SetPoint(88,0.77,28);
   graph->SetPoint(89,0.79,22);
   graph->SetPoint(90,0.81,28);
   graph->SetPoint(91,0.83,21);
   graph->SetPoint(92,0.85,26);
   graph->SetPoint(93,0.87,21);
   graph->SetPoint(94,0.89,15);
   graph->SetPoint(95,0.91,19);
   graph->SetPoint(96,0.93,32);
   graph->SetPoint(97,0.95,18);
   graph->SetPoint(98,0.97,18);
   graph->SetPoint(99,0.99,12);
   graph->Draw("p");
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
