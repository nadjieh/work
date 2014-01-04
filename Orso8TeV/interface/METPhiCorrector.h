/* 
 * File:   METPhiCorrector.h
 * Author: nadjieh
 *
 * Created on August 26, 2013, 3:38 PM
 */

#ifndef METPHICORRECTOR_H
#define	METPHICORRECTOR_H
#include "TH1.h"
#include "TH2.h"
#include "TProfile.h"
#include <math.h>

const double vtxBins_[] = {0, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 59};

class METPhiCorrector {
public:

    METPhiCorrector() {

        TChanMETX = new TProfile("TChanMETX", "hMetXNvtx", 24, vtxBins_);
        TChanMETX->SetBinEntries(1, 106);
        TChanMETX->SetBinEntries(2, 228);
        TChanMETX->SetBinEntries(3, 538);
        TChanMETX->SetBinEntries(4, 1061);
        TChanMETX->SetBinEntries(5, 1612);
        TChanMETX->SetBinEntries(6, 2262);
        TChanMETX->SetBinEntries(7, 2963);
        TChanMETX->SetBinEntries(8, 3689);
        TChanMETX->SetBinEntries(9, 4286);
        TChanMETX->SetBinEntries(10, 4803);
        TChanMETX->SetBinEntries(11, 5134);
        TChanMETX->SetBinEntries(12, 5242);
        TChanMETX->SetBinEntries(13, 5410);
        TChanMETX->SetBinEntries(14, 5262);
        TChanMETX->SetBinEntries(15, 4957);
        TChanMETX->SetBinEntries(16, 4711);
        TChanMETX->SetBinEntries(17, 4161);
        TChanMETX->SetBinEntries(18, 3860);
        TChanMETX->SetBinEntries(19, 3521);
        TChanMETX->SetBinEntries(20, 2871);
        TChanMETX->SetBinEntries(21, 2521);
        TChanMETX->SetBinEntries(22, 2058);
        TChanMETX->SetBinEntries(23, 1771);
        TChanMETX->SetBinEntries(24, 6679);
        TChanMETX->SetBinContent(1, -329);
        TChanMETX->SetBinContent(2, 222);
        TChanMETX->SetBinContent(3, -1097);
        TChanMETX->SetBinContent(4, -125.5);
        TChanMETX->SetBinContent(5, -266);
        TChanMETX->SetBinContent(6, 514);
        TChanMETX->SetBinContent(7, -5666.5);
        TChanMETX->SetBinContent(8, 3072.5);
        TChanMETX->SetBinContent(9, 3263);
        TChanMETX->SetBinContent(10, 4457.5);
        TChanMETX->SetBinContent(11, -1946);
        TChanMETX->SetBinContent(12, -1364);
        TChanMETX->SetBinContent(13, 34);
        TChanMETX->SetBinContent(14, 1215);
        TChanMETX->SetBinContent(15, -2423.5);
        TChanMETX->SetBinContent(16, 1272.5);
        TChanMETX->SetBinContent(17, 1730.5);
        TChanMETX->SetBinContent(18, 2851);
        TChanMETX->SetBinContent(19, 5491.5);
        TChanMETX->SetBinContent(20, -850.5);
        TChanMETX->SetBinContent(21, 1559.5);
        TChanMETX->SetBinContent(22, 1941);
        TChanMETX->SetBinContent(23, -525.5);
        TChanMETX->SetBinContent(24, -1497.5);
        TChanMETX->SetBinError(1, 436.2597);
        TChanMETX->SetBinError(2, 583.4252);
        TChanMETX->SetBinError(3, 870.7436);
        TChanMETX->SetBinError(4, 1272.902);
        TChanMETX->SetBinError(5, 1634.967);
        TChanMETX->SetBinError(6, 1926.693);
        TChanMETX->SetBinError(7, 2151.984);
        TChanMETX->SetBinError(8, 2465.184);
        TChanMETX->SetBinError(9, 2620.401);
        TChanMETX->SetBinError(10, 2809.729);
        TChanMETX->SetBinError(11, 2931.839);
        TChanMETX->SetBinError(12, 3017.727);
        TChanMETX->SetBinError(13, 3067.344);
        TChanMETX->SetBinError(14, 3027.223);
        TChanMETX->SetBinError(15, 2973.611);
        TChanMETX->SetBinError(16, 2868.274);
        TChanMETX->SetBinError(17, 2715.213);
        TChanMETX->SetBinError(18, 2685.184);
        TChanMETX->SetBinError(19, 2510.499);
        TChanMETX->SetBinError(20, 2311.969);
        TChanMETX->SetBinError(21, 2151.349);
        TChanMETX->SetBinError(22, 1910.374);
        TChanMETX->SetBinError(23, 1820.383);
        TChanMETX->SetBinError(24, 3601.047);

        TChanMETY = new TProfile("TChanMETY", "hMetYNvtx", 24, vtxBins_);
        TChanMETY->SetBinEntries(1, 106);
        TChanMETY->SetBinEntries(2, 228);
        TChanMETY->SetBinEntries(3, 537);
        TChanMETY->SetBinEntries(4, 1062);
        TChanMETY->SetBinEntries(5, 1614);
        TChanMETY->SetBinEntries(6, 2262);
        TChanMETY->SetBinEntries(7, 2964);
        TChanMETY->SetBinEntries(8, 3689);
        TChanMETY->SetBinEntries(9, 4282);
        TChanMETY->SetBinEntries(10, 4799);
        TChanMETY->SetBinEntries(11, 5129);
        TChanMETY->SetBinEntries(12, 5241);
        TChanMETY->SetBinEntries(13, 5414);
        TChanMETY->SetBinEntries(14, 5258);
        TChanMETY->SetBinEntries(15, 4959);
        TChanMETY->SetBinEntries(16, 4707);
        TChanMETY->SetBinEntries(17, 4157);
        TChanMETY->SetBinEntries(18, 3854);
        TChanMETY->SetBinEntries(19, 3524);
        TChanMETY->SetBinEntries(20, 2873);
        TChanMETY->SetBinEntries(21, 2520);
        TChanMETY->SetBinEntries(22, 2060);
        TChanMETY->SetBinEntries(23, 1772);
        TChanMETY->SetBinEntries(24, 6680);
        TChanMETY->SetBinContent(1, 315);
        TChanMETY->SetBinContent(2, -1048);
        TChanMETY->SetBinContent(3, 579.5);
        TChanMETY->SetBinContent(4, -2955);
        TChanMETY->SetBinContent(5, -1440);
        TChanMETY->SetBinContent(6, -4985);
        TChanMETY->SetBinContent(7, -3524);
        TChanMETY->SetBinContent(8, -2987.5);
        TChanMETY->SetBinContent(9, -3867);
        TChanMETY->SetBinContent(10, -8720.5);
        TChanMETY->SetBinContent(11, -10094.5);
        TChanMETY->SetBinContent(12, -13496.5);
        TChanMETY->SetBinContent(13, -14956);
        TChanMETY->SetBinContent(14, -19781);
        TChanMETY->SetBinContent(15, -15604.5);
        TChanMETY->SetBinContent(16, -20266.5);
        TChanMETY->SetBinContent(17, -17124.5);
        TChanMETY->SetBinContent(18, -14697);
        TChanMETY->SetBinContent(19, -12604);
        TChanMETY->SetBinContent(20, -9715.5);
        TChanMETY->SetBinContent(21, -16243);
        TChanMETY->SetBinContent(22, -8581);
        TChanMETY->SetBinContent(23, -7915);
        TChanMETY->SetBinContent(24, -43765);
        TChanMETY->SetBinError(1, 371.2284);
        TChanMETY->SetBinError(2, 566.6719);
        TChanMETY->SetBinError(3, 915.358);
        TChanMETY->SetBinError(4, 1345.496);
        TChanMETY->SetBinError(5, 1620.634);
        TChanMETY->SetBinError(6, 1944.305);
        TChanMETY->SetBinError(7, 2173.811);
        TChanMETY->SetBinError(8, 2476.679);
        TChanMETY->SetBinError(9, 2643.83);
        TChanMETY->SetBinError(10, 2773.277);
        TChanMETY->SetBinError(11, 2889.466);
        TChanMETY->SetBinError(12, 2975.506);
        TChanMETY->SetBinError(13, 3116.814);
        TChanMETY->SetBinError(14, 3035.966);
        TChanMETY->SetBinError(15, 2947.667);
        TChanMETY->SetBinError(16, 2896.811);
        TChanMETY->SetBinError(17, 2730.583);
        TChanMETY->SetBinError(18, 2597.234);
        TChanMETY->SetBinError(19, 2483.065);
        TChanMETY->SetBinError(20, 2327.893);
        TChanMETY->SetBinError(21, 2172.269);
        TChanMETY->SetBinError(22, 1943.908);
        TChanMETY->SetBinError(23, 1880.624);
        TChanMETY->SetBinError(24, 3590.937);

        DataMETX = new TProfile("DataMETX","hMetXNvtx",24, vtxBins_);
        DataMETX->SetBinEntries(1, 80);
        DataMETX->SetBinEntries(2, 272);
        DataMETX->SetBinEntries(3, 691);
        DataMETX->SetBinEntries(4, 1397);
        DataMETX->SetBinEntries(5, 2391);
        DataMETX->SetBinEntries(6, 3534);
        DataMETX->SetBinEntries(7, 4744);
        DataMETX->SetBinEntries(8, 6010);
        DataMETX->SetBinEntries(9, 6792);
        DataMETX->SetBinEntries(10, 7733);
        DataMETX->SetBinEntries(11, 7968);
        DataMETX->SetBinEntries(12, 8060);
        DataMETX->SetBinEntries(13, 7950);
        DataMETX->SetBinEntries(14, 7655);
        DataMETX->SetBinEntries(15, 7075);
        DataMETX->SetBinEntries(16, 6510);
        DataMETX->SetBinEntries(17, 5709);
        DataMETX->SetBinEntries(18, 4868);
        DataMETX->SetBinEntries(19, 4226);
        DataMETX->SetBinEntries(20, 3460);
        DataMETX->SetBinEntries(21, 2710);
        DataMETX->SetBinEntries(22, 2004);
        DataMETX->SetBinEntries(23, 1634);
        DataMETX->SetBinEntries(24, 3756);
        DataMETX->SetBinContent(1, 147);
        DataMETX->SetBinContent(2, -240);
        DataMETX->SetBinContent(3, 229.5);
        DataMETX->SetBinContent(4, 666.5);
        DataMETX->SetBinContent(5, 5180.5);
        DataMETX->SetBinContent(6, 7671);
        DataMETX->SetBinContent(7, 12566);
        DataMETX->SetBinContent(8, 15732);
        DataMETX->SetBinContent(9, 18285);
        DataMETX->SetBinContent(10, 28753.5);
        DataMETX->SetBinContent(11, 22081);
        DataMETX->SetBinContent(12, 32301);
        DataMETX->SetBinContent(13, 29842);
        DataMETX->SetBinContent(14, 34862.5);
        DataMETX->SetBinContent(15, 34638.5);
        DataMETX->SetBinContent(16, 29716);
        DataMETX->SetBinContent(17, 29808.5);
        DataMETX->SetBinContent(18, 28982);
        DataMETX->SetBinContent(19, 21953);
        DataMETX->SetBinContent(20, 26165);
        DataMETX->SetBinContent(21, 19535);
        DataMETX->SetBinContent(22, 15646);
        DataMETX->SetBinContent(23, 14177);
        DataMETX->SetBinContent(24, 30113);
        DataMETX->SetBinError(1, 324.1358);
        DataMETX->SetBinError(2, 650.947);
        DataMETX->SetBinError(3, 1100.372);
        DataMETX->SetBinError(4, 1567.666);
        DataMETX->SetBinError(5, 1982.198);
        DataMETX->SetBinError(6, 2488.923);
        DataMETX->SetBinError(7, 2871.175);
        DataMETX->SetBinError(8, 3207.585);
        DataMETX->SetBinError(9, 3420.462);
        DataMETX->SetBinError(10, 3736.797);
        DataMETX->SetBinError(11, 3773.426);
        DataMETX->SetBinError(12, 3784.561);
        DataMETX->SetBinError(13, 3840.794);
        DataMETX->SetBinError(14, 3822.592);
        DataMETX->SetBinError(15, 3718.978);
        DataMETX->SetBinError(16, 3580.362);
        DataMETX->SetBinError(17, 3252.038);
        DataMETX->SetBinError(18, 3113.295);
        DataMETX->SetBinError(19, 2985.359);
        DataMETX->SetBinError(20, 2665.011);
        DataMETX->SetBinError(21, 2312.899);
        DataMETX->SetBinError(22, 2031.574);
        DataMETX->SetBinError(23, 1861.92);
        DataMETX->SetBinError(24, 2849.593);

        DataMETY = new TProfile("DataMETY", "hMetYNvtx", 24, vtxBins_);
        DataMETY->SetBinEntries(1, 78);
        DataMETY->SetBinEntries(2, 272);
        DataMETY->SetBinEntries(3, 692);
        DataMETY->SetBinEntries(4, 1399);
        DataMETY->SetBinEntries(5, 2393);
        DataMETY->SetBinEntries(6, 3537);
        DataMETY->SetBinEntries(7, 4746);
        DataMETY->SetBinEntries(8, 6011);
        DataMETY->SetBinEntries(9, 6797);
        DataMETY->SetBinEntries(10, 7732);
        DataMETY->SetBinEntries(11, 7968);
        DataMETY->SetBinEntries(12, 8059);
        DataMETY->SetBinEntries(13, 7953);
        DataMETY->SetBinEntries(14, 7654);
        DataMETY->SetBinEntries(15, 7068);
        DataMETY->SetBinEntries(16, 6522);
        DataMETY->SetBinEntries(17, 5709);
        DataMETY->SetBinEntries(18, 4865);
        DataMETY->SetBinEntries(19, 4224);
        DataMETY->SetBinEntries(20, 3457);
        DataMETY->SetBinEntries(21, 2711);
        DataMETY->SetBinEntries(22, 2005);
        DataMETY->SetBinEntries(23, 1634);
        DataMETY->SetBinEntries(24, 3753);
        DataMETY->SetBinContent(1, 490);
        DataMETY->SetBinContent(2, -224);
        DataMETY->SetBinContent(3, -1230);
        DataMETY->SetBinContent(4, -644.5);
        DataMETY->SetBinContent(5, -1364.5);
        DataMETY->SetBinContent(6, -6949.5);
        DataMETY->SetBinContent(7, -5657);
        DataMETY->SetBinContent(8, -18424.5);
        DataMETY->SetBinContent(9, -14044.5);
        DataMETY->SetBinContent(10, -17549);
        DataMETY->SetBinContent(11, -21364);
        DataMETY->SetBinContent(12, -23287.5);
        DataMETY->SetBinContent(13, -19713.5);
        DataMETY->SetBinContent(14, -27234);
        DataMETY->SetBinContent(15, -18934);
        DataMETY->SetBinContent(16, -24592);
        DataMETY->SetBinContent(17, -18436.5);
        DataMETY->SetBinContent(18, -16631.5);
        DataMETY->SetBinContent(19, -19957);
        DataMETY->SetBinContent(20, -16386.5);
        DataMETY->SetBinContent(21, -10410.5);
        DataMETY->SetBinContent(22, -9974.5);
        DataMETY->SetBinContent(23, -8751);
        DataMETY->SetBinContent(24, -21542.5);
        DataMETY->SetBinError(1, 359.0508);
        DataMETY->SetBinError(2, 659.3557);
        DataMETY->SetBinError(3, 1075.541);
        DataMETY->SetBinError(4, 1507.922);
        DataMETY->SetBinError(5, 1959.794);
        DataMETY->SetBinError(6, 2459.721);
        DataMETY->SetBinError(7, 2900.185);
        DataMETY->SetBinError(8, 3178.788);
        DataMETY->SetBinError(9, 3495.94);
        DataMETY->SetBinError(10, 3705.644);
        DataMETY->SetBinError(11, 3695.695);
        DataMETY->SetBinError(12, 3807.485);
        DataMETY->SetBinError(13, 3780.517);
        DataMETY->SetBinError(14, 3816.898);
        DataMETY->SetBinError(15, 3644.61);
        DataMETY->SetBinError(16, 3457.086);
        DataMETY->SetBinError(17, 3296.076);
        DataMETY->SetBinError(18, 3043.342);
        DataMETY->SetBinError(19, 2927.153);
        DataMETY->SetBinError(20, 2562.3);
        DataMETY->SetBinError(21, 2294.702);
        DataMETY->SetBinError(22, 2063.452);
        DataMETY->SetBinError(23, 1807.214);
        DataMETY->SetBinError(24, 2770.889);
    };

    virtual ~METPhiCorrector() {
    };

    double CorrectMETX(double met, double phi, double vtx) {
        int iBin = TChanMETX->GetXaxis()->FindBin(vtx);
        double iContent = TChanMETX->GetBinContent(iBin);
        return (met * cos(phi) - iContent);
    }

    double CorrectMETY(double met, double phi, double vtx) {
        int iBin = TChanMETY->GetXaxis()->FindBin(vtx);
        double iContent = TChanMETY->GetBinContent(iBin);
        return (met * sin(phi) - iContent);
    }

    double CorrectPhi(double met, double phi, double vtx) {
        double metx = CorrectMETX(met, phi, vtx);
        double mety = CorrectMETY(met, phi, vtx);
        double ret = 10000;
        if (metx < 0) {
            if (mety > 0)ret = atan(mety / metx) + M_PI;
            if (mety < 0)ret = atan(mety / metx) - M_PI;
        } else ret = (atan(mety / metx));
        return ret;
    }

    double CorrectMETXData(double met, double phi, double vtx) {
        int iBin = DataMETX->GetXaxis()->FindBin(vtx);
        double iContent = DataMETX->GetBinContent(iBin);
        return (met * cos(phi) - iContent);
    }

    double CorrectMETYData(double met, double phi, double vtx) {
        int iBin = DataMETY->GetXaxis()->FindBin(vtx);
        double iContent = DataMETY->GetBinContent(iBin);
        return (met * sin(phi) - iContent);
    }

    double CorrectPhiData(double met, double phi, double vtx) {
        double metx = CorrectMETXData(met, phi, vtx);
        double mety = CorrectMETYData(met, phi, vtx);
        double ret = 10000;
        if (metx < 0) {
            if (mety > 0)ret = atan(mety / metx) + M_PI;
            if (mety < 0)ret = atan(mety / metx) - M_PI;
        } else ret = (atan(mety / metx));
        return ret;
    }
private:
    TProfile * TChanMETX;
    TProfile * TChanMETY;
    TProfile * DataMETX;
    TProfile * DataMETY;

};

#endif	/* METPHICORRECTOR_H */

