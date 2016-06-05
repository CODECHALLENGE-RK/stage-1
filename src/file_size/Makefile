#hello word make file
SRC=*.c		#src name
CC=gcc		#compiler
OBJ=file_size	#binary name
DEBUG_LEVEL=3	#default
optimize=O2	#optimize
incdir=$(PWD)/../../include
CFLAGS=-Wall -I$(incdir) 

all:
	echo $(CFLAGS)
	$(CC) $(SRC) -DDEBUG=$(DEBUG_LEVEL) -$(optimize) $(CFLAGS) -o $(OBJ)
clean:
	rm -rf *.o
	rm -rf $(OBJ) 
