ROOTINC		=-I$(shell root-config --incdir)
ROOTLIBS	=$(shell root-config --libs) -lMinuit -lRooFit -lMinuit2 -lRooFitCore
ROOTCFLAGS	=$(shell root-config --cflags)
ROOTGLIBS	=$(shell root-config --glibs) -lMinuit  -lRooFit -lMinuit2 -lRooFitCore
HOMELIB		= $(HOME)/lib
TROOTLIBS	= -L$(HOMELIB) -lToto.2013
ESLIBS 		= -L$(HOMELIB) -lEventSelection.2013
PULIBS		= -L$(HOMELIB) -lLumi3DRW.2013
JETTOOLS	= -L$(HOMELIB) -lTools.2013
RECOLIBS	= -L$(HOMELIB) -lReco.2013
PHYSOBJLIBS	= -L$(HOMELIB) -lPhysObj.2013
TOYLIBS		= -L$(HOMELIB) -lToyAnalysis.2013
BKGSTUDYLIBS	= -L$(HOMELIB) -lBkgStudies.2013
COMBLIBS	= -L$(HOMELIB) -lCombination.2013
BASE		= -L$(HOMELIB) -lBaseBaseAnalysis.2013
TROOTINCLUDES   = -I../../../TopBrussels/TopTreeProducer/interface
PUINCLUDES	=-I../../../TopBrussels/TopTreeAnalysis/MCInformation/interface/
JETINCLUDES	=-I../../../TopBrussels/TopTreeAnalysis/Tools/interface/
RECOINCLUDES	=-I../../../TopBrussels/TopTreeAnalysis/Reconstruction/interface/
PHYSOBJINCS	=-I../../PhysicsObjects/interface/
ESINCLUDES	=-I../../EventSelection/interface/
BASEINCLUDES	=-I../../../Base/BaseAnalysis/interface/
BKGSTDYINCLUDES	=-I../../BackgroundStudies/interface/
MYHEADERS	=-I../interface

CXX=g++


#LIBS		= $(ROOTLIBS)
LIBS		= $(TROOTLIBS)
LIBS		+= $(ESLIBS)
#LIBS		+= $(PULIBS)
#LIBS		+= $(JETTOOLS)
#LIBS		+= $(RECOLIBS)
LIBS		+= $(PHYSOBJLIBS)
LIBS		+= $(BKGSTUDYLIBS)
LIBS		+= $(COMBLIBS)
HEADERS		=$(MYHEADERS)
HEADERS 	+=$(TROOTINCLUDES)
HEADERS		+=$(PUINCLUDES)
HEADERS		+=$(JETINCLUDES)
HEADERS 	+=$(RECOINCLUDES)
HEADERS 	+=$(ESINCLUDES)
HEADERS 	+=$(PHYSOBJINCS)
HEADERS 	+=$(BASEINCLUDES)
HEADERS 	+=$(BKGSTDYINCLUDES)

all:  fit clean

jes: JES clean

sys: SYS clean

jes2: JESSYS clean

l: LUCA clean

lsys: LUCASYS clean

esys: SYSELE clean

ejsys: JESSYSELE clean

msys: SYSMU clean

mjsys: JESSYSMU clean





mtsys: SYSMT clean

mtjes2: JESSYSMT clean

mtesys: SYSMTELE clean

mtejsys: JESSYSMTELE clean

mtmsys: SYSMTMU clean

mtmjsys: JESSYSMTMU clean

fit:
	@echo "Compiling the Combinator .... \n"
	$(CXX) Combinator.C -c -o Combinator.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g 
	@echo "Linking ...... \n"
	g++ Combinator.o -o FitComined $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)


LUCA:
	@echo "Compiling the LucaCombinator .... \n"
	$(CXX) LucaCombinator.C -c -o LucaCombinator.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g 
	@echo "Linking ...... \n"
	g++ LucaCombinator.o -o LucaComined $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

LUCASYS:
	@echo "Compiling the LucaSystematics .... \n"
	$(CXX) LucaSystematics.C -c -o LucaSystematics.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g 
	@echo "Linking ...... \n"
	g++ LucaSystematics.o -o LucaSyst $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

JES:
	@echo "Compiling the Combinator .... \n"
	$(CXX) Combinator.C -c -o Combinator.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g 
	@echo "Linking ...... \n"
	g++ Combinator.o -o FitCominedJES $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

SYS:
	@echo "Compiling the CombinedSystematics .... \n"
	$(CXX) CombinedSystematics.C -c -o CombinedSystematics.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g 
	@echo "Linking ...... \n"
	g++ CombinedSystematics.o -o SystFitComined $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

JESSYS:
	@echo "Compiling the CombinedSystematics .... \n"
	$(CXX) CombinedSystematics.C -c -o CombinedSystematics.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g 
	@echo "Linking ...... \n"
	g++ CombinedSystematics.o -o SystFitCominedJES $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

SYSELE:
	@echo "Compiling the CombinedSystematics .... \n"
	$(CXX) CombinedSystematics.C -c -o CombinedSystematics.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g 
	@echo "Linking ...... \n"
	g++ CombinedSystematics.o -o SystFitCominedEle $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

JESSYSELE:
	@echo "Compiling the CombinedSystematics .... \n"
	$(CXX) CombinedSystematics.C -c -o CombinedSystematics.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g 
	@echo "Linking ...... \n"
	g++ CombinedSystematics.o -o SystFitCominedJESEle $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

SYSMU:
	@echo "Compiling the CombinedSystematics .... \n"
	$(CXX) CombinedSystematics.C -c -o CombinedSystematics.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g 
	@echo "Linking ...... \n"
	g++ CombinedSystematics.o -o SystFitCominedMu $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

JESSYSMU:
	@echo "Compiling the CombinedSystematics .... \n"
	$(CXX) CombinedSystematics.C -c -o CombinedSystematics.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g 
	@echo "Linking ...... \n"
	g++ CombinedSystematics.o -o SystFitCominedJESMu $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)




SYSMT:
	@echo "Compiling the CombinedSystematics .... \n"
	$(CXX) CombinedSystematics.C -c -o CombinedSystematics.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g 
	@echo "Linking ...... \n"
	g++ CombinedSystematics.o -o MTSystFitComined $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

JESSYSMT:
	@echo "Compiling the CombinedSystematics .... \n"
	$(CXX) CombinedSystematics.C -c -o CombinedSystematics.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g 
	@echo "Linking ...... \n"
	g++ CombinedSystematics.o -o MTSystFitCominedJES $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

SYSMTELE:
	@echo "Compiling the CombinedSystematics .... \n"
	$(CXX) CombinedSystematics.C -c -o CombinedSystematics.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g 
	@echo "Linking ...... \n"
	g++ CombinedSystematics.o -o MTSystFitCominedEle $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

JESSYSMTELE:
	@echo "Compiling the CombinedSystematics .... \n"
	$(CXX) CombinedSystematics.C -c -o CombinedSystematics.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g 
	@echo "Linking ...... \n"
	g++ CombinedSystematics.o -o MTSystFitCominedJESEle $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

SYSMTMU:
	@echo "Compiling the CombinedSystematics .... \n"
	$(CXX) CombinedSystematics.C -c -o CombinedSystematics.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g 
	@echo "Linking ...... \n"
	g++ CombinedSystematics.o -o MTSystFitCominedMu $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)

JESSYSMTMU:
	@echo "Compiling the CombinedSystematics .... \n"
	$(CXX) CombinedSystematics.C -c -o CombinedSystematics.o -O0 $(ROOTCFLAGS) -fPIC $(HEADERS) -g 
	@echo "Linking ...... \n"
	g++ CombinedSystematics.o -o MTSystFitCominedJESMu $(ROOTGLIBS) -lEG $(LIBS) -g -fPIC -O0 -I/opt/root/include -m64 -pthread $(HEADERS)


clean:
	@echo "Cleaning..."
	@rm -f *.o
	@rm -f *~


