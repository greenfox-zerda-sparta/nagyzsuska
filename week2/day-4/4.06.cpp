//============================================================================
// Name        : 06.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int counter(int array[], int length){
  int counter = 0;
  for (int i = 0; i < length-1; i++){
    if (array[i]%2==0 && array[i+1]%2==0){
      counter++;
    }
  }
  return counter;
}

int main() {
  int numbers[] = {5, 2, 6, 3, 4, 8, 5, 2, 2, 2};
  cout << counter(numbers, 10);

  // Write a function that counts how many times is an even number is followed by
  // another even number in an array

  return 0;
}
