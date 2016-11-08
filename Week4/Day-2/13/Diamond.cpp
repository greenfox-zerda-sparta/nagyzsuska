/*
 * Diamond.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: nagyz
 */

#include "Diamond.h"
#include <iostream>
#include <string>

using namespace std;

Diamond::Diamond(unsigned int length) {
  this->length = length;
}
void Diamond::print_diamond() {
  for (unsigned int row = 1; row <= this->length / 2; ++row) {
    for (unsigned int i = 0; i < this->length / 2 - row; ++i) {
      cout << ' ';
    }
    for (unsigned int i = 0; i < row * 2 - 1; ++i) {
      cout << '*';
    }
    cout << endl;
  }
  for (unsigned int row = this->length / 2; row >= 1; --row) {
    for (unsigned int  i = this->length / 2 - row; i > 0; --i) {
      cout << ' ';
    }
    for (unsigned int i = row * 2 - 1; i > 0; --i) {
      cout << '*';
    }
    cout << endl;
  }
}


