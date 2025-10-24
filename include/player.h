#pragma once
#include <iostream>
#include "posistion.h"

class Player
{
    public:
        Player(char pMark);
        Posistion select();
        char getMark();
    private:
        char pMark;
};