/*
 * main.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: nagyz
 */
#include "Circle.h"
#include <iostream>
#include <string>


using namespace std;

int main() {
  Circle circle(5.0);
  cout << circle.get_circumference() << endl;
  cout << circle.get_area() << endl;
    // Create a `Circle` class that takes it's radius as cinstructor parameter
    // It should have a `get_circumference` method that returns it's circumference
    // It should have a `get_area` method that returns it's area

  return 0;
}
