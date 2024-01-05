#include <stdio.h>
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

	operator char* () {
		static char buffer[100];
		sprintf(buffer, "%f + %f*i", _real, _image);
		return buffer;
	}
};

int main() {
	Complex c1(1, 2);
	char* str = c1;
	cout << str << endl;
	cout << c1 << endl;

	return 0;
}
//16,17.18 미리공부