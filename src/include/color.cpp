#include "color.h"
#include "display.h"

void write_color(display &display, int x, int y, const color &pixel_color) {
  double r = pixel_color[0];
  double g = pixel_color[1];
  double b = pixel_color[2];

  // gamma correction
  r = linear_to_gamma(r);
  g = linear_to_gamma(g);
  b = linear_to_gamma(b);

  // Translate [0, 1] component values to Uint8 range [0, 255]
  Uint8 rUint8 = Uint8(255.999 * r);
  Uint8 gUint8 = Uint8(255.999 * g);
  Uint8 bUint8 = Uint8(255.999 * b);

  display.render_at(x, y, rUint8, gUint8, bUint8, 0xFF);
}
