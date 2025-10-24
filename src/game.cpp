#include "game.h"

Game::Game()
{
  grid = Grid();
}

void Game::play() {
  grid.insert(p1.select(), p1.getMark());
  grid.insert(p2.select(), p2.getMark());
}