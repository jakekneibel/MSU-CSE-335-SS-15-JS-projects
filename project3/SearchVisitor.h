#ifndef SEARCHVISITOR_H
#define	SEARCHVISITOR_H
#include <string>
#include <vector>
#include "Visit.h"
#include "Employee.h"
#include "Group.h"
using std::vector;
using std::string;

class SearchVisitor: public Visitor{
private:
	string query;
	vector<Node*> found;
public:
  SearchVisitor();
  SearchVisitor(const SearchVisitor&);
  ~SearchVisitor();
  SearchVisitor& operator=(const SearchVisitor&);

  virtual void VisitEmployee(Employee*);
  virtual void VisitGroup(Group*);
  void setQuery(string);
  string getQuery()const;
  vector<Node*> getFound()const;
  void PrintResults();
  virtual void Reset();
};



#endif	/* SEARCHVISITOR_H */
