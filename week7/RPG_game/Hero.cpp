#include "Hero.h"

Hero::Hero(Map* map) : Character(map) {
  m_image = "hero-down.bmp";
  m_hero_down = "hero-down.bmp";
  m_hero_up = "hero-up.bmp";
  m_hero_left = "hero-left.bmp";
  m_hero_right = "hero-right.bmp";
}

void Hero::set_image(std::string image) {
  m_image = image;
}

std::string Hero::get_hero_down() {
  return m_hero_down;
}

std::string Hero::get_hero_up() {
  return m_hero_up;
}

std::string Hero::get_hero_left() {
  return m_hero_left;
}

std::string Hero::get_hero_right() {
  return m_hero_right;
}

void Hero::draw(GameContext& context) {
  context.draw_sprite(m_image, m_x, m_y);
}