//
// Created by Ian Ferguson on 2019-02-22.
//

#ifndef CS372_BATTLESHIP_SUBMARINE_H
#define CS372_BATTLESHIP_SUBMARINE_H

#include "ship.h"

class Submarine: public Ship
{
public:
    Submarine() : Ship()
    {
        setHealth(3);
    }
};

#endif //CS372_BATTLESHIP_SUBMARINE_H
