#ifndef EMPLOYEE_H
#define	EMPLOYEE_H
#include <string>
#include "Group.h"

class Employee: public Node{
private:
  std::string fName;
  std::string lName;
  std:string pos;
public:
  virtual void Accept(Visitor*v){v->VisitEmployee(this);}
  Employee();
  Employee(string theFName,string theLName,string thepos);
  Employee(const Employee&);
  ~Employee();
  Employee& operator=(const Employee&);
  string getFirst(){return fName;};
  string GetLast(){return lName;};
  string getField(){return pos;};
};


#endif	/* EMPLOYEE_H */
