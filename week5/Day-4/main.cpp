#include "taskmanager.h"
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
  Todo todo("todo.txt");
  todo.run(argc, argv);
  return 0;
}