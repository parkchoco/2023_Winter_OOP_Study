#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "Cat.h"

int main() {
	Cat myCat("³ªºñ");
	myCat.setAge(2);
	myCat.setWeight(1.5);
	myCat.print();
	return 0;
}