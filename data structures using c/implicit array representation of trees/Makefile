OBJS = tree.o main.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

zorion : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o zorion
tree.o : tree.h tree.cpp
	$(CC) $(CFLAGS) tree.cpp
main.o : main.cpp tree.h
	$(CC) $(CFLAGS) main.cpp
clean: 
	\rm *.o zorion
