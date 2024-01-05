#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include "Mammal.h"

class Pig : public Mammal
{
protected:

public:
	void speak() {
		cout << "oink";
	}




};
