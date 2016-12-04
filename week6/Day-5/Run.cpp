#include "Run.h"
#include <iostream>
#include <time.h>

Run::Run() {
  srand(time(NULL));
  m_digit_generator = new DigitsGenerator();
  m_bulls = new BullCount(m_digit_generator->get_digits());
  m_cows = new CowCount(m_digit_generator->get_digits());
}

bool Run::check_input() {
  if (m_input.size() != DIGIT_SIZE) {
    std::cerr << "Too few or too many digits, give a four digits number, please: " << std::endl;
    std::cin >> m_input;
    return false;
  }
  else {
    bool has_only_digits = true;
    for (size_t n = 0; n < DIGIT_SIZE; n++)
    {
      if (!isdigit(m_input[n]))
      {
        has_only_digits = false;
        break;
      }
    }
    if (!has_only_digits) {
      std::cerr << "This is not a number, give a four digits number, please: " << std::endl;
      std::cin >> m_input;
    }
    return has_only_digits;
  }
}


void Run::run() {
  for (int i = 1; i <= 10; i++) {
    m_bulls->set_count(0);
    m_cows->set_count(0);

    std::cout << "Give a four digits number: " << std::endl;
    std::cin >> m_input;

    do {
      check_input();
    } while (!check_input());

    m_bulls->count(m_input);
    m_cows->count(m_input);

    std::cout << "It was your " << i << ". round." << std::endl;
    std::cout << "Bulls: " << m_bulls->get_count() << "\nCows: " << m_cows->get_count() << std::endl;

    if (m_bulls->get_count() == DIGIT_SIZE) {
      std::cout << "You won." << std::endl;
      break;
    }

    if (i == 10) {
      std::cout << "You lost. The number was: " << m_digit_generator->get_digits() << std::endl;
    }
  }
}


Run::~Run() {
  delete m_digit_generator;
  delete m_bulls;
  delete m_cows;
}