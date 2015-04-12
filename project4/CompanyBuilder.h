#ifndef COMPANYBUILDER_H
#define	COMPANYBUILDER_H
#include <vector>
#include <string>
#include "Node.h"
class CompanyBuilder{
private:
  Group* root;
  std::vector<Node*> nlist;
public:
  virtual void BuildCompany(){};
  virtual void addNode(Node* nodes, std::string group){};
  virtual void addGroup(Node* nodes){};
  virtual void addroot(std::string roots){};
  virtual void disband(std::string nodes){};
  virtual void deleteGroup(std::string nodes){};
  virtual void deleteEmployee(std::string fname, std::string lname, std::string pos){};
  ~CompanyBuilder();
  CompanyBuilder& operator=(const CompanyBuildere&);
  std::string getName()const{return name;};
  std::vector<Node*> getlist()const{return nlist;};
};
#endif	/* COMPANYBUILDER_H */
