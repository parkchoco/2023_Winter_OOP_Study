//시험문제
#include <iostream>
using namespace std;

void inc(int &a, int delta=1) {
	a += delta;
}

void dec(int &a, int delta=1) {
	a -= delta;
}

void inc(long &a, long delta=1) {
	a += delta;
}

void dec(long &a, long delta=1) {
	a -= delta;
}

void inc(double &a, double delta=1) {
	a += delta;
}

void dec(double &a, double delta=1) {
	a -= delta;
}

int main() {
	int x = 0, y = 0;
	long lx = 0, ly = 0;
	double dx = 0, dy = 0;

	//반드시 변수여야한다 숫자나 상수 금지
	inc(x, 10);	cout << x << endl;
	inc(lx, 10L);	cout << lx << endl;
	inc(dx, 10.0);cout << dx << endl;
	inc(x);				cout << dx << endl;

	dec(y, 10);	cout << y << endl;
	dec(ly, 10L);	cout << ly << endl;
	dec(dy, 10.0);cout << dy << endl;
	dec(y);				cout << dx << endl;
}