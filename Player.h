//
// Created by Chun Ye on 2023-11-02.
//

#ifndef CHESS_GAME_PLAYER_H
#define CHESS_GAME_PLAYER_H

#include "Enum.h"

class Player {
private:
    Color color;
public:
    explicit Player(Color color): color(color) {}
    Color getColor() const { return color; }
};


#endif //CHESS_GAME_PLAYER_H
