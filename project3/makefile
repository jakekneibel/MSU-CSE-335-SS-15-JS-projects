# CSE 335 Project 3 makefile
# Jacob Kneibel, Seth
//may need to change this
proj3.exe: main.o Employee.o Group.o PrintVisitor.o SearchVisitor.o CountVisitor.o
	g++ main.o Employee.o Group.o -o proj3.exe
main.o: main.cpp Employee.h
	g++ -Wall -c main.cpp
Employee.o: Employee.cpp Employee.h
	g++ -Wall -c Employee.cpp
Group.o: Group.cpp Group.h
	g++ -Wall -c Group.cpp
PrintVisitor.o: PrintVisitor.cpp PrintVisitor.h
	g++ -Wall -c PrintVisitor.cpp
SearchVisitor.o: SearchVisitor.cpp SearchVisitor.h
	g++ -Wall -c SearchVisitor.cpp
CountVisitor.o: CountVisitor.cpp CountVisitor.h
	g++ -Wall -c CountVisitor.cpp
clean:
	rm -f proj3.exe main.o Employee.o Group.o PrintVisitor.o SearchVisitor.o CountVisitor.o
