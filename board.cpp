//
// Created by Ian Ferguson and Erin Tolman on 2019-02-18.
//
#include "board.h"

 Board::Board(){
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            std::cout << "_ ";
        }
        std::cout << std::endl;
    }
}
