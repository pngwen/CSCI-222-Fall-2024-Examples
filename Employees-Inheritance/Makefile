# Variables
CXX = g++
CXXFLAGS = -g -Wall -std=c++11
TARGET = main
OBJS = main.o employee.o manager.o executive.o

# Default target to build the program
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rules to build the object files
main.o: main.cpp employee.h manager.h executive.h
	$(CXX) $(CXXFLAGS) -c main.cpp

employee.o: employee.cpp employee.h
	$(CXX) $(CXXFLAGS) -c employee.cpp

manager.o: manager.cpp manager.h employee.h
	$(CXX) $(CXXFLAGS) -c manager.cpp

executive.o: executive.cpp executive.h manager.h employee.h
	$(CXX) $(CXXFLAGS) -c executive.cpp

# Pseudo-target to clean up the directory
clean:
	rm -f $(TARGET) $(OBJS)