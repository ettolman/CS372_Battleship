//
// Created by Ian Ferguson and Erin Tolman on 2019-02-18.
//

#ifndef CS372_BATTLESHIP_BOARD_H
#define CS372_BATTLESHIP_BOARD_H

#include <vector>

// class Board creates board objects
class Board{
    
public:
    Board();

    void printBoard();
    
private:
    std::vector<int> _board;
};

#endif //CS372_BATTLESHIP_BOARD_H
