#include "Run.h"

int main() {
  Run *game = new Run();
  game->run();
  delete game;
  return 0;
}