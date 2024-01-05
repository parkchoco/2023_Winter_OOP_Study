#include <iostream>

using namespace std;

int main()
{
	char str1[100];
	cout << "Name? ";
	cin.getline(str1, 100);

	cout << "Age? ";
	int age;
	cin >> age;

	cout << "Hi! " << str1 << " Next year you will be " << age;

	return 0;
}