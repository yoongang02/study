#include <iostream>
using namespace :: std;

int main(){
    char name[100];
    string nameArr[5];
    cout << "5명의 이름을 ';'으로 구분하여 입력하세요" << endl;
    for(int i=0; i<5; i++){
        cin.getline(name,100,';');
        nameArr[i] = name;
        cout << i+1 << " : " << name << endl;
    }
    int max = nameArr[0].length();
    int flag;
    for(int i=1; i<4; i++){
        if(max < nameArr[i].length()){
            max = nameArr[i].length();
            flag = i;
        }     
    }
    cout << "가장 긴 이름은 " << nameArr[flag] << endl;
    return 0;
}