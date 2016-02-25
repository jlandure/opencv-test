CXX = g++
CXXFLAGS = -Wall -g

#makefile avec shared lib
#regle : 
#When using -l<libname> to specify library to link,
#the linker will first search for lib<libname>.so before searching for lib<libname>.a.
#In your case it doesn't work, because the library filename is not with .so suffix.

DisplayImage: DisplayConsole.so
	$(CXX) -L./build -Wall -o DisplayImage DisplayImage.cpp -lDC

DisplayConsole.so: DisplayConsole.o
	$(CXX) -shared -o build/libDC.so DisplayConsole.o

DisplayConsole.o: DisplayConsole.hpp
