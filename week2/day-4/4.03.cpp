//============================================================================
// Name        : 03.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

using namespace std;

void swap(int *p1, int *p2){
  int temp = *p1;
  *p1 = *p2;
  *p2 = temp;
}


int main() {
  int first = 12;
  int second = 54;
  int *firstP = &first;
  int *secondP = &second;
  swap(firstP, secondP);
  cout << *firstP << endl << *secondP << endl;
  // Write a function that takes two int pointers and swaps the values where the pointers point

  return 0;
}
