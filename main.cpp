#include "board.h"

// Main prints the and controls the game
int main() {
    //create board
    Board board;
    board.printBoard();
    //prompt user to place ship
    bool player1win = false;
    bool player2win = false;
    while(!player1win && !player2win){
        player1win = true;
    }
}
