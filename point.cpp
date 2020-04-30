#pragma once
#include "point.h"
#include <iostream>
#include <cmath>
#include <iomanip>
#include <sstream>

using namespace std;

Point::Point(double point1, double point2) {
    setDoubleX(point1);
    setDoubleY(point2);
}

double Point::getX() {
    return x;
}

void Point::setDoubleX(double temp) {
    if (temp >= 0) {
        x = temp;
    }
    else {
        cout << "negative value entered" << endl;
        x = abs(temp);
    }
        
}

double Point::getY() {
    return y;
}

void Point::setDoubleY(double temp) {
//    double scale = 0.01;
    if (temp >= 0) {
        y = temp;
    }
    else {
        cout << "negative value entered" << endl;
        y = abs(temp);
    }
}

string Point::toString() {
    stringstream retValue;
    retValue << "X: " << setprecision(2) << x << ", Y: " << setprecision(2) << y;    
    return retValue.str();
}
