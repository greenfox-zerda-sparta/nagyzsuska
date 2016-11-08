/*
 * main.cpp
 *
 *  Created on: 2016 nov. 8
 *      Author: nagyz
 */

#include "Stack2.h"
#include <iostream>
#include <string>

using namespace std;

int main() {
  int arr[] = {1, 2, 3};
//  Stack stack();
  Stack stack = Stack();
  stack.set_arr(arr, 3);
  cout << stack.get_size() << endl;
  stack.push(6);
  cout << stack.get_size() << endl;
  cout << stack.pop();

    // Create a `Stack` class that stores elements
    // It should have a `size` method that returns number of elements it has
    // It should have a `push` method that adds an element to the stack
    // It should have a `pop` method that returns the last element form the stack and also deletes it from it

  return 0;
}
