#include "Group.h"
Group::Group(std::string theName){
  name=theName;
}
Group::Group(const Group & group){
  name=group.getName();
  nlist=group.getlist();
}
Group::~Group(){}
void Group::AddChild(Node* x){//adds groups or employee to the group
  nlist.push_back(x);
}
Group::deletes(){
  for(int x=0; x<nlist.GetChildrenSize(); x++){
      nlist[x]->deletes();
    }
  delete this;
}
