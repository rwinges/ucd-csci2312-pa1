//
// Created by Ryan on 2/6/2016.
//

#include "area.h"
#include <cmath>	//supplies the sqrt and trunc functions

double computeArea(const Point &a, const Point &b, const Point &c)
{
	//----------CALCULATE THE 3 SIDES OF THE TRIANGLE FORMED BY THE THREE POINTS--------------------------------------
	double sideAB = a.distanceTo(b);	//Heron's formula: a
	double sideBC = b.distanceTo(c);	//Heron's formula: b
	double sideAC = a.distanceTo(c);	//Heron's formula: c

	//----------CALCULATE THE SEMIPERIMETER OF THE TRIANGLE FORMED BY THE THREE POINTS--------------------------------
	double s = ((sideAB + sideBC + sideAC)/2);	//Heron's formula: s

	//----------APPLY HERON'S FORMULA---------------------------------------------------------------------------------
	double area = sqrt(s*(s-sideAB)
						*(s-sideBC)
						*(s-sideAC));

	return area;
}
