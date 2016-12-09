#ifndef BOSS_
#define BOSS_

#include "Character.h"

class Boss : public Character {
private:
  int m_boss_x;
  int m_boss_y;
public:
  void set_boss();
  int set_boss2_x();
  void set_boss(int &boss_x, int &boss_y);
  int get_boss_x();
  int get_boss_y();
  Boss(Map* m);
  void draw(GameContext& context);
  ~Boss();
};

#endif // !Boss_

