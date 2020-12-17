main: main.o
		g++ main.o -o calculatemean


main.o: main.cpp
		g++ -c main.cpp

clean:
		rm *.o calculatemean