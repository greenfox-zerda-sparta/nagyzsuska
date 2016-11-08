/*
 * main.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: nagyz
 */

#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Create a student Class
    // that has a method `add_grade`, that takes a grade from 1 to 5
    // an other method `get_average`, that returns the average of the
    // grades
  Student student1("John");
  student1.add_grade(5);
  student1.add_grade(4);
  student1.add_grade(3);
  student1.add_grade(2);
  student1.add_grade(1);
  cout << student1.get_average();

  return 0;
}


