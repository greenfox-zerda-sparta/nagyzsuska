//============================================================================
// Name        : 01.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main() {
  int* pointer = NULL;
  pointer = new int[5];
  if (pointer != NULL) {
    for(int i = 0; i < 5; i++){
      *(pointer+i) = i;
    }
  }
  for (int i = 0; i < 5; i++){
    cout << i+1 << " item is " << *(pointer+i) << endl;
  }
  delete []pointer;
  pointer = NULL;

  // Please allocate a 5 long array and fill it with numbers from 0 to 4, then print the whole array
  // Please delete the array before the program exits

  return 0;
}
