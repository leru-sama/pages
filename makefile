

edit:  main.o page.o
	gcc -o edit main.o page.o

main.o : ./src/main.c  ./inc/page.h ./inc/sys.h
	gcc -c ./src/main.c

page.o : ./src/page.c ./inc/sys.h ./inc/page.h
	gcc -c ./src/page.c

clean : 
	rm edit main.o page.o	
