//
// Created by Chun Ye on 2023-11-02.
//

#include "ChessGame.h"

void ChessGame::startGame() {
    // Initialize the board
    board = *new Board();
    // Initialize the players
    player1 = new Player(Color::WHITE);
    player2 = new Player(Color::BLACK);
    // Initialize the pieces
    board.printBoard();
    initializePieces();
}

void ChessGame::initializePieces() {

}

