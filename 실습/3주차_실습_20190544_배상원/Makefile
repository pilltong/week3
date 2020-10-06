objects = main.o Array.o RangeArray.o

CC = g++

target = test

$(target) : $(objects) Array.h RangeArray.h
	$(CC) -g -o $(target) $(objects)

main.o : main.cpp
	$(CC) -c -g -o main.o main.cpp

Array.o : Array.cpp
	$(CC) -c -g -o Array.o Array.cpp

RangeArray.o : RangeArray.cpp
	$(CC) -c -g -o RangeArray.o RangeArray.cpp

.PHONY : clean

clean :
	rm $(objects) $(target)
 
