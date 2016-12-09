#ifndef SKELETON_
#define SKELETON_

#include "Character.h"
#include "Boss.h"

class Skeleton : public Character {
private:
  int m_skeleton_x[3];
  int m_skeleton_y[3];
  Boss* m_boss;
public:
  Skeleton(Map* map, Boss* boss);
  void set_skeleton();
  void draw(GameContext & context);
  ~Skeleton();
};

#endif // !SKELETON_