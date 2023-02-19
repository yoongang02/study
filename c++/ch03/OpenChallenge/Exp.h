#include <iostream>
using namespace std;

class Exp{
    private:
        int exp,base;
    public:
        int getValue();
        int getBase();
        int getExp();
        bool equals(Exp b);
        Exp();
        Exp(int b);
        Exp(int b, int e);
};