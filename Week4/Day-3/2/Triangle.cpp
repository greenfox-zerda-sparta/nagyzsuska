/*
 * Triangle.cpp
 *
 *  Created on: 2016 nov. 9
 *      Author: nagyz
 */

#include "Shape.h"
#include "Triangle.h"

#include <iostream>
#include <string>

using namespace std;

string* Triangle::getName() {
    return new string("Triangle");
}
Triangle::~Triangle() {

}
