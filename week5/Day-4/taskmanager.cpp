#include "taskmanager.h"
#include "errorhandler.h"
#include "filehandler.h"
#include <iostream>

Todo::Todo(int argc, char* argv[], std::string file_name) {
  m_filename = file_name;
  m_errorhandler = new MyErrorHandler();
  m_filehandler = new MyFileHandler();
  switch (argc) {
  case 3:
    set_param(argv[2]);
  case 2:
    set_command(argv[1]);
    break;
  default:
    break;
  }
  doTask();
}

Todo::~Todo() {
  delete m_errorhandler;
  delete m_filehandler;
}

void Todo::run(int argc, char** argv) {
  switch (argc) {
  case 3:
    set_param(argv[2]);
  case 2:
    set_command(argv[1]);
    break;
  default:
    break;
  }
  doTask();
}

void Todo::print_usage() {
  m_errorhandler->print_error("CLI Todo application\n====================\n\nCommand line arguments:\n- l   Lists all the tasks\n- a   Adds a new task\n- r   Removes an task\n- c   Completes an task\n");
}

void Todo::list() {
  m_filehandler->print_file(m_filename);
}

void Todo::add() {
  if (m_param == "") {
    m_errorhandler->print_error("Unable to add : No task is provided");
  }
  else {
    m_filehandler->add(m_filename, m_param);
  }
}

void Todo::remove() {
  if (m_param == "") {
    m_errorhandler->print_error("Unable to remove : No index is provided");
  }
  else {
    if (m_errorhandler->has_only_digit(m_param))
    {
      int a = atoi(m_param.c_str());
      if (!m_errorhandler->index_is_out_of_bound(a, m_filehandler->get_count_of_lines(m_filename)))
      {
        m_filehandler->remove_from_file(m_filename, a);
      }
    }
  }
}

void Todo::doTask()
{
  if (m_command == "-l") {
    list();
  }
  else if (m_command == "-a") {
    add();
  }
  else if (m_command == "-r") {
    remove();
  }
  else if (m_command == "-c") {
    check_task();
  }
  else {
    m_errorhandler->print_error("Unsupported argument\n\n");
    print_usage();
  }
}

void Todo::check_task() {
  if (m_param == "") {
    m_errorhandler->print_error("Unable to check : No index is provided");
  }
  else {
    if (m_errorhandler->has_only_digit(m_param))
    {
      int a = atoi(m_param.c_str());
      if (!m_errorhandler->index_is_out_of_bound(a, m_filehandler->get_count_of_lines(m_filename)))
      {
        m_filehandler->check_task(m_filename, a);
      }
    }
  }
}