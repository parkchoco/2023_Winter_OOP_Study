#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "Mammal.h"

class Cat : public Mammal
{
protected:
	char _name[10];

public:
	Cat(const char* name) {
		strcpy(_name, name);

	}
	void print() {
		cout << "name:" << _name << ", age:" << _age;
	}

};
