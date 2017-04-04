OBJS = linkedList.o main.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

zorion : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o zorion
linkedList.o : linkedList.h linkedList.cpp
	$(CC) $(CFLAGS) linkedList.cpp
main.o : main.cpp linkedList.h
	$(CC) $(CFLAGS) main.cpp
clean: 
	\rm *.o *~zorion
