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
TROOTINCLUDES = -I../../../../TopBrussels/TopTreeProducer/interface
PHYSOBJINC = -I../../../AnalysisClasses/PhysicsObjects/interface/
TOYINCLUDES = -I../../../AnalysisClasses/ToyAnalysis/interface/
MYHEADERS=-I../../interface

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

rwsub: RWSUB clean

qcd:  QCD clean

dw: DEFW clean

MC:
	@echo "Compiling the SelectAndSave .... \n"
	$(CXX) OrsoHistogramCreator.C -c -o OrsoHistogramCreator.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ OrsoHistogramCreator.o -o OrsoHistogramCreator $(ROOTGLIBS) $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

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
	
RWSUB:
	@echo "Compiling the ReweightorTopSyst  .... \n"
	$(CXX) ReweightorTopSyst.C -c -o ReweightorTopSyst.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ ReweightorTopSyst.o -o myReweightorTopSyst $(ROOTGLIBS) $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

clean:
	@echo "Cleaning..."
	@rm -f *.o

DEFW:
	@echo "Compiling the SelectAndSave .... \n"
	$(CXX) OrsoHistogramCreator.C -c -o OrsoHistogramCreator.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ OrsoHistogramCreator.o -o DefWOrsoHistogramCreator $(ROOTGLIBS) $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)
