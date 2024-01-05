#include <iostream>
using namespace std;

int main()
{
	char row, rol;
	for (row = 'A'; row <= 'E'; ++row)
	{
		for (rol = row; rol <= 'E'; ++rol)
		{
			cout << rol;
		}
		cout << '\n';
	}
}