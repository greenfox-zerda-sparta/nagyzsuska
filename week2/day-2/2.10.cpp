//============================================================================
// Name        : 10.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

void doubleNumber(int num){
	cout << (num*=2);
}

int main() {
  int j = 123;
  // create a function that doubles it's input
  // double j with it
  doubleNumber(j);
  return 0;
}
