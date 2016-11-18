#ifndef TASKMANAGER_H_
#define TASKMANAGER_H_

#include <string>
#include "errorhandler.h"
#include "filehandler.h"

class Todo {
  std::string m_filename;
  std::string m_command;
  std::string m_param;
  MyErrorHandler *m_errorhandler;
  MyFileHandler *m_filehandler;
  void list();
  void add();
  void remove();
  void check_task();
public:
  Todo(int argc, char* argv[], std::string file_name);
  ~Todo();
  void run(int argc, char** argv);
  void print_usage();
  void set_command(std::string command) { m_command = command; }
  void set_param(std::string param) { m_param = param; }
  void doTask();
};

#endif /* TODO-FILE_H_ */