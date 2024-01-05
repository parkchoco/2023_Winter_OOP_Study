#include <iostream>
using namespace std;
#include "Mammal.h"
#include "Dog.h"
#include "Cat.h"
#include "Pig.h"



int main() {
	Dog dog;
	Cat cat;
	Pig pig;
	Mammal* mammals[3] = { &dog, &cat, &pig };
	for (int i = 0; i < 3; ++i)
		mammals[i]->speak();
}