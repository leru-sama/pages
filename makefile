vpath %.h ./inc
vpath %.c ./src
objects = main.o page.o

edit:  $(objects)
	gcc -o edit $(objects)

main.o :   page.h sys.h

page.o :   sys.h page.h

.PHONY:clean
clean : 
	rm  $(objects)	
