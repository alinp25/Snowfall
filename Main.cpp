#include <iostream>
#include <SFML/Graphics.hpp>
#include "Snowfall.hpp"

using namespace std;

int main(int argc, char *argv[]) {
  Snowfall snowfall(600, 600);
  snowfall.Snow();
  return 0;
}
