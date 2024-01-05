#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	char ch;
	while (1) {
		ch = _getch();
		cout << ch << ",0x" << hex << (int)ch << endl;
	}
	return 0;
}
