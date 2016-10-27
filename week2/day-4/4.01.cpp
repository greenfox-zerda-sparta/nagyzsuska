//============================================================================
// Name        : 01.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;


void square(int *array, int length){

  for (int i = 0; i < length; i++){
    array[i] = array[i]*array[i];
  }
}

int main() {
  // Write a function that takes an array and squares all the elements in the array
  int array[] = {1, 2, 3, 4, 5, 6, 7};
  square(array, 7);
  for (int i = 0; i < 7; i++){
    cout << array[i] << endl;
  }
  return 0;
}
