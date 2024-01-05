#include <iostream>
#define  _CRT_SECURE_NO_WARNINGS

using namespace std;

class Cat {
	char *_name;
	static int _howMany;
public:
	Cat() {
		_name = NULL;
		++_howMany;
		cout << "A cat born!(current cat#:" << _howMany << ")" << endl;
	}
	~Cat() {
		--_howMany;
		cout << _name << "die!(current cat#:" << _howMany << ")" << endl;
		if (_name != NULL)delete _name;
	}
	void setName(const char* name) {
		if (_name != NULL)delete _name;
		_name = new char[strlen(name) + 1];
		strcpy(_name, name);
	}
};

int Cat:: _howMany=0;

int main() {
	Cat myCat;
	myCat.setName("³ªºñ");
	return 0;
}