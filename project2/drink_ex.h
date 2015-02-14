/* 
 * File:   drink.h
 * Author: sunangel
 *
 * Created on January 18, 2015, 10:30 PM
 */

#ifndef DRINK_H
#define	DRINK_H
#include <string>
#include <vector>

class Drink {
public:
    Drink(std::string orderer, int size);
    Drink(const Drink & drink);
    Drink& operator = (const Drink & drink);
    virtual ~Drink();
    virtual void confirmOrder();
    static std::string numberSizeToWordSize(int size);

private:
    int mSize;
    std::string mOrderer;
};

class BubbleTea: public Drink {
public:
    BubbleTea(std::string orderer, int size, bool warm, int amountOfBubbles);
    BubbleTea(const BubbleTea & bt);
    BubbleTea& operator = (const BubbleTea & bt);
    virtual ~BubbleTea();
    virtual void confirmOrder();

private:
    bool mWarm;
    int mAmountOfBubbles;
};


class OrangeJuice : public Drink {
public:
    OrangeJuice(std::string orderer, int size, bool pulp);
    OrangeJuice(const OrangeJuice & oj);
    OrangeJuice& operator = (const OrangeJuice & oj);
    virtual ~OrangeJuice();
    virtual void confirmOrder();

private:
    bool mPulp;
    
};


#endif	/* DRINK_H */
