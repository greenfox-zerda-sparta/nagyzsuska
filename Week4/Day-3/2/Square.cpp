/*
 * Square.cpp
 *
 *  Created on: 2016 nov. 9
 *      Author: nagyz
 */

#include "Shape.h"
#include "Square.h"
#include <iostream>
#include <string>

using namespace std;

string* Square::getName() {
    return new string("Square");
}
Square::~Square() {

}
