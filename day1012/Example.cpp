#include <iostream>

using namespace std;

int main() {
	cout << "input?";
	int N;
	cin >> N;

	cout << N << "Numbers?";


	//int values[N] �Ʒ��� ����.
	int* values = new int[N];

	int length = N;
	for (int i = 0; i < length; ++i)
		cin >> values[i];

	cout << "Reversed numbers";
	for (int i = 0; i < length; i++) {
		cout << values[length - 1 - i];
	}

	delete values;//������ ���� ��������Ѵ�.
	return 0;
}//ip = &z[0]�� ip = z�� ���� �ǹ��̴�
//array�̸��� ������ ����

#include <iostream>
using namespace std;

/*
int main() {
	int values[10];
	int* pa = values;

	cout << "address of values : " << &values[0] << endl;
	cout << "pa's values:" << pa << endl << endl;
	//array+index==&array[index]
	//*(array+index)==array[index]

}
*/