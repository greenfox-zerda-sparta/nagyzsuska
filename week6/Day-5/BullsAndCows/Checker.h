#ifndef CHECKER_
#define CHECKER_

#include "Run.h"
#include "MyErrorMessages.h"
#include <string>
#include <iostream>

class Checker {
public:
  static void check_digit(std::string input);
  static void check_input(std::string input);
};

#endif // !CHECKER_