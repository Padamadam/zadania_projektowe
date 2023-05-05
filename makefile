CC = g++
CFLAGS = -Wall -g

main: main.o
	$(CC) $(CFLAGS) -o main main.o

main.o: task1.h task2.h task3.h task6.h
	$(CC) $(CFLAGS) -c main.cpp

clean:
	del "main.o" "main.exe"