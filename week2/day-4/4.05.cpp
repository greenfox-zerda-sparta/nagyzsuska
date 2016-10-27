//============================================================================
// Name        : 05.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

bool isAnyNegative(int array[], int length){
  for (int i = 0; i < length; i++){
    if (array[i] < 0){
      return true;
    }
  }
  return false;
}

int main() {
  int numbers[] = {6, 5, 3, 4, 1, 8, 7};
  cout << isAnyNegative(numbers, 7);
  // Write a function that decides if an array includes at least one negative number or not

  return 0;
}
