ROOTINC		=-I$(shell root-config --incdir)
ROOTLIBS	=$(shell root-config --libs) -lMinuit -lRooFit -lMinuit2 -lRooFitCore -lMathMore
ROOTCFLAGS	=$(shell root-config --cflags)
ROOTGLIBS	=$(shell root-config --glibs) -lMinuit  -lRooFit -lMinuit2 -lRooFitCore -lMathMore
HOMELIB		= $(HOME)/lib
TROOTLIBS	= -L$(HOMELIB) -lToto.2013
ESLIBS 		= -L$(HOMELIB) -lEventSelection.2013
PULIBS		= -L$(HOMELIB) -lLumi3DRW.2013
JETTOOLS	= -L$(HOMELIB) -lTools.2013
RECOLIBS	= -L$(HOMELIB) -lReco.2013
PHYSOBJLIBS	= -L$(HOMELIB) -lPhysObj.2013
TOYLIBS		= -L$(HOMELIB) -lToyAnalysis.2013
BKGSTUDYLIBS	= -L$(HOMELIB) -lBkgStudies.2013
BASE		= -L$(HOMELIB) -lBaseBaseAnalysis.2013
TROOTINCLUDES   = -I../../../TopBrussels/TopTreeProducer/interface
PUINCLUDES	=-I../../../TopBrussels/TopTreeAnalysis/MCInformation/interface/
JETINCLUDES	=-I../../../TopBrussels/TopTreeAnalysis/Tools/interface/
RECOINCLUDES	=-I../../../TopBrussels/TopTreeAnalysis/Reconstruction/interface/
PHYSOBJINCS	=-I../../PhysicsObjects/interface/
ESINCLUDES	=-I../../EventSelection/interface/
BASEINCLUDES	=-I../../../Base/BaseAnalysis/interface/
MYHEADERS	=-I../interface

CXX=g++


#LIBS		= $(ROOTLIBS)
LIBS		= $(TROOTLIBS)
LIBS		+= $(ESLIBS)
LIBS		+= $(BASE)
#LIBS		+= $(JETTOOLS)
#LIBS		+= $(RECOLIBS)
LIBS		+= $(PHYSOBJLIBS)
LIBS		+= $(BKGSTUDYLIBS)
HEADERS		=$(MYHEADERS)
HEADERS 	+=$(TROOTINCLUDES)
HEADERS		+=$(PUINCLUDES)
HEADERS		+=$(JETINCLUDES)
HEADERS 	+=$(RECOINCLUDES)
HEADERS 	+=$(ESINCLUDES)
HEADERS 	+=$(PHYSOBJINCS)
HEADERS 	+=$(BASEINCLUDES)


all:  fit clean

temp: templatefit clean

qcd:  QCD clean

true: TRUE clean

count: COUNTER clean

rnd: RND clean

fit:
	@echo "Compiling the MultiDimFitTest .... \n"
	$(CXX) MultiDimFitTest.C -c -o MultiDimFitTest.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g 
	@echo "Linking ...... \n"
	g++ MultiDimFitTest.o -o  TestMDFit $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

TRUE:
	@echo "Compiling the MultiDimFitTest .... \n"
	$(CXX) MultiDimFitTest.C -c -o MultiDimFitTest.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g 
	@echo "Linking ...... \n"
	g++ MultiDimFitTest.o -o  TestMDFitTrue $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

COUNTER:
	@echo "Compiling the signalCheck.C .... \n"
	$(CXX) signalCheck.C -c -o signalCheck.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g 
	@echo "Linking ...... \n"
	g++ signalCheck.o -o  doSignalCheck $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

templatefit:
	@echo "Compiling the TemplateFit .... \n"
	$(CXX) TemplateFit.C -c -o TemplateFit.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g
	@echo "Linking ...... \n"
	g++ TemplateFit.o -o FitTemplates $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

QCD:
	@echo "Compiling the QCDMultiDimFitTest .... \n"
	$(CXX) QCDMultiDimFitTest.C -c -o QCDMultiDimFitTest.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g 
	@echo "Linking ...... \n"
	g++ QCDMultiDimFitTest.o -o QCDTestMDFit $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)
RND:
	@echo "Compiling the DoubledMultiDimFitTest .... \n"
	$(CXX) DoubledMultiDimFitTest.C -c -o DoubledMultiDimFitTest.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g 
	@echo "Linking ...... \n"
	g++ DoubledMultiDimFitTest.o -o DoubledTestMDFit $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

clean:
	@echo "Cleaning..."
	@rm -f *.o
	@rm -f *~


