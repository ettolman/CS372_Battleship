//
// Created by Ian Ferguson and Erin Tolman on 2019-02-18.
//

#ifndef CS372_BATTLESHIP_BOARD_H
#define CS372_BATTLESHIP_BOARD_H

#include <vector>
#include <iostream>
#include "ship.h"

// class Board creates board objects
class Board{
    
public:
    //Enums
    enum ShipName { DESTROYER, SUBMARINE, FRIGATE, BATTLESHIP, CARRIER };
    enum Orientation { HORIZONTAL, VERTICAL };
    //End Enums


    //Default Constructor
    Board();
    Board(std::vector<std::vector<std::string>> size);
    //Prints Board in ASCII
    void printBoard();
    template <typename T>
    void fillGrid(std::vector<std::vector<T>> &vec, T fillVal)
    {
        for (int y = 0; y < _height; y++)
            for (int x = 0; x < _length; x++)
                vec[y][x] = fillVal;
    }
    //getters
    int getHeight();
    int getLength();

    //Accessors and Mutator Functions
    void setshipAmount(int amount);
    int getShipAmount();
    int getShipLookupSize();
    void setShipLookup();
    ShipName getShipLookupCell(int ship) const
    {
        return shipLookup[ship];
    }
    void setDestroyerNum(int destroy);
    void setCarrierNum(int carrier);
    void setBattleNum(int battle);
    void setFrigatenum(int frigate);
    void setSubNum(int Sub);
    int getDestroyerNum() const;
    int getCarrierNum() const;
    int getBattleNum() const;
    int getFrigateNum() const;
    int getSubNum() const;

    //Check for Winner
    bool getWinner(bool& winner) const;

    //Ships
    void placeShip(ShipName ship, Orientation ori, int, int, char&);
    bool checkPlacement(ShipName ship, Orientation ori, int, int, bool) const;
    void addShips(int, int ,int ,int ,int);
    //Ship Information
    static const int DESTROYER_SIZE = 2;
    static const int SUBMARINE_SIZE = 3;
    static const int FRIGATE_SIZE = 3;
    static const int BATTLESHIP_SIZE = 4;
    static const int CARRIER_SIZE = 5;
    const int SHIP_SIZE[5] = {DESTROYER_SIZE, SUBMARINE_SIZE, FRIGATE_SIZE, BATTLESHIP_SIZE, CARRIER_SIZE };
    const char SHIP_LETTERS[5] = {'D', 'S', 'F', 'B', 'C'};

private:

    std::vector<std::vector<char>> _board;
    //Stores pointer to ship object.
    std::vector<Ship*> _fleet;
    //Stores ship locations.
    std::vector<std::vector<char>> _fleetpos;
    //Verify what ship is located on the grid.
    std::vector<ShipName> shipLookup;
    int _height;
    int _length;
    int _shipAmount;
    int _destroyerNumber;
    int _submarineNumber;
    int _frigateNumber;
    int _battleshipNumber;
    int _carrierNumber;
};

#endif //CS372_BATTLESHIP_BOARD_H
