#include "Employee.h"
Employee::Employee(string theFName,string theLName,string thepos){
  fName=theFName;
  lName=theLName;
  pos=thepos;
}
Employee::Employee(const Employee & employee){
  fName=employee.FName();
  lName=employee.LName();
  pos=employee.pos();
}
Employee::~Employee(){}
