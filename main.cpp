#include "board.h"

// Main prints the and controls the game
int main() {
    std::vector <std::string> height{10,"."};
    std::vector<std::vector<std::string>> myBoard(10, height);
    Board board(myBoard);
    board.printBoard();
    board.placeShip(1,2);
}
