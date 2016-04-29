main: main.o input.o line.o
	gcc -Wall -o main main.o input.o line.o

main.o: main.c input.o line.o
	gcc -Wall -c main.c

input.o: input.c input.h
	gcc -Wall -c input.c

line.o: line.c line.h
	gcc -Wall -c line.c