#pragma once

/// @brief represents a 2D vector
class Vector2 {
private:
  int x;
  int y;

public:
  Vector2(int x_t, int y_t) {
    x = x_t;
    y = y_t;
  }

  /// @brief scales this vector2 by a provided scalar
  /// @param scalar the value to scale by
  void Scale(double scalar) {
    x *= scalar;
    y *= scalar;
  }

  /// @brief calculates the dot product of two given vector2s
  /// @param vect1 the first vector2
  /// @param vect2 the second vector2
  /// @return a float of the calculated dot product
  double DotProd(Vector2 vect1, Vector2 vect2) {
    return (vect1.x * vect2.x) + (vect1.y * vect2.y);
  }
};
