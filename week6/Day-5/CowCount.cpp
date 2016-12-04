#include "CowCount.h"

CowCount::CowCount(std::string digits) : Count(digits){
}

void CowCount::count(std::string input) {
  for (int i = 0; i < DIGIT_SIZE; i++) {
    for (int j = 0; j < 4; j++) {
      if (m_digits[i] == input[j] && m_digits[i] != input[i]) {
        m_count++;
        break;
      }
    }
  }
}

CowCount::~CowCount() {
}