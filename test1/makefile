CXX = g++
CXXFLAGS = -Wall -g

#makefile sans shared lib

DisplayImage: DisplayImage.o DisplayConsole.o
	$(CXX) $(CXXFLAGS) -o DisplayImage DisplayImage.o DisplayConsole.o

DisplayImage.o: DisplayImage.cpp DisplayConsole.hpp
	$(CXX) $(CXXFLAGS) -c DisplayImage.cpp

DisplayConsole.o: DisplayConsole.hpp
