#ifndef GROUP_H
#define	GROUP_H
#include <list>
class Groups{
public:
  virtual void Accept(Visitor*v)=0;
};
class Group: public Groups{
private:
  string name;
  Groups list;
  
public:
  virtual void Accept(Visitor*v){v->VisitGroup(this);}
  Group(string);
  Group(const Group&);
  ~Group();
  Group& operator=(const Group&);
  string getName(){return name;}
  groups list(){return list;}
  void AddChild(Groups*);
  int GetChildenSize(){return list.size();}
  Groups GetChild(int i){return list[i];}
  
};
#endif	/* GROUP_H */
