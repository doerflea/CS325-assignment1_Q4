CXX = g++
CXXFLAGS = -std=c++0x -g

OBJS = main.o insertionSort.o randArrayGen.o

SRCS = main.cpp insertionSort.cpp randArrayGen.cpp

HEADERS = insertionSort.hpp randArrayGen.hpp

inserttime: ${OBJS} ${HEADERS}
	${CXX} ${OBJS} -o inserttime
clean:
	rm -f ${OBJS}
