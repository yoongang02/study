#include <iostream>
using namespace :: std;

int main(){
    cout << "에스프레소 2000원, 아메리카노 2300원, 카푸치노 2500원입니다." << endl;
    int totalMoney = 0;
    while(true){
        string menuName = "";
        int count = 0, price = 0;
        cout << "주문>> ";
        cin >> menuName >> count;
        if(menuName == "에스프레소")
            price = 2000;
        else if(menuName == "아메리카노")
            price = 2300;
        else if(menuName == "카푸치노")
            price = 2500;
        else{
            cout << "저희 매장에 그런 메뉴는 없습니다." << endl;
            continue;
        }
        cout << price*count << "원 입니다. 맛있게 드세요" << endl;
        totalMoney += price * count;
        if(totalMoney >= 20000){
            cout << "오늘 " << totalMoney << "원을 판매하여 카페를 닫습니다. 내일 뵈어요~~" << endl;
            return 0;
        }

    }
    return 0;
}