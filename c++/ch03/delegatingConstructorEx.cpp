#include <iostream>
using namespace std;

class Circle{
    public:
        int radius;
        double getArea();
    Circle();
    Circle(int r);  
};
Circle::Circle() : Circle(1) {}
double Circle::getArea(){
    return 3.14*radius*radius;
}
Circle::Circle(int r){
    radius = r;
    cout << "반지름이 " << radius << "인 원 생성." << endl;
}

int main(){
    Circle donut;
    double area = donut.getArea();
    cout << "donut의 면적은 " << area << "입니다." << endl;

    Circle pizza(30);
    area = pizza.getArea();
    cout << "pizza의 면적은 " << area << "입니다." << endl;
    return 0;
}