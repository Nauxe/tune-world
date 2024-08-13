#include "display.h"
#include <SDL2/SDL_events.h>
#include <stdio.h>

int main() {
  printf("hello world!");

  display disp = display(640, 480);
  if (!disp.init()) {
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
