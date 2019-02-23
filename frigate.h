//
// Created by Ian Ferguson on 2019-02-22.
//

#ifndef CS372_BATTLESHIP_FRIGATE_H
#define CS372_BATTLESHIP_FRIGATE_H

#include "ship.h"

class Frigate: public Ship
{
public:
    Frigate(): Ship()
    {
        setHealth(3);
    }
};

#endif //CS372_BATTLESHIP_FRIGATE_H
