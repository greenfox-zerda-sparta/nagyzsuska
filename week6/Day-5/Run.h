#ifndef RUN_
#define RUN_

#include "BullCount.h"
#include "CowCount.h"
#include "DigitsGenerator.h"

class Run {
private:
  DigitsGenerator *m_digit_generator;
  BullCount *m_bulls;
  CowCount *m_cows;
//  MyErrorMessages *m_error_messages;
  std::string m_input;
public:
  Run();
  void run();
  bool check_input();
  ~Run();
};

#endif // !RUN_
