cc=gcc

1:1.o 2.o 3.o
	$(cc) 1.o 2.o 3.o -o output

1.o:1.c file.h
	$(cc) -c 1.c

2.o:2.c file.h
	$(cc) -c 2.c

3.o:3.c file.h
	$(cc) -c 3.c

clean:
	rm -rf *.o output
