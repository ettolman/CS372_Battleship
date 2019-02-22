//
// Created by Ian Ferguson on 2019-02-18.
//

#include "ship.h"

void Ship::setHealth(int health)
{
    _health = health;
}

int Ship::getHealth()
{
    return _health;
}

void Ship::Hit()
{
    setHealth(this->getHealth() - 1);
}

bool Ship::Destroyed()
{
    bool sunk = false;
    if (this->getHealth() == 0)
    {
        sunk = true;
        return sunk;
    }
    else
    {
        return sunk;
    }
}