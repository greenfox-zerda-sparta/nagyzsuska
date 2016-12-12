#define MyConstans 7000
#include <iostream>

int main() {
  std::cout << MyConstans << std::endl;
#undef MyConstans
#define MyConstans 5000
  std::cout << MyConstans << std::endl;
  return 0;
}