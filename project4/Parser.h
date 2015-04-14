#include <fstream>
#include <iostream>
#include <string>
#include <stdio.h>
#include <cstring>
#include <unistd.h>
#include <stdlib.h>
#include "Employee.h"
#include "Group.h"
#include "CompanyBuilder.h"
#include "PrintVisitor.h"


//class that will parse the input file for instructions
class Parser{
public:
	Parser();
	Parser(char *);
	Parser(const Parser*);
	~Parser	();
	Parser operator=(const Parser*);
	bool Parse(CompanyBuilder*);
private:
	std::ifstream inFile; //the stream for the file
};
