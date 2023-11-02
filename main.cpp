#include <iostream>
#include "ChessGame.h"
#include "Player.h"
#include "Enum.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    ChessGame game((Player(Color::WHITE)), Player(Color::BLACK));
    game.startGame();
    return 0;
}
