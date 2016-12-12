// Create a function like macro that takes one argument.
// If the argument is false, it should print out the following:
// The expression in the argument. And the file name and the line in the file.

/*#include <iostream>

#define FunctionLikeMacro(a) if (!(a)) {std::cout << a << " in: " << __FILE__ << " at line " << __LINE__ << std::endl;}

int main() {
  int a = 23;
  int b = 32
  FunctionLikeMacro(a > b);
  return 0;
}*/

#include <iostream>
#include <string>

#define MyExpression(a) if (!(a)) {std::cout << #a << " in: " << __FILE__ << " at line " << __LINE__ << std::endl;}

int main() {
  MyExpression(1>2);
  return 0;
}
