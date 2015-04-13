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
	//std::cout<<lines<<std::endl;
	Node* root = cb->addroot(lines);
	while (!inFile.eof()){
		
		usleep(1000000);
		//std::cout<<"\033[2J\033[1;1H";
		root->Accept(pVisitor);
		getline(inFile,lines);
		if (lines ==""){break;}
		//std::cout << lines <<std::endl;	
		//delete line;
		char* line = lines.c_str();
		//cout<<"before"<<line<<endl;

		temp=strtok(line,",");
		//cout<<"after"<<line<<endl;
		switch (atoi(temp)){
			case 1:
				//std::cout<<"1h"<<endl;
				//cout<<"HHHH"<<":::::"<<endl;
				temp = strtok(NULL,",");
				//cout<<temp<<endl;
				if (atoi(temp)==1){

					//cout<<"here"<<endl;
					string Last = string(strtok(NULL,","));
					string First =string(strtok(NULL,","));
					string pos = string(strtok(NULL,",")); 
					Employee* Emp=new Employee(First,Last,pos);
					temp = strtok(NULL,",");
					//cout <<temp<<"!!!"<<endl;
					root->getName();
					cb->getroot()->getName()=="SOME";
					cb->addNode(Emp,temp);
				}
				else if(atoi(temp)==2){
					//cout<<"GROUPADD"<<endl;
					string Name = string(strtok(NULL,","));
					Group* grp = new Group(Name);
					cb->addNode(grp,strtok(NULL,","));
					
				}
				break;
				
			case 2:
				//std::cout<<"2";
				//std::cout<<"Delete GRo"<<std::endl;
				cb->deleteGroup(strtok(NULL,","));
				break;

		
			case 3:
				//std::cout<<endl<<"3"<<endl;
				cb->disband(strtok(NULL,","));
				break;

		}
		
	};
	return 1;
};
