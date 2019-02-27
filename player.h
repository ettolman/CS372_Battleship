//
// Created by Ian Ferguson on 2019-02-26.
//

#ifndef CS372_BATTLESHIP_PLAYER_H
#define CS372_BATTLESHIP_PLAYER_H
#include "board.h"

class Player : public Board
{
public:
    Player()
    {

    }
    void playerPlaceShips();

};

#endif //CS372_BATTLESHIP_PLAYER_H
