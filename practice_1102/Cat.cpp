#include <iostream>
using namespace std;
#include "Cat.h"

int Cat::_howMany = 0;

void Cat::printHowMany()
{
	cout << "고양이 총수는 " << _howMany << "마리입니다." << endl;
}