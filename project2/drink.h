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
private:
    string user;
    int size;
public:
	Drink(){}
    Drink(string theName, int theSize);
	Drink(const Drink & drink);
	virtual ~Drink();
    virtual void confirmOrder();
    string sizestr();

    string  get_user()const;
    int  get_size()const;
    
    
    Drink& operator=(const Drink &dr)
    {
		if(this != &dr){
        	user = dr.get_user();
        	size = dr.get_size();      
		}
		return *this;
    }
    
};
class BubbleTea: public Drink{
private:
    bool temp;
    int opp;
public:
    BubbleTea();
    BubbleTea(string theUser, int theSize, bool thetemp, int theopp);
	BubbleTea(const BubbleTea& bubTea);
	BubbleTea& operator = (const BubbleTea & bubTea);
	virtual ~BubbleTea();
    void confirmOrder();
    string sizes();
};
class OrangeJuice: public Drink{
    bool pulp; 
public:
    OrangeJuice();
    OrangeJuice(string theUser, int theSize, bool thepulp);
	OrangeJuice(const OrangeJuice& oj);
	~OrangeJuice();
	OrangeJuice& operator=(const OrangeJuice& oj);
    void confirmOrder();
    string pulpstr();
    
};


class OrangeJuiceOrderList{
public:
	OrangeJuiceOrderList(vector<OrangeJuice*>& ojList);
	OrangeJuiceOrderList(const OrangeJuiceOrderList& ojOrderList);
	~OrangeJuiceOrderList();
	OrangeJuiceOrderList & operator=(const OrangeJuiceOrderList& ojOrderList);

	void toDrinkVector(vector<Drink*> &);
private:
	vector<OrangeJuice*> orangeJuiceDrinks;
};

class BubbleTeaList{
public:

	BubbleTeaList(vector<BubbleTea*> & bubList);
	BubbleTeaList(const BubbleTeaList& bubTeaList);
	~BubbleTeaList();
	BubbleTeaList & operator=(const BubbleTeaList& bubTeaList);

	void toDrinkVector(vector<Drink*> & );
private:
	vector<BubbleTea*> bubbleTeaDrinks;
};



#endif	/* DRINK_H */

