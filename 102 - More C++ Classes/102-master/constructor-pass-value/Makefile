# Set compiler
CC=g++

#Compile flags (-c to output object file .o)
CFLAGS=-c -Wall -std=c++11

all: main.exe

main.exe: main.o Circle.o
	$(CC) main.o Circle.o -o main.exe

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

Circle.o: Circle.cpp
	$(CC) $(CFLAGS) Circle.cpp

clean:
	rm *.o main.exe
