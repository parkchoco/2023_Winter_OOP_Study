#include <iostream>
using namespace std;

int main() {
	cout << "Input 2 numbers: ";//v
	int a, b;
	cin >> a;
	cin >> b;
	cout << "A+B= " << (a + b)//v
		<< ", A-B= " << (a - b) << endl;//v
	return 0;
}

/*->메인에서 이렇게해라(클래스 3개 만들고) 메인은 이렇게 만들어진다
#include "Controller.h"
int main()
{
	Controller controller;

	controller.start();
	return 0;
}
*/

