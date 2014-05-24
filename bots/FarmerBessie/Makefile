CC=g++
CFLAGS=-O2
CXXFLAGS=-O2

all: FarmerBessie

mm-client.o: mm-client.c mm-client.h

FarmerBessie.o: FarmerBessie.cpp mm-client.h
FarmerBessie: mm-client.o FarmerBessie.o
	${CC} ${CFLAGS} -o $@ $^ -lm

clean:
	rm -f *.o

fresh: clean all

