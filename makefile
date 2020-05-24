edit: main.o page.o
	gcc -o edit main.o page.o

main.o : main.c page.h sys.h
	gcc -c main.c

page.o : page.c sys.h page.h
	gcc -c page.c

clean : 
	rm edit main.o page.o	