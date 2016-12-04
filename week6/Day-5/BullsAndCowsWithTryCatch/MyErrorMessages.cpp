#include "MyErrorMessages.h"

std::string MyErrorMessages::interpretException(Messages x) {
  if (x == TOO_FEW_OR_MANY) {
    return "Too few or too many characters.\nGive a four digits number, please: \n";
  }
  if (x == NOT_A_NUMBER) {
    return "This is not a number.\nGive a four digits number, please: \n";
  }
}
