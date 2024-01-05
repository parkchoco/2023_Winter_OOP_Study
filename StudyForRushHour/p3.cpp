#include <iostream>
using namespace std;

class Circle {
public:
	int radius;
	Circle();
	Circle(int r);
	~Circle();
	double getArea();
};

Circle::Circle() {
	radius = 1;
	cout << "반지름 " << radius << " 원 생성";
}

Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성";
}

Circle::~Circle() {
	cout << "반지름 " << radius << " 원 생성";
}
double Circle :: getArea() {
	return radius * radius * 3.14;
}

int main() {
	Circle donut;
	Circle pizza(30);
	return 0;
}