#ifndef COUNTVISITOR_H
#define	COUNTVISITOR_H
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

  int getEmp_count(){return Emp_count;}
  int getGrp_count(){return Grp_count;}

};
#endif	/* COUNTVISITOR_H */
