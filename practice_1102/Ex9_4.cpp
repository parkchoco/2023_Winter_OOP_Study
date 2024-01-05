#include <iostream>
using namespace std;

class Cat {
	int _age;
	int _weight;
	char _name[100];
public:
	Cat(int age = 0) { _age = age; _name[0] = 0; }
	Cat(const char name[]) { _age = 0; strcpy_s(_name, name); }
	Cat(int age, const char name[]) {
		_age = age;
		strcpy_s(_name, name);
	}
	void printInfo() {
		cout << "My name is " << _name << ", My age is " << _age << endl;
	}
};

int main() {
	Cat cat1;		cat1.printInfo();
	Cat cat2(1);	cat2.printInfo();
	Cat cat3("NABI"); cat3.printInfo();
	Cat cat4(2, "NABI"); cat4.printInfo();
	return 0;
}
