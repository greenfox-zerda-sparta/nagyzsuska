//============================================================================
// Name        : 4.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

/*int sizeOfArray(int from, int to, int step) {
  int array_size;
  if (from < to){
    array_size = (from + to) / step;
  } else {
    array_size = (from - to) / step;
  }
  return array_size;
}*/

int* range(int from, int to, int step) {
  int *pointer = nullptr;
  pointer = new int[3];
  if (pointer != nullptr) {
    int k = 0;
    if (to > from) {
      for (int i = from; i > to;) {
        *(pointer+k) = i;
        i += step;
        k++;
      }
    } else {
      for (int i = from; i > to;) {
        *(pointer+k) = i;
        i += step;
        k++;
      }
    }
  }
  return pointer;
  pointer = nullptr;
}
/**
 * Create a function called "range" that creates a new array and returns a pointer to it.
 * It should fill the array with numbers based on it's paramters.
 * It should take 3 paramters:
 * int from: the first number in the array
 * int to: it will fill the array till it would reach this number (so this number is not in the array)
 * int step: the step between the numbers
 *
 * Examples:
 * range(0, 10, 2) -> {0, 2, 3, 4, 5, 6, 8}
 * range(1, -8, -3) -> {1, -2, -5}
 *
 * It should delete any dynamically allocated resource before the program exits.
 */

int main() {
  int from = 1;
  int to = -8;
  int step = -3;
  /*int array_size; //nem sikerul a meretet atadni, ez meg folymatban, igy a tomb meretet itt kezzel allitom,  :(
  if (from < to){
    array_size = (from + to) / step;
  } else {
    array_size = (from - to) / step;
  }*/
  int *array;
  array = range(from, to, step);
  for (int i = 0; i < 3; i++) {
    cout << *(array+i) << endl;
  }
  delete []array;
  return 0;
}
