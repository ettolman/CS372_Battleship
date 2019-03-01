//
// Created by Ian Ferguson and Erin Tolman on 2019-02-18.
//
#include "board.h"
#include "battleship.h"
#include "frigate.h"
#include "carrier.h"
#include "submarine.h"
#include "destroyer.h"

Board::Board()
{
    std::vector<char> height{10,'.'};
    std::vector<std::vector<char>> myBoard(10, height);
    _board.resize(10, std::vector<char>(10));
    _fleetpos.resize(10, std::vector<char>(10));
    _height = 10;
    _length = 10;
    fillGrid(_board, '~');
    fillGrid(_fleetpos, '~');
}

//void Board::fillGrid(std::vector<std::vector<std::string>> &vec, std::string fillVal)
//{
//    for (int y = 0; y < _height; y++)
//        for (int x = 0; x < _length; x++)
//            vec[y][x] = fillVal;
//}

void Board::printBoard()
{
    std::cout << "  0 1 2 3 4 5 6 7 8 9" << std::endl;
    for(int i = 0; i < _length; i++){
        std::cout << i;
        for(int j = 0; j < _height; j++){
            std::cout << " " << _board[i][j];
        }
        std::cout << std::endl;
    }
}

int Board::getHeight(){
    return _height;
}

int Board::getLength(){
    return _length;
}

void Board::placeShip(ShipName ship, Orientation ori, int x, int y, char& shipCounter)
{
    int shipSize = SHIP_SIZE[(int)ship];
    char shipChar = SHIP_LETTERS[(int)ship];

    shipCounter++;
    if (ori == HORIZONTAL)
    {
        for(int i = x; i<x+shipSize; i++)
        {
            _board[y][i] = shipChar;
            _fleetpos[y][i] = shipCounter;
        }
    }
    else if (ori == VERTICAL)
    {
        for(int i = y; i<y+shipSize; i++)
        {
            _board[i][x] = shipChar;
            _fleetpos[i][x] = shipCounter;
        }
    }
}

//Accessors and Mutator Functions

int Board::getShipAmount()
{
    return _shipAmount;
}

void Board::setshipAmount(int amount)
{
    _shipAmount = amount;
}

int Board::getShipLookupSize()
{
    return shipLookup.size();
}

void Board::setBattleNum(int battle)
{
    _battleshipNumber = battle;
}

void Board::setCarrierNum(int carrier)
{
    _carrierNumber = carrier;
}

void Board::setDestroyerNum(int destroy)
{
    _destroyerNumber = destroy;
}

void Board::setSubNum(int Sub)
{
    _submarineNumber = Sub;
}

void Board::setFrigatenum(int frigate)
{
    _frigateNumber = frigate;
}

int Board::getDestroyerNum() const
{
    return _destroyerNumber;
}

int Board::getBattleNum() const
{
    return _battleshipNumber;
}

int Board::getFrigateNum() const
{
    return _frigateNumber;
}

int Board::getSubNum() const
{
    return _submarineNumber;
}

int Board::getCarrierNum() const
{
    return _carrierNumber;
}

bool Board::checkPlacement(ShipName ship, Orientation ori, int, int, bool) const
{
    return true;
}

bool Board::getWinner(bool &winner) const
{
    return false;
}

void Board::addShips(int destroyerNum, int subNum ,int frigateNum ,int battleNum ,int carrierNum)
{
    if (destroyerNum > 0)
    {
        setDestroyerNum(destroyerNum);
        for (int i = 0; i < destroyerNum; i++)
        {
            _fleet.push_back(new Destroyer());
            shipLookup.push_back(DESTROYER);
        }
    }
    if (subNum > 0)
    {
        setSubNum(subNum);
        for (int i = 0; i < subNum; i++)
        {
            _fleet.push_back(new Submarine());
            shipLookup.push_back(SUBMARINE);
        }
    }
    if (frigateNum > 0)
    {
        setFrigatenum(frigateNum);
        for (int i = 0; i < frigateNum; i++)
        {
            _fleet.push_back(new Frigate());
            shipLookup.push_back(FRIGATE);
        }
    }
    if (battleNum > 0)
    {
        setBattleNum(battleNum);
        for (int i = 0; i < battleNum; i++)
        {
            _fleet.push_back(new Battleship());
            shipLookup.push_back(BATTLESHIP);
        }
    }
    if (carrierNum > 0)
    {
        setCarrierNum(carrierNum);
        for (int i = 0; i < carrierNum; i++)
        {
            _fleet.push_back(new Carrier());
            shipLookup.push_back(CARRIER);
        }
    }

}
