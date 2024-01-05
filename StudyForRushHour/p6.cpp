#include <iostream>
using namespace std;

int called(int i) {
	cout << "you";
	return 0;
}

double called(double i) {
	cout << "you know";
	return 0;
}

int main() {
	called(1);
	called(1.0);
	return 0;
}