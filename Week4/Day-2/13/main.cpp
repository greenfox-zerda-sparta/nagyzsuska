/*
 * main.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: nagyz
 */

#include "Diamond.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
    // Create a triangle class that takes a length parameter and prints a diamond like this:
    //       *
    //      ***
    //     *****
    //    *******
    //   *********
    //  ***********
    //   *********
    //    *******
    //     *****
    //      ***
    //       *
    //
    // It should take a number as parameter that describes how many lines the diamond has
  Diamond diamond(8);
  diamond.print_diamond();
  return 0;
}


