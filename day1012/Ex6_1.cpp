#include <iostream>
using namespace std;

int main() {
	int num[5];
	int length= sizeof(num) / sizeof(num[0]);//sizeof(num) ũ��� 5�̰� sizeof(num[0])�� ũ�Ⱑ 1�̹Ƿ� ������ 5�� ���´�
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