#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "Mammal3.h"

class Cat : public Mammal
{
protected:
	char _name[10];

public:
	Cat(const char* name) {
		strcpy(_name, name);
	}
	~Cat() {
	}
	void print() {
		cout << "name:" << _name << ", age:" << _age;
	}
	void speak() {
		cout << "¾ß¿Ë" << endl;
	}
};
