#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


class Mammal {
protected:
	int _age;
	double _weight;

public:
	Mammal() {
		cout << "a mammal born\n";
	}
	~Mammal() {
		cout << "a mammal die\n";
	}
	void setAge(int age) { _age = age; }
	int getAge() { return _age; }
	void setWeight(double w) { _weight = w; }
	double getWeight() { return _age; }
};
