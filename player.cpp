//
// Created by Ian Ferguson on 2019-02-26.
//

#include <functional>
#include "player.h"
using std::cout;
using std::endl;

void Player::playerChooseShips()
{
    int shipAmount = getShipAmount();
    bool shipsSunked = false;
    int shipChoice;
    int destroyNum = 0;
    int submarineNum = 0;
    int frigateNum = 0;
    int battleNum = 0;
    int carrierNum = 0;
    std::reference_wrapper<int> playerFleet[5] = {destroyNum, submarineNum, frigateNum, battleNum, carrierNum};
    int Fleet = 0;

    while(shipsSunked == false)
    {
        if(shipAmount - Fleet)
        {
            cout << "Choose your ships:" << endl;
            cout << "(1) Destroyers: " << DESTROYER_SIZE << "ship parts" << endl;
            cout << "(2) Submarines: " << SUBMARINE_SIZE << "ship parts" << endl;
            cout << "(3) Frigates: " << FRIGATE_SIZE << "ship parts" << endl;
            cout << "(4) Battleships: " << BATTLESHIP_SIZE << "ship parts" << endl;
            cout << "(5) Carriers: " << CARRIER_SIZE << "ship parts" << endl;
            cout << "You currently have " << shipAmount-Fleet << " ship parts left." << endl;
            std::cin >> shipChoice;

        }
    }

}

void Player::playerPlaceShips()
{

}