#ifndef COUNTVISITOR_H
#define	COUNTVISITOR_H
#include "Visit.h"
#include "Employee.h"
#include "Group.h"
class CountVisitor: public Visitor{
private:
	int Emp_count;
	int Grp_count;
public:
  CountVisitor();
  CountVisitor(const CountVisitor&);
  ~CountVisitor();
  CountVisitor& operator=(const CountVisitor&);

  virtual void VisitEmployee(Employee*);
  virtual void VisitGroup(Group*);
  void PrintResults();
  virtual void Reset();

  int getEmp_count()const{return Emp_count;}
  int getGrp_count()const{return Grp_count;}

};
#endif	/* COUNTVISITOR_H */
