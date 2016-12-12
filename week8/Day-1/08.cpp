// Create a function like macro, that gets an expression as it's input.
// If the expression is false, it should print out some error message.


#include <iostream>
#include <string>

#define MyExpression(a) if (!(a)) {std::cout << "It's not true." << std::endl;}

int main() {
  MyExpression(1>2);
  return 0;
}