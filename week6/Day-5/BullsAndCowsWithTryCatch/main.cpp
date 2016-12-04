#include "Run.h"

using namespace std;

int main() {
  Run *game = new Run();
  game->run();
  delete game;
  return 0;
}