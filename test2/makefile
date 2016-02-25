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
	$(CXX) $(CXXFLAGS) -shared -Wl,-soname,build/libDC.so -o build/libDC.so DisplayConsole.o

# -Wl is added to pass along the information about the shared library to the linker

DisplayConsole.o: DisplayConsole.hpp
	$(CXX) $(CXXFLAGS) -fPIC -c DisplayConsole.cpp
