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
	cout << "������ " << radius << " �� ����";
}

Circle::Circle(int r) {
	radius = r;
	cout << "������ " << radius << " �� ����";
}

Circle::~Circle() {
	cout << "������ " << radius << " �� ����";
}
double Circle :: getArea() {
	return radius * radius * 3.14;
}

int main() {
	Circle donut;
	Circle pizza(30);
	return 0;
}