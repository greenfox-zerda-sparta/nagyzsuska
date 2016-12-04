#ifndef TRY_
#define TRY_

#include "Run.h"

class Try {
private:
  std::string m_input;
public:
 Try() {};
 std::string try_catch_block();
 ~Try() {};
};

#endif // !TRY_