/*
 * Tree.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: nagyz
 */

#include "Tree.h"
#include <iostream>
#include <string>

using namespace std;

Tree::Tree(unsigned int length) {
  this->length = length;
}
void Tree::print_tree() {
  for (unsigned int row = 1; row <= this->length; ++row) {
    for (unsigned int i = 0; i < this->length - row; ++i) {
      cout << ' ';
    }
    for (unsigned int i = 0; i < row * 2 - 1; ++i) {
      cout << '*';
    }
    cout << endl;
  }
}
