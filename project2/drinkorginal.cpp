#include<iostream>
using std::cout; using std::cin; using std::endl;
#include<string>
using std::string;

#include "drink.h"

Drink::Drink(string theName, int theSize){
    user=theName;
    size=theSize;
}
string Drink::sizestr(){
    if(size==1){
        return "small";
    }
    if(size==2){
        return "medium";
    }
    else{
        return "large";
    }
}

string Drink::get_user(){
    return user;
}

int Drink::get_size(){
    return size;
}

void Drink::confirmOrder(){
    std::cout << user << " ordered a " << sizestr() << " drink of";
}
BubbleTea::BubbleTea(string theUser, int theSize, bool thetemp, int theopp)
: Drink(theUser, theSize) {
    temp = thetemp;
    opp = theopp;

}
string BubbleTea::sizes(){
    if(opp==1){
        return "small bubbles";
    }
    if(opp==2){
        return "medium bubbles";
    }
    else{
        return "large bubbles";
    }
}
void BubbleTea::confirmOrder(){
    Drink::confirmOrder();
    std::cout << " bubble tea with " << sizes();
}
OrangeJuice::OrangeJuice(string theUser, int theSize, bool thepulp)
: Drink(theUser, theSize) {
    pulp = thepulp;
}
string OrangeJuice::pulpstr(){
    if(pulp==true){
        return "pulp";
    }
    else{
        return "no pulp";
    }
}
void OrangeJuice::confirmOrder(){
    Drink::confirmOrder();
    std::cout << " orange juice with " << pulpstr();
}
