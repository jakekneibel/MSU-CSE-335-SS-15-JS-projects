#include "Group.h"
Group::Group(string theName){
  name=theName;
}
Group::Group(const Group & group){
  name=group.getName();
  list=group.list();
}
Group::~Group(){}
Group::AddChild(Groups* x){
  list.push_back(x);
}
