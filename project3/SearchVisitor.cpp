#include "SearchVisitor.h"
SearchVisitor::SearchVisitor(){
	query="";
	found = new vector<Node*>();
}
SearchVisitor::SearchVisitor(const SearchVisitor & searchvisitor){
	query = searchvisitor.getQuery();
	found = searchvisitor.getFound();
}
SearchVisitor::~SearchVisitor(){
	this.Reset();
	delete found;
	delete query;
}

SearchVisitor& SearchVisitor::operator=(const SearchVisitor& searchvisitor){
	if(this != searchvisitor){
		query = searchvisitor.getQuery();
		found = searchvisitor.getFound();	
	}
	return *this;
}

void SearchVisitor::VisitEmployee(Employee* emp){
	if(emp.getFirst()==query){found.push_back(emp);}
	elif(emp.getLast()==query){found.push_back(emp);}
	elif(emp.getField()==query){found.push_back(emp);}

}

string SearchVisitor::getQuery(){return query;}
vector<Node*> SearchVisitor::getFound(){return found;}

void SearchVisitor::VisitGroup(Group* grp){
	if(grp.getName()==query{found.push_back(emp);}

}

void SearchVisitor::setQuery(string str){
	query =str; 
}

void SearchVisitor::PrintResults(){
	PrintVistor pVisitor = new PrintVistor();
	for(int i =0;i<found.size();i++){
		found[i]->accept(pVisitor);	
		pVisitor->Reset();
	}

}

void SearchVisitor::Reset(){
	query ="";
	found.clear();
}
