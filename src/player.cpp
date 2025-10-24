#include "player.h"

Player::Player(char pMark)
{
    this->pMark = pMark;
}

Posistion Player::select()
{
    int row;
    int col;
    std::cout << "Select a row (0 - 2)";
    std::cin >> row;
    std::cout << "Select a collumn (0 - 2)";
    std::cin >> col;
    return Posistion(row, col);
}

char Player::getMark()
{
    return this->pMark;
}