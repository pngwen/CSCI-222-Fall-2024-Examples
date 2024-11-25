TARGETS=menuTest counterTest counterUITest
CXXFLAGS=--std=c++11
LD=g++
CC=g++

all: $(TARGETS)
menuTest: menu.o menuTest.o
menu.o: menu.cpp menu.h
counterTest: counter.o counterTest.o
counterUITest: counter.o menu.o counterUITest.o counterUI.o

class:
	rm -f *.o $(TARGETS)