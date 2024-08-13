#include "color.h"
#include "display.h"

#include <SDL2/SDL_events.h>
#include <stdio.h>

int main() {
  printf("hello world!");

  display disp = display(640, 480);
  if (!disp.init()) {
    printf("Failed to initalize display!");
  }

  // Draw line
  color line_color = color(0.9, 0.9, 0.9);
  for (int i = 0; i < 480; i += 1) {
    write_color(disp, 0, i, line_color);
  }

  disp.present();

  bool quit = false;
  SDL_Event e;

  while (!quit) {
    while (SDL_PollEvent(&e) != 0) {
      if (e.type == SDL_QUIT) {
        quit = true;
      }
    }
  }

  disp.close();
}
