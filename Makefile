CC=gcc
CCFLAGS=-Wall -Werror
CXX=g++
CXXFLAGS=$(CCFLAGS) -std=c++14

all: $(patsubst %.c, %.outC, $(wildcard *.c)) $(patsubst %.cpp, %.outCPP, $(wildcard *.cpp))

%.outC: %.c Makefile
	$(CC) $(CCFLAGS) $< -o $(@:.outC=)

%.outCPP: %.cpp Makefile
	$(CXX) $(CXXFLAGS) $< -o $(@:.outCPP=)

clean: $(patsubst %.c, %.clean, $(wildcard *.c)) $(patsubst %.cpp, %.clean, $(wildcard *.cpp))

%.clean:
	rm -f $(@:.clean=)
