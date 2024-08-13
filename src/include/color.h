#ifndef COLOR_H
#define COLOR_H

#include "display.h"
#include "vec3.h"

#include <cmath>

using color = vec3;

inline double linear_to_gamma(double linear_component) {
  if (linear_component > 0)
    return std::sqrt(linear_component);
  return 0;
}

void write_color(display &display, int x, int y, const color &pixel_color);

#endif
