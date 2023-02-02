#include <iostream>
using namespace :: std;

int main(){
    char exp[100];
    int opr1=0, opr2=0;
    string op;
    while(true){
        cout << "? ";
        cin >> exp;
        opr1 = atoi(exp);
        cin >> exp;
        op = exp;
        cin >> exp;
        opr2 = atoi(exp);
        if(op == "+"){
            cout << opr1 << " + " << opr2 << " = " << opr1+opr2;
        }
        else if(op == "-")
            cout << opr1 << " - " << opr2 << " = " << opr1-opr2;
        else if(op == "*")
            cout << opr1 << " * " << opr2 << " = " << opr1*opr2;
        else if(op == "/")
            cout << opr1 << " / " << opr2 << " = " << opr1/opr2;
        else if(op == "%")
            cout << opr1 << " % " << opr2 << " = " << opr1%opr2;
        else{
            cout << "잘못된 연산자입니다." << endl;
            continue;
        }
        cout << endl; 
    }
    return 0;
}