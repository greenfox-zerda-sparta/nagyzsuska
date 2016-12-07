#include "GameEngine.h"
#include "MyGame.h"
#include <time.h>

int main(int argc, char* argv[]) {
  srand(time(0));
  MyGame game;
  GameEngine engine(&game, 720, 720);
  engine.run();
  return 0;
}