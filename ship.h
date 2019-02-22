//
// Created by Ian Ferguson on 2019-02-18.
//

#ifndef CS372_BATTLESHIP_SHIP_H
#define CS372_BATTLESHIP_SHIP_H

//Parent Class
class Ship
{
public:
    //Accessors and Mutator functions
    void setHealth(int health);
    int getHealth();
    //Decreases the ship's health by 1 when hit.
    void Hit();
    //If returns true, then the ship is destroyed.
    bool Destroyed();
private:
    int _health;
};
#endif //CS372_BATTLESHIP_SHIP_H
