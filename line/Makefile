SHELL := /bin/bash

# Compiler and flags - Modern C++20
CXX = g++
CXXFLAGS= -g -O0 -Wall ./lib/linux/libsprite.a -I./include -I/usr/include/X11 -L/usr/X11R6/lib -lX11 -std=c++20

#--------------------------
# Lab-00 : line 
#--------------------------

line:
	$(CXX) $@.cpp $(CXXFLAGS)

clean:
	rm -rf a.out
	rm -rf *~
