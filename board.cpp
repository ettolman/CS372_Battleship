//
// Created by Ian Ferguson and Erin Tolman on 2019-02-18.
//
#include "board.h"

Board::Board(std::vector<std::vector<std::string>> size)
{
    _board = size;
    for(int i = 0; i < _length; i++){
        std::cout << i;
        for(int j = 0; j < _height; j++){
            _board[i][j] = ".";
        }
    }
    _height = 10;
    _length = 10;
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

std::vector<std::vector<std::string>> Board::placeShip(int xCoor, int yCoor, Board board)
{
    board._board[yCoor][xCoor] = "s";
    board.printBoard();
    return board._board;
}
