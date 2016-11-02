//============================================================================
// Name        : 02.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include <iostream>

using namespace std;

int main() {
  // Please allocate a 10 long array and fill it with numbers from 0 to 4, then print the whole array
  // Please delete the array before the program exits

  int* pointer = NULL;
  pointer = new int[10];
  if (pointer != NULL) {
    for (int i =0; i < 10; i++) {
      *(pointer+i) = i;
    }
  }
  for (int i = 0; i < 5; i++) {
    cout << *(pointer+i) << endl;
  }
  delete []pointer;
  pointer = NULL;
  return 0;
}
