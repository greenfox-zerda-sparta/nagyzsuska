//============================================================================
// Name        : 14.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int min (int array[], int arrayLength){
	int minimum = array[0];
	for (int i = 1; i<arrayLength; i++){
		if (array[i] < minimum) {
			minimum = array[i];
		}
	}
	return minimum;
}

int main() {
  int numbers[] = {7, 5, 8, -1, 2};
  // Write a function that takes ana array and its length returns the minimal element
  // in the array (your own min function)
  int length = sizeof(numbers)/sizeof(int);
  cout << min(numbers, length);
  return 0;
}
