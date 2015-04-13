#ifndef EMPLOYEE_H
#define	EMPLOYEE_H
#include <string>
#include "Node.h"//needed to initiate the program correctly
using std::string;


class Employee: public Node{
private:
  std::string fName;
  std::string lName;
  std::string pos;
public:
  virtual void Accept(Visitor*v){v->VisitEmployee(this);};//needed for the visitor class
  Employee();
  Employee(std::string theFName,std::string theLName,std::string thepos);
  Employee(const Employee&);
  ~Employee();
  Employee& operator=(const Employee&);
  const std::string getFirst()const{return fName;};
  const std::string GetLast()const{return lName;};
  const std::string getField()const{return pos;};
  virtual std::string getName()const{return fName;};
  virtual void deletion(std::string Node){};
  void deletes(){delete this;};
  virtual int types(){return 2;};
};


#endif	/* EMPLOYEE_H */
