#include <iostream>
using namespace std;

#include "Complex.h"

int main() {
	Complex c1(1., 1.);
	Complex c2(3., 4.);
	Complex c3(2., 2.);
	Complex c4 = Plus(c1, c2);
	Complex c5 = Minus(c4, c3);

	c5.print();
	return 0;
}