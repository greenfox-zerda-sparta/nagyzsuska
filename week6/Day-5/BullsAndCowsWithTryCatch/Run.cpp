#include "Run.h"
#include "MyErrorMessages.h"
#include <iostream>
#include <time.h>

Run::Run() {
  srand(time(NULL));
  m_digit_generator = new DigitsGenerator();
  m_bulls = new BullCount(m_digit_generator->get_digits());
  m_cows = new CowCount(m_digit_generator->get_digits());
}

bool Run::isDigit() throw (MyErrorMessages::Messages) {
  for (size_t n = 0; n < DIGIT_SIZE; n++)
  {
    if (!isdigit(m_input[n]))
    {
      throw MyErrorMessages::Messages::NOT_A_NUMBER;
    }
  } return true;
}

void Run::check_input() throw (MyErrorMessages::Messages) {
  if (m_input.size() != DIGIT_SIZE) {
    throw MyErrorMessages::Messages::TOO_FEW_OR_MANY;
  }
  else {
    isDigit();
  }
}


void Run::run() {
  for (int i = 1; i <= 10; i++) {
    m_bulls->set_count(0);
    m_cows->set_count(0);
      
    std::cout << "Give a four digits number: " << std::endl;

    bool isOk = false;
    while (!isOk) {
      try {
        std::cin >> m_input;
        check_input();
        isOk = true;
      }
      catch (MyErrorMessages::Messages x) {
        std::cout << MyErrorMessages::interpretException(x);
      }
    }
      
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