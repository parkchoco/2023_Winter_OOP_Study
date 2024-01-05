#pragma once
#include <iostream>
using namespace std;

class Complex
{
	double _real, _image;
public:
	Complex(double real = 0, double image = 0) {
		_real = real;
		_image = image;
	}
	void print() {
		cout << _real << "+" << _image << "*i";
	}
	friend Complex Plus(Complex c1, Complex c2) {
		Complex c3(c1._real + c2._real, c1._image + c2._image);
		return c3;
	}
	friend Complex Minus(Complex c1, Complex c2) {
		Complex c3(c1._real - c2._real, c1._image - c2._image);
		return c3;
	}
};