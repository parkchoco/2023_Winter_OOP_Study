#pragma once
#include "Point.h"

class Shape {

public:
	Shape(Point& p1, Point& p2) {
		_p1 = p2;
		_p2 = p2;
	}
	virtual double calcArea()(return 0);
protected:
		Point& _p1, & _p2;
};