#include "GameEngine.h"

GameEngine::GameEngine(Game* g, unsigned int screen_width, unsigned int screen_height) {
  context = new GameContext(screen_width, screen_height);
  game = g;
  game->init(*context);
  SDL_Init(SDL_INIT_EVERYTHING);
  SDLNet_Init();
  IPaddress ip;
  set = SDLNet_AllocSocketSet(2);
  success = SDLNet_ResolveHost(&ip, NULL, 1234);
  server = SDLNet_TCP_Open(&ip);
  SDLNet_TCP_AddSocket(set, server);
  mouseclick = 0;
  quit = false;
  gameover = 0;
  who_begins = 0;
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
    if (text[i] == ',') {
      j++;
      break;
    }
    coordinat1 += text[i];
    j++;
  }
  for (int i = j; i < 100; i++) {
    if (text[i] == '\0') {
      break;
    }
    coordinat2 += text[i];
  }
  std::cout << coordinat1 << "|" << coordinat2 << "|" << std::endl;
  r_x = stoi(coordinat1);
  r_y = stoi(coordinat2);
}

void GameEngine::get_coordinats_from_client_and_set_them() {
  char text[100];
  success = SDLNet_TCP_Recv(client, text, 100);
  if (success > 0) {
    make_coordinats_from_text(text);
  }
}

void GameEngine::send_coordinats_to_clients(int x, int y) {
  std::string coordinats_in_string = (std::to_string(x / WIDTH) + "," + std::to_string(y / HEIGHT));
  send_coordinats = coordinats_in_string.c_str();
  SDLNet_TCP_Send(client, send_coordinats, strlen(send_coordinats) + 1);
}

void GameEngine::set_board_and_send_coordinats(int x, int y) {
  game->set_board(x / WIDTH, y / HEIGHT, key_server);
  game->create_board(*context);
  send_coordinats_to_clients(x, y);
}

void GameEngine::run2() {
  SDL_Event event;
  int gameover = 0;
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
          who_begins++;
          if (who_begins == 1) {
            key_server = 1;
            key_client = 2;
          }
          if (mouseclick == 1) {
            SDL_GetMouseState(&x, &y);
            if (game->check_if_field_is_empty(x / WIDTH, y / HEIGHT)) {
              set_board_and_send_coordinats(x, y);
              if (isGameOver()) {
                SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, "GameOver", "Congratulation, you won.\nPress 'y', if you would like to play again, press 'q' or 'Esc' to quit.", context->get_screen());
                gameover = 1;
                quit = true;
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
                        mouseclick = 0;
                        who_begins = 0;
                        quit = false;
                        run2();
                        break;
                      }
                    }
                  }
                }
              }
            }
            else {
              mouseclick = 0;
            }
          }
        }
      }
    }
    int activeSockets = SDLNet_CheckSockets(set, 10);
    if (activeSockets != 0) {
      int gotMessage = SDLNet_SocketReady(client);
      if (gotMessage != 0) {
        get_coordinats_from_client_and_set_them();
        who_begins++;
        if (who_begins == 1) {
          key_server = 2; key_client = 1;
        }
        game->set_board(r_x, r_y, key_client);
        mouseclick = 0;
      }
    }
    game->create_board(*context);
    if (isGameOver()) {
      SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION, "GameOver", "Sorry, you lost.\nPress 'y', if you would like to play again, press 'q' or 'Esc' to quit.", context->get_screen());
      gameover = 1;
      quit = true;
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
              mouseclick = 0;
              who_begins = 0;
              quit = false;
              run2();
              break;
            }
          }
        }
      }
    }
    game->render(*context);
  }
}

void GameEngine::run() {
  SDL_Event event;
  game->render(*context);
  while (!quit) {
    client = SDLNet_TCP_Accept(server);
    if (client) {
      SDLNet_TCP_AddSocket(set, client);
      run2();
    }
  }
}