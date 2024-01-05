#include <iostream>

using namespace std;

int main() {
	cout << "input?";
	int N;
	cin >> N;

	cout << N << "Numbers?";


	//int values[N] 아래와 같다.
	int* values = new int[N];

	int length = N;
	for (int i = 0; i < length; ++i)
		cin >> values[i];

	cout << "Reversed numbers";
	for (int i = 0; i < length; i++) {
		cout << values[length - 1 - i];
	}

	delete values;//포인터 사용뒤 지워줘야한다.
	return 0;
}//ip = &z[0]와 ip = z와 같은 의미이다
//array이름은 포인터 변수

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