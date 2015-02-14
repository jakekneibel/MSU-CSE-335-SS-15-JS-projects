/* 
 * File:   drink.cpp
 * Author: sunangel
 * 
 * Created on January 18, 2015, 10:30 PM
 */

#include "drink.h"
#include <iostream>
Drink::Drink(std::string orderer,int size){
    mSize = size;
    mOrderer=orderer;
}

Drink::Drink(const Drink & drink){
    mSize=drink.mSize;
    mOrderer=drink.mOrderer;
}

Drink& Drink::operator = (const Drink & drink){
    if (this!=&drink) {
        mSize = drink.mSize;
        mOrderer = drink.mOrderer;
    }
    return *this;
}

Drink::~Drink() {
}


std::string Drink::numberSizeToWordSize(int size) {
    if (size==1) {
        return "small";
    }
    else if (size==2) {
        return "medium";
    }
    else if (size==3){
        return "large";
    } else {
        return "invalid size";
    }
}
void Drink::confirmOrder() {
    std::cout << mOrderer << " ordered a " << numberSizeToWordSize(mSize) << " drink";
}

BubbleTea::BubbleTea(std::string orderer, int size, bool warm, int amountOfBubbles)
: Drink(orderer, size){
    mWarm=warm;
    mAmountOfBubbles=amountOfBubbles;
}

BubbleTea::BubbleTea(const BubbleTea & bt):Drink(bt){
    mAmountOfBubbles=bt.mAmountOfBubbles;
}

BubbleTea& BubbleTea::operator = (const BubbleTea & bt){
   if (this!= &bt) {
        mAmountOfBubbles=bt.mAmountOfBubbles;
        Drink::operator =(bt);
    }
    return *this;
}

BubbleTea::~BubbleTea() {
}

void BubbleTea::confirmOrder() {
    Drink::confirmOrder();
    std::cout << " of bubble tea with " << numberSizeToWordSize(mAmountOfBubbles) << " bubbles";
}

OrangeJuice::OrangeJuice(std::string orderer, int size, bool pulp)
: Drink(orderer, size){
    mPulp=pulp;
}

OrangeJuice::OrangeJuice(const OrangeJuice & oj):Drink(oj){
    mPulp=oj.mPulp;
}

OrangeJuice& OrangeJuice::operator = (const OrangeJuice & oj){
    if (this!= &oj) {
        mPulp=oj.mPulp;
        Drink::operator =(oj);
    }
    return *this;
}

OrangeJuice::~OrangeJuice() {
}

void OrangeJuice::confirmOrder(){
    Drink::confirmOrder();
    std::cout <<" of orange juice with ";
    if (!mPulp)
        std::cout <<"no ";
    std::cout << "pulp";  
}
