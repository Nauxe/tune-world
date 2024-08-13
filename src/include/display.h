#ifndef DISPLAY_H
#define DISPLAY_H

#include <SDL2/SDL.h>

class display {
public:
  display(int screen_width, int screen_height)
      : screen_width(screen_width), screen_height(screen_height) {}

  bool init();
  void close();
  void render_at(int x, int y, Uint8 r, Uint8 g, Uint8 b, Uint8 a);
  void present();

private:
  int screen_width;
  int screen_height;
  SDL_Window *window = NULL;
  SDL_Renderer *renderer = NULL;
};

#endif
