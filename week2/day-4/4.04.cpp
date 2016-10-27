//============================================================================
// Name        : 04.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

void reverse(int *array, int length){
  for (int i=0; i<length-1; i++) {
    for (int j=i+1; j<length; j++) {
      int temp = array[i];
      array[i] = array[j];
      array[j] = temp;
    }
  }
}

int main() {
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
  reverse(array, 8);
  for (int i = 0; i < 8; i++){
  	cout << array[i] << endl;
  }
  // Write a function that takes an array and its length than reverses the array

  return 0;
}
