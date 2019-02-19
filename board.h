//
// Created by Ian Ferguson and Erin Tolman on 2019-02-18.
//

#ifndef CS372_BATTLESHIP_BOARD_H
#define CS372_BATTLESHIP_BOARD_H
// class Board creates board objects
class Board{
    
public:
    Board::Board(vector<vector<int>> size[10][10]):_board(size);
    
    void printBoard(){
        
    }
    
private:
    vector<vector<int>> _board;
};

#endif //CS372_BATTLESHIP_BOARD_H
