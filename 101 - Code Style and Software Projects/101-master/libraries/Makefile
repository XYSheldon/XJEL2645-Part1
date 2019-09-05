# Set compiler
CC=g++

#Compile flags (-c to output object file .o)
CFLAGS=-c -Wall

all: main.exe

main.exe: main.o maths.o
	$(CC) main.o maths.o -o main.exe

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

maths.o: maths.cpp
	$(CC) $(CFLAGS) maths.cpp

clean:
	rm *.o main.exe