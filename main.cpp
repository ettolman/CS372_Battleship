#include "board.h"

// Main prints the and controls the game
int main() {
    std::vector <int> height{10};
    std::vector<std::vector<int>> myBoard(10, height);
    Board board(myBoard);
    board.printBoard();
}
