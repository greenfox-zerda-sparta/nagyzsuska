#include "MyErrorMessages.h"

std::string MyErrorMessages::interpretException(Messages x) {
  if (x == TOO_FEW_OR_MANY) {
    return "Too few or too many characters, give a four digits number, please: \n";
  }
  if (x == NOT_A_NUMBER) {
    return "This is not a number, give a four digits number, please: \n";
  }
}
