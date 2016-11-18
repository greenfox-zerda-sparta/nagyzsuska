#ifndef FILEHANDLER_H_
#define FILEHANDLER_H_
#include "errorhandler.h"
#include <string>

class MyFileHandler {
public:
  MyFileHandler();
  ~MyFileHandler();
  MyErrorHandler *m_errorhandler;
  int get_count_of_lines(std::string file_name);
  void print_file(std::string file_name);
  void add(std::string file_name, std::string param);
  void remove_from_file(std::string file_name, int a);
  void check_task(std::string file_name, int a);
};

#endif /* FILEHANDLER_H_ */
