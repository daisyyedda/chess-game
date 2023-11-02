#ifndef CHESS_GAME_POSITION_H
#define CHESS_GAME_POSITION_H


class Position {
    int x, y;
    Position(int x, int y): x(x), y(y) {}
    // operator overloading for comparison
    bool operator==(const Position& other) const {
        return x == other.x && y == other.y;
    }
};


#endif //CHESS_GAME_POSITION_H
