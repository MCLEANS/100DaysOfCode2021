CC = g++
CFLAGS = -c --std=c++17
LFLAGS = -Wall
OBJS = main.o animal.o

all : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o main

main.o : main.cpp
	$(CC) $(CFLAGS) main.cpp

animal.o : animal.h animal.cpp
	$(CC) $(CFLAGS) animal.cpp

run : 
	./main

clean :
	rm *.o main
