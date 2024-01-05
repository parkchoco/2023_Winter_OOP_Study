#include<iostream>
using namespace std;

int main() {
	int n[10];
	int i;
	int* p;

	for (i = 0; i < 10; i++)
		*(n + i) = i * 3;//n배열 i번째에 i+3값 저장

	p = n;
	for (i = 0; i < 10; i++) {
		cout << *(p + i) << ' ';
	}
	cout << endl;

	for (i = 0; i < 10; i++) {
		*p = *p + 2;
		p++;
	}

	for (i = 0; i < 10; i++)
		cout << n[i] << ' ';
	cout << "\n";
}