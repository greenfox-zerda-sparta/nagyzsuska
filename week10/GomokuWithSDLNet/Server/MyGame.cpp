#include "MyGame.h"

MyGame::MyGame() {
  board_vector = std::vector<std::vector<int>>(19, std::vector<int>(19, 0));
}

void MyGame::init(GameContext& context) {
  context.load_file("board.bmp");
  context.load_file("x.bmp");
  context.load_file("circle.bmp");
}

void MyGame::set_board(int i, int j, int key) {
  board_vector[i][j] = key;
}

void MyGame::create_board(GameContext& context) {
  for (int i = 0; i < board_vector.size(); i++) {
    for (int j = 0; j < board_vector[i].size(); j++) {
      if (board_vector[i][j] == 0) {
        context.draw_sprite("board.bmp", i * WIDTH, j * HEIGHT);
      }
      else if (board_vector[i][j] == 1) {
        context.draw_sprite("x.bmp", i * WIDTH, j * HEIGHT);
      }
      else if (board_vector[i][j] == 2) {
        context.draw_sprite("circle.bmp", i * WIDTH, j * HEIGHT);
      }
    }
  }
}

bool MyGame::check_if_field_is_empty(int i, int j) {
  return (board_vector[i][j] == 0);
}

void MyGame::set_stringcoordinats(std::string str) {
  m_coordinats_in_string = str;
}

std::string MyGame::get_coordinats_in_string() {
  return m_coordinats_in_string;
}

void MyGame::draw_horisontal_line_to_cross_the_winner_five(GameContext& context, int x, int y) {
  context.DrawRect(x * WIDTH - 3, y * HEIGHT + HEIGHT / 2 - 3, 5 * WIDTH, 6);
}

void MyGame::draw_vertical_line_to_cross_the_winner_five(GameContext& context, int x, int y) {
  context.DrawRect(x * WIDTH + WIDTH / 2 - 3, y * HEIGHT - 3, 6, 5 * WIDTH);
}

void MyGame::draw_diagonal_line_to_right_to_cross_the_winner_five(GameContext& context, int x, int y) {
  for (int i = 0; i < 8; i++) {
    context.MoveTo((x * WIDTH), (y * HEIGHT + 3 - i));
    context.DrawTo(((x + 4) * WIDTH + WIDTH), (y + 4) * HEIGHT + HEIGHT + 3 - i);
  }
}

void MyGame::draw_diagonal_line_to_left_to_cross_the_winner_five(GameContext& context, int x, int y) {
  for (int i = 0; i < 8; i++) {
    context.MoveTo((x * WIDTH + WIDTH), (y * HEIGHT + 3 - i));
    context.DrawTo(((x - 4) * WIDTH), ((y + 4) * HEIGHT + HEIGHT + 3 - i));
  }
}

int MyGame::get_winner(GameContext& context) {
  for (int i = 0; i < board_vector.size(); i++) {
    for (int j = 0; j < board_vector[i].size(); j++) {
      if (board_vector[i][j] != 0) {
        if (i < 15 && board_vector[i][j] == board_vector[i + 1][j] && board_vector[i][j] == board_vector[i + 2][j] && board_vector[i][j] == board_vector[i + 3][j] && board_vector[i][j] == board_vector[i + 4][j]) {
          draw_horisontal_line_to_cross_the_winner_five(context, i, j);
          return board_vector[i][j];
        }
        if (j < 15 && board_vector[i][j] == board_vector[i][j + 1] && board_vector[i][j] == board_vector[i][j + 2] && board_vector[i][j] == board_vector[i][j + 3] && board_vector[i][j] == board_vector[i][j + 4]) {
          draw_vertical_line_to_cross_the_winner_five(context, i, j);
          return board_vector[i][j];
        }
        if (i < 15 && j < 15 && board_vector[i][j] == board_vector[i + 1][j + 1] && board_vector[i][j] == board_vector[i + 2][j + 2] && board_vector[i][j] == board_vector[i + 3][j + 3] && board_vector[i][j] == board_vector[i + 4][j + 4]) {
          draw_diagonal_line_to_right_to_cross_the_winner_five(context, i, j);
          return board_vector[i][j];
        }
        if (i > 3 && j < 15 && board_vector[i][j] == board_vector[i - 1][j + 1] && board_vector[i][j] == board_vector[i - 2][j + 2] && board_vector[i][j] == board_vector[i - 3][j + 3] && board_vector[i][j] == board_vector[i - 4][j + 4]) {
          draw_diagonal_line_to_left_to_cross_the_winner_five(context, i, j);
          return board_vector[i][j];
        }
      }
    } 
  } 
  return 0;
}

void MyGame::set_vector_to_null() {
  board_vector = std::vector<std::vector<int>>(19, std::vector<int>(19, 0));
}

void MyGame::render(GameContext& context) {
  create_board(context);
  context.render();
}

MyGame::~MyGame() {
 
}