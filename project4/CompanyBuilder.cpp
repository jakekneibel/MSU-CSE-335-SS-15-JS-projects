
#include "CompanyBuilder.h"
void CompanyBuilder::BuildCompany(){Group* root = new Group(" ");};
void CompanyBuilder::addNode(nodes, group){
  int flag;
  flag=root.addnotes(nodes, group,0);
  if(flag==0 && nodes.type==2){
    cout<<"ERROR: parent group "<<node.getName()<<" does not exist. Omitting this entry"<<endl;
  }
  else if(flag==0 && nodes.type==1){
    cout<<"ERROR: parent group "<<node.getFirst()<<" does not exist. Omitting this entry"<<endl;
  }
}
void CompanyBuilder::addroot(roots){Group* root = new Group(roots);};
CompanyBuilder::CompanyBuilder(const CompanyBuilder & company){
  root=company.getroot();
}
void CompanyBuilder::disband(nodes){
  root.disbands(nodes);
}
void CompanyBuilder::deleteGroup(nodes){
  root.deletion(nodes);
}
virtual void CompanyBuilder::deleteEmployee(fname, lname, pos){
  root.deletionEmployee(fname, lname, pos);
}
CompanyBuilder::~CompanyBuilder(){}
CompanyBuilder::CompanyBuilder(const Group & group){
  root=group.getroot();
}
