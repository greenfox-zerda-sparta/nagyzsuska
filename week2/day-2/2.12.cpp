//============================================================================
// Name        : 12.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

void sum (int num[], int length){
	int sum = 0;
	  for (int i = 0; i < length; i++){
	  	sum+=num[i];
	  	}
	  cout << sum;
}

int main() {
  int numbers[] = {4, 5, 6, 7, 8, 9, 10};
  int length = sizeof(numbers)/sizeof(int);
  // write your own sum function
  // it should take an array and it's length
  sum(numbers, length);
  return 0;
}
