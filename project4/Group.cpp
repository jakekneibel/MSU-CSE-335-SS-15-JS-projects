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
void Group::deletion(std::string node){
  for(int x=0; x<nlist.GetChildrenSize(); x++){
    if(x.getName()==nodes){
      x.deletes();
    }
    else if(x.type==2){
      Node* ref=root[x];
      ref.deletion(nodes);
    }
  }
}
void Group::deletionEmployee(fname, lname, pos){
  for(int x=0; x<nlist.GetChildrenSize(); x++){
    if(x.getFirst()==fname && x.GetLast()==lname && x.getField()==pos){
      x.deletes();
    }
    else if(x.type==2){
      Node* ref=root[x];
      ref.deletionEmployee(fname, lname, pos);
    }
  }
};
void Group::disband(nodes){
  for(int x=0; x<nlist.GetChildrenSize(); x++){
    if(x.getName()==nodes){
      Node* ref=root[x];
      for(int i=0; i<ref.GetChildrenSize(); i++){
        AddChild(ref.GetChild(i));
      }
      delete x;
    }
    else if(x.type==2){
      Node* ref=root[x];
      ref.disbands(nodes);
    }
  }
}
