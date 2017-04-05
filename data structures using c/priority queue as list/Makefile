OBJS = linkedList.o priorityQueue.o main.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

zorion : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o zorion
linkedList.o : linkedList.h linkedList.cpp
	$(CC) $(CFLAGS) linkedList.cpp
priorityQueue.o : priorityQueue.h priorityQueue.cpp
	$(CC) $(CFLAGS) priorityQueue.cpp
main.o : main.cpp linkedList.h priorityQueue.h
	$(CC) $(CFLAGS) main.cpp
clean: 
	\rm *.o 
