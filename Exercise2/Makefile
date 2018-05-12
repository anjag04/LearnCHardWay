# This is a single line comment
all:	run

# ex1:	ex1.o
#		gcc	-o	ex1	ex1.o

# ex1.o:	ex1.c
#		gcc	-c	ex1.c

# -g gives debugging information

run : ex1
	./ex1
	rm	-f	ex1	# ex1.o

CFLAGS = -Wall	-g

clean:
	rm	-f	ex1	# ex1.o
