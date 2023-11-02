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
    ChessGame(Player& whitePlayer, Player& blackPlayer): whitePlayer(whitePlayer), blackPlayer(blackPlayer) {
        currentPlayer = &whitePlayer;
    }
    void startGame();
    void initializePieces();
};


#endif //CHESS_GAME_CHESSGAME_H
