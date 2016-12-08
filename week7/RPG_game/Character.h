#ifndef CHARACTER_
#define CHARACTER_

#include "GameObject.h"
#include "Map.h"

class Character : public GameObject {
protected:
  Map* m_map;
public:
  Character(Map* map);
  ~Character();
};

#endif // !CHARACTER_

