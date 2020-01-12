CXX = g++
CXXFLAGS = -std=c++0x -g

OBJS = main.o  mergeSort.o randArrayGen.o

SRCS = main.cpp mergeSort.cpp randArrayGen.cpp

HEADERS = mergeSort.hpp randArrayGen.hpp

mergetime: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o mergetime
clean:
	rm -f ${OBJS}
