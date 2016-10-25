//============================================================================
// Name        : 09.cpp
// Author      : Zsuzsanna Nagy
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

using namespace std;

void greet(string s) {
  cout << "Hello, " << s << "!";
}

int main() {
  string i = "Jozsi";
   // create a function that takes a string argument and greets it.
  greet(i);
  return 0;
}
