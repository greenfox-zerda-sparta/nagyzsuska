#include "Count.h"

Count::Count(std::string digits) {
  m_count = 0;
  m_digits = digits;
}

int Count::get_count() {
  return m_count;
}

void Count::set_count(int count) {
  m_count = count;
}

/*void Count::count(std::string) {
  m_count++;
}*/

Count::~Count() {
  //delete m_digit_generator;
}