#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Mammal {
protected:
	int _age;
	double _weight;
public:
	void setAge(int age) { _age = age; }
	int getAge() { return _age; }
	void setWeight(double w) { _weight = w; }
	double getWeight() { return _age; }
};
