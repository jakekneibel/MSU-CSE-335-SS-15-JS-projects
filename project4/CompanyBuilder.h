#ifndef COMPANYBUILDER_H
#define	COMPANYBUILDER_H
#include <vector>
#include <string>
#include "Node.h"
#include "Builder.h"
#include "Group.h"
class CompanyBuilder : public Builder{
private:
  Group* root;
public:
  virtual void BuildCompany();
  virtual void addNode(Node* nodes, std::string group);
  virtual Node* addroot(std::string roots);
  virtual void disband(std::string nodes);
  virtual void deleteGroup(std::string nodes);
  Group* getroot()const{return root;};
  virtual void deleteEmployee(std::string fname, std::string lname, std::string pos);
  CompanyBuilder(){};
  CompanyBuilder(Group *);
  CompanyBuilder(const CompanyBuilder &);
  ~CompanyBuilder();
  CompanyBuilder& operator=(const CompanyBuilder&);
};
#endif	/* COMPANYBUILDER_H */
