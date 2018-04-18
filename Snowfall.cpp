#include "Snowfall.hpp"
#include <iostream>

Snowfall::Snowfall(int width, int height) {
  srand(time(NULL));
  this->WIDTH = width;
  this->HEIGHT = height;
  this->number_of_flakes = this->WIDTH / 5;
  for (int i = 0; i < this->number_of_flakes; i++) {
    this->flakes.push_back(new Snowflake(this->WIDTH, this->HEIGHT));
  }
  std::cout << this->flakes.size();
  this->window = new sf::RenderWindow(sf::VideoMode(this->WIDTH, this->HEIGHT), "Snowfall");
}

void Snowfall::Snow() {
  Snowflake flake(this->WIDTH, this->HEIGHT);
  window->setFramerateLimit(360);
  while (window->isOpen()) {
    sf::Event event;
    while (window->pollEvent(event)) {
      if (event.type == sf::Event::Closed) {
        window->close();
      }
    }
    window->clear(sf::Color::Black);
    for (unsigned int i = 0; i < this->flakes.size(); i++) {
      this->flakes[i]->update();
      this->flakes[i]->draw(*window);
    }
    window->display();
  }
}