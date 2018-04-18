#pragma once
#include <SFML/Graphics.hpp>
#include "Snowflake.hpp"
#include <vector>

class Snowfall {
public:
  Snowfall(int width, int height);
  void Snow();
private:
  sf::RenderWindow *window;
  int number_of_flakes;
  int WIDTH, HEIGHT;
  std::vector<Snowflake*> flakes;
};