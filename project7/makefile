#compiler
CC=g++

#passed to compiler
CFLAGS = -c -Wall

all: overload

overload: test.o triangle.o
	$(CC) test.o triangle.o -o overload


test.o: test.cpp triangle.o 
	$(CC) $(CFLAGS) test.cpp 

triangle.o: triangle.cpp
	$(CC) $(CFLAGS) triangle.cpp -o triangle.o  

clean: 
	rm -rf *.o overload
