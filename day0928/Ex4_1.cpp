#include <iostream>
using namespace std;

int main()
{
	int ch;
	int acount = 0;
	int bcount = 0;
	int ocount = 0;
	while ((ch = cin.get()) != '\n')
	{
		switch (ch)
		{
		case 'a':
		case 'A':
			acount++;
			break;
		case 'b':
		case 'B':
			bcount++;
			break;
		default:
			ocount++;
		}
	}
	cout << "a or A's count" << acount << endl;
	cout << "b or B's count" << bcount << endl;
	cout << "other char count" << ocount << endl;
}