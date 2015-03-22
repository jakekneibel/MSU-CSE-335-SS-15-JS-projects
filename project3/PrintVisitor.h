#ifndef PRINTVISITOR_H
#define	PRINTVISITOR_H
//#include "Group.h"
//#include "Employee.h"

class Visitor{
public:
	virtual void VisitEmployee(Employee*)=0;
	virtual void VisitGroup(Group*)=0;
	virtual void Reset() =0;
	virtual ~Visitor(){};
};

class PrintVisitor: public Visitor{
public:
  PrintVisitor();
  PrintVisitor(const PrintVisitor&);
  virtual ~PrintVisitor();
  PrintVisitor& operator=(const PrintVisitor&);

  virtual void Reset();

  virtual void VisitEmployee(Employee*);
  virtual void VisitGroup(Group*);

  int getTab(){return Tab;};
private:
	int Tab;
};

#endif	/* PRINTVISITOR_H */
