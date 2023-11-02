#include <iostream>
#include "ChessGame.h"
#include "Player.h"
#include "Enum.h"

int main() {
    std::cout << "Welcome to Chess Game!" << std::endl;
    Player player1(Color::WHITE);
    Player player2(Color::BLACK);
    ChessGame game(player1, player2);

    game.startGame();
    return 0;
}
