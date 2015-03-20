#ifndef COUNTVISITOR_H
#define	COUNTVISITOR_H
class CountVisitor{
public:
  CountVisitor();
  CountVisitor(const CountVisitor&);
  ~CountVisitor();
  CountVisitor& operator=(const CountVisitor&);
};
#endif	/* COUNTVISITOR_H */
