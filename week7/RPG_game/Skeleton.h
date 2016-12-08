#ifndef SKELETON_
#define SKELETON_

#include "Character.h"

class Skeleton : public Character {
private:
  int m_skeleton_x[3];
  int m_skeleton_y[3];
public:
  Skeleton(Map* map);
  void set_skeleton();
  void draw(GameContext & context);
  ~Skeleton();
};

#endif // !SKELETON_