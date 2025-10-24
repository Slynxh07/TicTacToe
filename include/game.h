#pragma once
#include <iostream>
#include "grid.h"
#include "player.h"

class Game
{
    public:
        Game();
        void play();
        private:
        Player p1 = Player('X');
        Player p2 = Player('O');
        Grid grid;
};
