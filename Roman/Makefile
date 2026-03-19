SHELL := /bin/bash

# Compiler and flags - Modern C++20
CXX = g++
CXXFLAGS= -g -O0 -Wall ./lib/linux/libsprite.a -I./include -I/usr/include/X11 -L/usr/X11R6/lib -lX11 -std=c++20

#--------------------------
# Lab-00 : add
#--------------------------

add:
	$(CXX) $@.cpp $(CXXFLAGS)

clean:
	rm -rf a.out
	rm -rf *~

# Test configuration
NUM_TEST_CASES = 10
runtests: $(PROBLEM)
	@echo -e "Running Test Cases"
	@for i in `seq 1 $(NUM_TEST_CASES)`; do \
		echo -e "\n\033[0;36mTestcase $$i\033[0m"; \
		echo -e "./a.out < tests/test$$i/input.txt"; \
		./a.out < tests/test$$i/input.txt > output.txt; \
		if diff -Bw output.txt tests/test$$i/output.txt > /dev/null; then \
			echo -e "\033[0;32mPASSED\033[0m"; \
		else \
			echo -e "diff -Bw output.txt tests/test$$i/output.txt";\
			diff -Bw output.txt tests/test$$i/output.txt; \
			echo -e "\033[0;31mFAILED\033[0m"; \
		fi \
	done
	@rm -f output.txt
