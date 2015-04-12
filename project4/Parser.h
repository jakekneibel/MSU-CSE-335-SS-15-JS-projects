#include <fstream>
#include <iostream>
#include <string>

class CompanyBuilder;

class Parser{
public:
	Parser();
	Parser(char *);
	Parser(const Parser*);
	~Parser	();
	Parser operator=(const Parser*);
	bool Parse(CompanyBuilder*);
private:
	std::ifstream inFile;
};
