#ifndef GAME_CONTEXT_
#define GAME_CONTEXT_

#include <SDL.h>
#include <map>

const int WIDTH = 30;
const int HEIGHT = 30;

class GameContext {
private:
  SDL_Window* screen;
  SDL_Renderer* renderer;
  std::map<std::string, SDL_Texture*> sprites;
  int m_x;
  int m_y;
public:
  GameContext(unsigned int, unsigned int);
  ~GameContext();
  SDL_Window* get_screen();
  void load_file(std::string);
  void draw_sprite(std::string name, int x, int y);
  void MoveTo(int, int);
  void DrawTo(int, int);
  void DrawRect(int, int, int, int);
  void render();
};

#endif // !GAME_CONTEXT_
