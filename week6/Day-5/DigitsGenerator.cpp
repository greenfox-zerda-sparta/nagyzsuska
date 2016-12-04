#include "DigitsGenerator.h"
#include <stdlib.h>

DigitsGenerator::DigitsGenerator() {
  for (int i = 0; i < DIGIT_SIZE; i++) {
    m_digits += STRING_NUMBERS[rand() % STRING_NUMBERS.size()];
  }
}

std::string DigitsGenerator::get_digits() {
  return m_digits;
}

DigitsGenerator::~DigitsGenerator() {

}