#include "Parser.h"


Parser::Parser(){
}

Parser::Parser(char *fileName){
	std::string line;
	inFile.open(fileName);

}

Parser::~Parser(){}

bool Parser::Parse(companyBuilder &cb)
	getline(inFile,line);
	while (!inFile.eof()){
	
		getline(inFile,line);
		std::cout << line <<std::endl;	
	}
	return true;
