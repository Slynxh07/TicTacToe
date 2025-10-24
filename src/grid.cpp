#include "grid.h"

Grid::Grid()
{
    numRows = 3;
    numCols = 3;
    initGrid();
    printGrid();
}

void Grid::initGrid()
{
    for (int i = 0; i < numRows; i++)
    {
        for (int j = 0; j < numCols; j++)
        {
            grid[i][j] = '-';
        }
    }
}

void Grid::printGrid()
{
    for (int row = 0; row < numRows; row++)
    {
        for (int col = 0; col < numCols; col++)
        {
            std::cout << grid[row][col] << " | ";
        }
        std::cout << std::endl;
    }
}

void Grid::insert(Posistion pos, char pMark)
{
    grid[pos.row][pos.col] = pMark;
}