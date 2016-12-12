// Take the function like macro from the previous exercise.
// Make it so, that it's defined like the way You wrote it
// when __DEBUG is defined.
// It's defined to be nothing otherwise.

#include <iostream>
#include <string>

#ifdef __DEBUG
#define MyExpression(a) if (!(a)) {std::cout << #a << " in: " << __FILE__ << " at line " << __LINE__ << std::endl;}
#else
#define MyExpression(a)
#endif 

int main() {
  MyExpression(1>2);
  return 0;
}
