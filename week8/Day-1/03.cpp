#include <iostream>

#ifdef __DEBUG
#define MyInt 123
#else
#define MyInt 345
#endif

int main() {
  std::cout << MyInt;
  return 0;
}