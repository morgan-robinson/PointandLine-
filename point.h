#pragma once
#include <string>

using namespace std;

class Point {
    public:
    double x;
    double y;
    
    Point();
    Point(double x, double y);
    double getX();
    void setDoubleX(double temp);
    double getY();
    void setDoubleY(double temp);
    string toString();
    
};
