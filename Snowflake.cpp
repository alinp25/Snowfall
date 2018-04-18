#include "Snowflake.hpp"
#include <ctime>
#include <cstdlib>

Snowflake::Snowflake(int width, int height) {
  this->maxWidth = width;
  this->maxHeight = height;
  this->y = rand() % 1200 - 1200;
  this->x = rand() % this->maxWidth;
  this->z = rand() % 3 + 1;
  this->radius = 2 * z;
  this->flake.setFillColor(sf::Color::White);
}

void Snowflake::updateFlake() {
  this->flake.setRadius(this->radius);
  this->flake.setPosition(this->x, this->y);
}

void Snowflake::newFlakePosition() {
  this->y = rand() % 1200 - 1200;
  this->x = rand() % this->maxWidth;
  this->z = rand() % 3 + 1;
  this->radius = 2 * z;
}

void Snowflake::update() {
  this->y++;

  if (this->y > this->maxHeight + this->radius * 2) {
    this->newFlakePosition();
  }

  this->updateFlake();
}

void Snowflake::draw(sf::RenderWindow &window) {
  window.draw(this->flake);
}

