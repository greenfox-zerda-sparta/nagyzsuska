#include "MyGame.h"
#include <time.h>
#include <iostream>

MyGame::MyGame() {
  m_image = "hero-down.bmp";
  map_vector();
  set_boss();
  set_skeleton();
}

void MyGame::init(GameContext& context) {
  context.load_file("floor.bmp");
  context.load_file("wall.bmp");
  context.load_file("hero-down.bmp");
  context.load_file("hero-up.bmp");
  context.load_file("hero-left.bmp");
  context.load_file("hero-right.bmp");
  context.load_file("skeleton.bmp");
  context.load_file("boss.bmp");
}

void MyGame::map_vector() {
  m_map_vector = {
  {1,1,1,0,1,0,1,1,1,1},
  {1,1,1,0,1,0,1,0,0,1},
  {1,0,0,0,1,0,1,0,0,1},
  {1,0,0,0,1,0,1,0,0,1},
  {1,1,1,1,1,0,1,1,1,1},
  {0,0,0,0,1,0,0,0,0,1},
  {1,0,1,0,1,1,1,1,0,1},
  {1,0,1,0,1,0,0,1,0,1},
  {1,1,1,1,1,0,0,1,0,1},
  {1,0,0,0,1,1,1,1,1,1}
  };
}

void MyGame::fill_vector() {
  std::string random[] = { "floor.bmp", "wall.bmp", "floor.bmp" };
  for (int i = 0; i < 100; i++) {
    int rand_index = rand() % 3;
    vec.push_back(random[rand_index]);
  }
}

void MyGame::set_image(std::string image) {
  m_image = image;
}

void MyGame::set_skeleton() {
  int x = 0;
  int y = 0;
  for (int i = 0; i < 3; i++) {
    do {
      x = rand() % 10;
      y = rand() % 10;
      m_skeleton_x[i] = x * 72;
      m_skeleton_y[i] = y * 72;
    } while (m_map_vector[x][y] != 1 && m_skeleton_x[i] != m_boss_x && m_skeleton_y[i] != m_boss_y);
  }
}

void MyGame::set_boss() {
  int x = 0;
  int y = 0;
  do {
    x = rand() % 10;
    y = rand() % 10;
    m_boss_x = x * 72;
    m_boss_y = y * 72;
  } while (m_map_vector[x][y] != 1);
}

void MyGame::draw_map(GameContext& context) {
  for (int i = 0; i < m_map_vector.size(); i++) {
    for (int j = 0; j < m_map_vector[i].size(); j++) {
      if (m_map_vector[i][j] == 1) {
        context.draw_sprite("floor.bmp", i * 72, j * 72);
      }
      else {
        context.draw_sprite("wall.bmp", i * 72, j * 72);
      }
    }
  }
}

void MyGame::draw_skeleton(GameContext& context) {
  for (int i = 0; i < 3; i++) {
    context.draw_sprite("skeleton.bmp", m_skeleton_x[i], m_skeleton_y[i]);
  }
}

void MyGame::draw_boss(GameContext& context) {
  context.draw_sprite("boss.bmp", m_boss_x, m_boss_y);
}

void MyGame::render(GameContext& context) {
  draw_map(context);
  draw_boss(context);
  draw_skeleton(context);
  
  /*fill_vector();
  int k = 0;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      context.draw_sprite(vec[k], table_x, table_y);
      k++;
      table_x += 72;
    }
    table_x = 0;
    table_y += 72;
  }*/

  context.draw_sprite(m_image, m_x, m_y);
  int i = 0;
  int j = 0;
  if (context.was_key_pressed(ARROW_RIGHT)) {
    set_image("hero-right.bmp");
    context.draw_sprite(m_image, m_x, m_y);
    if (m_x < 720 - 72) {
      i = (m_x + 72) / 72;
      j = m_y / 72;
      if (m_map_vector[i][j] == 1) {
        m_x += 72;
        context.draw_sprite(m_image, m_x, m_y);
      }
    }
  }
  if (context.was_key_pressed(ARROW_DOWN)) {
    set_image("hero-down.bmp");
    context.draw_sprite(m_image, m_x, m_y);
    if (m_y < (720)) {
      i = (m_x) / 72;
      j = (m_y + 72) / 72;
      if (m_map_vector[i][j] == 1) {
        m_y += 72;
        context.draw_sprite(m_image, m_x, m_y);
      }
    }
  }
  if (context.was_key_pressed(ARROW_LEFT)) {
    set_image("hero-left.bmp");
    context.draw_sprite(m_image, m_x, m_y);
    if (m_x > 0) {
      i = (m_x - 72) / 72;
      j = m_y / 72;
      if (m_map_vector[i][j] == 1) {
        m_x -= 72;
        context.draw_sprite(m_image, m_x, m_y);
      }
    }
  }
  if (context.was_key_pressed(ARROW_UP)) {
    set_image("hero-up.bmp");
    context.draw_sprite(m_image, m_x, m_y);
    if (m_y > 0) {
      i = m_x / 72;
      j = (m_y - 72) / 72;
      if (m_map_vector[i][j] == 1) {
        m_y -= 72;
        context.draw_sprite(m_image, m_x, m_y);
      }
    }
  }
  context.render();
}