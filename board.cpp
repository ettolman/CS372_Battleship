//
// Created by Ian Ferguson and Erin Tolman on 2019-02-18.
//
#include "board.h"

Board::Board(std::vector<std::vector<int>> size)
{
    _board = size;
    _height = 10;
    _length = 10;
}

void Board::printBoard()
{
    std::cout << "  a b c d e f g h i j" << std::endl;
    for(int i = 0; i < _length; i++){
        std::cout << i;
        for(int j = 0; j < _height; j++){
            std::cout << " .";
        }
        std::cout << std::endl;
    }
}

std::vector<std::vector<int>> Board::placeShip(int xCoor, int yCoor, Ship ship)
{
    return _board;
}
