
#include "CompanyBuilder.h"
void CompanyBuilder::BuildCompany(){Group* root = new Group(" ");};
void CompanyBuilder::addNode(nodes, group){
  root.addnotes(nodes, group);
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
