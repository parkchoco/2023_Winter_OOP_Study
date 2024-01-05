#pragma once
#include <iostream>



class Model {
	int _values[5];
	int _count;
public:
	Model() {
		_count = sizeof(_values) / sizeof(_values[0]);
	}
	void setValues(int values[]) {
		for (int i = 0; i < _count; ++i)
			_values[i] = values[i];
	}
	int* getValues() { return _values; }
	int getCount() { return _count; }

	void sort() {
		int count = sizeof(_values) / sizeof(_values[0]);
		qsort(_values, count, sizeof(_values[0]), compare);
	}
	static int compare(const void* a, const void* b) {
		return (*(int*)a - *(int*)b);
	}
};