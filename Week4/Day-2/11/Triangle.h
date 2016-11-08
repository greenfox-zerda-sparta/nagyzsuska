/*
 * Triangle.h
 *
 *  Created on: 2016 nov. 8
 *      Author: nagyz
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include <iostream>
#include <string>

using namespace std;

class Triangle {
private:
  unsigned int length;
public:
  Triangle(unsigned int length);
  void print_triangle();
};

#endif /* TRIANGLE_H_ */
