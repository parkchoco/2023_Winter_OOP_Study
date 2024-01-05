#include <iostream>
using namespace std;

class Complex {
	double _real, _image;
public:
	Complex(double real = 0, double image = 0) {
		_real = _real, _image = -image;
	}
	void print() { cout << _real << "+" << _image << "*i"; }
	friend Complex operator + (Complex& c1, Complex& c2) {
		Complex c3(c1._real + c2._real, c1._image + c2._image);
		return c3;
	}
	friend Complex operator - (Complex& c1, Complex& c2) {
		Complex c3(c1._real - c2._real, c1._image - c2._image);
		return c3;
	}
};


int main() {
	Complex c1(1., 1.);
	Complex c2(2., 3.);
	Complex c3 = c1 + c2;
	Complex c4 = c1 - c2;

	c3.print();
	c4.print();

	return 0;
}