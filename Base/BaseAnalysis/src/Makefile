ObjSuf        = o
SrcSuf        = cc
ExeSuf        = 
DllSuf        = so
OutPutOpt     = -o
HeadSuf       = h

ROOTCFLAGS    = $(shell root-config --cflags)
ROOTLIBS      = $(shell root-config --libs) -lMinuit -lMathMore -lMathCore
ROOTGLIBS     = $(shell root-config --glibs) -lMinuit
BASEINCLUDES = -I../interface
#BASEINCLUDE = 
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
#LIBS		+= $(TROOTLIBS)
#LIBS		+=$(BASELIB)
#------------------------------------------------------------------------------
SOURCES 	= $(wildcard ../src/*.cc)
HEADERS 	= $(wildcard ../interface/*.h)
OBJECTS 	= $(SOURCES:.$(SrcSuf)=.$(ObjSuf))
DEPENDS 	= $(SOURCES:.$(SrcSuf)=.d)
SOBJECTS	= $(SOURCES:.$(SrcSuf)=.$(DllSuf))
HOMELIB		= $(HOME)/lib
MV = mv -f *.o ../src/
#PROGRAMS	=  $(SOBJECTS)

all: delete libBaseBaseAnalysis.2013.so clean ; cp libBaseBaseAnalysis.2013.so $(HOMELIB)
delete:
	@echo "removing the previous version of libBaseBaseAnalysis.2013.so ..."
	@rm -f libBaseBaseAnalysis.2013.so
	@rm -f $(HOMELIB)/libBaseBaseAnalysis.2013.so
clean:
	@echo "Cleaning..."
	@rm -f $(OBJECTS) $(DEPENDS) *Dict.* core
	@rm -f    *.o

.SUFFIXES: .$(SrcSuf) .C .o .so

###


.$(SrcSuf).$(ObjSuf):
	$(CXX) $(CXXFLAGS) -c $<

libBaseBaseAnalysis.2013.so: $(OBJECTS)
	$(LD) $(LIBS) $(SOFLAGS) $(LDFLAGS) $+ -o $@
	@echo "$@ done"
