# Makefile for assignment 1
# Will Eshbaugh
# we175615@ohio.edu


prog1: main.o libprog1.a
	g++ -Llib main.o -lprog1 -o prog1

main.o: main.cc include/prog1.h
	g++ -Wall -Iinclude -c main.cc

prog1.o: prog1.cc include/prog1.h
	g++ -Wall -Iinclude -c prog1.cc

libprog1.a: prog1.o
	ar r libprog1.a prog1.o
	mv -f libprog1.a lib

clean:
	rm *.o

