//
// Created by Ian Ferguson on 2019-02-22.
//

#ifndef CS372_BATTLESHIP_BATTLESHIP_H
#define CS372_BATTLESHIP_BATTLESHIP_H

#include "ship.h"

class Battleship: public Ship
{
public:
    Battleship(): Ship()
    {
        setHealth(4);
    }
};

#endif //CS372_BATTLESHIP_BATTLESHIP_H
