#ifndef PRINTVISITOR_H
#define	PRINTVISITOR_H
#include "Visit.h"
#include "Employee.h"
#include "Group.h"

class PrintVisitor: public Visitor{
public:
  PrintVisitor();
  PrintVisitor(const PrintVisitor&);
  virtual ~PrintVisitor();
  PrintVisitor& operator=(const PrintVisitor&);

  virtual void Reset();

  virtual void VisitEmployee(Employee*);
  virtual void VisitGroup(Group*);

  int getTab()const{return Tab;};
private:
	int Tab;
};

#endif	/* PRINTVISITOR_H */
