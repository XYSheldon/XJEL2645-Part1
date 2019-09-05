# Set compiler
CC = g++

#Compile flags
CFLAGS = -Wall -Wextra -Wpedantic -std=c++11

all: main.exe

debug: CFLAGS += -DDEBUG -g
debug: main.exe 

main.exe: main.cpp
	$(CC) $(CFLAGS) main.cpp -o main.exe

clean:
	rm main.exe