#include <iostream>
#include "Consola.h"

using namespace std;

int main() {
	gotoxy(10, 5);
	cout << "안녕하세요";
	gotoxy(25, 12);
	cout << "이것은 연습입니다.";

	return 0;
}