#ifndef COW_COUNTER_
#define COW_COUNTER_

#include "Count.h"

class CowCount : public Count {
public:
  CowCount(std::string digits);
  void count(std::string input);
  ~CowCount();
};

#endif // !COW_COUNTER_

