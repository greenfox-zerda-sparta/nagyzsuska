/*
 * Shape.cpp
 *
 *  Created on: 2016 nov. 9
 *      Author: nagyz
 */

#include "Shape.h"
#include <iostream>
#include <string>

using namespace std;

string* Shape::getName() {
    return new string("Generic Shape");
}
Shape::~Shape() {

}


