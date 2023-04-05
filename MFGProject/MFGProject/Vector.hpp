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

  float DotProd(Vector2 vect1, Vector2 vect2) {
    return (vect1.x * vect2.x) + (vect1.y * vect2.y); 
  }
};
