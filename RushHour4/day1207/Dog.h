#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "Mammal.h"

class Dog : public Mammal
{
protected:
	
public:
	void speak() {
		cout << "kewang";
	}




};
