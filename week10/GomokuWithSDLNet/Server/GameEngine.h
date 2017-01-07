#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include <SDL.h>
#include <iostream>
#include <map>
#include <string>
#include <SDL_net.h>
#include "Game.h"

class GameEngine {
private:
  GameContext* context;
  Game* game;
  TCPsocket server;
  TCPsocket client;
  SDLNet_SocketSet set;
  int success;
  const char* send_coordinats;
  int key_client = 2;
  int key_server = 1;
  int mouseclick;
  bool quit;
  int gameover;
  int who_begins;
  int x;
  int y;
  int r_x;
  int r_y;
public:
  GameEngine(Game*, unsigned int, unsigned int);
  bool isGameOver();
  ~GameEngine();
  void GameEngine::make_coordinats_from_text(std::string);
  void get_coordinats_from_client_and_set_them();
  void send_coordinats_to_clients(int x, int y);
  void set_board_and_send_coordinats(int x, int y);
  void run2();
  void run();
};

#endif