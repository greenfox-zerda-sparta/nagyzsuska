#ifndef MY_ERROR_MESSAGES_
#define MY_ERROR_MESSAGES_

#include <string>

static class MyErrorMessages {
public:
  enum Messages {
    TOO_FEW_OR_MANY,
    NOT_A_NUMBER
  };
  static std::string interpretException(Messages x);
};

#endif // !MY_ERROR_MESSAGES_

