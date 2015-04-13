
#include "CompanyBuilder.h"
#include <iostream>
using namespace std;

void CompanyBuilder::BuildCompany(){root = NULL;};
void CompanyBuilder::addNode(Node* nodes,std::string group){
  int flag;
  if (root->getName()==group){
    root->AddChild(nodes);
	return;}
  flag=root->addnotes(nodes, group,0);
  if(flag==0 && nodes->types()==2){
    std::cout<<"ERROR: parent group "<<group<<" does not exist. Omitting this entry"<<std::endl;
  }
  else if(flag==0 && nodes->types()==1){
    std::cout<<"ERROR: parent group "<< group<<" does not exist. Omitting this entry"<<std::endl;
  }
}
Node* CompanyBuilder::addroot(string roots){root = new Group(roots);
	return root;};
CompanyBuilder::CompanyBuilder(const CompanyBuilder & company){
  root=company.getroot();
}
void CompanyBuilder::disband(string nodes){
  root->disbands(nodes);
}
void CompanyBuilder::deleteGroup(string nodes){
  root->deletion(nodes);
}
void CompanyBuilder::deleteEmployee(string fname,string lname,string pos){
  //root->deletionEmployee(fname, lname, pos);
}
CompanyBuilder::~CompanyBuilder(){}
CompanyBuilder::CompanyBuilder(Group * group){
  root=group;
}
