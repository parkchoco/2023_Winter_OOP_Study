#include <iostream>
using namespace std;

void inc(int& a, int delta = 1);
void dec(int& a, int delta = 1);
void inc(long& a, long delta = 1);
void dec(long& a, long delta = 1);
void inc(double& a, double delta = 1);
void dec(double& a, double delta = 1);

int main() {
	int x = 0, y = 0;
	long lx = 0, ly = 0;
	double dx = 0, dy = 0;

	inc(x, 10);
	inc(lx, 10L);
	inc(dx, 10.0);
	cout << x << endl;
	cout << lx << endl;
	cout << dx << endl;


	dec(y, 10);
	dec(ly, 10L);
	dec(dy, 10.0);
	cout << y << endl;
	cout << ly << endl;
	cout << dy << endl;

	inc(x);
	dec(y);
	cout << x << endl;
	cout << y << endl;
}

void inc(int& a, int delta) {
	a+=delta;
}
void dec(int& a, int delta) {
	a -= delta;
}
void inc(long& a, long delta) {
	a += delta;
}
void dec(long& a, long delta) {
	a -= delta;
}
void inc(double& a, double delta) {
	a += delta;
}
void dec(double& a, double delta) {
	a -= delta;
}