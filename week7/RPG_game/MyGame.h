#ifndef MY_GAME_
#define MY_GAME_

#include "GameEngine.h"
#include <vector>

//static int m_x = 0;
//static int m_y = 0;

class MyGame : public Game {
private:
  int m_x = 0;
  int m_y = 0;
  int table_x = 0;
  int table_y = 0;
  std::vector <std::string> vec;
  std::vector<std::vector<int>> m_map_vector;
  std::string m_image;
public:
  MyGame();
  virtual void init(GameContext& context);
  virtual void render(GameContext& context);
  void set_image(std::string image);
  void map_vector();
  void fill_vector();
};

#endif // !MY_GAME_