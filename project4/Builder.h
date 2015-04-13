#ifndef BUILDER_H
#define	BUILDER_H
class Builder {
public:
  virtual void BuildCompany()=0;
  virtual void addNode(Node* nodes, std::string group)=0;
  virtual Node* addroot(std::string roots)=0;
  virtual void disband(std::string nodes)=0;
  virtual void deleteGroup(std::string nodes)=0;
  virtual void deleteEmployee(std::string fname, std::string lname, std::string pos)=0;
};
#endif	/* BUILDER_H */
