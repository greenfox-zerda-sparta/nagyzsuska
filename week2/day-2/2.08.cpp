//============================================================================
// Name        : 08.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

int main() {
  int h[] = {3, 4, 5, 6, 7};
	// print the sum of all numbers in h
  int length = sizeof(h)/sizeof(int);
  int sum = 0;
  for (int i = 0; i < length; i++){
  	sum+=h[i];
  	}
  cout << sum;
  return 0;
}
