#include <iostream>
#include <string>
#include "Calculator.h"
#include "Calculator.cpp"

using namespace std;

int main() {

  Simple <double, int> s(3.8, 7);
  cout << s.get_first();
  cout << s.add() << endl;
  cout << s.subtract() << endl;
  cout << s.multiply() << endl;
  try {
    cout << s.divide() << endl;
  }
  catch (char* str) {
    cout << str;
  }
  //Create a class template for a calculator
  //it should have all the basic methods: add, subtract, multiply, divide
  //use exceptions to handle errors in special cases! (find the special cases!)
  return 0;
}