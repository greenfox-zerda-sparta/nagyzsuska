//============================================================================
// Name        : 03.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <string>
#include <iostream>

using namespace std;

enum CarType {VOLVO, TOYOTA, LAND_ROVER, TESLA};

struct Car {
  CarType type;
  double km;
  double gas;
};

void printCar(Car car);
// Write a function that takes a Car as an argument and prints all it's stats
// If the car is a Tesla it should not print it's gas level

int main() {
  Car car1 = {TESLA, 50};
  printCar(car1);
  Car car2 = {VOLVO, 70, 55};
  printCar(car2);
  return 0;
}

void printCar(Car car) {
  if (car.type == TESLA) {
    cout << "type: " << car.type << endl << "km: " << car.km << endl;
  } else {
    cout << "type: " << car.type << endl << "km: " << car.km << endl << "gas level: " << car.gas << endl;
  }
}
