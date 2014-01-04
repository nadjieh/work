ROOTINC		=-I$(shell root-config --incdir)
ROOTLIBS	=$(shell root-config --libs) -lMinuit -lMinuit2
ROOTCFLAGS	=$(shell root-config --cflags)
ROOTGLIBS	=$(shell root-config --glibs) -lMinuit -lMinuit2
HOMELIB		= $(HOME)/lib
TROOTLIBS	= -L$(HOMELIB) -lToto.2013
ESLIBS 		= -L$(HOMELIB) -lEventSelection.2013
PULIBS		= -L$(HOMELIB) -lLumi3DRW.2013
JETTOOLS	= -L$(HOMELIB) -lTools.2013
RECOLIBS	= -L$(HOMELIB) -lReco.2013
PHYSOBJLIBS	= -L$(HOMELIB) -lPhysObj.2013
TOYLIBS		= -L$(HOMELIB) -lToyAnalysis.2013
TROOTINCLUDES   = -I../../../TopBrussels/TopTreeProducer/interface
PUINCLUDES	=-I../../../TopBrussels/TopTreeAnalysis/MCInformation/interface/
JETINCLUDES	=-I../../../TopBrussels/TopTreeAnalysis/Tools/interface/
RECOINCLUDES	=-I../../../TopBrussels/TopTreeAnalysis/Reconstruction/interface/
PHYSOBJINCS	=-I../../PhysicsObjects/interface/
ESINCLUDES	=-I../../EventSelection/interface/
MYHEADERS=-I../interface

CXX=g++


#LIBS		= $(ROOTLIBS)
LIBS		= $(TROOTLIBS)
LIBS		+= $(ESLIBS)
#LIBS		+= $(PULIBS)
#LIBS		+= $(JETTOOLS)
#LIBS		+= $(RECOLIBS)
LIBS		+= $(PHYSOBJLIBS)
HEADERS 	=$(TROOTINCLUDES)
HEADERS		+=$(PUINCLUDES)
HEADERS		+=$(JETINCLUDES)
HEADERS 	+=$(RECOINCLUDES)
HEADERS 	+=$(ESINCLUDES)
HEADERS 	+=$(PHYSOBJINCS)


all:  sas clean

met: MET clean

sep: SEP clean

plot: PLOT clean

test: TEST clean

ll: LLTEST clean

val: VALTEST clean

jes: JES clean

ac:  Ac clean

base: BASEVAL clean

bb: BASEBIAS clean

nc: NOCORBIAS clean

tb: TWODBIAS clean

tdval: TWODVAL clean

odval: ONEDVAL clean

sys: SYST clean

acval: ACVAL clean

combac: COMBAC clean

sas:
	@echo "Compiling the ToyAnalysis .... \n"
	$(CXX) ToyAnalysis.C -c -o ToyAnalysis.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS)
	@echo "Linking ...... \n"
	g++ ToyAnalysis.o -o ToyAnalysis $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

MET:
	@echo "Compiling the ToyAnalysis .... \n"
	$(CXX) ToyAnalysis.C -c -o ToyAnalysis.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS)
	@echo "Linking ...... \n"
	g++ ToyAnalysis.o -o METToyAnalysis $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

SEP:
	@echo "Compiling the TA_WeightedCosThetaProducer .... \n"
	$(CXX) TA_WeightedCosThetaProducer.C -c -o TA_WeightedCosThetaProducer.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS)
	@echo "Linking ...... \n"
	g++ TA_WeightedCosThetaProducer.o -o ProduceWeightedCosTheta $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)	

JES:
	@echo "Compiling the FitTest .... \n"
	$(CXX) FitTest.C -c -o FitTest.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ FitTest.o -o doLLJES $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

PLOT:
	@echo "Compiling the ChiSquaredPlotter .... \n"
	$(CXX) ChiSquaredPlotter.C -c -o ChiSquaredPlotter.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS)
	@echo "Linking ...... \n"
	g++ ChiSquaredPlotter.o -o PlotChiSquared $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

TEST:
	@echo "Compiling the TA_HistogramOnly .... \n"
	$(CXX) TA_HistogramOnly.C -c -o TA_HistogramOnly.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS)
	@echo "Linking ...... \n"
	g++ TA_HistogramOnly.o -o doTest $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

LLTEST:
	@echo "Compiling the FitTest .... \n"
	$(CXX) FitTest.C -c -o FitTest.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ FitTest.o -o doLL $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)


Ac:
	@echo "Compiling the FitTest .... \n"
	$(CXX) ACFitTest.C -c -o ACFitTest.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ ACFitTest.o -o doACLL $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

VALTEST:
	@echo "Compiling the FitValidationTest .... \n"
	$(CXX) FitValidationTest.C -c -o FitValidationTest.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ FitValidationTest.o -o doValidation $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

BASEVAL:
	@echo "Compiling the BaseValidationTest .... \n"
	$(CXX) BaseValidationTest.C -c -o BaseValidationTest.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ BaseValidationTest.o -o doBaseValidation $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

BASEBIAS:
	@echo "Compiling the BiasBaseValidationTest .... \n"
	$(CXX) BiasBaseValidationTest.C -c -o BiasBaseValidationTest.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ BiasBaseValidationTest.o -o doBiasCheck $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

TWODVAL:
	@echo "Compiling the TwoDValidationTest .... \n"
	$(CXX) TwoDValidationTest.C -c -o TwoDValidationTest.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ TwoDValidationTest.o -o doTwoDValidation $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

TWODBIAS:
	@echo "Compiling the BiasTwoDValidationTest .... \n"
	$(CXX) BiasTwoDValidationTest.C -c -o BiasTwoDValidationTest.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ BiasTwoDValidationTest.o -o doTwoDBiasCheck $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

NOCORBIAS:
	@echo "Compiling the NoCorrelationBiasCheck .... \n"
	$(CXX) NoCorrelationBiasCheck.C -c -o NoCorrelationBiasCheck.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ NoCorrelationBiasCheck.o -o doNoCorrelationBiasCheck $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

ONEDVAL:
	@echo "Compiling the OneDValidationTest .... \n"
	$(CXX) OneDValidationTest.C -c -o OneDValidationTest.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ OneDValidationTest.o -o doOneDValidation $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

SYST:
	@echo "Compiling the SystematicVal .... \n"
	$(CXX) SystematicVal.C -c -o SystematicVal.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ SystematicVal.o -o doSystValidation $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

ACVAL:
	@echo "Compiling the ACValidationTest .... \n"
	$(CXX) ACValidationTest.C -c -o ACValidationTest.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ ACValidationTest.o -o doProdBiasEstimate $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)
COMBAC:
	@echo "Compiling the ACBiasCombinedFit .... \n"
	$(CXX) ACBiasCombinedFit.C -c -o ACBiasCombinedFit.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ ACBiasCombinedFit.o -o doCombProdBiasEstimate $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)
clean:
	@echo "Cleaning..."
	@rm -f *.o
	@rm -f *~


