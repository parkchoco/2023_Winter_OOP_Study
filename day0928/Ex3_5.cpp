#include <iostream>
using namespace std;

int main()
{
	for (int i = 0; i < 100; ++i)
	{
		cout << i << " ";
		if ((i % 10) == 9)
			cout << endl;
	}
	return 0;
}