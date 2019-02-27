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
    //Enums
    enum ShipName { DESTROYER, SUBMARINE, FRIGATE, BATTLESHIP, CARRIER };
    enum Orientation { HORIZONTAL, VERTICAL };
    //End Enums


    //Default Constructor
    //Prints Board in ASCII
    Board(std::vector<std::vector<std::string>> size);
    void printBoard();
    int getHeight();
    int getLength();
    void fillGrid(std::vector<std::vector<std::string>> &vec, std::string fillVal);
    std::vector<std::vector<std::string>> placeShip(int xCoor, int yCoor, Board board);

    //Ships
    void placeShip(ShipName ship, Orientation ori, int, int, char&);
    //Ship Information
    static const int DESTROYER_SIZE = 2;
    static const int SUBMARINE_SIZE = 3;
    static const int FRIGATE_SIZE = 3;
    static const int BATTLESHIP_SIZE = 4;
    static const int CARRIER_SIZE = 5;
    const int SHIP_SIZE[5] = {DESTROYER_SIZE, SUBMARINE_SIZE, FRIGATE_SIZE, BATTLESHIP_SIZE, CARRIER_SIZE };
    const char SHIP_LETTERS[5] = {'D', 'S', 'F', 'B', 'C'};

private:

    std::vector<std::vector<std::string>> _board;
    //Stores pointer to ship object.
    std::vector<Ship*> _fleet;
    //Stores ship locations.
    std::vector<std::vector<char>> _fleetpos;
    int _height;
    int _length;
    int destroyerNumber;
    int submarineNumber;
    int frigateNumber;
    int battleshipNumber;
    int carrierNumber;
};

#endif //CS372_BATTLESHIP_BOARD_H
