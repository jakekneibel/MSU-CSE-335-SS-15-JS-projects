#ifndef EMPLOYEE_H
#define	EMPLOYEE_H

class Employee :public Node{
private:
  string fName;
  string lName;
  string pos;
public:
  virtual void Accept(Visitor*v){v->VisitEmployee(this);}
  Employee();
  Employee(string theFName,string theLName,string thepos);
  Employee(const Employee&);
  ~Employee();
  Employee& operator=(const Employee&);
  string FName(){return fName;}
  string LName(){return lName;}
  string pos(){return pos;}
};


#endif	/* EMPLOYEE_H */
