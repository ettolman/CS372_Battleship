//
// Created by Ian Ferguson and Erin Tolman on 2019-02-18.
//
#include "board.h"

void Board::printBoard(){
    for(int i = 0; i < _size; i++){
        for(int j = 0; j < _size; j++){
            cout << "_ ";
        }
    }
}
