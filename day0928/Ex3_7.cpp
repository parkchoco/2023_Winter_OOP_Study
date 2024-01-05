#include <iostream>
using namespace std;

int main()
{
	int a = 1, b = 2, c = 3, d = 4, z;

	

	z = (a == 1) ? b : ((a == 2) ? c : d);

	cout << z;

	return 0;
}