//============================================================================
// Name        : 2.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

int main() {
  int number = 1234;
  int* number_pointer = &number;
  // print the value of number using the "number_pointer"
  cout << *number_pointer;
  return 0;
}
