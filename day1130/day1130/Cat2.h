#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "Mammal2.h"

class Cat : public Mammal
{
protected:
	char _name[10];

public:
	Cat(const char* name) {
		strcpy(_name, name);
		cout << "a cat born\n";
	}
	~Cat() {
		cout << "a cat (" << _name << ") die\n";

	}
	void print() {
		cout << "name:" << _name << ", age:" << _age;
	}

};