#ifndef CHESS_GAME_CHESSGAME_H
#define CHESS_GAME_CHESSGAME_H

#include "Board.h"
#include "Player.h"
class ChessGame {
private:
    Board board;
    Player whitePlayer;
    Player blackPlayer;
    Player* currentPlayer;

public:
    ChessGame(const Player& player1, const Player& player2): player1(player1), player2(player2) {}
    // game rules, player turns, etc
    void startGame() {

    }
};


#endif //CHESS_GAME_CHESSGAME_H
