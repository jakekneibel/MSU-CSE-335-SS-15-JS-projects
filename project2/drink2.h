/* 
 * File:   drink.h
 * Author: schmi534
 *
 * Created on January 30, 2015, 12:38 PM
 */

#ifndef DRINK_H
#define	DRINK_H
#include<iostream>
#include<string>
#include<vector>
using std::cout; using std::endl; using std::cin;
using std::string;
using std::vector;
using std::ostream;

class Drink{
    string user;
    int size;
public:
    Drink(string theName, int theSize);
    virtual void confirmOrder();
    string sizestr();
    string get_user();
    int get_size();
    
    
    void operator=(Drink &dr)
    {
        user = dr.get_user();
        size = dr.get_size();      
    }
    
};
class BubbleTea: public Drink{
    bool temp;
    int opp;
public:
    BubbleTea();
    BubbleTea(string theUser, int theSize, bool thetemp, int theopp);
    void confirmOrder();
    string sizes();
};
class OrangeJuice: public Drink{
    bool pulp; 
public:
    OrangeJuice();
    OrangeJuice(string theUser, int theSize, bool thepulp);
    void confirmOrder();
    string pulpstr();
    
};


#endif	/* DRINK_H */

