//
// Created by Ian Ferguson and Erin Tolman on 2019-02-18.
//
#include "board.h"

Board::Board(std::vector<std::vector<std::string>> size)
{
    _board = size;
    _height = 10;
    _length = 10;
    fillGrid(_board, "~");
}

void Board::fillGrid(std::vector<std::vector<std::string>> &vec, std::string fillVal)
{
    for (int y = 0; y < _height; y++)
        for (int x = 0; x < _length; x++)
            vec[y][x] = fillVal;
}

void Board::printBoard()
{
    std::cout << "  0 1 2 3 4 5 6 7 8 9" << std::endl;
    for(int i = 0; i < _length; i++){
        std::cout << i;
        for(int j = 0; j < _height; j++){
            std::cout << " " << _board[i][j];
        }
        std::cout << std::endl;
    }
}

int Board::getHeight(){
    return _height;
}

int Board::getLength(){
    return _length;
}

void placeShip(Board::ShipName ship, Board::Orientation ori, int, int, char&)
{

}