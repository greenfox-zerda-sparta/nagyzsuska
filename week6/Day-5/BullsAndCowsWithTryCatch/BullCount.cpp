#include "BullCount.h"

BullCount::BullCount(std::string digits) : Count(digits) {
}

void BullCount::count(std::string input) {
  set_count(0);
  for (int i = 0; i < DIGIT_SIZE; i++) {
    if (m_digits[i] == input[i]) {
      m_count++;
    }
  }
}

BullCount::~BullCount() {
}