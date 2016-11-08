/*
 * Triangle.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: nagyz
 */

#include "Triangle.h"
#include <iostream>
#include <string>

using namespace std;

Triangle::Triangle(unsigned int length) {
  this->length = length;
}

void Triangle::print_triangle() {
  string a = "*";
  string a2 = "*";
  for (unsigned int i = 0; i < this->length; i++){
    cout << a << endl;
    a=a+a2;
  }
}
