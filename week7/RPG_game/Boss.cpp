#include "Boss.h"

Boss::Boss(std::vector<std::vector<int>> map_vector) {
  m_map_vector = map_vector;
  m_boss = "boss.bmp";
  set_boss();
}

std::string Boss::get_boss() {
  return m_boss;
}

void Boss::set_boss() {
  int x = 0;
  int y = 0;
  do {
    x = rand() % 10;
    y = rand() % 10;
    m_boss_x = x * 72;
    m_boss_y = y * 72;
  } while (m_map_vector[x][y] != 1);
}


void Boss::draw(GameContext& context) {
  context.draw_sprite(m_boss, m_boss_x, m_boss_y);
}

Boss::~Boss() {

}