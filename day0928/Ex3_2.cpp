#include <iostream>
using namespace std;
int x = 0;
int main()
{
	int x = 1;
	{
		cout << x << endl;
		int x = 2;
		cout << x << endl;
	}
	cout << x << endl;
	return 0;
}