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
	cout << "������" << radius << "������" << endl;
}

Circle::Circle(int r) {
	radius = r;
	cout << "������" << radius << " �� ����" << endl;
}

double Circle::getArea() {
	return radius * radius * 3.14;
}


int main() {
	Circle donut;
	cout << "donut�� ������" << donut.getArea()<<endl;

	Circle pizza(30);
	cout << "pizza�� ������" << pizza.getArea()<<endl;
}