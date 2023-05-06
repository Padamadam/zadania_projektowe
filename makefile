CC = g++
CFLAGS = -Wall -g

tree: tree.o
	$(CC) $(CFLAGS) -o tree tree.o

main: main.o
	$(CC) $(CFLAGS) -o main main.o

main.o: task1.h task2.h task3.h task6.h
	$(CC) $(CFLAGS) -c main.cpp

tree.o: tree.cpp
	$(CC) $(CFLAGS) -c tree.cpp

clean:
	rm -f "main.o" "main.exe" "tree.o"