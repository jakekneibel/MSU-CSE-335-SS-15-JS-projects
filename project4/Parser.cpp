#include "Parser.h"
using namespace std;

Parser::Parser(){
};

Parser::Parser(char *fileName){
	inFile.open(fileName);

};

Parser::~Parser(){inFile.close();};

//Parses the file
bool Parser::Parse(CompanyBuilder *cb){
	PrintVisitor* pVisitor = new PrintVisitor();
	std::string lines;
	getline(inFile,lines); //grab first line which is the root
	char * temp;
	char* line = lines.c_str(); 

	std::cout<<"\033[2J\033[1;1H"; //clear screen
	Node* root = cb->addroot(lines); //call builder to add root
	while (!inFile.eof()){ //until the file is done
		
		root->Accept(pVisitor); //print the current company
		usleep(3000000); //delay for 3 seconds
		std::cout<<"\033[2J\033[1;1H"; //clear
		getline(inFile,lines);  //grab line
		if (lines ==""){break;} //make sure it isnt empyt
		//delete line;
		char* line = lines.c_str();

		temp=strtok(line,","); //grab before first comma
		switch (atoi(temp)){ //switch based off of number
			case 1: //add to company
				temp = strtok(NULL,",");
				if (atoi(temp)==1){ //if employee

					string Last = string(strtok(NULL,","));
					string First =string(strtok(NULL,","));
					string pos = string(strtok(NULL,",")); 
					Employee* Emp=new Employee(First,Last,pos);
					temp = strtok(NULL,",");
					root->getName();
					cb->addNode(Emp,temp); //add node to company
				}
				else if(atoi(temp)==2){ //if group
					string Name = string(strtok(NULL,","));
					Group* grp = new Group(Name);
					cb->addNode(grp,strtok(NULL,",")); //add group
					
				}
				break;
				
			case 2:
				cb->deleteGroup(strtok(NULL,",")); //run the builder delete
				break;

		
			case 3:
				cb->disband(strtok(NULL,",")); //run the disband
				break;

		}
		
	};
	return 1;
};
