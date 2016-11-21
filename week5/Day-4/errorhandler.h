#ifndef ERRORHANDLER_H_
#define ERRORHANDLER_H_

#include <string>

class MyErrorHandler
{
public:
  MyErrorHandler();
  ~MyErrorHandler();
  bool index_is_out_of_bound(int a, int i);
  bool has_only_digit(std::string arg2);
  void print_error(std::string errortext);
  bool check_param(std::string param, int count_of_lines);
};
#endif /* ERRORHANDLER_H_ */