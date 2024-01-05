#include <iostream>
using namespace std;

int main() {
	int num[5];
	int length= sizeof(num) / sizeof(num[0]);//sizeof(num) 크기는 5이고 sizeof(num[0])은 크기가 1이므로 나누면 5가 나온다
	cout << "5 Numbers?";
	for (int i = 0; i < length; i++) {
		cin >> num[i];
	}

	cout << "Reversed numbers";
	for (int i = 0; i < length; i++) {
		cout<< num[length - 1-i];
	}

	return 0;
}