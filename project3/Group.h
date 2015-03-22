#ifndef GROUP_H
#define	GROUP_H
#include <list>
class Node{
public:
  virtual void Accept(Visitor*v)=0;
};
class Group: public Node{
private:
  string name;
  Node list;
  
public:
  virtual void Accept(Visitor*v){v->VisitGroup(this);}
  Group();
  Group(string);
  Group(const Group&);
  ~Group();
  Group& operator=(const Group&);
  string getName(){return name;}
  groups list(){return list;}
  void AddChild(Node*);
  int GetChildenSize(){return list.size();}
  Node GetChild(int i){return list[i];}
  
};
#endif	/* GROUP_H */
