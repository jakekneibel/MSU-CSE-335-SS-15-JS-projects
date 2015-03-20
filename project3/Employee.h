#ifndef EMPLOYEE_H
#define	EMPLOYEE_H

class Employee{
public:
  Employee();
  Employee(const Employee&);
  ~Employee();
  Employee& operator=(const Employee&);
};


#endif	/* EMPLOYEE_H */
