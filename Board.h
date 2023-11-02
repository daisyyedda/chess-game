//
// Created by Chun Ye on 2023-11-02.
//

#ifndef CHESS_GAME_BOARD_H
#define CHESS_GAME_BOARD_H

#include "Piece.h"
#include <vector>

class Board {
private:
    std::vector<std::vector<Piece*>> grid;
public:
    Board();
    ~Board();
    void printBoard();
    bool placePiece(const Position& pos, Piece* piece);
};


#endif //CHESS_GAME_BOARD_H
