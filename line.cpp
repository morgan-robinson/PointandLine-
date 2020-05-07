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

double Line::calculateLength()
{
    double length;
    double eq1;
    double eq2;
    
    eq1 = pow(getP2().getX() - getP1().getX(), 2);
    eq2 = pow(getP2().getY() - getP1().getY(),2);
    
    length = sqrt(eq1 + eq2);
    
    return length;
    
}

double Line::getSlope()
{
    double slope = 0;
    double eq1;
    double eq2;
    
    eq1 = getP2().getY() - getP1().getY();
    eq2 = getP2().getX() - getP1().getX();
    
    slope = eq1 / eq2;
    
    return slope;
    
}

bool Line::onLine(Point point)
{
	bool retval = false;
    //y = mx + b
    double b = point.getY() - (getSlope() * point.getX());
    
    if(point.getY() == (getSlope() * point.getX()) + b)
    {
        retval = true;
    }
    return retval;
}

bool Line::isParallel(Line line2)
{
	bool retval = false;

    if(getSlope() == line2.getSlope())
    {
        retval = true;
    }
    
    return retval;
}

bool Line::isIntersecting(Line line2)
{
	bool retval = false;

	if (getSlope() != line2.getSlope())
	{
		retval = true;
	}

	return retval;
}

