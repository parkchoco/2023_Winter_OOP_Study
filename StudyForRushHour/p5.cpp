#include <iostream>
using namespace std;
int Plus(int a, int b) {
	return a + b;
}

int Minus(int a, int b) {
	return a - b;
}

int main() {
	int x, y;

	cout << "Input 2 Numbers:";
	cin >> x >> y;

	cout << x << '+' << y << '=' << Plus(x, y) << endl;
	cout << x << '-' << y << '=' << Minus(x, y) << endl;

	return 0;
}