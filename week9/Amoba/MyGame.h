#ifndef MY_GAME_
#define MY_GAME_

#include "GameEngine.h"
#include <vector>

class MyGame : public Game {
private:
  std::vector<std::vector<int>> board_vector;
public:
  MyGame();
  ~MyGame();
  virtual void init(GameContext& context);
  virtual void render(GameContext& context);
  void create_board(GameContext& context);
  void set_board(int i, int j, int key);
  bool check_if_field_is_empty(int i, int j);
  int get_winner(GameContext& context);
  void draw_horisontal_line_to_cross_the_winner_five(GameContext& context, int x, int y);
  void draw_vertical_line_to_cross_the_winner_five(GameContext& context, int x, int y);
  void draw_diagonal_line_to_right_to_cross_the_winner_five(GameContext& context, int x, int y);
  void draw_diagonal_line_to_left_to_cross_the_winner_five(GameContext& context, int x, int y);
  void set_vector_to_null();
};

#endif // !MY_GAME_