/*
 * Square.h
 *
 *  Created on: 2016 nov. 9
 *      Author: nagyz
 */

#ifndef W4_3_2SHAPE_SQUARE_H_
#define W4_3_2SHAPE_SQUARE_H_
#include "Shape.h"

#include <iostream>
#include <string>

using namespace std;

class Square : public Shape {
  public:
    string* getName();
    ~Square();
};


#endif /* W4_3_2SHAPE_SQUARE_H_ */
