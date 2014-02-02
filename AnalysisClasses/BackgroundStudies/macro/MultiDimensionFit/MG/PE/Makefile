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

fit:
	@echo "Compiling the merge .... \n"
	$(CXX) merge.C -c -o merge.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g 
	@echo "Linking ...... \n"
	g++ merge.o -o  Merge $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

clean:
	@echo "Cleaning..."
	@rm -f *.o
	@rm -f *~


