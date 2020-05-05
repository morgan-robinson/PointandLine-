#pragma once
#include <string>
#include "point.h"

using namespace std;

class Line
{
public:
	Point point1;
	Point point2;

	Line(Point p1, Point p2);
	Point getP1();
	void setP1(Point p);
	Point getP2();
	void setP2(Point p);
	string toString();
    double calculateLength();
};
