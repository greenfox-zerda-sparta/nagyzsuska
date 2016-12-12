// Create a function like macro. The Macro should take one parameter and
// print out the parameter to the console after printing out in which file 
// and at which line it has been called at.
//
#include <iostream>

#define printer(a) std::cout << a << " in: " << __FILE__ << " : at line " << __LINE__ << std::endl

int main() {
  printer(123);
  return 0;
}