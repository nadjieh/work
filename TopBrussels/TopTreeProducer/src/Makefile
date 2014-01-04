ObjSuf        = o
SrcSuf        = cc
ExeSuf        = 
DllSuf        = so
OutPutOpt     = -o
HeadSuf       = h

ROOTCFLAGS    = $(shell root-config --cflags)
ROOTLIBS      = $(shell root-config --libs) -lMinuit
ROOTGLIBS     = $(shell root-config --glibs) -lMinuit

# Linux with egcs
DEFINES 	= -DNO_ORCA_CLASSES
CXX		= g++
CXXFLAGS	= -O -Wall -fPIC $(DEFINES)
LD		= g++
LDFLAGS 	= -g
SOFLAGS 	= -shared

CXXFLAGS	+= $(ROOTCFLAGS)
LIBS		= $(ROOTLIBS) -lEG
GLIBS		= $(ROOTGLIBS)
#------------------------------------------------------------------------------
SOURCES 	= $(wildcard TRoot*.cc)
HEADERS 	= $(wildcard ../interface/TRoot*.h)
OBJECTS 	= $(SOURCES:.$(SrcSuf)=.$(ObjSuf))
DEPENDS 	= $(SOURCES:.$(SrcSuf)=.d)
SOBJECTS	= $(SOURCES:.$(SrcSuf)=.$(DllSuf))
HOMELIBS	= $(HOME)/lib

#PROGRAMS	=  $(SOBJECTS)

all: libToto.2013.so clean ; cp libToto.2013.so ../test; cp libToto.2013.so ../skimmer; cp libToto.2013.so $(HOMELIBS)

clean:
	@echo "Cleaning..."
	@rm -f $(OBJECTS) $(DEPENDS) *Dict.* core

.SUFFIXES: .$(SrcSuf) .C .o .so

###

Dict.$(SrcSuf): $(HEADERS) ./LinkDef.h
	@echo "Generating dictionary Dict..."
	@$(ROOTSYS)/bin/rootcint -f Dict.$(SrcSuf) -c $(DEFINES) $(HEADERS) ./LinkDef.h

.$(SrcSuf).$(ObjSuf):
	$(CXX) $(CXXFLAGS) -c $<

libToto.2013.so: $(OBJECTS) Dict.o
	$(LD) $(LIBS) $(SOFLAGS) $(LDFLAGS) $+ -o $@
	@echo "$@ done"
