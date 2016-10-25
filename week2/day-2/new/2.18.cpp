//============================================================================
// Name        : 18.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;






int even (int num[], int length){
	int s = 0;
	for (int i = 0; i < length; i++){
	  if (num[i]%2==0){
	  	s++;
	  }
	}
	return s;
}

int main() {
  int numbers[] = {4, 5, 6, 7, 8, 9, 10};
  int length = sizeof(numbers)/sizeof(int);
  // create a function that takes an array and it's length as an agrument
  // and returns a number that states how many even numbers are in the array
  cout << even(numbers, length);
  return 0;
}
