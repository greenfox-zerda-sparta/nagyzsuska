/*
 * Student.h
 *
 *  Created on: 2016 nov. 8
 *      Author: nagyz
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
  string name;
  unsigned int grade = 0;
  unsigned int grade_counter = 0;
public:
  Student(string name);
  void add_grade(unsigned int grade);
  double get_average();
};

//that has a method `add_grade`, that takes a grade from 1 to 5
    // an other method `get_average`, that returns the average of the
    // grades

#endif /* STUDENT_H_ */
