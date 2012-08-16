CXX = $(shell wx-config --cxx)

PROGRAM = ksql

#VPATH = src

#OBJECTS := $(patsubst %.cpp,%.o,$(wildcard *.cpp))

#implementation

#.SUFFIXES: .o .cpp

#.cpp.o :
#	$(CXX) -c `wx-config --cxxflags` -o $@ $<
	
#all:	$(PROGRAM)

#$(PROGRAM):		$(OBJECTS)
#	$(CXX) -o $(PROGRAM) $(OBJECTS) `wx-config --cxxflags --libs`


OBJECTS := main.o ksql.o

$(PROGRAM):		$(OBJECTS)
	$(CXX) -o $(PROGRAM) $(OBJECTS) `wx-config --cxxflags --libs`

main.o: src/main.cpp src/main.h
	$(CXX) -c `wx-config --cxxflags` src/main.cpp -o main.o

ksql.o: src/ksql.cpp src/ksql.h
	$(CXX) -c `wx-config --cxxflags` src/ksql.cpp -o ksql.o



clean:

	-rm -f *.o

