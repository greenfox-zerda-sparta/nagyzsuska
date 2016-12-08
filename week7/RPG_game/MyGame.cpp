#include "MyGame.h"

MyGame::MyGame() {
  map = new Map();
  hero = new Hero(map);
  skeleton = new Skeleton(map);
  boss = new Boss(map);
  m_image = hero->get_image();
}

void MyGame::init(GameContext& context) {
  context.load_file(map->get_floor());
  context.load_file(map->get_wall());
  context.load_file(hero->get_hero_down());
  context.load_file(hero->get_hero_up());
  context.load_file(hero->get_hero_left());
  context.load_file(hero->get_hero_right());
  context.load_file(skeleton->get_image());
  context.load_file(boss->get_image());
}

void MyGame::set_image(std::string image) {
  m_image = image;
}

void MyGame::render(GameContext& context) {
  map->draw(context);
  boss->draw(context);
  skeleton->draw(context);
  context.draw_sprite(m_image, m_x, m_y);

  if (context.was_key_pressed(ARROW_RIGHT)) {
    set_image(hero->get_hero_right());
    context.draw_sprite(m_image, m_x, m_y);
    if (map->check_walls_case_right_and_set_location(m_x, m_y)) {
      context.draw_sprite(m_image, m_x, m_y);
    }
  }
  if (context.was_key_pressed(ARROW_DOWN)) {
    set_image(hero->get_hero_down());
    context.draw_sprite(m_image, m_x, m_y);
    if (map->check_walls_case_down_and_set_location(m_x, m_y)) {
      context.draw_sprite(m_image, m_x, m_y);
    }
  }
  if (context.was_key_pressed(ARROW_LEFT)) {
    set_image(hero->get_hero_left());
    context.draw_sprite(m_image, m_x, m_y);
    if (map->check_walls_case_left_and_set_location(m_x, m_y)) {
      context.draw_sprite(m_image, m_x, m_y);
    }
  }
  if (context.was_key_pressed(ARROW_UP)) {
    set_image(hero->get_hero_up());
    context.draw_sprite(m_image, m_x, m_y);
    if (map->check_walls_case_up_and_set_location(m_x, m_y)){
      context.draw_sprite(m_image, m_x, m_y);
    }
  }
  context.render();
}

MyGame::~MyGame() {
  delete hero;
  delete map;
  delete skeleton;
  delete boss;
}