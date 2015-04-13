#include "Group.h"
#include <iostream>
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
void Group::deletes(){//deletes all elements in the group
  for(int x=0; x<this->GetChildrenSize(); x++){
      this->GetChild(x)->deletes();
    }
  delete this;
}
void Group::deletion(std::string node){//looks through the whole comapain and deletes the element 
  int tbd=-1;
  for(int x=0; x<this->GetChildrenSize(); x++){
	if(this->GetChild(x)->types()==1){
      if(this->GetChild(x)->getName()==node){
        this->GetChild(x)->deletes();
		tbd=x;
      }
      else{
        Node* ref=this->GetChild(x);
        ref->deletion(node);
      }
	}
  }
  if (tbd != -1){
  nlist.erase(nlist.begin()+tbd);}
}
/*
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
*/
void Group::disbands(std::string nodes){//finds the group and adds the elements to the larger group
  int tbd=-1;
  for(int x=0; x<this->GetChildrenSize(); x++){
    if(nlist[x]->getName()==nodes){
      Node* ref=nlist[x];
      for(int i=0; i<ref->GetChildrenSize(); i++){
        AddChild(ref->GetChild(i));
      }
      delete nlist[x];
	  tbd=x;
    }
    else if(nlist[x]->types()==1){
      Node* ref=nlist[x];
      ref->disbands(nodes);
    }
  }
  if (tbd !=-1){
     nlist.erase(nlist.begin()+tbd);
  }
}
int Group::addnotes(Node* nodes,std::string group,int flag){// add the node to the group that it is being requested
  for(int x=0; x<this->GetChildrenSize(); x++){
    if(this->GetChild(x)->types()==1){
      Node* ref=this->GetChild(x);
      if(ref->getName()==group){
        ref->AddChild(nodes);
        return 1;
      }
      else{
        flag=ref->addnotes(nodes, group, flag);
      }
    }
  }
  return flag;
}
