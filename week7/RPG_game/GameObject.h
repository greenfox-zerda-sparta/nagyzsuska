#ifndef GAME_OBJECT_
#define GAME_OBJECT_
#include "GameEngine.h"
#include <string>
#include <vector>

class GameObject {
protected:
  std::string m_image;
  int m_x = 0;
  int m_y = 0;
public:
  std::string get_image();
  virtual void draw(GameContext& context) = 0;
  GameObject();
  ~GameObject();
};

#endif // !GAME_OBJECT_
