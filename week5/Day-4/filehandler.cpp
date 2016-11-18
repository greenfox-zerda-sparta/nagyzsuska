#include "filehandler.h"
#include <iostream>
#include <fstream>

MyFileHandler::MyFileHandler() {
  m_errorhandler = new MyErrorHandler();
}

MyFileHandler::~MyFileHandler() {
  delete m_errorhandler;
}

int MyFileHandler::get_count_of_lines(std::string file_name) {
  std::ifstream file(file_name);
  std::string line;
  int i = 0;
  while (getline(file, line)) {
    i++;
  }
  file.close();
  return i;
}

void MyFileHandler::print_file(std::string file_name) {
  std::ifstream file(file_name);
  std::string line = "";
  int i = 1;
  if (get_count_of_lines(file_name) == 0) {
    m_errorhandler->print_error("No todos for today! :)");
  }
  else {
    while (getline(file, line)) {
      std::cout << i << " - " << line << std::endl;
      i++;
    }
  }
  file.close();
}

void MyFileHandler::add(std::string file_name, std::string param) {
  std::ofstream file(file_name, std::ios_base::app);
  file << param << '\n';
  file.close();
}


void MyFileHandler::remove_from_file(std::string file_name, int a) {
  std::ifstream file(file_name);
  std::string line;
  std::string temp;
  int i = 0;
  while (getline(file, line)) {
    i++;
    if (i == a) {
    }
    else {
      temp += line + '\n';
    }
  }
  std::ofstream fileout(file_name);
  fileout << temp;
  file.close();
  fileout.close();
}

void MyFileHandler::check_task(std::string file_name, int a) {
  std::ifstream list(file_name);
  std::string line;
  std::string temp;
  int i = 0;
  while (getline(list, line)) {
    i++;
    if (i == a) {
      temp += "[x] " + line + "\n";
    }
    else
    {
      temp += "[ ] " + line + "\n";
    }
  }
  std::ofstream listout(file_name);
  listout << temp;
  listout.close();
  list.close();
}