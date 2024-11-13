TARGETS=menuTest
CXXFLAGS=--std=c++11
LD=g++
CC=g++

all: $(TARGETS)
menuTest: menu.o menuTest.o
menu.o: menu.cpp menu.h

class:
	rm -f *.o $(TARGETS)