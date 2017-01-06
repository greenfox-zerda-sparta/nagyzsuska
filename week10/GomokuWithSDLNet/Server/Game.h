#ifndef GAME_
#define GAME_

#include "GameContext.h"

class Game {
public:
  virtual void init(GameContext& context) = 0;
  virtual void render(GameContext& context) = 0;
  virtual void set_board(int i, int j, int key) = 0;
  virtual void set_stringcoordinats(std::string) = 0;
  virtual std::string get_coordinats_in_string() = 0;
  virtual bool check_if_field_is_empty(int i, int j) = 0;
  virtual int get_winner(GameContext& context) = 0;
  virtual void create_board(GameContext& context) = 0;
  virtual void set_vector_to_null() = 0;
};

#endif // !GAME_
