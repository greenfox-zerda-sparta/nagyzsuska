#include "GameEngine.h"

GameEngine::GameEngine(Game* g, unsigned int screen_width, unsigned int screen_height) {
  context = new GameContext(screen_width, screen_height);
  game = g;
  game->init(*context);
  SDL_Init(SDL_INIT_EVERYTHING);
  SDLNet_Init();
  IPaddress ip;
  set = SDLNet_AllocSocketSet(2);
  ip.host = atoi("127.0.0.1");
  ip.port = 1234;
  int success = SDLNet_ResolveHost(&ip, "127.0.0.1", ip.port);
  client = SDLNet_TCP_Open(&ip);
  SDLNet_TCP_AddSocket(set, client);
}

GameEngine::~GameEngine() {
  delete context;
  SDLNet_TCP_Close(client);
  SDLNet_TCP_Close(server);
  SDLNet_Quit();
  SDL_Quit();
}

bool GameEngine::isGameOver() {
  if (game->get_winner(*context) != 0) {
    std::cout << "Game is over. The winner is the " << game->get_winner(*context) << ". player. Press q or Esc to quit." << std::endl;
    return true;
  }
  else {
    return false;
  }
}

void GameEngine::make_coordinats_from_text(std::string text) {
  std::string coordinat1 = "";
  std::string coordinat2 = "";
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
  r_x = stoi(coordinat1);
  r_y = stoi(coordinat2);
}

void GameEngine::get_coordinats_from_server_and_set_them() {
  char text[100];
  success = SDLNet_TCP_Recv(client, text, 100);
  if (success > 0) {
    make_coordinats_from_text(text);
  }
}

void GameEngine::send_coordinats_to_clients(int x, int y) {
  std::string coordinats_in_string = (std::to_string(x / WIDTH) + " " + std::to_string(y / HEIGHT) + " ");
  send_coordinats = coordinats_in_string.c_str();
  SDLNet_TCP_Send(client, send_coordinats, strlen(send_coordinats) + 1);
}

void GameEngine::set_board_and_send_coordinats(int x, int y) {
  key = 2;
  game->set_board(x / WIDTH, y / HEIGHT, key);
  game->create_board(*context);
  game->render(*context);
  send_coordinats_to_clients(x, y);
}
int mouseclick = 0;
void GameEngine::run() {
  SDL_Event event;
  int gameover = 0;
  //const char* send_text = "HELLO CLIENT!\n";
  game->render(*context);

  while (!gameover) {
    while (!gameover) {
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
            if (mouseclick == 1) {
              SDL_GetMouseState(&x, &y);
              set_board_and_send_coordinats(x, y);

              if (isGameOver()) {
                SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, "GameOver", "Congratulation, you won.\nPress 'y', if you would like to play again, press 'q' or 'Esc' to quit.", context->get_screen());
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
      int activeSockets = SDLNet_CheckSockets(set, 10);
      std::cout << activeSockets << "activesocket" << std::endl;
      if (activeSockets != 0) {
        int gotMessage = SDLNet_SocketReady(client);
        if (gotMessage != 0) {

          get_coordinats_from_server_and_set_them();
          key = 1;
          game->set_board(r_x, r_y, key);
          mouseclick = 0;
        }
      }
      game->create_board(*context);
      game->render(*context);
      if (isGameOver()) {
        SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, "GameOver", "Congratulation, you won.\nPress 'y', if you would like to play again, press 'q' or 'Esc' to quit.", context->get_screen());
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
    
  
