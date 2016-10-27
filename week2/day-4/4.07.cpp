//============================================================================
// Name        : 07.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

void printTriangle(int num){
  string a = "*";
  string a2 = "*";
  for (int i = 0; i < num; i++){
    cout << a << endl;
    a=a+a2;
  }
}

int main() {

  printTriangle(16);
  // create a function that takes a number and prints a triangle like this:
  // *
  // **
  // ***
  // ****
  // *****
  // ******
  //
  // The triangle should have as many lines as the value in the argument

  return 0;
}
