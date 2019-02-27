//
// Created by Ian Ferguson and Erin Tolman on 2019-02-18.
//
#include "board.h"

Board::Board()
{
    std::vector<std::string> height{10,"."};
    std::vector<std::vector<std::string>> myBoard(10, height);
    _board = myBoard;
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

void Board::placeShip(ShipName ship, Orientation ori, int x, int y, char& shipCounter)
{
    int shipSize = SHIP_SIZE[(int)ship];
    char shipChar = SHIP_LETTERS[(int)ship];

    shipCounter++;
    if (ori == HORIZONTAL)
    {
        for(int i = x; i<x+shipSize; i++)
        {
            _board[y][i] = shipChar;
            _fleetpos[y][i] = shipCounter;
        }
    }
    else if (ori == VERTICAL)
    {
        for(int i = y; i<y+shipSize; i++)
        {
            _board[i][x] = shipChar;
            _fleetpos[i][x] = shipCounter;
        }
    }
}

//Accessors and Mutator Functions

int Board::getShipAmount()
{
    return _shipAmount;
}

void Board::setshipAmount(int amount)
{
    _shipAmount = amount;
}

int Board::getShipLookupSize()
{
    return shipLookup.size();
}

int Board::getShipLookupCell(int ship) const
{
    return shipLookup[ship];
}