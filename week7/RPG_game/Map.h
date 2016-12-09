#ifndef MAP_
#define MAP_

#include "GameObject.h"

class Map : public GameObject {
private:
  std::string m_floor;
  std::string m_wall;
  std::vector<std::vector<int>> m_map_vector;
  int index_i = 0;
  int index_j = 0;
public:
  Map();
  std::string get_floor();
  std::string get_wall();
  void fill_map_vector();
  std::vector<std::vector<int>> get_map_vector();
  void set_map_vector(int i, int j, int character_sign);
  bool check_walls_case_right_and_set_location(int &m_x, int &m_y);
  bool check_walls_case_left_and_set_location(int &m_x, int &m_y);
  bool check_walls_case_up_and_set_location(int &m_x, int &m_y);
  bool check_walls_case_down_and_set_location(int &m_x, int &m_y);
  void draw(GameContext& context);
  ~Map();
};

#endif // !MAP_