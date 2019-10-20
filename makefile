CC = gcc
CCFLAGS = -g -w -lm
all: sqrt

sqrt:
	$(CC) $(CCFLAGS) sqrt.c -o sqrt

clean:
	rm -rf *~ *.o *.dSYM
