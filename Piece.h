#ifndef CHESS_GAME_PIECE_H
#define CHESS_GAME_PIECE_H

#include "Position.h"
#include "Board.h"
#include <vector>
#include "Enum.h"

// forward declaration
class Piece {
protected:
    Position pos;
    Color color;
    PieceType type;
public:
    Piece(const Position& pos, Color color, PieceType type): pos(pos), color(color), type(type) {}
    virtual ~Piece() = default;
    // need some virtual functions here
    Color getColor() const { return color; }
    PieceType getType() const { return type; }
};

// derived classes
class Pawn: public Piece {
public:
    using Piece::Piece;
    ~Pawn() override = default;
};

class Rook: public Piece {
public:
    Rook(const Position& pos, Color color): Piece(pos, color, PieceType::ROOK) {}
    ~Rook() override = default;
};

class Knight: public Piece {
public:
    Knight(const Position& pos, Color color): Piece(pos, color, PieceType::KNIGHT) {}
    ~Knight() override = default;
};

class Bishop: public Piece {
public:
    Bishop(const Position& pos, Color color): Piece(pos, color, PieceType::BISHOP) {}
    ~Bishop() override = default;
};

class Queen: public Piece {
public:
    Queen(const Position& pos, Color color): Piece(pos, color, PieceType::QUEEN) {}
    ~Queen() override = default;
};

class King: public Piece {
public:
    King(const Position& pos, Color color): Piece(pos, color, PieceType::KING) {}
    ~King() override = default;
};

#endif //CHESS_GAME_PIECE_H
