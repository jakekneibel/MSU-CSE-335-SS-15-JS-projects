#ifndef GROUP_H
#define	GROUP_H
#include <list>
#include <string>
#include "PrintVisitor.h"
class Node{
public:
  virtual void Accept(Visitor*)=0;
};
class Group: public Node{
private:
  std::string name;
  std::list<Node*> nlist;
  //Node list;
  
public:
  virtual void Accept(Visitor* v){v->VisitGroup(this);}
  Group();
  Group(std::string);
  Group(const Group&);
  ~Group();
  Group& operator=(const Group&);
  std::string getName(){return name;};
  Node* getlist(){return nlist;};
  void AddChild(Node*);
  int GetChildenSize(){return nlist.size();};
  Node* GetChild(int i){return nlist[i];};
  
};
#endif	/* GROUP_H */
