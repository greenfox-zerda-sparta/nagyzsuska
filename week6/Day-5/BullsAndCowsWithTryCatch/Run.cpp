#include "Run.h"
#include "MyErrorMessages.h"
#include "Checker.h"
#include <iostream>
#include <time.h>

Run::Run() {
  srand(time(NULL));
  m_digit_generator = new DigitsGenerator();
  m_bulls = new BullCount(m_digit_generator->get_digits());
  m_cows = new CowCount(m_digit_generator->get_digits());
}

void Run::try_catch_block() {
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
  }
}

void Run::run() {
  for (int i = 1; i <= 10; i++) {
    m_bulls->set_count(0);
    m_cows->set_count(0);
    std::cout << "Give a four digits number: " << std::endl;
    try_catch_block();
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