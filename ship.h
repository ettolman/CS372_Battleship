//
// Created by Ian Ferguson on 2019-02-18.
//

#ifndef CS372_BATTLESHIP_SHIP_H
#define CS372_BATTLESHIP_SHIP_H

class Ship
{
public:
    void setHealth(int health);
    int getHealth();
    void Hit();
    bool Destroyed();
private:
    int _health;
};
#endif //CS372_BATTLESHIP_SHIP_H
