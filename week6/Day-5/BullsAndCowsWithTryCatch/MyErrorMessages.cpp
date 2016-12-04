#include "MyErrorMessages.h"

std::string MyErrorMessages::interpretException(Messages x) {
  if (x == TOO_FEW_OR_MANY) {
    return "Too few or too many characters.\nPlease provide a 4 digits number: \n";
  }
  if (x == NOT_A_NUMBER) {
    return "This is not a number.\nPlease provide a 4 digits number: \n";
  }
}
