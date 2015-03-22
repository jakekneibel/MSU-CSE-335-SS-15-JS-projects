#ifndef EMPLOYEE_H
#define	EMPLOYEE_H
#include <string>
#include "Group.h"

class Employee: public Node{
private:
  std::string fName;
  std::string lName;
  std::string pos;
public:
  virtual void Accept(Visitor*v){v->VisitEmployee(this);}
  Employee();
  Employee(std::string theFName,std::string theLName,std::string thepos);
  Employee(const Employee&);
  ~Employee();
  Employee& operator=(const Employee&);
  std::string getFirst(){return fName;};
  std::string GetLast(){return lName;};
  std::string getField(){return pos;};
};


#endif	/* EMPLOYEE_H */
