//
// Created by Ian Ferguson on 2019-02-22.
//

#ifndef CS372_BATTLESHIP_DESTROYER_H
#define CS372_BATTLESHIP_DESTROYER_H

#include "ship.h"

class Destroyer: public Ship
{
public:
    Destroyer() : Ship()
    {
        setHealth(2);
    }
};

#endif //CS372_BATTLESHIP_DESTROYER_H
