#include "board.h"

// Main prints the and controls the game
int main() {
    //create board
    std::vector <std::string> height{10,"."};
    std::vector<std::vector<std::string>> myBoard(10, height);
    Board board(myBoard);
    board.printBoard();
    
    //prompt user to place ship
    board.placeShip(1,2, myBoard);
}
