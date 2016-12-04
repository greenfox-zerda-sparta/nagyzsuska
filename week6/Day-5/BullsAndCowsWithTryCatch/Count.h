#ifndef COUNT_
#define COUNT_

#include "DigitsGenerator.h"

class Count {
protected:
  int m_count;
  std::string m_digits;
  Count(std::string digits);
public:
  int get_count();
  void set_count(int count);
  virtual void count(std::string) = 0;
  ~Count();
};

#endif // !COUNT_

