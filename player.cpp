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
    bool shipPool = false;
    int shipChoice = 0;
    int destroyNum = 0;
    int submarineNum = 0;
    int frigateNum = 0;
    int battleNum = 0;
    int carrierNum = 0;
    std::reference_wrapper<int> playerFleet[5] = {destroyNum, submarineNum, frigateNum, battleNum, carrierNum};
    int Fleet = 0;

    while(shipPool == false)
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

            while(shipChoice < 1 || shipChoice > 5)
            {
                cout << "Invalid number, please pick one of the options displayed (1-5)." << endl;
                cout << "Choose a ship." << endl;
                std::cin >> shipChoice;
            }
            //Since we are interacting with an array at this point, we deincrement
            //ShipChoice to be able to access the ship types we want.
            shipChoice--;
            if(shipAmount - (Fleet +SHIP_SIZE[shipChoice])>= 0)
            {
                playerFleet[shipChoice]++;
                Fleet += SHIP_SIZE[shipChoice];

            } else
            {

            }

        }
        else
        {
            shipPool = true;
        }
    }
    addShips(1, 1, frigateNum, 1, 1);

}

void Player::playerPlaceShips()
{
    int x =0;
    int y= 0;
    int userOrientation =0;
    std::string shipType;
    bool badPlacement = false;
    Orientation ori;
    char shipCounter = 64;

    for(int i=0; i< getShipLookupSize(); i++)
    {
        do
        {
            badPlacement = false;
            cout << "Place your ships." << endl;
            printBoard();
            if(getShipLookupCell(i)==DESTROYER)
            {
                shipType = "destroyer";
            }
            else if (getShipLookupCell(i)== SUBMARINE)
            {
                shipType = "Submarine";
            }
            else if(getShipLookupCell(i)==FRIGATE)
            {
                shipType = "Frigate";
            }
            else if(getShipLookupCell(i)==BATTLESHIP)
            {
                shipType = "Battleship";
            }
            else if (getShipLookupCell(i)== CARRIER)
            {
                shipType = "carrier";
            }

            cout << "What orientation do you want your " << shipType << " of size " << SHIP_SIZE[getShipLookupCell(i)]
                 << " to be in?" << endl;
            cout << "(1) Horizontal" << endl;
            cout << "(2) Vertical" << endl;
            std::cin >> userOrientation;
            if ( userOrientation != 1 && userOrientation !=2)
            {
                cout << " Invalid user orientation specified. Must be 1 or 2. Please try again." << endl;
                std::cin >> userOrientation;
            }
            if(userOrientation ==1)
            {
                ori = HORIZONTAL;
            }
            if (userOrientation ==2)
            {
                ori = VERTICAL;
            }

            cout << "What x coordinate do you want to place your piece?" << endl;
            std::cin >> x;
            if(x < 0)
            {
                cout << "Bad placement, please try again." << endl;
                std::cin >> x;
            }
            cout << "What y coordinate do you want to place your piece?" << endl;
            std::cin >> y;
            if ( y <0)
            {
                cout << "Bad placement, please try again" << endl;
                std::cin >> y;
            }
            placeShip(getShipLookupCell(i), ori, x, y, shipCounter);
            printBoard();

        }
        while(badPlacement);

    }

}