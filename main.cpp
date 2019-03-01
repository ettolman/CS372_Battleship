#include <iostream>
#include "board.h"
#include "player.h"


// Main prints the and controls the game
int main() {
    //create board
    bool player1won = false;
    bool player2won = false;
    Board board;
    Player player;

    player.printBoard();
    player.playerPlaceShips();

//    //prompt user to place ship
//
//    //play game until a player wins
//    while(!player1win && !player2win){
//        player1win = true;
}
