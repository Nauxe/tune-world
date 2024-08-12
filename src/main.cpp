#include "display.h"
#include <SDL2/SDL_events.h>
#include <stdio.h>

int main() {
  printf("hello world!");

  display disp;
  if (!disp.init(640, 480)) {
    printf("Failed to initalize display!");
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
