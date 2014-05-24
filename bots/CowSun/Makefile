CC=g++
CFLAGS=-O2
CXXFLAGS=-O2

all: CowSun

mm-client.o: mm-client.c mm-client.h

CowSun.o: CowSun.cpp mm-client.h
CowSun: mm-client.o CowSun.o
	${CC} ${CFLAGS} -o $@ $^ -lm

clean:
	rm -f *.o

fresh: clean all

