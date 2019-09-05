#Set compiler
CC=g++

#Compile flags (-c to output object file .o)
CFLAGS=-c -Wall

all: main.exe

main.exe: main.o Circle.o Sphere.o Rectangle.o
	$(CC) main.o Circle.o Sphere.o Rectangle.o -o main.exe

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp
Circle.o: Circle.cpp
	$(CC) $(CFLAGS) Circle.cpp
Sphere.o: Sphere.cpp
	$(CC) $(CFLAGS) Sphere.cpp
Rectangle.o: Rectangle.cpp
	$(CC) $(CFLAGS) Rectangle.cpp
clean:
	rm *.o main.exe