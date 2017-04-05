OBJS = linkedList.o stack.o main.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

zorion : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o zorion
linkedList.o : linkedList.h linkedList.cpp
	$(CC) $(CFLAGS) linkedList.cpp
stack.o : stack.h linkedList.h stack.cpp
	$(CC) $(CFLAGS) stack.cpp
main.o : main.cpp linkedList.h stack.h
	$(CC) $(CFLAGS) main.cpp
clean: 
	\rm *.o *~zorion
