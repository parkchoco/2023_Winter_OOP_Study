#include <iostream>
using namespace std;
#include "Cat.h"

int Cat::_howMany = 0;

void Cat::printHowMany()
{
	cout << "����� �Ѽ��� " << _howMany << "�����Դϴ�." << endl;
}