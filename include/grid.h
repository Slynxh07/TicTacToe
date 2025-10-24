#pragma once
#include "posistion.h"
#include <iostream>

class Grid 
{
    public:
        Grid();
        char grid[3][3];
        bool isPosEmpty(Posistion pos);
        void initGrid();
        void printGrid();
        void insert(Posistion pos, char pMark);

    private:
        int numRows;
        int numCols;
};