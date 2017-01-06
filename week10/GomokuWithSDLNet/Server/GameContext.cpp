#include "GameContext.h"

GameContext::GameContext(unsigned int screen_width, unsigned int screen_height) {
    SDL_Init(SDL_INIT_VIDEO);
    screen = SDL_CreateWindow("Gomoku Game",
    SDL_WINDOWPOS_UNDEFINED,
    SDL_WINDOWPOS_UNDEFINED,
    screen_width, screen_height,
    0);
  renderer = SDL_CreateRenderer(screen, -1, 0);
}

GameContext::~GameContext() {
  for (std::map<std::string, SDL_Texture*>::iterator it = sprites.begin(); it != sprites.end(); ++it) {
    SDL_DestroyTexture(it->second);
  }
  SDL_Quit();
}

SDL_Window* GameContext::get_screen() {
  return screen;
}

void GameContext::load_file(std::string name) {
  SDL_Surface* result = SDL_LoadBMP(name.c_str());
  SDL_SetColorKey(result, SDL_TRUE, SDL_MapRGB(SDL_AllocFormat(SDL_GetWindowPixelFormat(screen)), 0xFF, 0, 0xFF));
  sprites[name] = SDL_CreateTextureFromSurface(renderer, result);
  SDL_FreeSurface(result);
}

void GameContext::draw_sprite(std::string name, int x, int y) {
  SDL_Rect temp;
  temp.x = x;
  temp.y = y;
  temp.w = WIDTH;
  temp.h = HEIGHT;
  SDL_RenderCopy(renderer, sprites[name], NULL, &temp);
}

void GameContext::MoveTo(int x, int y) {
  m_x = x;
  m_y = y;
}

void GameContext::DrawTo(int x, int y) {
  SDL_RenderDrawLine(renderer, m_x, m_y, x, y);
  m_x = x;
  m_y = y;
  SDL_RenderPresent(renderer);
}

void GameContext::DrawRect(int x1, int y1, int x2, int y2) {
  SDL_Rect r;
  r.x = x1;
  r.y = y1;
  r.w = x2;
  r.h = y2;
  SDL_RenderDrawRect(renderer, &r);
  SDL_SetRenderDrawColor(renderer, 0, 0, 0, 255);
  SDL_RenderFillRect(renderer, &r);
  SDL_RenderPresent(renderer);
}

void GameContext::render() {
  SDL_RenderPresent(renderer);
}