#include <iostream>
using namespace :: std;

int main(){
    string s1, s2;
    cout << "새 암호를 입력하세요>>";
    cin >> s1;
    cout << "새 암호를 다시 한 번 입력하세요>>";
    cin >> s2;
    if(s1 == s2)
        cout << "같습니다." << endl;
    else
        cout << "다릅니다." << endl;
    return 0;
}