#pragma once
#include "Shape.h"
class Rectangle:public Shape
{
public:
	Rectangle(Point p1, Point p2) :Shape(p1, p2) {

	}
	virtual double calcArea() {
		double r = (_p2.x)
		return(double)(_p2.x-_p1.x)* (_p2.x - _p1.x)
	}
};

