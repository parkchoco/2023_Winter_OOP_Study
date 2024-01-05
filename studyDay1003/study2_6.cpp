#include <iostream>
using namespace std;

int main()
{
	cout << "주소를 입력하세요>>";

	char adress[100];
	cin.getline(adress, 100, '\n');

	cout << "주소는 " << adress << "입니다\n";
}