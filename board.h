//
// Created by Ian Ferguson and Erin Tolman on 2019-02-18.
//

#ifndef CS372_BATTLESHIP_BOARD_H
#define CS372_BATTLESHIP_BOARD_H

#include <vector>
#include <iostream>

// class Board creates board objects
class Board{
    
public:
    //Default Constructor
    Board();

    //printBoard function
    //Prints board in ASCII
    void printBoard();

    //Ships
    static const int DESTROYER_SIZE = 2;
    static const int SUBMARINE_SIZE = 3;
    static const int FRIGATE_SIZE = 3;
    static const int BATTLESHIP_SIZE = 4;
    static const int CARRIER_SIZE = 5;
    const int SHIP_SIZE[5] = {DESTROYER_SIZE, SUBMARINE_SIZE, FRIGATE_SIZE, BATTLESHIP_SIZE, CARRIER_SIZE };
    
private:
    std::vector<int> _board;
};

#endif //CS372_BATTLESHIP_BOARD_H
