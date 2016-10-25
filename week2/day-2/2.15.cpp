//============================================================================
// Name        : 15.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int index (int array[], int length, int number){
	for (int i = 0; i < length; i++){
		if (array[i]==number){
			return i;
		}
	}

	return -1;
}


int main() {
  int numbers[] = {7, 5, 8, -1, 2};
  // Write a function that takes an array, its length and a number
  // and it returns the index of the given number in the array.
  // It should return -1 if did not find it. (linear search)
  int length = sizeof(numbers)/sizeof(int);
  int num = 8;
  cout << index(numbers, length, num);
  return 0;
}
