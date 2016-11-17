#include "taskmanager.h"
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  Todo todo("todo.txt");

  switch (argc)
  {
  case 3:
    todo.set_param(argv[2]);
  case 2:
    todo.set_command(argv[1]);
    break;
  default:
    break;
  }
  todo.doTask();
  
  return 0;
}