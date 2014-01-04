HOMELIB		= $(HOME)/lib
ROOTINC		=-I$(shell root-config --incdir)
ROOTLIBS	=$(shell root-config --libs) -lMinuit
ROOTCFLAGS	=$(shell root-config --cflags)
ROOTGLIBS	=$(shell root-config --glibs) -lMinuit
TROOTLIBS	= -L$(HOMELIB) -lToto.2013
ESLIBS 		= -L$(HOMELIB) -lEventSelection.2013
PHYSOBJLIB	=-L$(HOMELIB) -lPhysObj.2013
TOYLIB	=-L$(HOMELIB) -lToyAnalysis.2013
ORSOLIB = -L$(HOMELIB) -lOrsoNtuples.2013
TROOTINCLUDES = -I../../../TopBrussels/TopTreeProducer/interface
PHYSOBJINC = -I../../AnalysisClasses/PhysicsObjects/interface/
TOYINCLUDES = -I../../AnalysisClasses/ToyAnalysis/interface/
MYHEADERS=-I../interface

CXX=g++

GLIBS		=$(ROOTGLIBS) 
LIBS		= $(ROOTLIBS)
LIBS		+= $(TROOTLIBS)
LIBS		+= $(ESLIBS)
LIBS		+= $(PHYSOBJLIB)
LIBS		+= $(TOYLIB)
LIBS		+= $(ORSOLIB)


HEADERS 	+=$(TROOTINCLUDES)
HEADERS 	+= $(PHYSOBJINC)
HEADERS 	+= $(TOYINCLUDES)
HEADERS 	+= $(MYHEADERS)


all:  MC clean

data:  DATA clean

qcd:  QCD clean

top:  TOP clean

dw: DEFW clean

gen: GEN clean

w: W clean
	
w2: W2 clean	

comb: Comb clean

y: Yield clean

anom: ANOM clean

dwqcd: DEFWQCD clean

Yield:
	@echo "Compiling the YieldGetter .... \n"
	$(CXX) YieldGetter.C -c -o YieldGetter.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ YieldGetter.o -o GetYield $(ROOTGLIBS) $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)
MC:
	@echo "Compiling the SelectAndSave .... \n"
	$(CXX) OrsoHistogramCreator.C -c -o OrsoHistogramCreator.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ OrsoHistogramCreator.o -o ImaginaryOrsoHistogramCreator $(ROOTGLIBS) $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)
W2:
	@echo "Compiling the SelectAndSave .... \n"
	$(CXX) OrsoHistogramCreator.C -c -o OrsoHistogramCreator.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ OrsoHistogramCreator.o -o WTemplatePlots $(ROOTGLIBS) $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)
GEN:
	@echo "Compiling the GenInfoStudies .... \n"
	$(CXX) GenInfoStudies.C -c -o GenInfoStudies.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ GenInfoStudies.o -o GenInfoStudies $(ROOTGLIBS) $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

W:
	@echo "Compiling the WTemplateHistogramCreator .... \n"
	$(CXX) WTemplateHistogramCreator.C -c -o WTemplateHistogramCreator.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ WTemplateHistogramCreator.o -o WTemplateHistogramCreator $(ROOTGLIBS) $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

Comb:
	@echo "Compiling the OrsoHistogramCreator_bkp .... \n"
	$(CXX) OrsoHistogramCreator_bkp.C -c -o OrsoHistogramCreator_bkp.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ OrsoHistogramCreator_bkp.o -o CombinationStudy $(ROOTGLIBS) $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

DATA:
	@echo "Compiling the SelectAndSave .... \n"
	$(CXX) OrsoHistogramCreator.C -c -o OrsoHistogramCreator.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ OrsoHistogramCreator.o -o DataOrsoHistogramCreator $(ROOTGLIBS) $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)


QCD:
	@echo "Compiling the SelectAndSave .... \n"
	$(CXX) OrsoHistogramCreator.C -c -o OrsoHistogramCreator.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ OrsoHistogramCreator.o -o QCDOrsoHistogramCreator $(ROOTGLIBS) $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

TOP:
	@echo "Compiling the SelectAndSave .... \n"
	$(CXX) OrsoHistogramCreator.C -c -o OrsoHistogramCreator.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ OrsoHistogramCreator.o -o TOPOrsoHistogramCreator $(ROOTGLIBS) $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

DEFW:
	@echo "Compiling the SelectAndSave .... \n"
	$(CXX) OrsoHistogramCreator.C -c -o OrsoHistogramCreator.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ OrsoHistogramCreator.o -o DefWOrsoHistogramCreator $(ROOTGLIBS) $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

DEFWQCD:
	@echo "Compiling the SelectAndSave .... \n"
	$(CXX) OrsoHistogramCreator.C -c -o OrsoHistogramCreator.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ OrsoHistogramCreator.o -o QCDWOrsoHistogramCreator $(ROOTGLIBS) $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)
ANOM:
	@echo "Compiling the SevenTeVOrsoHistogramCreator .... \n"
	$(CXX) SevenTeVOrsoHistogramCreator.C -c -o SevenTeVOrsoHistogramCreator.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ SevenTeVOrsoHistogramCreator.o -o Mu30SevenTeVOrsoHistogramCreator $(ROOTGLIBS) $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)
clean:
	@echo "Cleaning..."
	@rm -f *.o


