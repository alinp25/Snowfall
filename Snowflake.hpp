#pragma once
#include <SFML/Graphics.hpp>

class Snowflake {
public:
  Snowflake(int width, int height);
  ~Snowflake() {}
  void draw(sf::RenderWindow &window);
  void update();

private:
  void updateFlake();
  void newFlakePosition();
  sf::CircleShape flake;
  int x, y;
  int radius;
  int z;
  int maxWidth, maxHeight;
};