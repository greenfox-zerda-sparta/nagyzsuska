// Create a function like macro, that get's one parameter.
// This macro should print out that paramter using cout.
// Illustrate that it works in Your main function.

#include <iostream>

#define MyInt(a) std::cout << a << std::endl

int main() {
  int a = 123;
  MyInt(a);
  return 0;
}