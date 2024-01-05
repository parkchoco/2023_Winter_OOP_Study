#include <iostream>
using namespace std;

int main() {
	int N;

	cout << "input";
	cin >> N;

	int* values = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> values[i];
	}
	cout << "reversed output";
	for (int i = 0; i < N; i++) {
		cout << values[N - i - 1];
	}

	delete[]values;
}