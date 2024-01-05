#pragma once
#include <iostream>
using namespace std;
class View
{
public:
	void getInput(int values[], int count) {
		cout << "Input" << count << "numbers:";
		for (int i = 0; i < count; ++i)
			cin >> values[i];
	}
	void printResult(int values[], int count) {
		cout << "Sorted numbers:";
		for (int i = 0; i < count; ++i) {
			cout << values[i] << ",";
		}
	}
};