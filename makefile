vpath %.h ./inc
vpath %.c ./src
objects = main.o page.o

pages.exe :  $(objects) 
	cc -o pages.exe  $(objects)

main.o :   page.h sys.h

page.o :   sys.h page.h

.PHONY:clean
clean : 
	rm  $(objects)	

.PHONY:run
run :
	./pages.exe
