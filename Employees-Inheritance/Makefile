# Variables
CXX = g++
CXXFLAGS = -g -Wall -std=c++11
TARGET = main
OBJS = main.o Employee.o Manager.o Executive.o

# Default target to build the program
all: $(TARGET)

# Rule to build the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Rules to build the object files
main.o: main.cpp Employee.h Manager.h Executive.h
	$(CXX) $(CXXFLAGS) -c main.cpp

Employee.o: Employee.cpp Employee.h
	$(CXX) $(CXXFLAGS) -c Employee.cpp

Manager.o: Manager.cpp Manager.h Employee.h
	$(CXX) $(CXXFLAGS) -c Manager.cpp

Executive.o: Executive.cpp Executive.h Manager.h Employee.h
	$(CXX) $(CXXFLAGS) -c Executive.cpp

# Pseudo-target to clean up the directory
clean:
	rm -f $(TARGET) $(OBJS)