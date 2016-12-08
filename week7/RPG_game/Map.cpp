#include "Map.h"

Map::Map() {
  m_floor = "floor.bmp";
  m_wall = "wall.bmp";
  fill_map_vector();
}

std::string Map::get_floor() {
  return m_floor;
}
std::string Map::get_wall() {
  return m_wall;
}

void Map::fill_map_vector() {
  m_map_vector = {
    { 1,1,1,0,1,0,1,1,1,1 },
    { 1,1,1,0,1,0,1,0,0,1 },
    { 1,0,0,0,1,0,1,0,0,1 },
    { 1,0,0,0,1,0,1,0,0,1 },
    { 1,1,1,1,1,0,1,1,1,1 },
    { 0,0,0,0,1,0,0,0,0,1 },
    { 1,0,1,0,1,1,1,1,0,1 },
    { 1,0,1,0,1,0,0,1,0,1 },
    { 1,1,1,1,1,0,0,1,0,1 },
    { 1,0,0,0,1,1,1,1,1,1 }
  };
}

std::vector<std::vector<int>> Map::get_map_vector() {
  return m_map_vector;
}

void Map::draw(GameContext& context) {
  for (int i = 0; i < m_map_vector.size(); i++) {
    for (int j = 0; j < m_map_vector[i].size(); j++) {
      if (m_map_vector[i][j] == 1) {
        context.draw_sprite(m_floor, i * 72, j * 72);
      }
      else {
        context.draw_sprite(m_wall, i * 72, j * 72);
      }
    }
  }
}

bool Map::check_walls_case_right_and_set_location(int &m_x, int &m_y) {
  if (m_x < 720 - 72) {
    index_i = (m_x + 72) / 72;
    index_j = m_y / 72;
    if (m_map_vector[index_i][index_j] == 1) {
      m_x += 72;
    } return true;
  } return false;
}

bool Map::check_walls_case_left_and_set_location(int &m_x, int &m_y) {
  if (m_x > 0) {
    index_i = (m_x - 72) / 72;
    index_j = m_y / 72;
    if (m_map_vector[index_i][index_j] == 1) {
      m_x -= 72;
    } return true;
  } return false;
}

bool Map::check_walls_case_up_and_set_location(int &m_x, int &m_y) {
  if (m_y > 0) {
    index_i = m_x / 72;
    index_j = (m_y - 72) / 72;
    if (m_map_vector[index_i][index_j] == 1) {
      m_y -= 72;
    } return true;
  } return false;
}

bool Map::check_walls_case_down_and_set_location(int &m_x, int &m_y) {
  if (m_y < (720)) {
    index_i = (m_x) / 72;
    index_j = (m_y + 72) / 72;
    if (m_map_vector[index_i][index_j] == 1) {
      m_y += 72;
    } return true;
  } return false;
}

Map::~Map() {
}