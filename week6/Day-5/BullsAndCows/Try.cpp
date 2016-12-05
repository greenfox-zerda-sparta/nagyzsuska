#include "Try.h"

std::string Try::try_catch_block() {
  std::string m_input;
  bool isOk = false;
  while (!isOk) {
    try {
      std::cin >> m_input;
      Checker::check_input(m_input);
      isOk = true;
    }
    catch (MyErrorMessages::Messages x) {
      std::cout << MyErrorMessages::interpretException(x);
    }
  } return m_input;
}