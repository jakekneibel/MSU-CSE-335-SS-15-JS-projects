#include "Parser.h"
using namespace std;

Parser::Parser(){
};

Parser::Parser(char *fileName){
	inFile.open(fileName);

};

Parser::~Parser(){};

bool Parser::Parse(CompanyBuilder *cb){
	PrintVisitor* pVisitor = new PrintVisitor();
	std::string lines;
	getline(inFile,lines);
	char * temp;
	char* line = lines.c_str();

	std::cout<<"\033[2J\033[1;1H";
	Node* root = cb->addroot(lines);
	while (!inFile.eof()){
		
		root->Accept(pVisitor);
		usleep(3000000);
		std::cout<<"\033[2J\033[1;1H";
		getline(inFile,lines);
		if (lines ==""){break;}
		//delete line;
		char* line = lines.c_str();

		temp=strtok(line,",");
		switch (atoi(temp)){
			case 1:
				temp = strtok(NULL,",");
				if (atoi(temp)==1){

					string Last = string(strtok(NULL,","));
					string First =string(strtok(NULL,","));
					string pos = string(strtok(NULL,",")); 
					Employee* Emp=new Employee(First,Last,pos);
					temp = strtok(NULL,",");
					root->getName();
					cb->getroot()->getName()=="SOME";
					cb->addNode(Emp,temp);
				}
				else if(atoi(temp)==2){
					string Name = string(strtok(NULL,","));
					Group* grp = new Group(Name);
					cb->addNode(grp,strtok(NULL,","));
					
				}
				break;
				
			case 2:
				cb->deleteGroup(strtok(NULL,","));
				break;

		
			case 3:
				cb->disband(strtok(NULL,","));
				break;

		}
		
	};
	return 1;
};
