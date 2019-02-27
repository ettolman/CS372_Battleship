//
// Created by Ian Ferguson on 2019-02-26.
//

#ifndef CS372_BATTLESHIP_CARRIER_H
#define CS372_BATTLESHIP_CARRIER_H
#include "ship.h"

class Carrier: public Ship
{
public:
    Carrier(): Ship()
    {
        setHealth(5);
    }
};

#endif //CS372_BATTLESHIP_CARRIER_H
