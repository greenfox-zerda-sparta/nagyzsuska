#ifndef RUN_
#define RUN_

#include "BullCount.h"
#include "CowCount.h"
#include "Try.h"
#include <iostream>
#include <time.h>

class Run {
private:
  DigitsGenerator *m_digit_generator;
  BullCount *m_bulls;
  CowCount *m_cows;
  std::string m_input;
public:
  Run();
  void run();
  ~Run();
};

#endif // !RUN_