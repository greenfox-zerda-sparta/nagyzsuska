#ifndef DIGITS_GENERATOR_
#define DIGITS_GENERATOR_

#include <string>

const std::string STRING_NUMBERS = "123456789";
const int DIGIT_SIZE = 4;

class DigitsGenerator {
private:
  std::string m_digits;
public:
  DigitsGenerator();
  std::string get_digits();
  ~DigitsGenerator();
};

#endif // !DIGITS_GENERATOR_

