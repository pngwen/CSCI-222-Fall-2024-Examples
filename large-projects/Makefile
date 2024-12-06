TARGETS=menuTest counterTest counterUITest counterTool
CXXFLAGS=--std=c++11
LD=g++
CC=g++

all: $(TARGETS)
menuTest: menu.o menuTest.o
menu.o: menu.cpp menu.h
counterTest: counter.o counterTest.o
counterUITest: counter.o menu.o counterUITest.o counterUI.o
counterTool: counter.o menu.o main.o counterUI.o counterApplication.o
	g++ -o $@ $^ $(CXXFLAGS)

class:
	rm -f *.o $(TARGETS)