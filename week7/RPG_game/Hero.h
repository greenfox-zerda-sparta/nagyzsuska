#ifndef HERO_
#define HERO_

#include "Character.h"
#include <string>

class Hero : public Character {
private:
  std::string m_hero_down;
  std::string m_hero_up;
  std::string m_hero_left;
  std::string m_hero_right;
public:
  Hero(Map* map);
  void move(GameContext& context);
  void set_image(std::string image);
  std::string get_hero_down();
  std::string get_hero_up();
  std::string get_hero_left();
  std::string get_hero_right();
  void draw(GameContext& context);
  ~Hero() {};
};

#endif // !HERO_