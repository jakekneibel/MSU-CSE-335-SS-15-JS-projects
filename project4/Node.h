#ifndef NODE_H
#define NODE_H
#include "Visit.h"
//Abstract function that group and employee inherit from
class Node{
public:
virtual void deletes()=0;
virtual int types()=0;
virtual std::string getName()const=0;
virtual void Accept(Visitor*)=0; //function to implement acceptance of visitors
virtual void deletion(std::string)=0;
virtual ~Node(){};

virtual int GetChildrenSize()=0;
virtual Node* GetChild(int i)=0;
virtual void disbands(std::string)=0;
virtual void AddChild(Node*)=0;
virtual int addnotes(Node*, std::string, int)=0;


Node(){};
Node(const Node&){};
};
#endif
