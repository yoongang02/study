#include <iostream>
using namespace :: std;

int main(){
    int v1, v2;
    cout << "두 수를 입력하라>> ";
    cin >> v1 >> v2;
    cout << "큰 수 = ";
    if(v1-v2 > 0)
        cout << v1 << endl;
    else
        cout << v2 << endl;
    return 0;
}