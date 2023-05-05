CC = g++
CFLAGS = -Wall -g

main: main.o
	$(CC) $(CFLAGS) -o main main.o

main.o: task1.h
	$(CC) $(CFLAGS) -c main.cpp