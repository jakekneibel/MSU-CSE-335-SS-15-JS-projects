#ifndef VISIT_H
#define VISIT_H
class Group;
class Employee;


class Visitor{
public:
    Visitor(){};
    Visitor(const Visitor& vis){};
    virtual void VisitEmployee(Employee*)=0;
    virtual void VisitGroup(Group*)=0;
    virtual void Reset()=0;
    virtual ~Visitor(){};
};

#endif
