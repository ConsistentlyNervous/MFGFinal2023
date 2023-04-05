#pragma once

class Vector2 {
private:
  int x;
  int y;

public:
  Vector2(int x_t, int y_t) {
    x = x_t;
    y = y_t;
  }

  Vector2 Scale(float scalar) {
    this->x *= scalar;
    this->y *= scalar;
  }
};
