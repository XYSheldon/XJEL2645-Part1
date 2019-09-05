# Set compiler
CC=g++

#Compile flags (-c to output object file .o)
CFLAGS=-c -Wall -std=c++11

all: main.exe

main.exe: main.o Person.o Student.o
	$(CC) main.o Person.o Student.o -o main.exe

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

Student.o: Student.cpp
	$(CC) $(CFLAGS) Student.cpp

Person.o: Person.cpp
	$(CC) $(CFLAGS) Person.cpp

clean:
	rm *.o main.exe