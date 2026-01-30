CXXX=g++
INCLUDE_DIR=.

add_two_numbers: add_two_numbers.o Solver.o
	${CXX} -o add_two_numbers add_two_numbers.o Solver.o

add_two_numbers.o: add_two_numbers.cpp
	${CXX} -c add_two_numbers.cpp  -I${INCLUDE_DIR}

Solver.o: Solver.cpp
	${CXX} -c Solver.cpp  -I${INCLUDE_DIR}

clean:
	rm add_two_numbers add_two_numbers.o Solver.o
