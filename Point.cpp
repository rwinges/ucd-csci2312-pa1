//
// Created by Ryan on 2/6/2016.
//

#include <cmath>
#include "Point.h"

using std::sqrt;
using std::pow;

//----------CONSTRUCTORS--------------------------------------------------------------------------------------------
Point::Point() {x = y = z = 0;}					// default constructor

Point::Point(double _x, double _y, double _z)		// three-argument constructor
{
	x = _x;
	y = _y;
	z = _z;
}

//----------MUTATOR METHODS-----------------------------------------------------------------------------------------
void Point::setX(double newX) {x = newX;}

void Point::setY(double newY) {y = newY;}

void Point::setZ(double newZ) {z = newZ;}

//----------ACCESSOR METHODS----------------------------------------------------------------------------------------
double Point::getX() const {return x;}

double Point::getY() const {return y;}

double Point::getZ() const {return z;}

double Point::distanceTo(const Point& pointB) const
{
	double distance = sqrt(pow(pointB.getX()-x,2)
						  +pow(pointB.getY()-y,2)
						  +pow(pointB.getZ()-z,2));
	return distance;
}