#include <iostream>
#include <conio.h>
using namespace std;

int getkey() {
	int ch = _getch();
	if (ch != 0xe0)
		return ch;//특수키가 아니면 리턴
	else
	{
		int ch2 = _getch();
		return (0xe00 | ch2);
	}
}

int main() {
	int key;
	while (1) {
		key = getkey();
		cout << "key:char(" << (char)key << "),"
			<< "0x" << hex << key << endl;
	}
}