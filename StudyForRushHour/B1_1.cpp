#include <iostream>
using namespace std;

int addArray(int a[], int size);
void makeDouble(int a[], int size);
void printArray(int a[], int size);

int main() {
	int n[] = { 1,2,3,4,5 };
	int sum = addArray(n, 5);
	cout << "�迭 n�� ���� " << sum << "�Դϴ�.\n";

	makeDouble(n, 5);
	printArray(n, 5);
}

int addArray(int a[], int size) {
	int i, sum = 0;
	for (i = 0; i < size; i++)
		sum += a[i];
	return sum;
}

//�迭�� ���� �Լ����� ����
void makeDouble(int a[], int size) {
	int i;
	for (i = 0; i < size; i++)
		a[i] *= 2;
}

void printArray(int a[], int size) {
	int i;
	for (i = 0; i < size; i++)
		cout << a[i] << ' ';
	cout << "\n";
}