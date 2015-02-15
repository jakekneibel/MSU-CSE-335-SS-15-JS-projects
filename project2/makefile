# CSE 335 Project 1 makefile
# Jacob Kneibel, Seth

proj1.exe: main.o drink.o barista.o
	g++ main.o drink.o barista.o -o proj1.exe

main.o: main.cpp drink.h
	g++ -Wall -c main.cpp

drink.o: drink.cpp drink.h
	g++ -Wall -c drink.cpp

barista.o: barista.cpp barista.h
	g++ -Wall -c barista.cpp

clean:
	rm -f proj1.exe main.o drink.o

