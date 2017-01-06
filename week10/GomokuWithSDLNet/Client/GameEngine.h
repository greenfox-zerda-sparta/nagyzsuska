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
  int key;
  int x;
  int y;
  int r_x;
  int r_y;
public:
  GameEngine(Game*, unsigned int, unsigned int);
  bool isGameOver();
  ~GameEngine();
  void GameEngine::make_coordinats_from_text(std::string);
  void get_coordinats_from_server_and_set_them();
  void send_coordinats_to_clients(int x, int y);
  void set_board_and_send_coordinats(int x, int y);
  void run();
};

#endif

 /* int mouseclick = 1;
  void run() {
    SDL_Event event;
    int gameover = 0;

    const char* send_coordinats = "";
    game->render(*context);

    while (!gameover) {
    
    char text[100];
    success = SDLNet_TCP_Recv(socket, text, 100);
    std::cout << text;

    const char* send_text_from_client = "HELLO Server!\n";
      while (1) {

      if (SDL_PollEvent(&event)) {
        switch (event.type) {
        case SDL_QUIT:
          gameover = 1;
          break;
        case SDL_KEYDOWN:
          switch (event.key.keysym.sym) {
          case SDLK_ESCAPE:
          case SDLK_q:
            gameover = 1;
            break;
          }
        case SDL_MOUSEBUTTONDOWN:
          if (event.button.button == SDL_BUTTON_LEFT) {
            mouseclick++;
            if (mouseclick % 2 == 0) {
              char text[100];
              success = SDLNet_TCP_Recv(socket, text, 100);
              if (success > 0) {
                std::string coordinat1 = "";
                std::string coordinat2 = "";
                std::cout << text << "Server coord in text" << std::endl;
                int j = 0;
                for (int i = 0; i < 100; i++) {
                  if (text[i] == ' ') {
                    j++;
                    break;
                  }
                  coordinat1 += text[i];
                  j++;
                }
                for (int i = j; i < 100; i++) {
                  if (text[i] == ' ') {
                    break;
                  }
                  coordinat2 += text[i];
                }
                
                std::cout << coordinat1 << "|" << coordinat2 << "|" << std::endl;
                int x = stoi(coordinat1);
                int y = stoi(coordinat2);
                int key = 1;
                game->set_board(x, y, key);
              }

              game->create_board(*context);
              game->render(*context);
              std::cout << "after render" << std::endl;
              std::cout << "mouseclick" << std::endl;
            }
            
            if (mouseclick % 2 == 1) {
              SDL_GetMouseState(&x, &y);
              
              int key = 2;
              std::string coordinats_in_string = (std::to_string(x / WIDTH) + " " + std::to_string(y / HEIGHT) + " ");
              std::cout << coordinats_in_string << "my coordinats in string" << std::endl;
              game->set_board(x / WIDTH, y / HEIGHT, key);
              game->create_board(*context);
              game->render(*context);
              send_coordinats = coordinats_in_string.c_str();
              std::cout << send_coordinats << "my coord in chararr" << std::endl;
              char text[100];
              //success = SDLNet_TCP_Recv(socket, text, 100);
              SDLNet_TCP_Send(socket, send_coordinats, strlen(send_coordinats) + 1);
              if (success >= 0)
              {
               // std::cout << text;
              }
            }
            //mouseclick++;
            if (isGameOver()) {
              SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, "GameOver", "Congratulation, you won.\nPress 'y', if you would like to play again, press 'q' or 'Esc' to quit.", context->screen);
              gameover = 1;
              bool acceptedDefeath = false;
              while (!acceptedDefeath) {
                if (SDL_PollEvent(&event)) {
                  switch (event.type) {
                  case SDL_KEYDOWN:
                    switch (event.key.keysym.sym) {
                    case SDLK_ESCAPE:
                    case SDLK_q:
                      acceptedDefeath = 1;
                      break;
                    case SDLK_y:
                      game->set_vector_to_null();
                      click_counter = 0;
                      gameover = 0;
                      run();
                      break;
                    }
                  }
                }
              }
            }
          }

        }
      }
      
    }
    game->render(*context);
    SDLNet_TCP_Close(socket);
    SDLNet_Quit();
    SDL_Quit();
  }
}
  
};

#endif*/