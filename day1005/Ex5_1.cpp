#include <iostream>
using namespace std;

int Plus(int a, int b) {
	return a + b;
}

int Minus(int a, int b) {
	return a - b;
}

int main() {
	cout << "Input 2 Numbers:";
	int a, b;

	cin >> a >> b;
	cout << a << "+" << b << "=" << Plus(a, b) << endl;
	cout << a << "-" << b << "=" << Minus(a, b) << endl;
	return 0;
}