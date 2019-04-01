CXX = g++
CFLAGS = -g -Wall -Wvla -Wshadow -Wunreachable-code -Wconversion -Wno-sign-conversion -Wno-sign-compare -Wno-write-strings -fdiagnostics-color=always
all: queue.o label 

clean:
	rm -f *.o  label 

%.o: %.cpp %.h
	$(CXX)  -c $*.cpp -o $*.o -g

label: label.cpp queue.o bmplib.o
	$(CXX) $(CFLAGS) $@.cpp queue.o bmplib.o -o $@ -g


