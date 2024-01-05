#include <iostream>
#include "Point.h"

using namespace std;

int main() {
	Point p1;
	p1.setX(1);
	p1.setY(2);
	cout << p1.getX() << "," << p1.getY();
}