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
  std::vector<std::vector<int>> m_random_map_vector;
  std::string m_image;
  int m_skeleton_x[3];
  int m_skeleton_y[3];
  int m_skeleton_y1;
  int m_skeleton_x2;
  int m_skeleton_y2;
  int m_skeleton_x3;
  int m_skeleton_y3;
  int m_boss_x;
  int m_boss_y;
public:
  MyGame();
  virtual void init(GameContext& context);
  virtual void render(GameContext& context);
  void set_image(std::string image);
  void set_skeleton();
  void set_boss();
  void map_vector();
  void fill_vector();
  void draw_map(GameContext& context);
  void draw_skeleton(GameContext& context);
  void draw_boss(GameContext& context);
};

#endif // !MY_GAME_