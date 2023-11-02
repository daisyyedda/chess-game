//
// Created by Chun Ye on 2023-11-02.
//

#include "Board.h"
#include <iostream>

Board::Board() {

}

Board::~Board() {

}

void Board::printBoard() {
    for (int i = 0; i < 8; i++) {
        std::cout << "---------------------------------" << std::endl;
        for (int j = 0; j < 8; j++) {
            std::cout << "|";
            if (grid[i][j] == nullptr) {
                std::cout << "   ";
            } else {
                std::cout << " " << grid[i][j]->getType() << " ";
            }
        }
        std::cout << "|" << std::endl;
    }
}

bool Board::placePiece(const Position &pos, Piece *piece) {
    return false;
}
