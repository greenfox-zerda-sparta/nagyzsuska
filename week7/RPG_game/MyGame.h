#ifndef MY_GAME_
#define MY_GAME_

#include "GameEngine.h"
#include "Hero.h"
#include "Map.h"
#include "Skeleton.h"
#include "Boss.h"

class MyGame : public Game {
private:
  Hero* hero;
  Map* map;
  Skeleton* skeleton;
  Boss* boss;
  int keypress_counter = 0;
  int m_x = 0;
  int m_y = 0;
  int m_boss_x = 0;
  int m_boss_y = 0;
  std::string m_image;
public:
  MyGame();
  ~MyGame();
  virtual void init(GameContext& context);
  virtual void render(GameContext& context);
  void set_image(std::string image);
};

#endif // !MY_GAME_