/*
 * Triangle.h
 *
 *  Created on: 2016 nov. 9
 *      Author: nagyz
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_
#include "Shape.h"

#include <iostream>
#include <string>

using namespace std;

class Triangle : public Shape {
  public:
    string* getName();
    ~Triangle();
};

#endif /* TRIANGLE_H_ */
