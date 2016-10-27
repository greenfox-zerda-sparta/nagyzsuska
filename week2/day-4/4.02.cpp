//============================================================================
// Name        : 02.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

void fill(int *array, int length){

  for (int i = 0; i < length; i++){
    array[i] = i+1;
  }
}

int main() {
  int array[10];
  fill(array, 10);
  for (int i = 0; i < 10; i++){
    cout << array[i] << endl;
    }
  // write a function that takes an array and a length and it fills the array
  // with numbers from zero till the length

return 0;
}
