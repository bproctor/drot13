drot13.o: drot13.c drot13.h
	gcc -c -O2 -Wall drot13.c -o drot13.o

test: test.c drot13.o
	gcc -O2 -Wall test.c drot13.o -o test

clean:
	rm -f test *.o
