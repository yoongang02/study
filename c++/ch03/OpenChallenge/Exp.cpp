#include <iostream>
#include "Exp.h"
using namespace std;

Exp::Exp(int b, int e){
    base = b;
    exp = e;
}
Exp::Exp(int b):Exp(b,1){}
Exp::Exp():Exp(1,1){}
int Exp::getBase(){
    return base;
}
int Exp::getExp(){
    return exp;
}
int Exp::getValue(){
    int value = 1;
    for(int i=0; i<exp; i++){
        value *= base;
    }
    return value;
}
bool Exp::equals(Exp b){
    if(getValue() == b.getValue())
        return true;
    else
        return false;
}