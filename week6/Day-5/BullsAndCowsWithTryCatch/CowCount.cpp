#include "CowCount.h"

CowCount::CowCount(std::string digits) : Count(digits){
}

void CowCount::count(std::string input) {
  set_count(0);
  for (int i = 0; i < DIGIT_SIZE; i++) {
    for (int j = 0; j < input.size(); j++) {
      if (m_digits[i] == input[i]) {
        input[i] = ' ';
        break;
      }
      if (m_digits[i] == input[j] && m_digits[j] != input[j]) {
        m_count++;
        break;
      }
    }
  }
}

CowCount::~CowCount() {
}