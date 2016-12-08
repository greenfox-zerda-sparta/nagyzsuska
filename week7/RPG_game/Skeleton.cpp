#include "Skeleton.h"
//#include "Boss.h"

Skeleton::Skeleton(Map* map) : Character (map) {
  m_image = "skeleton.bmp";
  set_skeleton();
}

void Skeleton::set_skeleton() {
  int x = 0;
  int y = 0;
  for (int i = 0; i < 3; i++) {
    do {
      x = rand() % 10;
      y = rand() % 10;
      m_skeleton_x[i] = x * 72;
      m_skeleton_y[i] = y * 72;
    } while (m_map->get_map_vector()[x][y] != 1 && m_skeleton_x[i] != m_x && m_skeleton_y[i] != m_y);
  }
}

void Skeleton::draw(GameContext& context) {
  for (int i = 0; i < 3; i++) {
    context.draw_sprite(m_image, m_skeleton_x[i], m_skeleton_y[i]);
  }
}

Skeleton::~Skeleton() {
}
