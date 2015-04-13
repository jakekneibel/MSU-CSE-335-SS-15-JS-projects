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
void Group::deletes(){
  for(int x=0; x<this->GetChildrenSize(); x++){
      nlist[x]->deletes();
    }
  delete this;
}
void Group::deletion(std::string node){
  for(int x=0; x<this->GetChildrenSize(); x++){
	if(nlist[x]->types()==2){
      if(nlist[x]->getName()==node){
        nlist[x]->deletes();
      }
      else{
        Node* ref=nlist[x];
        ref->deletion(node);
      }
	}
  }
}
void Group::deletionEmployee(std::string fname,std::string lname,std::string pos){
  for(int x=0; x<this->GetChildrenSize(); x++){
    if(nlist[x]->types()==2){
      if(nlist[x]->getFirst()==fname && nlist[x]->GetLast()==lname && nlist[x]->getField()==pos){
        nlist[x]->deletes();
      }
    }
    else if(nlist[x]->types()==2){
      Node* ref=nlist[x];
      ref->deletionEmployee(fname, lname, pos);
    }
  }
}
void Group::disband(std::string nodes){
  for(int x=0; x<this->GetChildrenSize(); x++){
    if(nlist[x]->getName()==nodes){
      Node* ref=nlist[x];
      for(int i=0; i<ref->GetChildrenSize(); i++){
        AddChild(ref->GetChild(i));
      }
      delete nlist[x];
    }
    else if(nlist[x]->types()==2){
      Node* ref=nlist[x];
      ref->disband(nodes);
    }
  }
}
int Group::addnotes(Node* nodes,std::string group,int flag){
  for(int x=0; x<this->GetChildrenSize(); x++){
    if(nlist[x]->types()==2){
      Node* ref=nlist[x];
      if(ref->getName()==group){
        ref->AddChild(nodes);
        return 1;
      }
      else{
        flag=ref->addnotes(nodes, group, flag);
        return flag;
      }
    }
  }
  return flag;
}
