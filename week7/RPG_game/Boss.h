#ifndef BOSS_
#define BOSS_

#include "Character.h"

class Boss : public Character {
private:
  void set_boss();
public:
  Boss(Map* m);
  void draw(GameContext& context);
  ~Boss();
};

#endif // !Boss_

