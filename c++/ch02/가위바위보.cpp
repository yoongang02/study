#include <iostream>
using namespace :: std;

int main(){
    string v1,v2;
    cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요.\n";
    cout << "로미오>> ";
    cin >> v1;
    cout << "줄리엣>> ";
    cin >> v2;

    if(v1 == "가위"){
        if(v2 == "가위")
            cout << "비겼습니다.\n";
        else if(v2 == "바위")
            cout << "줄리엣이 이겼습니다.\n";
        else
            cout << "로미오가 이겼습니다.\n";
    }
    else if(v1 == "바위"){
        if(v2 == "가위")
            cout << "로미오가 이겼습니다.\n";
        else if(v2 == "바위")
            cout << "비겼습니다.\n";
        else
            cout << "줄리엣이 이겼습니다.\n";
    }
    else{
        if(v2 == "가위")
            cout << "줄리엣이 이겼습니다.\n";
        else if(v2 == "바위")
            cout << "로미오가 이겼습니다.\n";
        else
            cout << "비겼습니다.\n";
    }
    return 0;
}