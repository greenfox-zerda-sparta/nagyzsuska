#include "Boss.h"

Boss::Boss(Map* map) : Character(map) {
  m_image = "boss.bmp";
  set_boss();
}

void Boss::set_boss() {
  int x = 0;
  int y = 0;
  do {
    x = rand() % 10;
    y = rand() % 10;
    m_boss_x = x * 72;
    m_boss_y = y * 72;
  } while (m_map->get_map_vector()[x][y] != 1);
 // m_map->set_map_vector(x, y, 2);
}

void Boss::set_boss(int &boss_x, int& boss_y) {
  int x = 0;
  int y = 0;
  
  do {
    x = rand() % 10;
    y = rand() % 10;
    boss_x = x * 72;
    boss_y = y * 72;
  } while (m_map->get_map_vector()[x][y] != 1);
}

int Boss::get_boss_x() {
  return m_boss_x;
}

int Boss::get_boss_y() {
  return m_boss_y;
}

int Boss::set_boss2_x()
{
  int x = rand() % 10;
  m_boss_x = x * 72;
  m_boss_y += 0;
  return m_boss_x;
}

void Boss::draw(GameContext& context) {
  context.draw_sprite(m_image, m_boss_x, m_boss_y);
}

Boss::~Boss() {
}