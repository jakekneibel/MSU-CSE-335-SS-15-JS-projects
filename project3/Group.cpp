#include "Group.h"
Group::Group(string theName){
  name=theName;
}
Group::Group(const Group & group){
  name=group.getName();
  nlist=group.list();
}
Group::~Group(){}
Group::AddChild(Groups* x){
  nlist.push_back(x);
}
