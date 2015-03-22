#ifndef NODE_H
#define NODE_H
#include "Visit.h"

/*
class Group;
class Employee;
class Visitor;
class PrintVisitor;
class SearchVisitor;
class CountVisitor;
*/
class Node{
public:
  virtual void Accept(Visitor*)=0;
  virtual ~Node(){};
  Node(){};
  Node(const Node&){};


};
#endif
