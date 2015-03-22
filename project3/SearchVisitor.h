#ifndef SEARCHVISITOR_H
#define	SEARCHVISITOR_H
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
  string getQuery();
  vector<Node*> getFound();
  void PrintResults();
  virtual void Reset();
};



#endif	/* SEARCHVISITOR_H */
