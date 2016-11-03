//============================================================================
// Name        : 5.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

/**
 * Create a function called "resize" that takes a pointer to an int array, it's size and it's new size,
 * then it should return a new pointer that points to the new resized array.
 * It should copy all the elements to the new array, if the array is bigger it should fill all the new slots with zeros.
 * It should delete the old array.
 */

int* resize(int* array, int size, int new_size) {
  int* resized = nullptr;
  resized = new int[new_size];
  for (int i = 0; i < new_size; i++) {
    if (i < size) {
      resized[i] = array[i];
    } else {
      resized[i] = 0;
    }
  }
  delete []array;
  array = nullptr;
  return resized;
 }

int main() {
  int size = 10;
  int new_size = 15;
  int *array = nullptr;
  array = new int[size];
  for(int i = 0; i < size; i++){
    array[i] = i;
  }
  cout << "Elements of the first array: " << endl;
  for (int i = 0; i < size; i++) {
       cout << array[i] << endl;
   }
  //int* new_array = resize(array, size, new_size);
  array = resize(array, size, new_size);
  cout << "Elements of the resized array: " << endl;
  for (int i = 0; i < new_size; i++) {
       cout << array[i] << endl;
     }
  delete []array;
  array = nullptr;
  //delete []new_array;
  //new_array = nullptr;
  return 0;
}
