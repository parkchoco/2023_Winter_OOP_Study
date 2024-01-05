#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;
	int getArea();
};

int Rectangle::getArea() {
	return width * height;
}

int main() {
	Rectangle rect;
	rect.width = 5;
	rect.height = 6;
	cout << rect.getArea();

	Rectangle age;
	age.width = 10;
	age.height = 20;
	cout << age.getArea();


}