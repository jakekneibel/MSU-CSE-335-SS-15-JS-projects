# CSE 335 Project 3 makefile
# Jacob Kneibel, Seth

proj3.exe: main.o Employee.o Group.o PrintVisitor.o SearchVisitor.o CountVisitor.o
	g++ main.o Employee.o Group.o PrintVisitor.o SearchVisitor.o CountVisitor.o -o proj3.exe

main.o: main.cpp Employee.h PrintVisitor.h SearchVisitor.h Group.h CountVisitor.h
	g++ -Wall -c main.cpp

Employee.o: Employee.cpp Employee.h PrintVisitor.h Node.h
	g++ -Wall -c Employee.cpp

Group.o: Group.cpp Group.h PrintVisitor.h Node.h
	g++ -Wall -c Group.cpp

PrintVisitor.o: PrintVisitor.cpp PrintVisitor.h Group.h Employee.h Visit.h
	g++ -Wall -c PrintVisitor.cpp

SearchVisitor.o: SearchVisitor.cpp SearchVisitor.h Visit.h
	g++ -Wall -c SearchVisitor.cpp

CountVisitor.o: CountVisitor.cpp CountVisitor.h Visit.h
	g++ -Wall -c CountVisitor.cpp

clean:
	rm -f proj3.exe main.o Employee.o Group.o PrintVisitor.o SearchVisitor.o CountVisitor.o
