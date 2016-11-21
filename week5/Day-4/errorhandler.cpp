#include "errorhandler.h"
#include "string"
#include <iostream>

MyErrorHandler::MyErrorHandler() {
}

MyErrorHandler::~MyErrorHandler() {
}

bool MyErrorHandler::index_is_out_of_bound(int a, int i) {
  bool outofbound = a > i;
  if (outofbound) {
    std::cerr << "Unable to remove : Index is out of bound";
  }
  return outofbound;
}

bool MyErrorHandler::check_param(std::string param, int count_of_lines) {
  if (has_only_digit(param)) {
    int a = atoi(param.c_str());
    if (!index_is_out_of_bound(a, count_of_lines)) {
      return true;
    }
    else {
      return false;
    }
  }
}


bool MyErrorHandler::has_only_digit(std::string arg2) {
  bool has_only_digits = true;
  for (size_t n = 0; n < arg2.length(); n++)
  {
    if (!isdigit(arg2[n]))
    {
      has_only_digits = false;
      break;
    }
  }
  if (!has_only_digits) {
    std::cerr << "Unable to remove : Index is not a number";
  }
  return has_only_digits;
}

void MyErrorHandler::print_error(std::string errortext) {
  std::cerr << errortext;
}