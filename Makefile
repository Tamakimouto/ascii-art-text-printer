build: main.c printer.c
	gcc -c main.c
	gcc -c printer.c
	gcc -o print main.o printer.o
	rm *.o

clean:
	rm print