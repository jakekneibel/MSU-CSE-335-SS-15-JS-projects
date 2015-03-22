#include "SearchVisitor.h"
#include "PrintVisitor.h"
#include <iostream>
SearchVisitor::SearchVisitor(){
	query="";
	//found = new vector<Node*>();
}
SearchVisitor::SearchVisitor(const SearchVisitor & searchvisitor){
	query = searchvisitor.getQuery();
	found = searchvisitor.getFound();
}
SearchVisitor::~SearchVisitor(){
	Reset();
	//delete &found;
	
}

SearchVisitor& SearchVisitor::operator=(const SearchVisitor& searchvisitor){
	if(this != &searchvisitor){
		query = searchvisitor.getQuery();
		found = searchvisitor.getFound();	
	}
	return *this;
}

void SearchVisitor::VisitEmployee(Employee* emp){
	if(emp->getFirst()==query){found.push_back(emp);}
	else if(emp->GetLast()==query){found.push_back(emp);}
	else if(emp->getField()==query){found.push_back(emp);}
	else if((emp->getFirst()+" "+emp->GetLast()) ==query){found.push_back(emp);}

}

string SearchVisitor::getQuery()const{return query;}
vector<Node*> SearchVisitor::getFound()const {return found;}

void SearchVisitor::VisitGroup(Group* grp){
	if(grp->getName()==query){found.push_back(grp);}
	for(int i =0;i<grp->GetChildrenSize();i++){
        grp->GetChild(i)->Accept(this);
    }

}

void SearchVisitor::setQuery(string str){
	query =str; 
}

void SearchVisitor::PrintResults(){
	std::cout << "Found "<<found.size();
	std::cout <<" results for the query "<< query<<std::endl;
	PrintVisitor* pVisitor = new PrintVisitor();
	for(unsigned int i =0;i<found.size();i++){
		found[i]->Accept(pVisitor);	
		pVisitor->Reset();
	}
	std::cout<< std::endl;

}

void SearchVisitor::Reset(){
	query ="";
	found.clear();
}
