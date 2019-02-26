//
// Created by Ian Ferguson and Erin Tolman on 2019-02-18.
//

#ifndef CS372_BATTLESHIP_BOARD_H
#define CS372_BATTLESHIP_BOARD_H

#include <vector>
#include <iostream>
#include "ship.h"

// class Board creates board objects
class Board{
    
public:
    //Default Constructor
    //Prints Board in ASCII
    Board(std::vector<std::vector<std::string>> size);
    void printBoard();
    std::vector<std::vector<std::string>> placeShip(int xCoor, int yCoor, Board board);

    //Ships
    static const int DESTROYER_SIZE = 2;
    static const int SUBMARINE_SIZE = 3;
    static const int FRIGATE_SIZE = 3;
    static const int BATTLESHIP_SIZE = 4;
    static const int CARRIER_SIZE = 5;
    const int SHIP_SIZE[5] = {DESTROYER_SIZE, SUBMARINE_SIZE, FRIGATE_SIZE, BATTLESHIP_SIZE, CARRIER_SIZE };
    
private:

    std::vector<std::vector<std::string>> _board;
    std::vector<Ship*> fleet;
    int _height;
    int _length;
    int destroyerNumber;
    int submarineNumber;
    int frigateNumber;
    int battleshipNumber;
    int carrierNumber;
};

#endif //CS372_BATTLESHIP_BOARD_H
