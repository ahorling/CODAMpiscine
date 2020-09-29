#-*-Makefile-*-

# target: dependencies
#	action

all: number greeting

number: posneg.c say.c forbidden.c printing.h
	gcc posneg.c say.c forbidden.c -o number

greeting: hello.c say.c printing.h
	gcc hello.c say.c -o greeting

fclean:
	rm greeting number