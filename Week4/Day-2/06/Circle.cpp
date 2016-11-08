/*
 * Circle.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: nagyz
 */
#include "Circle.h"
#include <iostream>
#include <string>
#include <math.h>

using namespace std;


Circle::Circle(double radius) {
  this->radius = radius;
}
double Circle::get_circumference() {
  return 2 * this->radius * M_PI;
}

double Circle::get_area() {
  return pow(this->radius, 2) * M_PI;
}



