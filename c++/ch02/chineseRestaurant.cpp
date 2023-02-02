#include <iostream>
using namespace :: std;

int main(){
    cout << "***** 송리장에 오신 것을 환영합니다. *****" << endl;
    int menu, count;
    string menuName;
    while(true){
        cout << "짬뽕:1, 짜장:2, 군만두:3, 종료:4>>\t";
        cin >> menu;
        switch (menu)
        {
        case 1:
            menuName = "짬뽕";
            break;
        case 2:
            menuName = "짜장";
            break;
        case 3:
            menuName = "군만두";
            break;
        case 4:
            cout << "오늘 영업은 끝났습니다." << endl;
            return 0;
        default:
            cout << "다시 주문하세요!!" << endl;
            continue;
        }
        cout << "몇인분?";
        cin >> count;
        
        cout << menuName << " " << count << "인분 나왔습니다." << endl;
    }
    

    return 0;
}