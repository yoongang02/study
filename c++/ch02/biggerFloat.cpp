#include <iostream>
using namespace :: std;

int main(){
    float value[5];
    cout << "5개의 실수를 입력하라>> ";
    for(int i=0; i<5; i++)
        cin >> value[i];
    float max = value[0];
    for(int i=1; i<4; i++){
        if(max < value[i])
            max = value[i];
    }
    cout << "제일 큰 수 = " << max << endl;
    return 0;
}