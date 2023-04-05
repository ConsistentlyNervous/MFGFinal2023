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

  /// @brief scales this vector by a provided scalar
  /// @param scalar the value to scale by
  void Scale(float scalar) {
    x *= scalar;
    y *= scalar;
  }
};
