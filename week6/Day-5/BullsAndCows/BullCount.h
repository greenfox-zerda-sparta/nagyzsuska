#ifndef BULL_COUNTER_
#define BULL_COUNTER_

#include "Count.h"

class BullCount : public Count {
public:
  BullCount(std::string digits);
  void count(std::string input);
  ~BullCount();
};

#endif // !BULL_COUNTER_