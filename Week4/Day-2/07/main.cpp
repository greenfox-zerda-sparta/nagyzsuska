/*
 * main.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: nagyz
 */
#include "Car.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
  Car car("Mazda", 2000);
  car.run(500);
  cout << car.get_km();

    // Create a class called "Car"
    // It should have a "type" property that stores the car's type in a string eg: "Mazda"
    // It should have a "km" property that stores how many kilometers it have run
    // The km and the type property should be a parmeter in the constructor
    // It should have a method called "run" that takes a number and increments the "km" property by it

  return 0;
}
