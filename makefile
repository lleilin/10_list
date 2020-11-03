all: main.o list.o
		gcc -o main list.o main.o

list.o: list.c list.h
		gcc -c list.c

main.o: main.c list.h
		gcc -c main.c

run: main
		./main

.PHONY: clean

clean:
		-rm *.o
