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
};
#endif /* ERRORHANDLER_H_ */
