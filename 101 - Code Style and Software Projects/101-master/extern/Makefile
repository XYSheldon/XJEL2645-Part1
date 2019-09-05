#Set compiler
CC=g++

#Compile flags (-c to output object file .o)
CFLAGS=-c -Wall

all: main.exe

main.exe: main.o extern.o
	$(CC) main.o extern.o -o main.exe

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp
extern.o: extern.cpp
	$(CC) $(CFLAGS) extern.cpp

clean:
	rm *.o main.exe