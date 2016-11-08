/*
 * Student.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: nagyz
 */

#include "Student.h"
#include <iostream>
#include <string>

using namespace std;

Student::Student(string name) {
  this->name = name;
}

void Student::add_grade(unsigned int grade) {
  if (grade  < 1 || grade > 5) {
    cout << "The grade must be between 1 and 5";
  }
  this->grade += grade;
  this->grade_counter++;
}

double Student::get_average(){
  return (double)this->grade/(double)this->grade_counter;
}


