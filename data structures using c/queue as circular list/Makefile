OBJS = linkedList.o circularQ.o main.o
CC = g++
DEBUG = -g
CFLAGS = -Wall -c $(DEBUG)
LFLAGS = -Wall $(DEBUG)

zorion : $(OBJS)
	$(CC) $(LFLAGS) $(OBJS) -o zorion
linkedList.o : linkedList.h linkedList.cpp
	$(CC) $(CFLAGS) linkedList.cpp
circulaQr.o : circularQ.h linkedList.h circularQ.cpp
	$(CC) $(CFLAGS) circularQ.cpp
main.o : main.cpp linkedList.h circularQ.h
	$(CC) $(CFLAGS) main.cpp
clean: 
	\rm *.o *~zorion
