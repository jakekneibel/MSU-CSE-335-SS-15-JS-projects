#include "Group.h"
Group::Group(std::string theName){
  name=theName;
}
Group::Group(const Group & group){
  name=group.getName();
  nlist=group.getlist();
}
Group::~Group(){}
void Group::AddChild(Node* x){
  nlist.push_back(x);
}
