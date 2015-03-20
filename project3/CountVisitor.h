#ifndef COUNTVISITOR_H
#define	COUNTVISITOR_H
class CountVisitor{
private:
  // un known type vistitors;
public:
  CountVisitor();
  CountVisitor(const CountVisitor&);
  ~CountVisitor();
  CountVisitor& operator=(const CountVisitor&);
};
#endif	/* COUNTVISITOR_H */
