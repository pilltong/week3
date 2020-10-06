objects = main.o Str.o

cc = g++

target = test

$(target) : $(objects) Str.h
	$(cc) -g -o $(target) $(objects)

main.o : main.cpp
	$(cc) -c -g -o main.o main.cpp

Str.o : Str.cpp
	$(cc) -c -g -o Str.o Str.cpp

.PHINY : clean

clean:
	rm $(objects) $(target)
