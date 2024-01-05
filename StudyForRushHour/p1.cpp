#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름" << radius << "원생성" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름" << radius << " 원 생성" << endl;
}

double Circle::getArea() {
	return radius * radius * 3.14;
}


int main() {
	Circle donut;
	cout << "donut의 면적은" << donut.getArea()<<endl;

	Circle pizza(30);
	cout << "pizza의 면적은" << pizza.getArea()<<endl;
}