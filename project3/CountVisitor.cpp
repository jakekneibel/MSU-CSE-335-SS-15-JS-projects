#include "CountVisitor.h"
CountVisitor::CountVisitor(){
	Emp_count = 0;
	Grp_count = 0;

}
CountVisitor::CountVisitor(const CountVisitor & countvisitor){
  
}
CountVisitor::~CountVisitor(){}

CountVisitor& CountVisitor::operator=(cont CountVisitor& countvisitor){
	if (this != countvisitor){
		Emp_count = countVisitor.getEmp_count();
		Grp_count = countVisitor.getGrp_count();
	}
	return *this;
}

void CountVisitor::VisitEmployee(Employee* emp){
	Emp_count++;
}
void CountVisitor::VisitGroup(Group* grp){
	Grp_count++;

	for(uint i =0; i<grp.GetChildrenSize();i++){
		grp.GetChild(i).accept(this);
	}
}

void CountVisitor::PrintResults(){
	std::cout<<"Number of Groups: "<<Grp_count<<std::endl;
	std::cout<<"Number of Employees: "<<Emp_count<<std::endl;
}


void CountVisitor::Reset(){
	Emp_count = 0;
	Grp_count = 0;
}
