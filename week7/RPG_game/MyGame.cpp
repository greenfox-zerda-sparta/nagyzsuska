#include "MyGame.h"
#include <time.h>
#include <iostream>

MyGame::MyGame() {
  m_image = "hero-down.bmp";
}

void MyGame::init(GameContext& context) {
  context.load_file("floor.bmp");
  context.load_file("wall.bmp");
  context.load_file("hero-down.bmp");
  context.load_file("hero-up.bmp");
  context.load_file("hero-left.bmp");
  context.load_file("hero-right.bmp");
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

void MyGame::render(GameContext& context) {
  map_vector();
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
    if (m_x >= 720-72) {
    }
    else {
      i = (m_x + 72) / 72;
      j = m_y / 72;
      if (m_map_vector[i][j] == 1) {
        m_x += 72;
        set_image("hero-right.bmp");
        context.draw_sprite(m_image, m_x, m_y);
      }
      else {}
    }
  }
  if (context.was_key_pressed(ARROW_DOWN)) {
    if (m_y >= (720)) {

    }
    else {
      i = (m_x) / 72;
      j = (m_y + 72) / 72;
      if (m_map_vector[i][j] == 1) {
        m_y += 72;
        set_image("hero-down.bmp");
        context.draw_sprite(m_image, m_x, m_y);
      }
      else {}
    }
  }
  if (context.was_key_pressed(ARROW_LEFT)) {
    if (m_x <= 0) {

    }
    else {
      i = (m_x - 72) / 72;
      j = m_y / 72;
      if (m_map_vector[i][j] == 1) {
        m_x -= 72;
        set_image("hero-left.bmp");
        context.draw_sprite(m_image, m_x, m_y);
      }
      else {}
    }
  }
  if (context.was_key_pressed(ARROW_UP)) {
    if (m_y <= 0) {

    }
    else {
      i = m_x / 72;
      j = (m_y - 72) / 72;
      if (m_map_vector[i][j] == 1) {
        m_y -= 72;
        set_image("hero-up.bmp");
        context.draw_sprite(m_image, m_x, m_y);
      }
      else {}
    }
  }
  context.render();
}