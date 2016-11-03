//============================================================================
// Name        : 04.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <string>
#include <iostream>

using namespace std;

struct Pirate {
  string name;
  bool has_wooden_leg;
  short int gold_count;
};

// Create a function that takes an array of pirates (and it's length) then returns the sum of the golds of all pirates
int sum_of_golds(Pirate* array, int length);
// Create a function that takes an array of pirates (and it's length) then returns the average of the gold / pirate
double average_of_golds(Pirate* array, int length);
// Create a function that takes an array of pirates (and it's length) then returns the name of the
// richest that has wooden leg
string name_of_richest_with_wooden_leg(Pirate* array, int length);

int main() {
  Pirate pirates[] = {
    {"Jack", false, 18},
    {"Uwe", true, 8},
    {"Hook", true, 12},
    {"Halloween kid", false, 0},
    {"Sea Wolf", true, 14},
    {"Morgan", false, 1}
  };
  cout << sum_of_golds(pirates, 6) << endl;
  cout << average_of_golds(pirates, 6) << endl;
  cout << name_of_richest_with_wooden_leg(pirates, 6);
  return 0;
}
int sum_of_golds(Pirate* array, int length){
  int sum = 0;
  for (int i = 0; i < length; i++) {
    sum += array[i].gold_count;
    //array++;
  }
  return sum;
}

double average_of_golds(Pirate* array, int length) {
  double average = sum_of_golds(array, length) /(double) length;
  return average;
}

string name_of_richest_with_wooden_leg(Pirate* array, int length) {
  string name;
  for (int i = 0; i < length; i++) {
    if (array[i].has_wooden_leg) {
      name = array[i].name;
      for (int j = 0; j < length; j++) {
        if (array[j].has_wooden_leg && array[i].gold_count < array[j].gold_count) {
          name = array[j].name;
        }
      }
    }
  }
  return name;
}
