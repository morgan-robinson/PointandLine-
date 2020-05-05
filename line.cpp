#include "line.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream>

using namespace std;

Line::Line(Point p1, Point p2)
{
	setP1(p1);
	setP2(p2);
}

void Line::setP1(Point p)
{
	point1 = p;
}

void Line::setP2(Point p)
{
	point2 = p;
}

Point Line::getP1()
{
	return point1;
}

Point Line::getP2()
{
	return point2;
}

string Line::toString()
{
	stringstream retVal;
	retVal << "Point 1: [" << getP1().toString() << "], Point 2: [" << getP2().toString() << "]";
	return retVal.str();
}