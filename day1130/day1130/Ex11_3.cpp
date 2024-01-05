#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "Cat3.h"

int main() {
	Mammal aMammal;
	Cat myCat("³ªºñ");

	aMammal.speak();
	myCat.speak();
	return 0;
}