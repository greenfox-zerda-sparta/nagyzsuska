#include "Checker.h"

void Checker::check_digit(std::string input) throw (MyErrorMessages::Messages) {
  for (size_t n = 0; n < DIGIT_SIZE; n++) {
    if (!isdigit(input[n])) {
      throw MyErrorMessages::Messages::NOT_A_NUMBER;
    }
  }
}

void Checker::check_input(std::string input) throw (MyErrorMessages::Messages) {
  if (input.size() != DIGIT_SIZE) {
    throw MyErrorMessages::Messages::TOO_FEW_OR_MANY;
  }
  else {
    check_digit(input);
  }
}