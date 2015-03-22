#include <iostream>
#include "PrintVisitor.h"

PrintVisitor::PrintVisitor(){
	Tab = 0;
}
PrintVisitor::PrintVisitor(const PrintVisitor & printvisitor){
	Tab = printvisitor.getTab();
}
PrintVisitor::~PrintVisitor(){}

PrintVisitor& PrintVisitor::operator=(const PrintVisitor& printvisitor){
	if (&printvisitor != this){
		Tab = printvisitor.getTab();
	}
	return *this;
}

void PrintVisitor::VisitEmployee(Employee* emp){
	for(int i= 0;i<Tab;i++){std::cout << "  ";}
	std::cout << emp->getField() <<": "<<emp->getFirst();
	std::cout <<" "<<emp->GetLast()<<std::endl;
}

void PrintVisitor::VisitGroup(Group* grp){

	for(int i=0;i<Tab;i++){std::cout << "  ";}
	std::cout <<"+ Team "<<grp->getName()<<std::endl;
	for(int i =0;i<grp->GetChildrenSize();i++){
		Tab++;
		grp->GetChild(i)->Accept(this);
		Tab--;
	}
}

void PrintVisitor::Reset(){
	Tab =0;
}
