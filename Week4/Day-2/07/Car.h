/*
 * Car.h
 *
 *  Created on: 2016 nov. 8
 *      Author: nagyz
 */
#include <string>
#ifndef W4_2_7_CAR_H_
#define W4_2_7_CAR_H_

using namespace std;

class Car {
private:
  string type;
  unsigned int km;
public:

  Car(string type, unsigned int km);
  unsigned int get_km();
  string get_type();
  void run(unsigned int number);
};

// Create a class called "Car"
    // It should have a "type" property that stores the car's type in a string eg: "Mazda"
    // It should have a "km" property that stores how many kilometers it have run
    // The km and the type property should be a parmeter in the constructor
    // It should have a method called "run" that takes a number and increments the "km" property by it

#endif /* W4_2_7_CAR_H_ */
