#include <iostream>
using namespace std;

bool equal(int* p, int* q);

int main() {
	int a, b;
	cin >> a >> b;
	if (equal(&a, &b)) cout << "equal" << endl;
	else cout << "not equal" << endl;
}

bool equal(int* p, int* q) {
	if (*p == *q)return true;
	else return false;
}