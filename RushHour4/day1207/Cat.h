#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "Mammal.h"

class Cat : public Mammal
{
protected:

public:
	void speak() {
		cout << "Meaw";
	}




};
