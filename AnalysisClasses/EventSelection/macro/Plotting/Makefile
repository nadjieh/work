ROOTINC		=-I$(shell root-config --incdir)
ROOTLIBS	=$(shell root-config --libs) -lMinuit
ROOTCFLAGS	=$(shell root-config --cflags)
ROOTGLIBS	=$(shell root-config --glibs) -lMinuit
HOMELIB		= $(HOME)/lib
TROOTLIBS	= -L$(HOMELIB) -lToto.2011
ESLIBS 		= -L$(HOMELIB) -lEventSelection.2011
PULIBS		= -L$(HOMELIB) -lLumi3DRW.2011
JETTOOLS	= -L$(HOMELIB) -lTools.2011
RECOLIBS	= -L$(HOMELIB) -lReco.2011
PHYSOBJLIBS	= -L$(HOMELIB) -lPhysObj.2011
TOYLIBS		= -L$(HOMELIB) -lToyAnalysis.2011
TROOTINCLUDES   = -I../../../../TopBrussels/TopTreeProducer/interface
PUINCLUDES	=-I../../../../TopBrussels/TopTreeAnalysis/MCInformation/interface/
JETINCLUDES	=-I../../../../TopBrussels/TopTreeAnalysis/Tools/interface/
RECOINCLUDES	=-I../../../../TopBrussels/TopTreeAnalysis/Reconstruction/interface/
PHYSOBJINCS	=-I../../../PhysicsObjects/interface/
ESINCLUDES	=-I../../../EventSelection/interface/
MYHEADERS=-I../../interface

CXX=g++


#LIBS		= $(ROOTLIBS)
LIBS		= $(TROOTLIBS)
LIBS		+= $(ESLIBS)
LIBS		+= $(PULIBS)
LIBS		+= $(JETTOOLS)
LIBS		+= $(RECOLIBS)
LIBS		+= $(PHYSOBJLIBS)
HEADERS 	=$(TROOTINCLUDES)
HEADERS		+=$(PUINCLUDES)
HEADERS		+=$(JETINCLUDES)
HEADERS 	+=$(RECOINCLUDES)
HEADERS 	+=$(ESINCLUDES)
HEADERS 	+=$(PHYSOBJINCS)

all:  hist clean

plot: pl clean	

W: w clean

weight: Weight clean

top: TopTemp clean

22: 2Jets2Tag clean

al22: AtLeast2Jets2Tag clean

qcd: QCD clean

hist:
	@echo "Compiling the HistogramCreator .... \n"
	$(CXX) HistogramCreator.C -g -c -o HistogramCreator.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS)
	@echo "Linking ...... \n"
	g++ HistogramCreator.o -o CreateHistograms $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

TopTemp:
	@echo "Compiling the HistogramCreator .... \n"
	$(CXX) HistogramCreator_rw.C -g -c -o HistogramCreator.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS)
	@echo "Linking ...... \n"
	g++ HistogramCreator.o -o CreateTtTempHistograms $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

pl:
	@echo "Compiling the Plotting .... \n"
	$(CXX) Plotting.C -c -o Plotting.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ Plotting.o -o Plot $(ROOTGLIBS) -lEG -lHist $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS) 

Weight:
	@echo "Compiling the HistogramCreator_rw .... \n"
	$(CXX) HistogramCreator_rw.C -c -o HistogramCreator_rw.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ HistogramCreator_rw.o -o TestCreateWeighedHists $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS) 

QCD:
	@echo "Compiling the HistogramCreator_rw .... \n"
	$(CXX) HistogramCreator_rw.C -c -o HistogramCreator_rw.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ HistogramCreator_rw.o -o specialrelaxedIsoDzeroQCDbTagCreateWeighedHists $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS) 	
w:
	@echo "Compiling the DifferentBselections .... \n"
	$(CXX) DifferentBselections.C -c -o DifferentBselections.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS)
	@echo "Linking ...... \n"
	g++ DifferentBselections.o -o WtemplateDef $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS) 
	
2Jets2Tag:
	@echo "Compiling the DifferentBselections .... \n"
	$(CXX) 2Jet2Tag.C -c -o 2Jet2Tag.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ 2Jet2Tag.o -o 2Jet2Tag $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)
AtLeast2Jets2Tag:
	@echo "Compiling the DifferentBselections .... \n"
	$(CXX) AtLeast2Jet1Tag.C -c -o AtLeast2Jet1Tag.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ AtLeast2Jet1Tag.o -o AtLeast2Jet1Tag $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)  
clean:
	@echo "Cleaning..."
	@rm -f *.o
	@rm -f *~
	@rm -f ../../interface/*.gch
